#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    int step;
    bool uppercase;
    char inputText[255];
    char choice;

    cout << "Enter the text:" << endl;
    cin.getline(inputText, 255);
    cout << "Enter the key:" << endl;
    cin >> step;

    cout << "Encryption: type 1"<< endl <<"Decryption: type 2" << endl;
    cin >> choice;

    if (choice == '1'){
        cout << "You chose encryption." << endl;
        for (int i = 0; i < strlen(inputText); i++)
        {
            if (isupper(inputText[i])){
                inputText[i] = inputText[i] + 32;
                uppercase = true;
            }
            else
                uppercase = false;


            if (step >= 0)
                inputText[i] = (inputText[i] - 'a' + step) % 26 + 'a';
            else
                inputText[i] = (inputText[i] - 'a' + 26 + step) % 26 + 'a';

            if (uppercase)
                inputText[i] = inputText[i] - 32;
        }
        cout << inputText << endl;
    }

    else if (choice == '2'){
        cout << "You chose decryption." << endl;
        for (int i = 0; i < strlen(inputText); i++)
        {
            if (isupper(inputText[i])){
                inputText[i] = inputText[i] + 32;
                uppercase = true;
            }
            else
                uppercase = false;

            if (step >= 0)
                inputText[i] = (inputText[i] - 'a' + 26 - step) % 26 + 'a';
            else
                inputText[i] = (inputText[i] - 'a' - step) % 26 + 'a';

            if (uppercase)
                inputText[i] = inputText[i] - 32;
        }
        cout << inputText << endl;
    }

    else {
        cout << "Error: invalid option chosen" << endl;
    }

}