
#ifndef _MAIN
#define _MAIN

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/Array.hpp"
#include "biblioteca/tads/Map.hpp"
#include "biblioteca/tads/List.hpp"
#include "biblioteca/tads/Stack.hpp"
#include "biblioteca/tads/Queue.hpp"
#include "biblioteca/tads/Coll.hpp"

using namespace std;

int main(){
// FILE* f = fopen("numeros.x","w+b");
// write<short>(f,1234);
// write<short>(f,4321);
// write<short>(f,-9876);
// fclose(f);

// FILE* f = fopen("numeros.x","r+b");
// short s = read<short>(f);
// while( !feof(f) )
// {
// cout << s << endl;
// s = read<short>(f);
// }
// fclose(f);
// }

// FILE* f = fopen("numeros.x","r+b");
// // apunto al tercer registro (comenzando dese cero)
// seek<int>(f,2);
// // leo el registro apuntado por el indicador de posicion
// int v = read<int>(f);
// cout << v << endl;

// string s = "John|Paul|George|Ringo";
// char sep = '|';
// int i = 1;
// removeTokenAt(s,sep,i);
// cout << s << endl; // Salida: John|Paul|Ringo
// i = 0;
// removeTokenAt(s,sep,i);
// cout << s << endl; // Salida: Paul|Ringo

string s = "John|Paul|George|Ringo";
char sep = '|';
int i = 1;
string t = "McCartney";
setTokenAt(s,sep,t,i);
cout << s << endl; // Salida: John|McCartney|George|Ringo
}
#endif

