#include <iostream>
#include "doubleLinkedList.h"
using namespace std;

int main()
{
    DoubleLinkNode* dd = NULL;
    DoubleLink list;
    for(int i = 0; i< 10000000;i++)
    {
        dd = new DoubleLinkNode(i);
        list.AddHead(dd);
        dd = NULL;
    }
    DoubleLinkNode* re = list.Search(5);
    if(re == NULL)
    {
        cout<<"not found"<<endl;
        return 0;
    }
    cout<<"find:"<<re->getKey()<<endl;


    return 0;
}
