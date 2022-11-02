//#IFDEF LIST_H
//#DEFINE LIST_H
struct Node{
  int data;
  Node *next;
};

class List{
  public:
    List();
    List *append(int e);
    List *append(int data, int pos);
    int head();
    List * tail();
    bool isEmpty();
    int size();

  private:
    Node *first;
    Node *deleteNext(Node *);
    Node *addNext(Node *, Node *);
};
//#ENDIF
