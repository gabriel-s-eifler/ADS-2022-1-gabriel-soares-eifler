#include <stdio.h>
#include <stdlib.h>

int main(void) {

int codigo,qtd;
float productv, valornota , discount, valorfinalnota;

printf("c�digo do produto?\n");

scanf ("%d",&codigo);

printf ("quantidade comprada?\n");

scanf ("%d",&qtd);

if (codigo >=1 && codigo <=10){
   productv=10;

}
  if (codigo>=11 && codigo<=20) {
    productv=15;

}

if (codigo>=21 && codigo<=30) {
      productv=20;
}

if (codigo>=3 && codigo<=40){
    productv=30;
}

 valornota = productv * qtd;
printf ("Valor da nota sem desconto:\n",valornota);

if (valornota<250){
    discount=valornota*0.05;

        if (valornota<=500)
       discount=valornota * 0.1;


else
       discount=valornota * 0.15;

}

 valorfinalnota = valornota - discount;
printf ("Valor do desconto �:\n",discount);
printf ("Valor da nota �: \n",valorfinalnota);
}



