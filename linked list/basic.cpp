#include<bits/stdc++.h>
using namespace std;

    struct Node {
        int data ;
        Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
    };

bool search(Node* head, int key) {

    Node* temp = head;

    while(temp != NULL) {

        if(temp->data == key)
            return true;

        temp = temp->next;
    }

    return false;
}

int main (){
    Node*head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    int key;
    cout <<"enter the key: "<<endl;
    cin >> key;
    if(search(head,key)){
        cout <<"key found"<< key<< endl;
    }
    else {
        cout <<"key not found"<< key<< endl;
    }
    return 0;
}

    
    