//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int in ;
    while(cin >> in)
    {
        ivec.push_back(in);
    }
//    for (auto it = ivec.cbegin(); it != ivec.cend()&& it+1 !=ivec.cend();++it)
//    {
//            cout<<(*it)+(*(it+1))<<endl;
//    }
    for (auto it = ivec.cbegin(),ie = ivec.cend()-1;it<=ie;++it,--ie)
    {
        cout<<(*it)+(*ie)<<endl;
    }

}
