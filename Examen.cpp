//Cesar Alejandro Velazquez Mercado
//372329
//Me da los numeros perfects dentro de un rango
//04/10/2023
#include <stdio.h>

int main()
{
    int n, op, per, div; // declaro las variables como enteras
    
    do //inicio un ciclo que repetira todo el codigo en caso de que el usuario así lo quiera
    {
        printf("Dame un número entero positivo: ");
        scanf("%d",&n);

        
        for(int i=1 ; i <= n; i++) //este ciclo ira contando hasta llegar al n que es el final
        {
            per=0; //igualo a 0 para que no haya errores cada que se repita
            
            for (int j = i-1; j > 0; j--) // este ciclo se encargara de tener los numeros por los caules se dividira el numero inicial "i"
            {   
                div= i % j; // reviso que el residuo sea 0
                if (div == 0)
                {
                    per = per + j; //en caso de ser 0 va a sumarlo a la variable per
                }
            }
            if(per==i) //si las suma de todos los numeros diivisibles da 0 entonces el codigo entrara aquí
            {
                printf("Los numers perfectos del %d son: ", i);
                printf("%d, ",per);
                printf("Divisores: ");
                for (int j = i-1; j > 0; j--) //esto se encargara de imprimir los divisores del numero
                {   
                    div= i % j; //vuelve a revisar que el residuo sea 0
                    if (div == 0)
                    {
                        printf("%d ", j); // imprime los divisores
                    }
                }
                printf("\n");
            }
        }
        printf("\n\nQuieres volver a introducir un numero 1-. si ||| 2-. no? ");
        scanf("%d",&op);
    }while(op==1);
}