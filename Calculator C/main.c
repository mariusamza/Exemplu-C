#include <stdio.h>
#include <stdlib.h>

#include "adunare.h"
#include "scadere.h"
#include "inmultire.h"
#include "impartire.h"
#include "radical.h"

int main()
{

    float num1, num2;
    int operatie;

    printf("Introdu doua numere cu spatiu intre ele (ex. 2 3):");
    scanf("%f %f", &num1, &num2);

    printf("Alege operatie: \n");
    printf("(1) Adunare \n");
    printf("(2) Scadere \n");
    printf("(3) Inmultire \n");
    printf("(4) Impartire \n");
    printf("(5) Radical \n\n");

    printf("Alege operatia: ");
    scanf("%d",&operatie);

    switch (operatie)
    {
    case 1:
        printf("Adunare: %f", adunare(num1, num2));
        break;
    case 2:
        printf("Scadere: %f", scadere(num1, num2));
        break;
    case 3:
        printf("Inmultire: %f", inmultire(num1, num2));
        break;
    case 4:
        printf("Impartire: %f", impartire(num1, num2));
        break;
    case 5:
        printf("Radical din %f= %f",num1, radical(num1));
        break;
    default:
        printf("Eroare operatie.");
    }

    return 0;
}
