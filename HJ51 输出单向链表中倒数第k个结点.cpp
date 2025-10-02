#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){};
};

int main(){
int num;
while(cin>>num){
    int x=num;
    ListNode*head=new ListNode(-1);
    ListNode*p=head;
    while(num--){
        int n;
        cin>>n;
        ListNode*q=new ListNode(n);
        q->next=nullptr;
        p->next=q;
        p=q;
    }
    int k;
    cin>>k;
    if(k<=0||k>x){cout<<0<<endl;continue;}
    for(int i=0;i<x-k+1;++i){
        head=head->next;
    }
    cout<<head->val<<endl;
}
}
