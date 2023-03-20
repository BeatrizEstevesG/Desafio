#include<iostream>

using namespace std;

void Fibonacci(int n){
    int soma=0, x=0, y=1, i=0;
    while(soma <= n){
        soma= x+y;
		if(n == soma){
            cout<<"O numero pertence a sequencia de Fibonacci\n";
            i = 1;
        }
		x=y;
	    y=soma;
    }
    if(i == 0)
        cout<<"O numero nao pertece a sequencia de Fibonacci\n";
}
int main(){
	int n;
    cout<<"Informe um numero: ";
    cin>>n;
    Fibonacci(n);
    return 0;
	}