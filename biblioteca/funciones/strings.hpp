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
    int i = 0;
    int a = 0;
    while (s[i] != '\0') {
        if (s[i] == c) a++;
        i++;
    }
    return a;
}

string substring(string s, int d, int h) {
    return "";
}

string substring(string s, int d) // ok
{
    int i = 0;
    while (s[i] != '\0') {
        if (i >= d) {
            cout << s[i];
        }
        i++;
    }
    return "";
}

int indexOf(string s, char c) // ok
{
    int a = 0;
    int i = 0;
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
    int i = 0;
    int a = 0;
    int x = 0;
    while (s[i] != '\0') {
        if (s[i] == toSearch[a]) {
            x = i - a;
            a++;
        }
        i++;
    }
    if (s[i] != toSearch[a]) {
        x = -1;
    }

    return x;
}

int indexOf(string s, string toSearch, int offset) // ok
{

    return 0;
}

int lastIndexOf(string s, char c) {
    return 0;
}

int indexOfN(string s, char c, int n) {
    return 0;
}

int charToInt(char c) {
    string s = "ABCDEF";
    int a = 0;
    int i = 0;
    a = c - 48;
    while (s[i] != '\0') {
        if (c == s[i]) {
            a = i + 10;
        } else { a = 0; }
        i++;
    }
    return a;
}

char intToChar(int i) {
    string s = " ABCDEF";
    int c = 0;
    if (i > 9) {
        while (s[c] != '\0') {
            s[c] = i++;
            c++;
        }
    }
    return i + 48;
}

int getDigit(int n, int i) {
    string s = std::to_string(n);
    int x;
    int c = 0;
    while (s[c] != '\0') {
        c++;
    }
    x = c - i;
    return x;
}

int digitCount(int n) {
    string s = std::to_string(n);
    int c = 0;
    while (s[c] != '\0') {
        c++;
    }
    return c;
}

string intToString(int i) {
    string s = std::to_string(i);
    return s;
}

int stringToInt(string s, int b) // ok
{
    int x = stoi(s);
    int a;
    int i;
    int f;
    string r;
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
    /* while(s[i]!='\0')
     {
      r[i]=(s[i]^i);
      cout<<r[i]<<endl;
      f = stoi(r) +f;
      i++;
     }

     a=f;
  }
*/
    if (b == 16) {

        return a;
    }
}

int stringToInt(string s) // ok
{
    int a = stoi(s);
    return a;
}

string charToString(char c) {
    string b;
    b = c;
    return b;
}

char stringToChar(string s) {

    return 'X';
}

string stringToString(string s) {
    return "";
}

string doubleToString(double d) {
    return "";
}

double stringToDouble(string s) {
    return 1.1;
}

bool isEmpty(string s) {
    int i;
    while (s[i] != '\0') {
        i++;
    }
    if (i == 0) return true;
    if (i != 0) return false;
}

bool startsWith(string s, string x) {
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
    int i;
    int a;
    while (s[i] != '\0') {
        if (s[i] == c) a++;
        i++;
    }
    if (a == 0) return false;
    if (a != 0) return true;
}

string replace(string s, char oldChar, char newChar) {
    int i;
    while (s[i] != '\0') {
        if (s[i] == oldChar) s[i] = newChar;
        i++;
    }
    return s;
}

string insertAt(string s, int pos, char c) {
    int i;
    while (s[i] != '\0') {
        if(i==pos) s[i]+c;
        i++;
    }
    return s;
}

string removeAt(string s, int pos) {
    return "";
}

string ltrim(string s) {
    return "";
}

string rtrim(string s) {
    return "";
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
