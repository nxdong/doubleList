#include <cstddef>
#include "doubleLinkedList.h"

DoubleLink::DoubleLink() :
    header(NULL),m_size(0)
{
}
DoubleLink::~DoubleLink()
{
    DoubleLinkNode* del = NULL;
    while(header != NULL)
    {
        del = header;
        header = header->getNext();
        delete del;
        del = NULL;
    }

}

int DoubleLink::AddHead(DoubleLinkNode* addNode)
{
    addNode->setNext(header);
    if(header != NULL)
        header->setPrev(addNode);
    header = addNode;
    addNode->setPrev(NULL);
    m_size += 1;
    return 1;
}

int DoubleLink::Delete(DoubleLinkNode* delNode)
{
    if(delNode->getPrev() != NULL)
        delNode->getPrev()->setNext( delNode->getNext());
    else
        header = delNode->getNext();
    if(delNode->getNext() != NULL)
        delNode->getNext()->setPrev( delNode->getPrev());
    delete delNode;
    m_size -= 1;
    return 1;
}
DoubleLinkNode* DoubleLink::Search(KEY k)
{
    DoubleLinkNode* x = header;
    while((x != NULL)&&(x->getKey() != k))
        x = x->getNext();
    return x;
}
