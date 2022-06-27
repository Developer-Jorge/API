
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
    Coll<string> c = coll<string>();
    collAdd<string>(c,"John",stringToString);
    collAdd<string>(c,"Paul",stringToString);
    collAdd<string>(c,"George",stringToString);
    collAdd<string>(c,"Ringo",stringToString);
    collReset<string>(c);
    bool endOfColl;
    string s = collNext<string>(c,endOfColl,stringToString);
    while( !endOfColl )
    {
        cout << s << endl;
        s = collNext<string>(c,endOfColl,stringToString);
    }
}


#endif

