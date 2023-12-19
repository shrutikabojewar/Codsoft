#include <iostream>
#include <vector>

class ToDoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
        std::cout << "Task added successfully!\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
        } else {
            std::cout << "Tasks:\n";
            for (const auto& task : tasks) {
                std::cout << "- " << task << "\n";
            }
        }
    }

    void deleteTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            std::cout << "Task deleted successfully!\n";
        } else {
            std::cout << "Invalid task index.\n";
        }
    }
};

int main() {
    ToDoList todoList;
    int choice;

    do {
        std::cout << "\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string task;
                std::cout << "Enter task: ";
                std::cin.ignore();  // Ignore newline character
                std::getline(std::cin, task);
                todoList.addTask(task);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                int index;
                std::cout << "Enter task index to delete: ";
                std::cin >> index;
                todoList.deleteTask(index);
                break;
            }
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
