#include <iostream>
using namespace std;

int main(){
    string s = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
    int value = s.find(",");
    cout<<"Total Number of , in Code "<<value<<endl;
    cout<<"Size of String: "<<s.size()<<endl;
    cout<<"Length of String: "<<s.length()<<endl;
    cout<<"Capacity of String: "<<s.capacity()<<endl;
    
    s.resize(1000);
    cout<<"Capacity of String: "<<s.capacity()<<endl;
    
    return 0;
};