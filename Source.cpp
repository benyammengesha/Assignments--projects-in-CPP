 
#include <iostream>
#include <istream>
#include <fstream>
#include "QueueAsArray.h"
#include "myStack.h"
#include "string"
 
using namespace std;

int main(){
    
	queueType<char> queue1;
	stackType<char> stack1;
	string stringInput2;
	string stringInput1;
	char temp1, temp2, temp;
 
	stack1.initializeStack();
	queue1.initializeQueue();
 
	cout<< "Do You Want to Play?(Y/N)"<< endl;
	cin >> stringInput1;
	if (stringInput1 == "Y")
		cout << " Enter a Line of Text String" << endl;
		while (stringInput1 == "Y" || stringInput1 == "y"){
			cout << " Enter a Line of Text String" << endl;
			cin >> stringInput2;
			int num = stringInput2.length();
			for (int i = 0; i < num; i++){
				temp = tolower(stringInput2[i]);
				stack1.push(temp);
				queue1.addQueue(temp);
			}

			for (int i = 0; i < num; i++){
				temp1 = stack1.top();
				stack1.pop();
				temp2 = queue1.front();
				queue1.deleteQueue();
				if (temp1 != temp2){

					break;
				}

			}

			if (temp1 != temp2)
				cout << "The String You Text Is Not Palindrome" << endl;
			else cout << "The String You Text Is Palindrome" << endl;
			cout << "Do You Want to Play?(Y/N)" << endl;
			cin >> stringInput1;
		}
	
	cout << "See You Later" << endl;
	 
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}