    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    int main() //Algoritmo Bisiestos_V1
    {
        //definir anio como entero;
        int anio;
        //definir anioDesde como entero;
        int anioDesde;
        //definir anioHasta como entero;
        int anioHasta;
        //definir esBisiesto como logico;
        bool esBisiesto;
        //Escribir "Ingrese desde que año:";
        printf("Ingrese desde que año: ");
        //leer anioDesde;
        scanf("%d",&anioDesde);
        //Escribir "Ingrese hasta que año:";
        printf("Ingrese hasta que año :");
        //leer anioHasta;
        scanf("%d",&anioHasta);
        //para anio<-anioDesde hasta anioHasta con paso 1
        for(anio=anioDesde;anio<=anioHasta;anio++){
        //esBisiesto=(anio mod 4=0) y no ((anio mod 100=0) y no
        (anio mod 400=0))
        esBisiesto=(anio%4==0) && !((anio%100==0) &&
        !(anio%400==0));
        //Si(esBisiesto)
        if(esBisiesto)
    {
    //Escribir anio;
    printf("%d\r\n",anio);
    } //FinSi
    } //FinPara
    return 0;
    } //FinAlgoritmo
