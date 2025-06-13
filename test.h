#ifndef TEST_H
#define TEST_H

#include<iostream>
using namespace std; 

class ContactTree{
  private:
  int number; 
  string name;

  public:
  ContactTree *left; 
  ContactTree *right;

  void addDetails(ContactTree *& root, int number, string name);
  void searchDetails(ContactTree *root);
  void menu();

  ContactTree(int number,string name){
    this->number=number;
    this->name=name;
    left=nullptr;
    right=nullptr;
  };

};

#endif TEST_H 

