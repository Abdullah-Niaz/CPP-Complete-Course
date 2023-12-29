#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[20]= "HelloWrold";
    char s2[20] = "helloworld";
    cout<<strstr(s1,s2)<<endl;
    cout<<strrchr(s1,'W')<<endl;

    cout<<"+++++++++++++++++++++++++\n\n";

    
    cout<<strcmp(s1,s2);
    return 0;
};