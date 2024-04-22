//#include <iostream>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node* head;
//
//    Node() : data(0), next(nullptr), head(nullptr) {}
//    Node(int d) : data(d), next(nullptr), head(nullptr) {}
//
//    void append(int data) {
//        Node* newNode = new Node(data);
//
//        if (!head) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != nullptr) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//
//    void Search() {
//        int key;
//        Node* temp = head;
//        cout << "Enter the value to search: ";
//        cin >> key;
//        while (temp) {
//            if (temp->data == key) {
//                cout << "Value found." << endl;
//                return;
//            }
//            temp = temp->next;
//        }
//        cout << "Value not found." << endl;
//    }
//
//    void display() {
//        Node* temp = head;
//        while (temp) {
//            cout << temp->data << "->";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//
//    void reverse() {
//        Node* prev = nullptr;
//        Node* current = head;
//        Node* nextNode = nullptr;
//
//        while (current != nullptr) {
//            nextNode = current->next; // Store next node
//            current->next = prev; // Reverse current node's pointer
//            prev = current; // Move pointers one position ahead
//            current = nextNode;
//        }
//        head = prev; // Set the new head to the last node (which was the first node before reversing)
//    }
//};
//
//
//int main() {
//    Node linkedList;
//    int value;
//    cout << "Enter values (-1 to stop):" << endl;
//
//    cin >> value;
//    while (value != -1) {
//        linkedList.append(value);
//        cin >> value;
//    }
//
//    cout << "Original Linked List: ";
//    linkedList.display();
//
//    linkedList.reverse();
//
//    cout << "Reversed Linked List: ";
//    linkedList.display();
//    system("pause");
//    linkedList.Search();
//
//    return 0;
//}
