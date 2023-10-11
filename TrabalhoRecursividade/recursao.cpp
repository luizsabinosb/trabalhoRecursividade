#include "recursao.h"
namespace quezada {

Recursao::Recursao():
    valor(0),
    valor2(0)
{

}

long Recursao::somatorioI(long valor)
{
    int soma = 0;
    for(long i = 1; i<=valor; i++){
        soma+= i;
    }
    return soma;
}

long Recursao::somatorioR(long valor)
{
    if(valor > 0) return valor + somatorioR(valor -1);
    else return 0;
}

long Recursao::somatorioCuboI(long valor)
{
    int soma = 0;
    for(long i = 1; i<=valor; i++){
        soma += i*i*i;
    }
    return soma;
}

long Recursao::somatrioCuboR(long valor)
{
    if(valor > 0) return valor*valor*valor + somatrioCuboR(valor -1);
    else return 0;
}

QString Recursao::ordemCrescenteI(long valor)
{
    QString saida;
    for(long i = 0; i<=valor; i++ ){
        saida += QString::number(i) + " ";
    }
    return saida;
}

QString Recursao::ordemCrescenteR(long valor, int min, QString X)
{
    if(min<=valor) return X = QString::number(min) +  " " + ordemCrescenteR(valor, min+1,X);
    else return X;
}

QString Recursao::ordemDecrescenteI(long valor)
{
    QString saida;
    for(long i = valor; i>= 0; i--){
        saida += QString::number(i) + " ";
    }
    return saida;
}

QString Recursao::ordemDecrescenteR(long valor,QString X)
{
    if(valor>= 0) return X = QString::number(valor) + " " +  ordemDecrescenteR(valor -1,X);
    else return X;
}

QString Recursao::ordemCrescenteParI(long valor)
{
    QString saida;
    for(long i = 0; i<=valor; i++){
        if(i%2 == 0){
            saida += QString::number(i) + " ";
        }
    }
    return saida;
}

QString Recursao::ordemCrescenteParR(long valor,int min, QString X)
{
    if(min<=valor) return X = QString::number(min) +  " " + ordemCrescenteParR(valor, min+2,X);
    else return X;
}

QString Recursao::ordemDecrescenteParI(long valor)
{
    QString saida;
    for(long i = valor; i>= 0; i--){
        if(i%2 == 0){
            saida += QString::number(i) + " ";
        }

    }
    return saida;
}

QString Recursao::ordemDecrescenteParR(long valor, QString X)
{
    //errado
    if(valor>= 0) return X = QString::number(valor) + " " +  ordemDecrescenteParR(valor -2,X);
    else return X;

}

long Recursao::menorElementoI(long *vet, int N)
{
    long menor = 100000;
    for(int i = 0; i<N; i++){
        if(menor > vet[i]){
            menor = vet[i];
        }
    }
    return menor;
}

long Recursao::menorElementoR(long *vet, int N, long menor, int count)
{
    if(count<N){
        if(menor > vet[count]){
            menor = vet[count];
        }
        return menorElementoR(vet,N,menor,count+1);
    }
    return menor;
}

QString Recursao::naturalBinarioI(long valor, QString X)
{
    while(valor/2 != 0){
        X += QString::number(valor%2);
        valor = valor/2;
    }
    X += QString::number(valor);
    std::reverse(X.begin(),X.end());
    return X;
}

QString Recursao::naturalBinarioR(long valor, QString X)
{
    if(valor/2 != 0){
        X += QString::number(valor%2);
        return naturalBinarioR(valor/2,X);
    }
    X += QString::number(valor);
    std::reverse(X.begin(),X.end());
    return X;
}

long Recursao::xElevadoYI(long valor1, long valor2)
{
    long soma = 1;
    for(long i = 0; i<valor2; i++){
        soma *= valor1;
    }
    return soma;
}

long Recursao::xElevadoYR(long valor1, long valor2, long soma)
{
    if(valor2>0){
        soma *= valor1;
        return xElevadoYR(valor1,valor2-1,soma);
    }
    return soma;
}

long Recursao::xMultYI(long valor1, long valor2)
{
    long soma= 0;
    for(long int i = 0; i<valor2; i++){
        soma += valor1;
    }
    return soma;
}

long Recursao::xMultYR(long valor1, long valor2, long soma)
{
    if(valor2>0){
        soma += valor1;
        return xMultYR(valor1,valor2-1,soma);
    }
    return soma;
}

float Recursao::somaEX11I()
{
    int num,den;
    float soma = 0;
    for(num = 1, den = 1; num <=99; num = num+2, den++){
        soma += float(num)/den;
    }
    return soma;
}

float Recursao::somaEX11R(int num, int den, float soma)
{
    if(num <= 99){
        soma += float(num)/den;
        return somaEX11R(num+2,den+1,soma);
    }
    return soma;
}

double Recursao::somaEX12I()
{
    double soma = 0;
    long num,den;
    for(num = 1, den = 50; den >= 1; num ++, den --){
        soma += (double(std::pow(2,num)))/double(den);
    }
    return soma;
}

double Recursao::somaEX12R(long num, long den, double soma)
{
    if(den >= 1){
        soma += (std::pow(2,num))/double(den);
        return somaEX12R(num+1,den-1,soma);
    }
    return soma;
}

double Recursao::somaEX13I()
{
    double soma = 0;
    for(int i = 1, num= 38; i<=37;i++, num--){
        soma += ((num-1)*num)/double(i);
    }
    return soma;
}

double Recursao::somaEX13R(int num, double soma,int count)
{
    if(count<=37){
        soma += ((num-1)*num)/double(count);
        return somaEX13R(num-1,soma,count+1);
    }
    return soma;
}

double Recursao::somaEX14I()
{
    double soma = 0;
    bool x = false;
    for(int num = 1; num<=10; num++){
        if(x == false){
            soma += double(num)/(num*num);
            x = true;
        }
        else{
            soma -= double(num)/(num*num);
            x = false;
        }
    }
    return soma;
}

double Recursao::somaEX14R(int num, double soma, bool x)
{
    if(num<=10){
        if(x == false){
            soma += double(num)/(num*num);
            return somaEX14R(num+1,soma,true);
        }
        else{
            soma -= double(num)/(num*num);
            return somaEX14R(num+1,soma,false);
        }
    }
    return soma;
}

double Recursao::somaEX15I()
{
    double soma= 0;
    int num = 1000, den =1;
    bool x = false;
    for(; num>=0; num=num-3,den++){
        if(x == false){
            soma+= double(num)/den;
            x = true;
        }
        else{
            soma-= double(num)/den;
            x= false;
        }
    }
    return soma;
}

double Recursao::somaEX15R(int num, int den, double soma, bool x)
{
    if(num>=0){
        if(x == false){
            soma += double(num)/den;
            return somaEX15R(num-3,den+1,soma,true);
        }
        else{
            soma -= double(num)/den;
            return somaEX15R(num-3,den+1,soma,false);
        }
    }
    return soma;
}

double Recursao::somaEX16I(int x)
{
    double soma = x;
    int count = 0;
    bool b = true;
    for(int i = 3; count<=x+1 ; i= i+2, count++){
        if(b == false){
            soma += (pow(x,i))/(fatorialR(i));
            b = true;
        }
        else{
            soma -= (pow(x,i))/(fatorialR(i));
            b = false;
        }
    }
    return soma;
}

double Recursao::somaEX16R(int x, double soma, int count, bool b, int i)
{
    if(count<= x+1){
        if(b == false){
            soma += (double)(pow(x,i))/(fatorialR(i));
            return somaEX16R(x,soma,count+1,true,i+2);
        }
        else{
            soma -= (double)(pow(x,i))/(fatorialR(i));
            return somaEX16R(x,soma,count+1,false,i+2);
        }
    }
    return soma;
}

double Recursao::somaEX17I()
{
    double soma = 4;
    bool count = false;
    int i;
    for(i= 3; i<=1000; i++){
        if(count == false){
            soma -= 4/double(i);
            count = true;
        }
        else{
            soma+= 4/double(i);
            count = false;
        }
    }
    return soma;
}

double Recursao::somaEX17R(double soma, int count, bool num)
{
    if(count<=1000){
        if(num == true){
            soma += 4/double(count);
            return somaEX17R(soma,count+2,false);
        }
        else{
            soma -= 4/double(count);
            return somaEX17R(soma,count+2,true);
        }
    }
    return soma;
}

double Recursao::calculareEX18I(int valor)
{
    double soma = 1;
    for(int i = 1; i<=valor; i++){
        soma += (pow(valor,i))/double((fatorialR(i)));
    }
    return soma;
}

double Recursao::calculareEX18R(int valor, int i, double soma)
{
    if(i<=valor){
        soma += (pow(valor,i))/double((fatorialR(i)));
        return calculareEX18R(valor,i+1,soma);
    }
    return soma;
}

long Recursao::fatorialR(long valor)
{
    if(valor<=1) return 1;
    else{
        return valor *fatorialR(valor -1);
    }
}

long Recursao::fibonacciEX19(long valor)
{
    if(valor<=2) return 1;
    return fibonacciEX19(valor-1) + fibonacciEX19(valor-2);
}

long Recursao::mdcEX20(long valor1, long valor2)
{
    if(valor1>=valor2 and valor1%valor2 == 0) return valor2;
    if(valor1<valor2) return mdcEX20(valor2,valor1);
    else return mdcEX20(valor2,valor1%valor2);
}




}
