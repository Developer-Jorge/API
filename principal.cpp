
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
// apunto al tercer registro (comenzando dese cero)
// seek<short>(f,2);
// leo el registro apuntado por el indicador de posicion
// short v = read<short>(f);
// cout << v << endl;
Coll<string> c = coll<string>();
collAdd<string>(c,"John",stringToString);
collAdd<string>(c,"Paul",stringToString);
collAdd<string>(c,"George",stringToString);
collAdd<string>(c,"Ringo",stringToString);
collReset<string>(c);
while( collHasNext<string>(c) )
{
string s = collNext<string>(c,stringToString);
cout << s << endl;
}
}
#endif

