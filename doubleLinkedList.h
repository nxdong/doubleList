
typedef int KEY;
class DoubleLinkNode
{
public:
    DoubleLinkNode( KEY k, DoubleLinkNode* p=NULL, DoubleLinkNode* n=NULL)
        :key(k),prev(p),next(n){}
    ~DoubleLinkNode()
    {
        prev      = NULL;
        next      = NULL;
    }
    /* only can copy key world and satellite data.the pointer can't be copied*/
    DoubleLinkNode(const DoubleLinkNode& c)
    {
        this->prev = NULL;
        this->next = NULL;
        this->key  = c.key;
        // satellite data copied here

    }
    KEY getKey()              const   {return key ;}
    DoubleLinkNode* getPrev() const   {return prev;}
    DoubleLinkNode* getNext() const   {return next;}
    void setPrev(DoubleLinkNode* const p)  {this->prev = p;}
    void setNext(DoubleLinkNode* const n)  {this->next = n;}

private:
    KEY key;                                                   // key world of the node
    DoubleLinkNode* prev;                                      // pointer to previous node
    DoubleLinkNode* next;                                      // pointer to next node
    /* satellite data pointer save here*/

};

class DoubleLink
{
public:
    DoubleLink();
    ~DoubleLink();
    DoubleLinkNode* Search(KEY);
    int AddHead(DoubleLinkNode*);
    int Delete(DoubleLinkNode*);
private:
    DoubleLinkNode* header;
    int m_size;                                                 // size of the list
};
