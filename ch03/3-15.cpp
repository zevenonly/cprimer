//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> ivec;
    string i ;
    while(cin >> i){
        ivec.push_back(i);
    }
    cout<<ivec.size()<<endl;
    for (auto v  : ivec) {
        cout<<v<<endl;
    }
}