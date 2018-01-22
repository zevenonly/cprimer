
//
// Created by zhangyw15486 on 2018-01-20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
//    int a[10]={1,1,1,1,1,1,1,1,1,1};
//    int b[10]={1,1,1,1,2,1,1,1,1,1};
//    int *pab=begin(a);
//    int *pae=end(a);
//    int *pbb=begin(b);
//    int *pbe=end(b);
//    int i=0;

//    while(pab!=pae&&pbb!=pbe)
//    {
//        if(*(pbb)!=*(pab))
//        {
//            cout<<i<<":"<<*(pab)<<"!="<<*(pbb)<<endl;
//            break;
//        }
//        ++i;
//        ++pbb;
//        ++pab;
//    }

    vector<int> a(1,3);
    vector<int> b(2,1);
    int i=0;
    auto ita=a.cbegin();
    auto itb=b.cbegin();


    while(ita!=a.cend()&&itb!=b.cend())
    {
        if(*(ita)!=*(itb))
        {
            cout<<i<<":"<<*(ita)<<"!="<<*(itb)<<endl;
            break;
        }
        ++i;
        ++ita;
        ++itb;
    }


}
