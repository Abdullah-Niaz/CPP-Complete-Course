#include <iostream>
using namespace std;

int main(){



    // From Upper Case to Lower Case 
    string s = "WELLCOME";
    for (int  i = 0; s[i] != '\0'; i++)
    {
        
        if (s[i] >= 65 && s[i]<=90)
        {
            /* code */
        s[i] = s[i] + 32 ;
        }
         
    }
    cout<<"Converted from Upper to Lower: "<<s;

    cout<<"\n\n==========================\n\n";
    string b = "Pakistan";
    for (int i = 0; b[i] !='\0' ; i++)
    {
        if (b[i] >= 97 && b[i] <= 122)
        {
            b[i] = b[i] - 32;
        }
    }
    cout<<"Converted from Lower To Upper: "<<b;
    
    
    return 0;
};