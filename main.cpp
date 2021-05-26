#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int step;
    char inputText[255];
    char choice;

    cout << "Enter the text:" << endl;
    cin.getline(inputText, 255);
    cout << "Enter the key:" << endl;
    cin >> step;

    cout << "Encryption: type 1"<< endl <<"Decryption: type 2" << endl;
    cin >> choice;
    cout << choice << endl;

    if (choice == '1'){
        cout << "You chose encryption." << endl;
        for (int i = 0; i < strlen(inputText); i++)
        {
            if (step >= 0)
                inputText[i] = (inputText[i] - 'a' + step) % 26 + 'a';
            else
                inputText[i] = (inputText[i] - 'a' + 26 + step) % 26 + 'a';
        }
        cout << inputText << endl;
    }

    if (choice == '2'){
        cout << "You chose decryption." << endl;
        for (int i = 0; i < strlen(inputText); i++)
        {
            if (step >= 0)
                inputText[i] = (inputText[i] - 'a' + 26 - step) % 26 + 'a';
            else
                inputText[i] = (inputText[i] - 'a' - step) % 26 + 'a';
        }
        cout << inputText << endl;
    }

}