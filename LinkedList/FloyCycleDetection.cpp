#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
node* floyCycleDetection(node *head){
    if(head==NULL){
        return NULL;
    }
    node *slow = head;
    node *fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(fast == slow){
            return slow;
        }
    }
    return NULL;
}
node *getStartingNode(node *head){
    if(head == NULL) return NULL;

    node *intersection = floyCycleDetection(head);
    if(intersection==NULL){
        return NULL;
    }

    node *slow = head;

    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;

}
node *removeLoop(node *head){
    if(head==NULL) return NULL;
    node *getMeetNode = getStartingNode(head);
    node *tmp = getMeetNode;

    while(tmp->next!=getMeetNode){
        tmp = tmp->next;
    }
    tmp->next = NULL;

    return head;
}
void printLinkedList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
     node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(4);
    node *head5 = new node(5);
    node *head6 = new node(6);
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = head1;

    if(floyCycleDetection(head1)){
        cout<<"Flold Cycle is present !!!";
    }
    else{
        cout<<"Floy Cycle is not present !!!";
    }

    node *startingNode = getStartingNode(head1);
    cout<<"\nLoop start At "<<startingNode->data<<"\n";

    node *parul = removeLoop(head1);
    printLinkedList(parul);
    return 0;
}