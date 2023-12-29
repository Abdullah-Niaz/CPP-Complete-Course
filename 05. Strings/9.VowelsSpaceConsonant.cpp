#include <iostream>
using namespace std;

int main(){
    int vowels=0,space=0,consonant=0;
    string h = "How are you";
    for (int i = 0; h[i]!= '\0'; i++)
    {
        if (h[i] == 'A' || h[i] == 'E' || h[i] == 'I' || h[i] == 'O' || h[i] == 'U' || 
        h[i] == 'a' || h[i] == 'e' || h[i] == 'i' || h[i] == 'o' || h[i] == 'u')
        {
            vowels++;
        }
        else if (h[i] == ' ')
        {
            space++;
        }
        else{
            consonant++;
        }        
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonant: "<<consonant<<endl;
    cout<<"Space: "<<space<<endl;
    return 0;
};