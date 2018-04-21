#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "dialogknihy.h"
#include "dialogzaci.h"
#include "dialogucitele.h"
#include "dialogvypujcka.h"
#include "dialogucitelvypujcka.h"

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDebug>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QFileDialog>
#include <QDomDocument>
#include <QLabel>
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setIcon();

    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("../XmlReader/data/tabulkyKnihovna.sqlite");
        db.setDatabaseName("./data/tabulkyKnihovna.sqlite"); //pro sestaveni
    db.open();

    //    model_knihy = new QSqlTableModel(this);
    //    model_knihy->setTable("Kniha");
    //    model_knihy->select();

    //    readerXML(); //pro nacitani xml dat do tabulky!!!!!nemazat!!!!

    //    qDebug() << QTime::currentTime();
    //    qDebug() << QTime::currentTime().addSecs(600);

    ui->textBrowser->append("Vyučující");
    upozorneni();
    ui->textBrowser->append("\nŽáci");
    upozorneni2();

    //   QString cas = QDate::currentDate().toString("yyyy.MM.dd"); //2018.03.25
    //   QString cas1 = QString("2018.04.28");

    //   if(cas < cas1){
    //       qDebug() << "--------------pravda----------------" << cas << " < " << cas1;
    //   }
    //   else if (cas > cas1) {
    //        qDebug() << "nepravda***********" << cas << " > " << cas1;
    //   }
    //   else {
    //       qDebug() << "nic no000000000000000000000";
    //   }
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::readerXML()
{
    QDomDocument xmlBOM("knihovna_data");
//    QFile f("../XmlReader/data/knihovna_data.xml");
    QFile f("./data/knihovna_data.xml");  //pro sestaveni
    if (!f.open(QIODevice::ReadOnly ))
    {
        std::cerr << "Error while loading file" << std::endl;
    }
    xmlBOM.setContent(&f);
    f.close();

    QDomElement docElem = xmlBOM.documentElement();
    QDomNode n = docElem.firstChild();
    pocet=0;
    while(!n.isNull()) {
        e = n.toElement();
        if(!e.isNull()) {
            type=e.tagName();
            pocet++;
            attributy();
            vypisDebug();
            //            pridaniDoDatabazi();
        }
        n = n.nextSibling();
    }
    qDebug() << "Pocet knih: " << pocet;
}
void MainWindow::vypisDebug()
{
    qDebug() << "nazev = " << QString(nazev.toStdString().c_str()) ;
    qDebug() << "evidencni cislo  = " << cislo.toLocal8Bit();
    qDebug() << "prvni autor = " << QString(autor_1_jmeno.toStdString().c_str()).append(" ").append(QString(autor_1_prijmeni.toStdString().c_str()));
    qDebug() << "druhy autor = " << QString(autor_2_jmeno.toStdString().c_str()).append(" ").append(QString(autor_2_prijmeni.toStdString().c_str())); ;
    qDebug() << "vydani = " << QString(misto_vydani.toStdString().c_str()) ;
    qDebug() << "rok vydani = " << rok_vydani ;
    qDebug() << "tematika = " << QString(tematicka_nazev.toStdString().c_str()) ;
    qDebug() << "cena = " << cena;
    qDebug() << "pocet stran = " << pocet_stran;
    qDebug() << "----------------------------------------------------------------";
}

void MainWindow::attributy()
{
    cislo=e.attribute("prirustkove_cislo","0");
    nazev=e.attribute("nazev","jmeno");
    autor_1_prijmeni = e.attribute("autor_1_prijmeni","prijmeni");
    autor_1_jmeno = e.attribute("autor_1_jmeno","jmeno");
    autor_2_prijmeni = e.attribute("autor_2_prijmeni", "prijmeni");
    autor_2_jmeno = e.attribute("autor_2_jmeno", "jmeno");
    misto_vydani = e.attribute("misto_vydani","misto");
    rok_vydani = e.attribute("rok_vydani", "0").toInt();
    tematicka_zkratka = e.attribute("tematicka_skupina_zkratka", "neco");
    tematicka_nazev = e.attribute("tematicka_skupina_nazev", "neco");
    cena = e.attribute("cena", "0");
    pocet_stran = e. attribute("pocet_stran","0").toInt();
}

void MainWindow::pridaniDoDatabazi()
{
    QSqlQuery dotaz;
    dotaz.prepare("INSERT INTO knihy VALUES(:id_kniha, :nazev, :autor1, :autor, :misto_vydani, :rok_vydani, :tematika, :cena, :pocet_stran)");
    dotaz.bindValue(":id_kniha",cislo);
    dotaz.bindValue(":nazev", nazev);
    dotaz.bindValue(":autor1", autor_1_jmeno + " " + autor_1_prijmeni);
    dotaz.bindValue(":autor",autor_2_jmeno + " " +autor_2_prijmeni);
    dotaz.bindValue(":misto_vydani", misto_vydani);
    dotaz.bindValue(":rok_vydani", rok_vydani);
    dotaz.bindValue(":tematika",tematicka_nazev);
    dotaz.bindValue(":cena", cena );
    dotaz.bindValue(":pocet_stran", pocet_stran );
    dotaz.exec();
    model_knihy->select();

}

void MainWindow::setIcon()
{
    QImage spsmb;
    spsmb.load("./icon/logo.png");
    ui->labelLogo->setPixmap(QPixmap::fromImage(spsmb));

    QImage error;
    error.load("./icon/error1.png");
    ui->label_2->setPixmap(QPixmap::fromImage(error));

    ui->pushButtonZaci->setIcon(QIcon("./icon/zak1.png"));
    ui->pushButtonZaci->setIconSize(QSize(40,30));

    ui->pushButtonUcitel->setIcon(QIcon("./icon/ucitel1.png"));
    ui->pushButtonUcitel->setIconSize(QSize(40,30));

    ui->pushButtonKnihy->setIcon(QIcon("./icon/knihy.png"));
    ui->pushButtonKnihy->setIconSize(QSize(40,30));

    ui->pushButtonVypujckaUcitel->setIcon(QIcon("./icon/vypujcka.png"));
    ui->pushButtonVypujckaUcitel->setIconSize(QSize(40,30));

    ui->pushButton_5->setIcon(QIcon("./icon/vypujcka.png"));
    ui->pushButton_5->setIconSize(QSize(40,30));
}

void MainWindow::upozorneni()
{
    model_knihy= new QSqlTableModel(this);
    model_knihy->setTable("VypujckaUcitel");
    model_knihy->select();

    //upozorneni na vyprseni datum lhuty
    QSqlQuery dotaz;
    dotaz.prepare("select * from VypujckaUcitel where datum_varovani <='"+ QDate::currentDate().toString("yyyy.MM.dd") +
                  "' and poznamka like 'Nevráceno'");
    dotaz.exec();
    QStringList dejsi;
    int cislo =1;
    while (dotaz.next()) {
        dejsi.append(QString::number(cislo)+". "+dotaz.value(6).toString() +"  "+ dotaz.value(1).toString()+ "  "+ dotaz.value(4).toString());
        //        qDebug() << dejsi;
        cislo++;
    }
    if (dejsi.isEmpty()) {
        ui->textBrowser->append("0");
    }
    while (!dejsi.isEmpty()) {
        ui->textBrowser->append(dejsi.takeFirst());
    }
}

void MainWindow::upozorneni2()
{
    model_knihy= new QSqlTableModel(this);
    model_knihy->setTable("Vypujcka");
    model_knihy->select();

    //upozorneni na vyprseni datum lhuty
    QSqlQuery dotaz;
    dotaz.prepare("select * from Vypujcka where datum_varovani <='"+ QDate::currentDate().toString("yyyy.MM.dd") +
                  "' and poznamka like 'Nevráceno'");
    dotaz.exec();
    QStringList dejsi;
    int cislo =1;
    while (dotaz.next()) {
        dejsi.append(QString::number(cislo)+". "+dotaz.value(6).toString() +"  "+ dotaz.value(1).toString()+ "  "+ dotaz.value(4).toString());
        //        qDebug() << dejsi;
        cislo++;
    }
    if (dejsi.isEmpty()) {
        ui->textBrowser->append("0");
    }
    while (!dejsi.isEmpty()) {
        ui->textBrowser->append(dejsi.takeFirst());
    }
    ui->textBrowser->append("\n");

}

void MainWindow::on_pushButtonKnihy_clicked()
{
    DialogKnihy dialogKnih;
    dialogKnih.exec();
}

void MainWindow::on_pushButtonZaci_clicked()
{
    DialogZaci dialogZaci;
    dialogZaci.exec();
}

void MainWindow::on_pushButtonUcitel_clicked()
{
    DialogUcitele dialogUcitel;
    dialogUcitel.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    DialogVypujcka dialogVypujcka;
    dialogVypujcka.exec();
}

void MainWindow::on_pushButtonVypujckaUcitel_clicked()
{
    DialogUcitelVypujcka dialog;
    dialog.exec();
}
