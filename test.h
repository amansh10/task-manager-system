#ifndef TEST_H
#define TEST_H

#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<queue>

using namespace std;


class Task{
    public:
    string name; 
    string category; 
    string description; 
    string due_date; 
    int priority;
    bool is_completed;

    vector<Task> task_vector;
    unordered_map<string, vector<Task> >task_hash_map;
    priority_queue<pair<int, string > >task_priority_queue;
    priority_queue<pair<int, string> > temp_queue;
    Task(){};

    Task(string name, string category, string description,string due_date, int priority){
        this->name=name;
        this->category=category;
        this->description=description;
        this->due_date=due_date;
        this->priority=priority;
        this->is_completed=false;
    };
 

    
    void add_task();
    void delete_task();
    void edit_task();
    void mark_complete();
    void view_all_task();
    void view_upcoming_task();
    void filter_category();
    
};
    


class Menu{
    public:
    int options; 
    string sub_options; 

    Task T;

    void menu();
};


#endif