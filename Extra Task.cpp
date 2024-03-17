#include <iostream>
#include <list>
#include <string>

using namespace std;



class Task {
private:
    std::string name;
    bool completed;

public:
    Task(const std::string& taskName) : name(taskName), completed(false) {}

    void markAsCompleted() {
        completed = true;
    }

    std::string getName() const {
        return name;
    }

    bool isCompleted() const {
        return completed;
    }
};

class ToDoList {
private:
    std::string listName;
    std::list<Task> tasks;
    std::list<ToDoList> subLists;

public:
    ToDoList(const std::string& name) : listName(name) {}

    void addTask(const std::string& taskName) {
        tasks.push_back(Task(taskName));
    }

    void addSubList(const ToDoList& subList) {  // Change parameter type to ToDoList
        subLists.push_back(subList);  // Push the provided ToDoList object
    }

    void display(int level = 0) const {
        // Display current list name
        for (int i = 0; i < level; ++i) {
            std::cout << "    ";
        }
        std::cout << "+ " << listName << std::endl;

        // Display tasks
        for (const auto& task : tasks) {
            for (int i = 0; i <= level; ++i) {
                std::cout << "    ";
            }
            std::cout << "- " << task.getName() << (task.isCompleted() ? " (Completed)" : "") << std::endl;
        }

        // Display sub-lists
        for (const auto& subList : subLists) {
            subList.display(level + 1);
        }
    }
};


int main() {
    ToDoList mainList("Main List");
    mainList.addTask("Task 1");
    mainList.addTask("Task 2");

    ToDoList subList1("Sub List 1");
    subList1.addTask("Sub Task 1");
    subList1.addTask("Sub Task 2");

    ToDoList subList2("Sub List 2");
    subList2.addTask("Sub Task A");
    subList2.addTask("Sub Task B");

    mainList.addSubList(subList1);
    mainList.addSubList(subList2);

    mainList.display();

    return 0;
}
