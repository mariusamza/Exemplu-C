#include <stdio.h>
#include <stdlib.h>

#include <adunare.h>
#include <scadere.h>
#include <inmultire.h>
#include <impartire.h>
#include <radical.h>

int main()
{

    int num1, num2, operatie;

    printf("Alege operatie: \n");
    printf("(1) Adunare \n");
    printf("(2) Scadere \n");
    printf("(3) Inmultire \n");
    printf("(4) Impartire \n");
    printf("(5) Radical \n\n");

    printf("Introdu doua numere cu spatiu intre ele (ex. 2 3):");
    scanf("%d %d", num1, num2);

    switch(operatie) {
        case 1:
            adunare(num1, num2);
            break;
        case 2:
            scadere(num1, num2);
            break;
        case 3:
            inmultire(num1, num2);
            break;
        case 4:
            impartire(num1, num2);
            break;
        case 5:
            radical(num1, num2);
            break;
        default:
           printf("Eroare operatie.");
    }

    return 0;
}
