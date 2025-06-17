
# 📝 Task Manager System (C++ CLI Project)

A fully functional Task Manager built using Object-Oriented Programming (OOP) principles in C++. This command-line interface (CLI) application allows users to manage tasks efficiently, with support for adding, viewing, editing, filtering, prioritizing, and marking tasks as completed.

---

## 🚀 Features

- 📥 **Add Task** — Input task name, category, description, due date, and priority.
- 📃 **View Tasks**
  - View **all tasks**
  - View tasks **based on priority** (highest first using `priority_queue`)
- 🗃️ **Filter by Category** — View tasks grouped by category.
- ✅ **Mark Task as Completed** — Flag tasks as done.
- 📝 **Edit Task** — Modify any attribute: name, category, description, due date.
- ❌ **Delete Task** — Remove a task by name.

---

## 💻 Technologies Used

- **C++** with STL
  - `vector` for storing task objects
  - `unordered_map` for category filtering (extendable)
  - `priority_queue` for task prioritization
- CLI-based Input/Output

---

## 🔍 OOP Concepts Used

| Concept         | Where It's Used                                  |
|-----------------|--------------------------------------------------|
| **Class & Object**  | `Task`, `Menu`                                  |
| **Encapsulation**   | Private data management within classes         |
| **Constructor**     | Task object creation                           |
| **Inheritance (optional)** | Menu controlling Task class               |
| **Polymorphism**    | (Can be extended with virtual base if needed) |

---

## 📷 Sample Menu

```
1. Add Task 
2. View Task
3. View Task By Category
4. Mark Task as Complete 
5. Delete Task
6. Edit Task 
7. Exit
```

---

## 📦 How to Run

1. **Clone the repository**
   ```bash
   git clone https://github.com/your-username/task-manager-system.git
   cd task-manager-system
   ```

2. **Compile and Run**
   ```bash
   g++ main.cpp test.cpp -o taskmanager
   ./taskmanager
   ```

---

## 🧠 Learnings & Highlights

> "Initially, I thought this project would be easier since I had experience with OOP and STL. But implementing each feature forced me to revisit concepts like constructor chaining, I/O management, use of STL containers in real scenarios, and debugging logic for consistent state updates."

- Discovered the importance of `getline()` vs `cin` for multi-word input.
- Learned how to prioritize using `priority_queue` with pairs.
- Understood the value of proper input buffering and task encapsulation.
- Used `cin.ignore()` smartly to clean up newline artifacts during inputs.

---

## 🛠️ Future Improvements

- Add file-based persistence (save/load tasks).
- Enhance due date handling with proper `date` parsing.
- Use flags instead of string hacks for marking completed tasks.
- Integrate unit tests (Google Test or Catch2).

---

## 📬 Contact

Created with ❤️ by [Your Name]

[GitHub](https://github.com/amansh10) | [LinkedIn](https://www.linkedin.com/in/aman-shrestha710/)
