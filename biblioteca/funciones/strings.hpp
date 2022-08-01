#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#include <algorithm>
#include <string>

int length(string s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int charCount(string s, char c) {
    int i = 0, a = 0;
    while (s[i] != '\0') {
        if (s[i] == c) a++;
        i++;
    }
    return a;
}

string substring(string s, int d, int h) {
    int i = 0;
    string a;
    while (s[i] != '\0'){
    if(i>=d && i<h) a=a+s[i]; 
    i++;
    }
    return a;
}

string substring(string s, int d) // ok
{
    int i = 0;
    string a;
    while (s[i] != '\0'){
    if(i>=d) a=a+s[i];
    i++;
    }
    return a;
}

int indexOf(string s, char c) // ok
{
    int a = 0, i = 0;
    while (s[i] != '\0' && s[i] != c) {
        i++;
    }
    if (s[i] != c) {
        a--;
        i = a;
    }
    return i;
}

int indexOf(string s, char c, int offSet) // ok
{
    int a = 0;
    int i = offSet;
    while (s[i] != '\0' && s[i] != c) {
        i++;
    }
    if (s[i] != c) {
        a--;
        i = a;
    }
    return i;
}

int indexOf(string s, string toSearch) // ok
{
    int i = 0, a = 0, x = 0;
    while (s[i] != '\0') {
        if (s[i] == toSearch[a]) {
            x = i - a;
            a++;
        }
        i++;
    }
    if (s[i] != toSearch[a]) x = -1;
    return x;
}

int indexOf(string s, string toSearch, int offset) // ok
{
    int i = offset, a = 0, x = 0;
    while(s[i]!='\0'){
        if(s[i]==toSearch[a]){
            x = i - a;
            a++;
        }
        i++;
    }
    if (s[i] != toSearch[a]) x = -1;
    return x;
}

int lastIndexOf(string s, char c) {
    int i=0,a=0;
    while(s[i]!='\0'){
        if(s[i]==c)a=i;
        i++;
    }
    return a;
}

int indexOfN(string s, char c, int n) {
    int i=0,a=0;
    while(s[i]!='\0' && n!=a){
        if(s[i]==c)a++;
        i++;
    }
    return i-1;
}

int charToInt(char c) { 
    int i;
    if(c>=48 && c<=57)i=c-48;
    if(c>=65 && c<=90)i=c-55;
    return i;
}

char intToChar(int i) {
    char c;
    if(i>=0 && i<=9)c=i+48;
    if(i>=10 && i<=35)c=i+55;
    return c;
}

int getDigit(int n, int i) {
    string s = to_string(n);
    int res,c = 0;
    while (s[c] != '\0') {
        c++;
    }
    res = c - i;
    return res;
}

int digitCount(int n) {
    string s = to_string(n);
    int c = 0;
    while (s[c] != '\0') {
        c++;
    }
    return c;
}

string intToString(int i) {
    return to_string(i);
}

int stringToInt(string s, int b) // ok
{
    int x = stoi(s);
    int i=0,c=0,res=0;
    /*string r;
    string e = "ABCDEF";
    if (b == 10) {
        a = x;
    }
    if (b == 2) {
        int resultado, resto = 0;
        int digito[8];
        {
            for (int i = 0; i < 8; i++) {
                digito[i] = x % 10;
                x /= 10;
            }
            for (int i = 7; i >= 0; i--) {
                resultado = (resto * 2) + digito[i];
                resto = resultado;
            }
        }
        return resultado;
    }
     while(s[i]!='\0')
     {
      r[i]=(s[i]^i);
      cout<<r[i]<<endl;
      f = stoi(r) +f;
      i++;
     }

     a=f;
  }

    if (b == 16) {

        return a;
    }
    */
    if(b==2){
        while(s[i]!='\0'){
            if(s[i]=='1')res+=2^i;
            i++;
        }
    }
    if(b==10){
        res=b;       
    }
    if(b==16){
        i=0;
        while(s[i]!='\0'){
        res+=16*(charToInt(s[i]));
        i++;
        }
    }
  return res;  
}

int stringToInt(string s) // ok
{
    return stoi(s);
}

string charToString(char c) {
    string b;
    b=c;
    return b;
}

char stringToChar(string s) {
    return s[0];
}

string stringToString(string s) {
    return s;
}

string doubleToString(double d) {
    return to_string(d);
}

double stringToDouble(string s) {
    int i=0;
    double c=0;
    while(s[i]!='\0'){
        c+=s[i];
        i++;
    }
    return c;
}

bool isEmpty(string s) {
    int i=0;
    while (s[i] != '\0') {
        i++;
    }
    return i==0?true:false;
}

bool startsWith(string s, string x) {
/*    int i=0, c=0, a, b;
    while (s[i] != '\0') {
        a = s[i];
        b = x[c];
        if (a == b) c++;
        i++;
    }
    return c>=2?true:false;*/
    return "";
}

bool endsWith(string s, string x) {
  /* int i, c, a, b;
    while (s[i] != '\0') {
        a = s[i];
        b = x[c];
        if (a == b) c++;
        i++;
    }
    if (c >= 2) return true;
    if (c <= 2) return false;*/
    return "";
}

bool contains(string s, char c) {
    int i=0, a;
    while (s[i] != '\0') {
        if (s[i] == c) a++;
        i++;
    }
    return a==0?false:true;
}

string replace(string s, char oldChar, char newChar) {
    int i=0;
    while (s[i] != '\0') {
        if (s[i] == oldChar) s[i] = newChar;
        i++;
    }
    return s;
}

string insertAt(string s, int pos, char c){
    int i=0;
    string before, afther;;
    while (i != pos) {
        before+=s[i];       
        i++;
    }
    while(s[i] != '\0'){
        afther+=s[i];
        i++;
    }
    return s=before+c+afther;
}

string removeAt(string s, int pos) {
    int i=0;
    string before, afther;
    while (i != pos) {
        before+=s[i];       
        i++;
    }
        while(s[i] != '\0'){
        afther+=s[i+1];
        i++;
    }
    return s=before+afther;
}
string ltrim(string s) {
    int i=0;
    string res;
    while(s[i]==32){
        i++;
    }
        while(s[i] != '\0'){
        res+=s[i];
        i++;
    }
    return res;
}

string rtrim(string s) {
    int i=0;
    i=length(s);
    i--;
        while(s[i]==32){
            s=removeAt(s,i);
            i--;
    }
    return s;
}

string trim(string s) {
/*  int i=0;
    string res;
        while(s[i]==32){
        s=removeAt(s,i);
        i++;
    }
        while(s[i] != '\0'){
        s=s[i];
        i++;
    }
    i=length(s);
    i--;
    while(s[i]==32){
        s=removeAt(s,i);
        i--;
    }*/
    string x=ltrim(s);
    string y=rtrim(s);
    cout<<x<<y;
    return s=ltrim(s)+rtrim(s);
}

string replicate(char c, int n) {
    string res;
    for(int i=0;i<=n;i++){
        res+=c;
    }
    return res;
}

string spaces(int n) {
    string res;
    for(int i=0;i<=n;i++){
        res+=32;
    }
    return res;
}

string lpad(string s, int n, char c) {
    int i=0;
    while(length(s)<=n){
        s=replicate(c,n-length(s))+s;
        i++;
    }
    return s;
}

string rpad(string s, int n, char c) {
    int i=0;
    while(length(s)<=n){
    s+=replicate(c,n-length(s));
    }
    return s;
}

string cpad(string s, int n, char c) {
    int i=0;
    int res=(n-length(s))/2;
    while(length(s)<=res){
    s=replicate(c,n-length(s))+s;
    i++;
    }
    while(length(s)<=n){
    s+=replicate(c,n-length(s));
    }
    return s;
}

bool isDigit(char c) {
    return c>=48&&c<=57?true:false;
}

bool isLetter(char c) {
    return (c>=65&&c<=90)||(c>=97&&c<=122)?true:false;
}

bool isUpperCase(char c) {
    return (c >= 65 && c <= 90)?true:false;
}

bool isLowerCase(char c) {
    return (c >= 97 && c <= 122)?true:false;
}

char toUpperCase(char c) {
    return c >= 97 && c <= 122?c-32:c;
}

char toLowerCase(char c) {
    return c >= 65 && c <= 90?c+32:c;
}

string toUpperCase(string s) {
    int i=0;
    string res;
    while(s[i]!='\0'){
    res+=toUpperCase(s[i]);
    i++;
    }
    return res;
}

string toLowerCase(string s) {
    int i=0;
    string res;
    while(s[i]!='\0'){
    res+=toLowerCase(s[i]);
    i++;
    }
    return res;
}

int cmpString(string a, string b) {
    return a==b?0:a>b?1:-1;
}

int cmpDouble(double a, double b) {
    return a==b?0:a>b?1:-1;
}

#endif
