#include <iostream>
#include <cstring>
#include <windows.h>
#include <stdio.h>

using namespace std;
int countParentheses (char *); // how much parentheses in input
int countOpenParentheses (char *);// how much ( in input
int main()
{
    SetConsoleCP(1251); // to have ukrainian input
    SetConsoleOutputCP(CP_UTF8); // to output ukrainian

    string enter; // input
    cout<< "Введіть рядок: ";
    getline (cin, enter);
    int length = enter.length()+1; // length of an array
    char s[length]; // array
    strcpy(s, enter.c_str()); // "convert" string s to array


    int amount = 0;
    if(countParentheses == 0) // if there are no parantheses
    {
        cout << "В рядку відсутні дужки" << endl;
        return 0;
    }
    cout << "Кількість дужок: "<< countParentheses (s) <<endl; // amount of all parantheses
    cout << "Кількість відкритих дужок: "<< countOpenParentheses (s) <<endl; // amount of (
    cout << "Кількість закритих дужок: "<< countParentheses (s) - countOpenParentheses(s) <<endl;// amount of ) = amount of all parantheses - amount of (
    // if all parantheses are equal and closed
    if(countParentheses(s)-countOpenParentheses(s)==countOpenParentheses(s))
    {
        cout << "Збережен баланс дужок" << endl;
    }
    else{
        //count how much extra parantheses we need or how much extra ones
        //if less ")"
        if(countParentheses(s) - countOpenParentheses(s) < countOpenParentheses(s)) cout << "Потрібно ще додати " << 2*countOpenParentheses(s) - countParentheses(s) << " ')' дужок";
        // if more ")"
        else cout << "Треба видалити " << countParentheses(s) - 2* countOpenParentheses(s) << " ')' дужок";
    }
}

int countParentheses (char *p) // func to count amount of all parantheses
{
    int amount = 0;
    while (*p)
    {
        if(*p == '(' || *p == ')') amount ++;
        ++p;
    }
    
    return amount;
}
int countOpenParentheses (char *p) // func to count only amount of (
{
    int amount = 0;
    while (*p)
    {
        if(*p =='(') amount ++;
        ++p;
    }
    
    return amount;
}