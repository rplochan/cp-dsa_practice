#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

int main(){

    // size of linked list
    int n;
    cin>>n;

    // creating a vector of size n and taking input
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }


    head = new node();
    struct node* tail = head;
    head->data = v[0];
    head->next = NULL;

    struct node* temp;

    for(int i=1; i<n; i++){
        temp = new node();
        temp->data = v[i];
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }

    struct node* q = head;


   while(q != NULL){
        cout<<q->data<<" ";
        q = q->next;
   }



return 0;
}
