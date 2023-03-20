#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    char str[15], str_n[15];
    int i, u = 0;
    cout<<"Insira uma palavra:";
    cin>>str;

    for(i=strlen(str)-1; i>-1; i--){ //copia a palavra de tras para frente em um novo vetor
        str_n[u] = str[i];
        u++;
    }
    str_n[u] = '\0';

    cout<<"A palavra ao contrario e "<<str_n<<endl;
	return 0;
}

