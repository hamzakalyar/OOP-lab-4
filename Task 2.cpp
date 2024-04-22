#include<iostream>
#include<list>

using namespace std;

class Lists {
public:
	list<int>myList;


	void append()
	{
		int values;
		cout << "Enter the values in the list(-1 to stop).";
		cin >> values;


		while (values != -1) {
			myList.push_back(values);
			cin >> values;
		}
	}


	void display()
	{
		cout << "The list is: changes done" << endl << " \n\n ";
		for (int n : myList) {
			cout << n << " ";
		}

	}

	void sort() {
		myList.sort();
	}

	void merge(Lists A, Lists B) {
		myList.merge(A.myList);
		myList.merge(B.myList);
	}

	/*void sort() {
		int a = distance(myList.begin(), myList.end());

		for (int i = 0; i < a - 1; i++) {
			for (int j = 0; j < a - i - 1; j++) {
				if (myList[j] > myList[j + 1]) {
					int temp = myList[j];
					myList[j] = myList[j + 1];
					myList[j + 1] = temp;
				}
			}
		}
	}*/

	/*void merge(Lists A, Lists B) {
			int a = distance(A.myList.begin(), A.myList.end());
					int b = distance(B.myList.begin(), B.myList.end());
							for (int i = 0; i < a; i++) {
										myList.push_back(A.myList[i]);
												}
														for (int i = 0; i < b; i++) {
																	myList.push_back(B.myList[i]);
																			}
																				}	*/

};



int main() {
	Lists A, B, D;
	A.append();
	A.display();
	A.sort();
	cout << "\nAfter sorting the list is: ";
	A.display();
	cout << "\n\n";
	B.append();
	B.display();
	B.sort();
	cout << "\nAfter sorting the list is: ";
	B.display();
	cout << "\nAfter merging the list is: ";
	D.merge(A, B);
	D.display();


	return 0;
}