#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <recursao.h>
#include <random>
#include <algorithm>
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Calcular_clicked()
{
    int valor = ui->lineEdit_Valor->text().toLong();
    int valor2 = ui->lineEdit_Valor_2->text().toLong();
    quezada::Recursao teste;
    QString saida,X;
    long vet[valor];
    saida = "Resultado Somatório Iterativo: " + QString::number(teste.somatorioI(valor));
    saida += "\nResultado Somatório Recursivo: " + QString::number(teste.somatorioR(valor));
    saida += "\n";
    saida += "\nResultado Somatório Cubo Iterativo: " + QString::number(teste.somatorioCuboI(valor));
    saida += "\nResultado Somatório Cubo Recursivo: " + QString::number(teste.somatrioCuboR(valor));
    saida += "\n";
    saida += "\nResultado Ordem Crescente Iterativo: " + teste.ordemCrescenteI(valor);
    saida += "\nResultado Ordem Crescente Recursivo: " + teste.ordemCrescenteR(valor,0,X);
    saida += "\n";
    saida += "\nResultado Ordem Decrescente Iterativo: " + teste.ordemDecrescenteI(valor);
    saida += "\nResultado Ordem Decrescente Recursivo: " + teste.ordemDecrescenteR(valor,X);
    saida += "\n";
    saida += "\nResultado Ordem Crescente Par Iterativo: " + teste.ordemCrescenteParI(valor);
    saida += "\nResultado Ordem Crescente Par Recursivo: " + teste.ordemCrescenteParR(valor,0,X);
    saida += "\n";
    saida += "\nResultado Ordem Decrescente Par Iterativo:" + teste.ordemDecrescenteParI(valor);
    saida += "\nResultado Ordem Decrescente Par Recursivo:" + teste.ordemDecrescenteParR(valor,X);
    saida += "\n";
    //preparando vetores
    saida += "\nVetor Randomico: ";
    for(int i = 0; i<valor; i++){
        vet[i] = rand() % 100000;
        saida += QString::number(vet[i]) + " ";
    }
    saida += "\n";
    saida += "\nResultaldo Menor Elemento Vetor Iterativo: " + QString::number(teste.menorElementoI(vet,valor));
    saida += "\nResultaldo Menor Elemento Vetor Recursivo: " + QString::number(teste.menorElementoR(vet,valor,100000,0));
    saida += "\n";
    saida += "\nResultado Número Binário Iterativo: " + teste.naturalBinarioI(valor, X);
    saida += "\nResultado Número Binário Recursivo: " + teste.naturalBinarioR(valor, X);
    saida += "\n";
    saida += "\nResultado Exponênciação Iterativo: " + QString::number(teste.xElevadoYI(valor, valor2));
    saida += "\nResultado Exponênciação Recursivo: " + QString::number(teste.xElevadoYR(valor, valor2,1));
    saida += "\n";
    saida += "\nResultado Multiplicação X e Y Iterativo: " + QString::number(teste.xMultYI(valor,valor2));
    saida += "\nResultado Multiplicação X e Y Recursivo: " + QString::number(teste.xMultYR(valor,valor2,0));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 11 Iterativo: " + QString::number(teste.somaEX11I());
    saida += "\nResultado Soma S Exercício 11 Recursivo: " + QString::number(teste.somaEX11R(1,1,0));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 12 Iterativo: " + QString::number(teste.somaEX12I());
    saida += "\nResultado Soma S Exercício 12 Recursivo: " + QString::number(teste.somaEX12R(1,50,0));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 13 Iterativo: " + QString::number(teste.somaEX13I());
    saida += "\nResultado Soma S Exercício 13 Recursivo: " + QString::number(teste.somaEX13R(38,0,1));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 14 Iterativo: " + QString::number(teste.somaEX14I());
    saida += "\nResultado Soma S Exercício 14 Recursivo: " + QString::number(teste.somaEX14R(1,0,false));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 15 Iterativo: " + QString::number(teste.somaEX15I());
    saida += "\nResultado Soma S Exercício 15 Recursivo: " + QString::number(teste.somaEX15R(1000,1,0,false));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 16 Iterativo: " + QString::number(teste.somaEX16I(valor));
    saida += "\nResultado Soma S Exercício 16 Recursivo: " + QString::number(teste.somaEX16R(valor,valor,0,true,3));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 17 Iterativo: " + QString::number(teste.somaEX17I());
    saida += "\nResultado Soma S Exercício 17 Recursivo: " + QString::number(teste.somaEX17R(4,3,false));
    saida += "\n";
    saida += "\nResultado Soma S Exercício 18 Iterativo: " + QString::number(teste.calculareEX18I(valor));
    saida += "\nResultado Soma S Exercício 18 Iterativo: " + QString::number(teste.calculareEX18R(valor,1,1));
    saida += "\n";
    saida += "\nResultado Fibonacci EX 19: " + QString::number(teste.fibonacciEX19(valor));
    saida += "\n";
    saida += "\nResultado MDC EX 20: " + QString::number(teste.mdcEX20(valor,valor2));







    ui->textEdit_Resultado->setText(saida);
}

