/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        int elecion;
        int a, b,suma=0,resta=0,mult=1,division;
        float divR;
                printf("Ingrese  uno de los casos: caso 1 Suma ");
                printf(" \nIngrese  uno de los casos: caso 2 Resta ");
                printf (" \nIngrese  uno de los casos: caso 3 Multiplicacion "); 
                printf (" \nIngrese  uno de los casos: caso 4 Division  \n"); 
        
        scanf ("%d", &elecion); //aca se guerda la elecion que hizo el usuario
       
        switch (elecion) {
        case 1:{ //suma
                printf ("Usted ha ingresdo en el modulo de suma \n");
                printf ("ingrese el valor de a: "); scanf ("%d", &a);
                printf ("ingrese el valor de b: " ) ; scanf ("%d", &b); 
                suma=a+b;
                printf ("\nla suma es: %d\n",suma) ;
                break;
        } 
        case 2: { //resta
                printf ("Usted ha ingresado en el modulo de la resta\n") ;
                printf ("ingrese el valor de a: ") ; scanf ("%d", &a);
                printf ("ingrese el valor de b: "); scanf ("%d", &b);
                resta=a-b;
                printf ("\nla resta es: %d\n",resta ) ;
                
                break;
        }
        case 3:{ //multiplicacion
                printf ("Usted ha ingresado en el modulo de la multiplicacion\n");
                printf ("ingrese el valor de a: ") ; scanf ("%d", &a);
                printf ("ingrese el valor de b: ") ; scanf ("%d", &b);
                mult=a*b;
                printf ("\nla multiplicacion es:%d\n", mult) ;
                
                
                break;
        }
        case 4:{//division
                printf ("Usted ha ingresado en el modulo de la division\n");
                printf ("ingrese el valor de a: "); scanf ("%d", &a);
                printf ("ingrese el valor de b: "); scanf ("%d", &b);
                division=a/b;
                printf ("\nla division entera es: %d\n", division ); 
                
                divR=float(a)/float(b);
                
                printf("\n La division decimal es: %.2f",divR);

                break;
        }
        default: printf ("\nLa opcion es invalida");

        }
    return 0;
}
