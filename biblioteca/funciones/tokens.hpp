#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

int tokenCount(string s,char sep)
{
    int i=0,a=0;
    while(s[i]!='\0')
    {
        if(s[i]==sep)
        {
            a++;
        }
        i++;
    }
    return i==0?0:a+1; 
    // return isEmpty(s)?0:charCount(s,sep)+1;
}

void addToken(string& s,char sep,string t)
{
    s = isEmpty(s)?t:s+sep+t;
}

string getTokenAt(string s,char sep, int i)
{
    int c=0,Ci;
    int Ce=-1,Cm;
    int cont=-1;
    while(s[c]!='\0' && Ce!=i){
        if(s[c]==sep){Ci=c;Ce++;}
        c++;
    }
    if(s[c]=='\0'){Ci=c;Ce++;}
    c=0;
    while(s[c]!='\0' && Ce-1!=cont){
        if(s[c]==sep){Cm=c+1;cont++;}
        c++;
    }
    return s=substring(s,Cm,Ci);
}

void removeTokenAt(string& s,char sep, int i)
{
    int c=0,Ci;
    int Ce=-1,Cm;
    int cont=-1;
    string Sa;
    while(s[c]!='\0' && Ce!=i){
        if(s[c]==sep){Ci=c;Ce++;}
        c++;
    }
    // if(s[c]=='\0'){Ci=c;Ce++;}
    c=0;
    while(s[c]!='\0' && Ce-1!=cont){
        if(s[c]==sep){Cm=c;cont++;}
        c++;
    }
    c=0;
    while(s[c]!='\0'){
        if(c>Ci || Cm>=c)Sa+=s[c];
        c++;
    }
    // if(Sa[length(Sa)-1]==sep)Sa=removeAt(Sa,length(Sa));
    s=Sa;
}

void setTokenAt(string& s,char sep, string t,int i)
{
    int c=0;
    string tokenA=s,tokenB=s;
    removeTokenAt(tokenB,sep,0);
    while((tokenCount(s,sep)-c)!=i){
        removeTokenAt(tokenA,sep,i);
        c++;    
    }
    addToken(tokenA,sep,t);
    c=0;
    while((tokenCount(tokenA,sep)-c)!=0){
    removeTokenAt(tokenB,sep,c);
    c++;
    } 
    //c=0;
    // while((tokenCount(s,sep)-c)!=0){
    //     token+=addToken(s)}
    s=tokenA+tokenB;
}

int findToken(string s,char sep, string t)
{
   return 0;
}

#endif
