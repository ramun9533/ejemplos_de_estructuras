#include<stdio.h>
struct reg {
    char nombre [50];
    char empleo [50];
    int edad;
};
//int main()
void main()
{
        struct reg f1, f2;
        printf("introduce valores para el formulario 1\n");
        //formulario 1
        printf("introduce tu nombre \n");
        fgets(f1.nombre,50,stdin);//fgets para cargar strings
        printf("introduce tu empleo \n");
        fflush(stdin); //para limpiar

        fgets(f1.empleo,50,stdin);
        printf("introduce tu edad \n");
        scanf("%i",&f1.edad);
        //formulario 2
        printf("introduce valores para el formulario 2\n");
        printf("introduce tu nombre \n");
        //fflush(stdin);
        scanf("%s",f2.nombre);
        printf("introduce tu empleo \n");
        fflush(stdin);
        scanf("%s",f2.empleo);
        // fgets(f2.empleo,50,stdin);
        printf("introduce tu edad \n");
        scanf("%d",&f2.edad);
        printf("los valores de los nombre son; \n");
        printf("el nombre de f1: %s \n", f1.nombre);
        printf("el nombre de f2: %s \n", f2.nombre);
        printf("el empleo de f1: %s \n", f1.empleo);
        printf("el empleo de f2: %s \n", f2.empleo);
        printf("la edad de f1: %i \n", f1.edad);
        printf("la edad de f2: %i \n", f2.edad);
    // struct complejo c1={12.3, 10.95};
    // printf("%.3f , %.3f \n",c1.re, c1.im);
//    return 0;
}
