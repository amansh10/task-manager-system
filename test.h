#ifndef TEST_H
#define TEST_H

#include<iostream>
using namespace std; 

class Tree{
    protected:
    int number; 
    string name; 

    public:
    Tree *left; 
    Tree *right;
    Tree(){
        left=nullptr;
         right=nullptr;
        
    };

    void addTree(Tree *&root, string name, int number);
        
    void printInorder(Tree *root);
    
};

class Menu:protected Tree{
    public:
    void menu();

};

#endif 
