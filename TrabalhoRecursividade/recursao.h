#ifndef RECURSAO_H
#define RECURSAO_H
#include <QString>


namespace quezada {


class Recursao
{
private:
    long valor;
    long valor2;
public:
    Recursao();
    long somatorioI(long valor);
    long somatorioR(long valor);
    long somatorioCuboI(long valor);
    long somatrioCuboR(long valor);
    QString ordemCrescenteI(long valor);
    QString ordemCrescenteR(long valor, int min, QString X);
    QString ordemDecrescenteI(long valor);
    QString ordemDecrescenteR(long valor, QString X);
    QString ordemCrescenteParI(long valor);
    QString ordemCrescenteParR(long valor, int min, QString X);
    QString ordemDecrescenteParI(long valor);
    QString ordemDecrescenteParR(long valor, QString X);
    long menorElementoI(long *vet, int N);
    long menorElementoR(long *vet, int N, long menor, int count);
    QString naturalBinarioI(long valor, QString X);
    QString naturalBinarioR(long valor, QString X);
    long xElevadoYI(long valor1, long valor2);
    long xElevadoYR(long valor1, long valor2, long soma);
    long xMultYI(long valor1, long valor2);
    long xMultYR(long valor1, long valor2, long soma);
    float somaEX11I();
    float somaEX11R(int num, int den, float soma);
    double somaEX12I();
    double somaEX12R(long num, long den, double soma);
    double somaEX13I();
    double somaEX13R(int num, double soma, int count);
    double somaEX14I();
    double somaEX14R(int num, double soma, bool x);
    double somaEX15I();
    double somaEX15R(int num, int den, double soma, bool x);
    double somaEX16I(int x);// funciona ate o x = 7, depois estoura variavel
    double somaEX16R(int x, double soma, int count, bool b, int i);// funciona ate o x = 7, depois estoura variavel
    double somaEX17I();
    double somaEX17R(double soma, int count, bool num);
    double calculareEX18I(int valor);
    double calculareEX18R(int valor, int i, double soma);
    long fatorialR(long valor);
    long fibonacciEX19(long valor);
    long mdcEX20(long valor1, long valor2);

};
}
#endif // RECURSAO_H
