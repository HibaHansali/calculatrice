#include <stdio.h>
#include <stdlib.h>


void main() {
    int N1,N2;
    char op;

   printf ("Entrer le nombre1: ");
    scanf("%d" , &N1);
    printf ("Entrer l'opérareur: ");
    scanf("%s" , &op);
    printf ("Entrer le nombre2: "); 
    scanf("%d" , &N2);

     switch(op){
     case '+': printf ("%d\n ", N1+N2);
     break;
     case '-': printf ("%d\n ",N1-N2);
     break;
     case '*': printf ("%d\n ",N1*N2);
     break;
      case '/':if(N2!=0)
     printf("%d", N1/N2);
     else
     printf("impossible");
     break;
    default:
     printf("opération non reconnu");
    break;
}
}