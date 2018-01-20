#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input,result;
    cout<<"please input:";
    cin>>input;
    for (auto s :input) {
        if(!ispunct(s)){
            result += s;
        }
    }
    cout << "result:" <<result<<endl;
    return 0;
}