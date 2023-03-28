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

    printf("Alege operatie: \n");
    printf("(1) Adunare \n");
    printf("(2) Scadere \n");
    printf("(3) Inmultire \n");
    printf("(4) Impartire \n");
    printf("(5) Radical \n\n");

    switch (operatie)
    {
    case 1:
        printf("Introdu doua numere cu spatiu intre ele (ex. 2 3):");
        scanf("%f %f", num1, num2);
        printf("%f %f", adunare(num1, num2));
        break;
    case 2:
        printf("Introdu doua numere cu spatiu intre ele (ex. 2 3):");
        scanf("%f %f", num1, num2);
        printf("%f %f", scadere(num1, num2));
        break;
    case 3:
        printf("Introdu doua numere cu spatiu intre ele (ex. 2 3):");
        scanf("%f %f", num1, num2);
        printf("%f %f", inmultire(num1, num2));
        break;
    case 4:
        scanf("%f %f", num1, num2);
        printf("%f %f", impartire(num1, num2));
        break;
    case 5:
        printf("Introdu un numar:");
        scanf("%f", num1);
        printf("%f %f", radical(num1, num2));
        break;
    default:
        printf("Eroare operatie.");
    }

    return 0;
}
