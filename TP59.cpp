#include <iostream>
#include <string>
using namespace std;
int ContarVocales (string frase);
int main()
{
    string frase;
    cout<<"Ingresa la frase: ";
    getline(cin,frase);
    cout<<"El valor de las letras es: "<<ContarVocales (frase);
    return 0;
}
int ContarVocales (string frase)
{
	int contador=0;
	for(int i=0; i< frase.size();i++)
	{
		if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u'
		|| frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U')
		{
		    contador++;
		}
	}
	return contador;
}
