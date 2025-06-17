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
        
    
        task_priority_queue.push(make_pair(priority,name));
        task_vector.push_back(task_constructor);


    };

    void Task::delete_task(){

        cout<<"Which Task Do You Wanna Delete"<<endl;
        cin>>name;

        for(int i=0;i<task_vector.size();i++){
            if(name==task_vector[i].name){
                task_vector.erase(task_vector.begin()+i);
            };
        };

    };

   void Task::edit_task() {
    string options; 
    cout << "What do you want to change?" << endl;
    cout << "a. Task Name" << endl;
    cout << "b. Task Completion" << endl;
    cout << "c. Category" << endl;
    cout << "d. Description" << endl;
    cout << "e. Due Date" << endl;

    cin >> options;

    string target_name;
    cout << "Enter the name of the task you want to edit: ";
    cin >> target_name;

    bool found = false;

    for (auto& C : task_vector) {
        if (C.name == target_name) {
            found = true;

            if (options == "a") {
                string new_name;
                cout << "Enter the new name: ";
                cin >> new_name;
                C.name = new_name;
            }
            else if (options == "b") {
                C.name = "Task Completed" + C.name; // or use a proper flag instead
                cout << "Marked as completed by modifying name.\n";
            }
            else if (options == "c") {
                string new_category;
                cout << "Enter the new category: ";
                cin >> new_category;
                C.category = new_category;
            }
            else if (options == "d") {
                string new_description;
                cout << "Enter the new description: ";
                cin >> new_description;
                C.description = new_description;
            }
            else if (options == "e") {
                string new_due_date;
                cout << "Enter the new due date: ";
                cin >> new_due_date;
                C.due_date = new_due_date;
            }
            else {
                cout << "Invalid option." << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Task not found." << endl;
    }
};



        

    
    void Task::mark_complete()

    {
        cout<<"Which Task Do You Wanna Mark Complete"<<endl;
        cin>>name;

      /*  for(int i=0;i<task_vector.size();i++){
            if(name==task_vector[i].name){
            task_vector[i].is_completed=true;
            };
        };

        */

        for(auto& C:task_vector){
            if(name==C.name){
                C.is_completed=true;
            }
        };


    };

    void Task::view_all_task(){
        for(auto& C:task_vector){
            cout<<"Task Name: "<<C.name<<endl;
            cout<<"Task Category: "<<C.category<<endl;
            cout<<"Due Date: "<<C.due_date<<endl;
            cout<<"Priority Number: "<<C.priority<<endl;
            if(C.is_completed==true){
                cout<<"Completed Task"<<endl;
            }
            else{
                cout<<"Not Completed Task "<<endl;
            };
        };

    };

    void Task::view_upcoming_task(){
       

    for(auto& C: task_vector){
    temp_queue.push(make_pair(C.priority,C.name));
    };

    while (!temp_queue.empty()) {
    auto element = temp_queue.top();
    cout << "Priority Number: " << element.first << endl; 
    cout << "Priority Name: " << element.second << endl;
    temp_queue.pop();
    };

     };

   void Task::filter_category() {
    string target_category;
    cout << "Enter category to filter by: ";
    cin >> target_category;

    bool found = false;

    for (const auto& task : task_vector) {
        if (task.category == target_category) {
            found = true;
            cout << "Task Name: " << task.name << endl;
            cout << "Due Date: " << task.due_date << endl;
            cout << "Priority: " << task.priority << endl;
            cout << "Description: " << task.description << endl;
            cout << (task.is_completed ? "Status: Completed\n" : "Status: Not Completed\n");
            cout << "----------------------------" << endl;
        }
    }

    if (!found) {
        cout << "No tasks found in this category." << endl;
    }
}

    void Menu::menu(){
    
        while(options!=7){
            cout<<"1. Add Task "<<endl;
            cout<<"2. View Task"<<endl;
            cout<<"3. View Task By Category"<<endl;
            cout<<"4. Mark Task as Complete "<<endl;
            cout<<"5. Delete Task"<<endl;
            cout<<"6. Edit Task "<<endl;
            cout<<"7. Exit"<<endl;

            cin>>options;

            if(options==1){
                T.add_task();
            }

            else if(options==2){
                cout<<"a. All Task "<<endl;
                cout<<"b. Based On Priority "<<endl;
                cin>>sub_options;

                if(sub_options=="a"){
                    T.view_all_task();
                }
                else if(sub_options=="b"){
                    T.view_upcoming_task();
                };

            }
            
            else if(options==3){
                T.filter_category();
            }

            else if(options==4){
                T. mark_complete();
            }
            else if(options==5){
                T.delete_task();
            }
            else if(options==6){
             T.edit_task();
            }
            else if(options==7)
            {
                break;
            }

        };
        };
