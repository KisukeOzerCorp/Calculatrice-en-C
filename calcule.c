#include <stdio.h>


int main(){
     //création de 3 variable de type intégeure que je nome a, b et math
     int a;
     int b;
     int math;

     printf("Bonjour, Bienvenue sur la Calculatrice de Kisuke\n");
     printf("Veuillez saisir le premier chiffre: \n");
     //on récupére le calcule rentrer avec la fonction scanf();
     scanf("%d", &a);
     printf("Veuillez saisir le deuxieme chiffre\n");
     scanf("%d", &b);

     printf("Veuillez saisir l operation que vous essayez de faire : \n1.addition\n2.subtraction\n3.multiplication\n4.division: ");
     scanf("%d", &math);
    //on fais les condition exemple que si math = 1 on affiche le resulta du calcule dans un printf();
     if(math == 1){
        printf("le resulta est de %d.\n",a + b);

     }
    
    if(math == 2){
        printf("Le resulta est de %d. \n",a - b);
    }
     
     if(math == 3){
         printf("Le resulta est de %d.\n", a * b);
     }

     if(math == 4){
         printf("Le resulta est de %d.\n", a / b);
        
     }

     return 0;
      


}