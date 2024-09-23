# include <iostream>
# include <math.h>
# include <iomanip>

/* Calculadora */


using namespace std;

int main(){
	int opcion;
	float valor1,valor2,resultado;
	
	do{
		cout<<"***********\n";
		cout<<"0-SALIR\n";
		cout<<"***********\n";
		cout<<"1-Suma\n2-Division\n3-Multiplicacion\n4-Resta\n\n";
		cin>>opcion;
		
		if (opcion==0){
			break;
		}
		
		// Escoja de opciones 
		
		switch(opcion){
			
			case 1:
				cout<<"-----------------------------------------\n";
				cout<<"Escojiste la SUMA\n";
				cout<<"-----------------------------------------\n\n";
			
				cout<<"Digite el primer valor:";
				cin>>valor1;
				
				cout<<"Digite el segundo valor:";
				cin>>valor2;
				
				resultado = valor1+valor2;
				cout<<"Resultado: "<<resultado<<"\n\n\n";
				break;
				
			case 2:
				cout<<"-----------------------------------------\n";
				cout<<"Escojiste la DIVISION\n";
				cout<<"-----------------------------------------\n\n";
				cout<<"Digite el primer valor:";
				cin>>valor1;
				
				cout<<"Digite el segundo valor:";
				cin>>valor2;
				if (valor2!=0){
				resultado = valor1/valor2;
				cout<<"Resultado: "<<resultado<<"\n\n\n";
				break;
				}
				
				else{
					cout<<"-----------------------------------------\n";
					cout<<"No puede hacer una division por cero!\n";
					cout<<"-----------------------------------------\n\n";
					break;
				}
				
				
			case 3:
				cout<<"-----------------------------------------\n";
				cout<<"Escojiste la MULTIPLICACION\n";
				cout<<"-----------------------------------------\n\n";
				cout<<"Digite el primer valor:";
				cin>>valor1;
				
				cout<<"Digite el segundo valor:";
				cin>>valor2;
				
				resultado = valor1*valor2;
				cout<<"Resultado: "<<resultado<<"\n\n\n";
				break;
				
			case 4:
				cout<<"-----------------------------------------\n";
				cout<<"Escojiste la RESTA\n";
				cout<<"-----------------------------------------\n\n";
				cout<<"Digite el primer valor:";
				cin>>valor1;
				
				cout<<"Digite el segundo valor:";
				cin>>valor2;
				
				resultado = valor1-valor2;
				cout<<"Resultado: "<<resultado<<"\n\n\n";
				break;
				
			default:
				cout<<"**********************************\n";
				cout<<"Opcion Desconocida!!!\n";
				cout<<"**********************************\n\n";
				break;
				
				} 
				
		
		
	} while(opcion!=0);
	 
	 return 0;
}
