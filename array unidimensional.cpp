#include <iostream>

using namespace std;

int main(){
	/*
	int notas[4];
	
	notas[0]=80;
	notas[1]=65;
	notas[2]=60;
	notas[3]=70;
	
	for(int i=0;i<4;i++){
			cout<<i<<":"<<notas[i]<<endl;
	}


	int tam=0,suma=0,promedio=0;
	cout<<"Cuantas notas desea ingresar: "<<endl;
	cin>>tam;
	int notas[tam];
	for(int i=0;i<tam;i++){
		cout<<"Ingrese la nota "<<i+1<<endl;
		cin>>notas[i];
	}
	for(int i=0;i<tam;i++){
		suma+=notas[i];
	}
	promedio=suma/tam;
	cout<<"El promedio es: "promedio<<endl;


	int tam=0;suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese nota "<<tam<<":";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n):";
		cin>>res;
	}while(res=='s'||res=='S');
	
	for(int i=0;i<tam;i++){
		suma+=notas[i];
		
	}
	promedio=suma/tam;
	cout<<"El promedio es: "promedio<<endl;

	string nombre;
	int dato;
	cout<<"Ingrese dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,nombre);
	
	cout<<nombre<<endl;	
*/
	string semana[7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"};
	
	semana[3]="Jueves";
	for(int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	system("pause");
};