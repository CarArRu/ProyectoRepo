#ifndef OTRO_H_INCLUDED
#define OTRO_H_INCLUDED

/// Librerías
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/// Definiciones
#define MaxNumAleatorios 5
#define Suma3Numeros(a, b, c) a+b+c



/// Definiciones de tipo
typedef unsigned int Uint;
typedef double Doble;
typedef unsigned char Uchar;




/// Declarción de variables
extern Uint VariableOtroC;
extern Uint VariableMainC;

/// Estructuras
typedef struct{
    Uint Numero[MaxNumAleatorios];
    Uint i;
}AleatorioStr;

typedef struct{
    Uint ValorEntero;
    Uchar Valor1;
    Uchar Valor2;
    Uchar Valor3;
    Uchar Valor4;
}DesplazamientoStr;

typedef struct{
    Uint x;
    Uint y;
}CoordenadasStr;

typedef struct{
    Uint N1;
    Uint N2;
    Uint N3;
    Uint Arreglo[20];
    Uint i;
}MacroStruct;

typedef struct{
    Uchar Nombre[50];
    Uint Modulo;
    CoordenadasStr Coordenadas;
    Uint i;
}PuntoStr;

typedef struct{
    Uchar Txt[50];
    Uint CantNumeros;
    Uint CantMayusculas;
    Uint CantMinusculas;
    Uint CantCaracteresOtros;
}VarFuncStr;

typedef struct{
    Uint a;
    Uint b;
    Doble c;
}StructCasteo;

typedef union{

    Uchar Nombre[50];
    Uchar Inicial;
    Uint ValorEntero;

}DatosUnionStruct;


/// Prototipos de Función
extern void FuncStaticVar(void);
extern void Contador(void);
extern void ModificarText(Uchar const *Cadena, Uint *CantNum, Uint *CantMay, Uint *CantMin, Uint *CantOtros);

extern void Funcion1(void);
extern Uint Funcion2(void);

extern void AsignarMemoria(Uint **ptr, Uint Tam);








#endif // OTRO_H_INCLUDED
