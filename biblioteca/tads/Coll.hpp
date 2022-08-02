#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>
#include "../funciones/strings.hpp"

using namespace std;

template <typename T>
struct Coll
{
    string s;
    char sep;
    int pos = 0;
};
template <typename T>
Coll<T> coll (char sep){
    Coll<T> c;
    c.s = "";
    c.sep = sep;
    return c;
}
template <typename T>
Coll <T> coll (){
    Coll<T> c;
    c.s ="";
    c.sep = '|';
    return c;
}
template <typename T>
int collSize (Coll<T> c){
    int ret;
    ret = tokenCount(c.s, c.sep);
    return ret;
}
template <typename T>
void collRemoveAll (Coll<T>& c){
    c.s = "";
}
template <typename T>
void collRemoveAt (Coll<T>& c, int p){
    removeTokenAt(c.s, c.sep, p);
}
template <typename T>
int collAdd (Coll<T>& c, T t,string tToString(T)){
   addToken(c.s,c.sep,tToString(t));
   return collSize<T>(c)-1;
}
template <typename T>
void collSetAt (Coll<T>& c,T t,int p, string tToString (T)){
    setTokenAt(c.s, c.sep, tToString(t), p);
}
template <typename T>
T collGetAt (Coll<T> c, int p, T tfromString(string)){
    string a = getTokenAt(c.s, c.sep, p);
    T t;
    t = tfromString(a);
    return t;
}
template <typename T, typename K>
int collFind (Coll<T> c, K k, int cmpTK (T,K), T tFromString(string))
{
   for (int i=0; i != tokenCount(c.s,c.sep); i++)
   {
     T t = tFromString(getTokenAt(c.s,c.sep,i));
      if (cmpTK(t,k) == 0)
      {
         return i;
      }
   }
   return -1;
}
template <typename T>
void collSort(Coll<T>& c, int cpmTT(T,T),T tFromString(string),string tToString(T))
{
    
    
}
template <typename T>
bool collHasNext (Coll<T> c)
{
   bool vacio = false;
    if (c.pos<tokenCount(c.s,c.sep))
    {
      vacio = true;
    }
    return vacio;
}
template <typename T>
T collNext (Coll<T>& c, T tFromString(string)){
    T t;
    t = tfromString (getTokenAt(c.s, c.sep, c.pos));
    c.pos ++;
    return t;
}
template <typename T>
T collNext (Coll<T>& c,bool& endOfColl, T tFromString(string)){
    endOfColl = false;
    T t;
    t = tfromString (getTokenAt(c.s, c.sep, c.pos));
    if (!collHasNext(c)) {
        endOfColl = true;
    }
    c.pos ++;
    return t;
}
template <typename T>
void collReset(Coll<T>& c){
    c.pos = 0;
    
}
#endif
