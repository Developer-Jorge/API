#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

int tokenCount(string s,char sep)
{
    // int i=0,a=0;
    // while(s[i]!='\0')
    // {
    //     if(s[i]==sep)
    //     {
    //         a++;
    //     }
    //     i++;
    // }
    // return i==0?0:a+1; 
    return isEmpty(s)?0:charCount(s,sep)+1;
}

string tokenSep(string s,char sep, int cToken){
    int i=0,a=0;
    string token;
    while(s[i]!='\0'){
        if(s[i]==sep)a++;
        if(cToken>=a)token+=s[i];  
    i++;
    }
    return token; 
}
void addToken(string& s,char sep,string t)
{
    s = isEmpty(s)?t:s+sep+t;
 }

string getTokenAt(string s,char sep, int i)
{
    int c=0,a=0;
    string token;
    while(s[c]!='\0'){
        if(s[c]==sep)token=(substring(s,a,c));
        c++;
    }
    return token; 

}

void removeTokenAt(string& s,char sep, int i)
{
    // s = isEmpty(s)?i:s-sep-i;
}

void setTokenAt(string& s,char sep, string t,int i)
{
}

int findToken(string s,char sep, string t)
{
   return 0;
}

#endif
