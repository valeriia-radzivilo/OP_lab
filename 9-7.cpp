#include <iostream>
#include <cstring>
using namespace std;

void deleteWords(int k, char *s, int length);
void outputArray(char *array, int i);

int main()
{
    string enter;
    cout << "Enter a line: ";
    getline(cin, enter);
    int length = enter.length();
    char s[length];
    strcpy(s,enter.c_str());
    cout << "Enter length: ";
    int k;
    cin >> k;
    if(s[length]!=46)
    {
        cout <<"Text should be ended with a dot!" << endl;
        return 0;
    }
    deleteWords(k,s, length);

}

void deleteWords(int k, char *s, int length)
{
    char newLine[length];
    int wordLen = 0;
    int i = 0; //counter
    while(*s)
    {
        if (*s>31 && *s < 65) wordLen = 0;
        else wordLen++;
        if(wordLen!=0 && wordLen > k && *(s+1)>31 && *(s+1)< 65)
        {
            for (int a=wordLen; a>-1; a--)
            {
            newLine[i] = *(s-a+1);
            i++;
            }
        }
        s++;
    }
    outputArray(newLine, i);

}

void outputArray(char *array, int length)
{
    for(int i =0;i<length;i++) cout << array[i];
}