//reversal of a doubly linked list, almost created by yours truly


class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};


Node* reverse(Node* &head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr!=nullptr)
    {   
        forward = curr->next;
        curr->prev = forward;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
