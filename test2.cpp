#include"test.h"

void Task::add_task(){
    string name,category,description,due_date;
    int priority;
    cout<<"What is the name of the task? "<<endl;
    cin>>name;
    
    cout<<"What is the category" <<endl;
    cin>>category;

    cout<<"Write the description? "<<endl;
    cin>>description;

    cout<<"What is the due date? "<<endl;
    cin>>due_date;

    cout<<"What is the priority? "<<endl;
    cin>>priority;

    Task task_constructor(name,category,description,due_date,priority);
    task_vector.push_back(task_constructor);



};

void Task::delete_task(){

};

void Task::edit_task(){

};
void Task::mark_complete()
{

};

void Task::view_all_task(){
    for(auto C:task_vector){
        cout<<C.name<<endl;
        
    }

};

void Task::view_upcoming_task(){

};

void Task::filter_category(){

};

void Menu::menu(){
  
     while(options!=6){
        cout<<"1. Add Task "<<endl;
        cout<<"2. View Task"<<endl;
        cout<<"3. View Task By Category"<<endl;
        cout<<"4. Mark Task as Complete "<<endl;
        cout<<"5. Delete Task"<<endl;
        cout<<"6. Exit"<<endl;

        cin>>options;

        if(options==1){
            T.add_task();
        }

        else if(options==2){
            T.view_all_task();
        }
        
        else if(options==3){
            T.filter_category();
        }

        else if(options==4){
            T.delete_task();
        }
        else if(options==5){
            T.delete_task();
        }
        else if(options==6){
        break;
        }

    };
    };
