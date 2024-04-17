#include<stdio.h>
#include<stdio.h>

int main(){
int opcion;
scanf("%d", &opcion);

switch(opcion){
	case 1:{
		int hora_e, hora_s;
		scanf("%d %d", &hora_e, &hora_s);
		int costo = 500;
		if(hora_s - hora_e <= 100){
			printf("Tu costo es de %d", costo);
		}
		else if(hora_s - hora_e >= 100) {
			int costo2;
			for (int i = 0; i < hora_s-hora_e; i+=250){
			costo2 += i;
		}
		printf("tu costo es de %d ", costo + costo2);
		return 0;
		}
		break;
	}
	case 2:{
		int num1, num2;
		
		scanf("%f %f", &num1, &num2);
		if(num1 <= 0 || num2 <= 0){
			printf("un numero es negativo, error");
		}
			float resultado = num1 += num2;
			printf("%f", resultado);
			return 0;
		
		break;
	}
	case 3:{
		float km, horas, minutos, precio_litro;
		
		scanf("%f %f %f", &km, &horas, &minutos, &precio_litro);
		float velocidad= km / horas+(minutos/60);
			float litros_100 = 100 / velocidad;
			float pesos_100 = precio_litro * (100/ velocidad);
			float pesos = precio_litro*(1/velocidad);
			float litro = 1/velocidad;
			
			printf("por 100km se gasta %.2f$ y se gastaun total de %.2f litros\n", pesos_100, litros_100);
			printf("por km se gasta %.2f& y se gasta un total de %.2f litros", pesos, litro);
			return 0;
		
		break;
	}
	case 4:{
		int entrada, precio;
		scanf("%d %d", &entrada, &precio);
		if(entrada == 2){
		printf("el costo es igual a %d", precio*2+(precio*0.1));
		} else if (entrada == 3){
			printf("el costo es de %d", precio*3+(precio*0.15));
		}else if(entrada == 4){
			printf("el costo es de %d", precio*4+(precio*0.20));
		}else if(entrada > 4){
			printf("no sepuede comprar");
		}
		
		return 0;
		}
		break;
		case 5:{
			int persona;
			scanf("%d %d", persona);
			
			if(persona == 1){
				printf("el precio del plato es de 6500");
			}else if(persona >= 200 && persona <= 300){
				printf("el costo del plato es de 5500");
			}else if(persona >= 4500){
				printf("el costo del plato es de 4500");
			}
			break;
		}
	}
	return 0;
}
