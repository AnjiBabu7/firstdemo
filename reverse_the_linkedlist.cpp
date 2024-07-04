#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* reverseList(ListNode* head) {
    vector<int> arr;
    if(head==NULL){
        return NULL;
    }
        ListNode* temp=head;
        ListNode* t=head;
        int count=0;
        while(temp!=NULL){
            arr.push_back(temp->val);
            count++;
            temp=temp->next;
        }
        for(int i=0;i<count;i++){
            t->val=arr[count-i-1];
            t=t->next;
        }
    return head;
        
    }

int main(){
ListNode* head= new ListNode(1);
ListNode* node1=new ListNode(2);
ListNode* node2=new ListNode(3);
ListNode* node3=new ListNode(4);
ListNode* node4=new ListNode(5);
ListNode* node5=new ListNode(6);
head->next=node1;
node1->next=node2;
node2->next=node3;
node3->next=node4;
node4->next=node5;
ListNode* x=reverseList(head);
ListNode* temp=head;
  while(temp!=NULL){
           cout<<temp->val<<" ";
           temp=temp->next;
        }
return 0;
}