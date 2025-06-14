#include<iostream>
#include"test.h"
using namespace std; 

void Tree::addTree (Tree *&root, string name, int number){
        Tree *newNode=new Tree();
         newNode->name=name;
         newNode->number=number;

         if(root==nullptr){
            root=newNode;
         }
         else if(root->number>number){
            addTree(root->left,name,number);

         }
         else if (root->number<number){
            addTree(root->right,name,number);
         };

    };

void Tree::printInorder(Tree *root)
{       
    if(root==nullptr){
        return;
    }
    
    else{
    printInorder(root->left);
    cout<<root->number<<endl;
    cout<<root->name<<endl;
    printInorder(root->right);
    };

};

void Menu::menu(){
    int options; 
    Tree *root=nullptr;
    while(options!=3){
        cout<<"1. Add Tree"<<endl;
        cout<<"2. Print Tree"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>options;

        if(options==1){
            cout<<"What is your name?"<<endl;
            cin>>name;
            cout<<"What is your number? "<<endl;
            cin>>number;

            addTree(root,name,number);

        }
        else if(options==2){
            printInorder(root);
        }
        else {
            break;
        }
    }


}