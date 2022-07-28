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
    int i=0, c=0, a, b;
    while (s[i] != '\0') {
        a = s[i];
        b = x[c];
        if (a == b) c++;
        i++;
    }
    return c>=2?true:false;
}

bool endsWith(string s, string x) {
    int i, c, a, b;
    while (s[i] != '\0') {
        a = s[i];
        b = x[c];
        if (a == b) c++;
        i++;
    }
    if (c >= 2) return true;
    if (c <= 2) return false;
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
        res=s[i+1];
        i++;
    }
        while(s[i] != '\0'){
        res=s[i+1];
        i++;
    }
    return res;
}

string rtrim(string s) {
    int i=0;
    string res;
    while(s[i]!= '\0'){
        res+=s[i];
        i++;
    }
        while(s[i-1]==32){
        s[i]=s[i-1];
        i--;
    }
    return res;
}

string trim(string s) {
    return "";
}

string replicate(char c, int n) {
    return "";
}

string spaces(int n) {
    return "";
}

string lpad(string s, int n, char c) {
    return "";
}

string rpad(string s, int n, char c) {
    return "";
}

string cpad(string s, int n, char c) {
    return "";
}

bool isDigit(char c) {
    return true;
}

bool isLetter(char c) {
    return true;
}

bool isUpperCase(char c) {
    int i = c;
    if (i >= 97 && i <= 122) return false;
    if (i >= 65 && i <= 90) return true;
}

bool isLowerCase(char c) {
    int i = c;
    if (i >= 97 && i <= 122) return true;
    if (i >= 65 && i <= 90) return false;
}

char toUpperCase(char c) {
    char a;
    int i = c;
    if (i >= 97 && i <= 122) {
        a = i - 32;
    }
    if (i >= 65 && i <= 90) {
        a = c;
    }
    if (i >= 48 && i <= 57) {
        a = i;
    }
    return a;
}

char toLowerCase(char c) {
    char a;
    int i = c;
    if (i >= 97 && i <= 122) {
        a = i - 32;
    }
    if (i >= 65 && i <= 90) {
        a = c;
    }
    if (i >= 48 && i <= 57) {
        a = i;
    }
    return a;
}

string toUpperCase(string s) {
    return "";
}

string toLowerCase(string s) {
    string b;
    int i;
    while (s[i] != '\0') {
        b[i] = s[i] + 32;
        i++;
    }
    return b;
}

int cmpString(string a, string b) {
    int i, c, d, x, f, g;
    f = a[i];
    g = b[i];
    while (a[i] != '\0' && b[i] != '\0') {
        if (f > g) c++;
        if (g > f) d++;
        i++;
    }
    if (c > d) x = 1;
    if (c < d) x = -1;
    return x;
}

int cmpDouble(double a, double b) {
    int x;
    if (a > b) x = 1;
    if (a < b) x = -1;
    if (a == b) x = 0;
    return x;
}

#endif
