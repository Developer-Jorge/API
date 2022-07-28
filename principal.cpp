
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

int main() {
// con espacios a derecha
string s = "    Esto es una prueba        ";
string r = rtrim(s);
cout << "[" << r << "]" << endl; // [Esto es una prueba]
// sin espacios
s = "    Esto es una prueba";
r = rtrim(s);
cout << "[" << r << "]" << endl; // [Esto es una prueba]
// con espacios a izquierda y derecha
s = " Esto es una prueba        ";
r = rtrim(s);
cout << "[" << r << "]" << endl; // [ Esto es una prueba]
}
#endif

