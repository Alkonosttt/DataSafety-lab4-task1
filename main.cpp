#include <iostream>
#include <Windows.h>
#include <cstring>

using namespace std;

int main()
{
    int step;
    char inputText[255];
    cout << "Enter the text\n";
    cin.getline(inputText, 255);
    cout << "Enter the key\n";
    cin >> step;
    for (int i = 0; i < strlen(inputText); i++)
    {
        if (step >= 0)
            inputText[i] = (inputText[i] - 'a' + step) % 26 + 'a';
        else
            inputText[i] = (inputText[i] - 'a' + 26 + step) % 26 + 'a';
    }
    cout << inputText << endl;
    system("pause");
}