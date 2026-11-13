class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val= val;
        this->next = NULL;
    }
};
class MyLinkedList{
public:
    Node* head;
    Node* tail;
    int size = 0;
    MyLinkedList(){
        head = tail = NULL;
        size=0;
    }
    int get(int index) {
        if(index<0 || index>=size){
            return -1;
        }
        else if(index==0) return head->val;
        else if(index==size-1)  return tail->val;
        else{
            Node* temp = head;
            for(int i=1 ; i<=index ; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void addAtHead(int val) {
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void addAtIndex(int index, int val) {
        if(index < 0) index = 0;
        if(index > size) return;
        if(index == 0) {
            addAtHead(val);
            return;
        }
        else if(index == size) {
            addAtTail(val);
            return;
        }
        Node* t = new Node(val);
        Node* temp = head;
        for(int i=1 ; i<=index-1 ; i++){
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        size++;
    }
    void deleteAtHead(){
        if(size==0) return;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        if(size == 0){
            tail = NULL;
        }
    }
    void deleteAtTail(){
        if(size == 0) return;
        if(size == 1) {
            delete head;
            head = tail = NULL;
            size = 0;
            return;
        }
        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
        size--;
    }
    void deleteAtIndex(int idx) {
        if(idx < 0 || idx >= size) return;
        if(idx == 0) {
            deleteAtHead();
            return;
        }
        if(idx == size - 1) {
            deleteAtTail();
            return;
        }
        Node* temp = head;
        for(int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */