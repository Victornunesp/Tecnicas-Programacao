#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btncadastrar_clicked()
{
    Aluno aluno;

    aluno.setNome(ui->input_nome->text());
    aluno.setMatricula(ui->input_mat->text());
    aluno.setMedia(ui->input_med->text().toDouble());
    aluno.setCurso(ui->cursoBox->currentText());

    ui->input_nome->clear();
    ui->input_mat->clear();
    ui->input_med->clear();


    int quantidade_linhas = ui->tabela->rowCount();
    ui->tabela->insertRow(quantidade_linhas);
    ui->tabela->setItem(quantidade_linhas,0,new QTableWidgetItem(aluno.getNome()));
    ui->tabela->setItem(quantidade_linhas,1,new QTableWidgetItem(aluno.getMatricula()));
    ui->tabela->setItem(quantidade_linhas,2,new QTableWidgetItem(QString::number(aluno.getMedia())));
    ui->tabela->setItem(quantidade_linhas,3,new QTableWidgetItem(aluno.getCurso()));
    ui->tabela->setItem(quantidade_linhas,4,new QTableWidgetItem(aluno.defineStatus()));

}
