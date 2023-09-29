#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *middleElement(node *head)
{
    vector<node*>v ={head};
    while(v.back()->next !=NULL){
        v.push_back(v.back()->next);
    }
    return v[(int)v.size()/2];
}
int main()
{

    node *head = new node();
    node *first = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();

    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = NULL;

    cout << second << endl;

    printlist(head);
    node *ans = middleElement(head);
    cout << "The middle element address is: " << ans << endl;

    if (second == ans)
    {
        cout << "Middle elememt maches";
    }
    else
    {
        cout << "Invalid middle element";
    }
    return 0;
}