//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> num(10,2);

    for (auto i = num.begin(); i != num.end(); ++i)
    {
        (*i) *= (*i);
//        cout<<(*i)<<" ";
    }


    for (auto x : num) {
        cout << x <<endl;
    }
}
