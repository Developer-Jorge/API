#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

int tokenCount(string s,char sep)
{
    int i;
    int a=1;
    while(s[i]!='\0')
    {
        if(s[i]==sep)
        {
            a++;
        }
        i++;
    }
    if(i==0)
    {
        a=0;
    }
    return a;
}

void addToken(string& s,char sep,string t)
{
    s = isEmpty(s)?t:s+sep+t;
 }

string getTokenAt(string s,char sep, int i)
{
  /*  int c;
    int d;
    while(s[c]!='\0')
    {
        while(s[c]!=sep)
        {

        }
    }
    */
    return s;
}

void removeTokenAt(string& s,char sep, int i)
{
}

void setTokenAt(string& s,char sep, string t,int i)
{
}

int findToken(string s,char sep, string t)
{
   return 0;
}

#endif
