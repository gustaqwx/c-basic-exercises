#include <stdio.h>
#include <stdlib.h>

int main() {
	float v, r, i;
	printf("digite a tensao:");
	scanf("%f",&v);
	printf("digite a resistencia:");
	scanf("%f",&r);
	i = v/ r;
	printf("a corrente e: %f\n", i);
	printf("a tensao e: %f\n", v);

	
#include <stdio.h>

	float celsius, fahrenheit;
	printf("quantos graus:");
	scanf("%f", &celsius);
	fahrenheit = celsius *9 / 5 + 32;
	printf("de %.3f graus celsius para fahrenheit e %.3f\n", celsius, fahrenheit);
	
#include <stdio.h>

	const float G = 9.8;
	float tempo, distancia;
	printf ("qual a distancia da sua queda?");
	scanf ("%f",&tempo);
	distancia = G * tempo * tempo /2;
	printf ("a distancia da queda e de: %.3f:\n", distancia);
	


#include <stdio.h>

	float n1, n2, n3, n4, n5, media;
	printf ("digite o primeiro numero");
	scanf ("%f", &n1);
	printf ("digite o segundo numero");
	scanf ("%f", &n2);
	printf ("digite o terceiro numero");
	scanf ("%f", &n3);
	printf ("digite o quarto numero");
	scanf ("%f", &n4);
	printf ("digite o quinto numero");
	scanf ("%f", &n5);
	media = (n1 + n2 + n3 + n4 + n5) /5;
	printf ("a sua media e de: %.2f\n", media);
	
	
#include <stdio.h> 


	
	float massa, peso;
	printf ("qual a massa do seu objeto?");
	scanf ("%f", &massa);
	peso = massa * G;
	printf ("o peso e de: %.3f\n", peso);
	
	
#include <stdio.h>
    
    int numero;
    printf ("digite um numero:");
    scanf ("%d", &numero);
	numero++;
	numero++;
	numero++;
	numero--;
	numero--;
	printf("o resultado e: %d\n", numero);
	
#include <stdio.h>
	
	char letra;
	printf ("digite uma letra:");
	scanf (" %c", &letra);
	letra = letra -4;
	printf ("a quarto caractere anterior e: %c\n", letra);
	
	



}



