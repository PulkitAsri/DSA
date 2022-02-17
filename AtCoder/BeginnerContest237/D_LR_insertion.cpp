#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

// #define int long long
#define endl "\n"

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    
};
void insertAfter(Node *prev_node, int new_data)
    {

        if (prev_node == NULL)
        {
            return;
        }
        Node *new_node = new Node();
        new_node->data = new_data;
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;

    Node *head;
    Node* ptr = new Node();
    ptr->data=0;
    head=ptr;

    int seq=1;

    Node* prev=NULL;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == 'L')
        {
            if(prev==NULL){
                Node* node = new Node();
                node->data=seq;
                node->next=head;
                head=node;

                ptr=head;
            }else{
                insertAfter(prev,seq);
                ptr=prev->next;
            }
        }
        else if (c == 'R')
        {
            if(ptr->next==NULL){
                Node* node = new Node();
                node->data=seq;
                ptr->next=node;
            }else{
                insertAfter(ptr,seq);
            }
            prev=ptr;
            ptr=ptr->next;   
        }
        seq++;
        // if(prev) cout<<prev->data;
        // cout<<endl;
        // cout<<ptr->data<<endl<<endl;
    }

    ptr=head;

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}