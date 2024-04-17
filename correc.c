#include <stdio.h>
#include<stdlib.h>

int main(){
int opcion;
puts("1 estacionamiento");
puts("2 multiplicacion");
puts("3 recorrido");
puts("4 entradas");
puts("5 comida");
scanf("%d", &opcion);

switch(opcion){
	case 1:{
   		int hora_e, hora_s;
		scanf("%d %d", &hora_e, &hora_s);
		int costo = 500;
		if(hora_s - hora_e <= 100){
			printf("Tu costo es de %d", costo);
		}
		else if(hora_s - hora_e > 100) {
			int costo2 = 250;
            int horas_estadia = (hora_s - hora_e)/100;
            printf("tu costo es de %d", costo + costo2*horas_estadia);
		
		}
		return 0;
		}
		break;
	case 2:{
		
		int num1, num2;
		
		scanf("%d %d", &num1, &num2);
		if(num1 < 0 || num2 < 0){
			printf("un numero es negativo, error");
		}
        else{
			int resultado = 0;
            int i = 0;
            while(i < num1){
                i++;
                resultado += num2;
           	 }
			printf("%d", resultado);
			return 0;
		}
    
		break;
	}
	case 3:{
		 float km, horas, minutos, precio_litro;
		
		scanf("%f %f %f %f", &km, &horas, &minutos, &precio_litro);
		float velocidad = km / horas+(minutos/60);
			float litros_100 = 100 / velocidad;
			float pesos_100 = precio_litro * (100/ velocidad);
			float pesos = precio_litro*(1/velocidad);
			float litro = 1/velocidad;
			
			printf("por 100km se gasta %.2f$ y se gasta un total de %.2f litros\n", pesos_100, litros_100);
			printf("por km se gasta %.2f$ y se gasta un total de %.2f litros", pesos, litro);
			return 0;
		
		break;
		}
	case 4:{
		 int entrada, precio;
		scanf("%d %d", &entrada, &precio);
		if (entrada == 1){	
        		printf("su entrada cuesta %d", precio);
		}
		else if(entrada == 2){
			printf("el costo es igual a %.f", precio*2-((precio*2)*0.1));
		} else if (entrada == 3){
			printf("el costo es de %.f", precio*3-((precio*3)*0.15));
		}else if(entrada == 4){
			printf("el costo es de %.f", precio*4-((precio*4)*0.20));
		}else if(entrada > 4){
			printf("no se puede comprar");
		}
		
		return 0;
		}
		break;
	case 5:{
			int persona;
			scanf("%d", &persona);
			
			if(persona == 1){
				printf("el precio del plato es de 6500");
			}else if(persona >= 200 && persona < 300){
				printf("el costo del plato es de 5500");
			}else if(persona >= 300){
				printf("el costo del plato es de 4500");
			}
			return 0;

            break;
			}
		}
	return 0;		
}
