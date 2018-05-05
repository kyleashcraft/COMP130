//Purpose: Randomly generate a sorted link lisit, then generate a randoom number and 
//insert it into an appropriate location within the list


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Node {
	int data = 0;
	Node *rlink = nullptr;
	Node *llink = nullptr;
};

int main() {

	srand(time(0));

	const int SIZE = 10;

	Node *first = nullptr;

	first = new Node;

	int numb = 40;

	first->data = numb;

	cout << first->data << " ";

	Node *moving = nullptr;

	moving = new Node;

	numb += rand() % 100;
	moving->data = numb;
	cout << moving->data << " ";

	first->rlink = moving;
	moving->llink = first;

	for (int i = 0; i < SIZE - 1; i++) {
		Node *next = nullptr;
		next = new Node;

		numb += rand() % 100;
		next->data = numb;

		moving->rlink = next;
		next->llink = moving;

		moving = next;
		cout << moving->data << " ";
	}

	int insert = rand() % 1000;

	cout << endl << "Random data to be inserted is: " << insert << endl;

	moving = first;

	for (int i = 0; i < SIZE + 1; i++) {
		if (i == 0 && moving->data > insert) { //if random number is less than first node's data
			Node *add = nullptr;
			add = new Node;

			add->data = insert;
			add->rlink = moving->rlink;
			moving = add->rlink;
			cout << add->data << " ";
		}
		if (moving->rlink == nullptr) { //if its at the end
			if (moving->data < insert) { //and the random number is greater than moving's value, meaning it hasn't been added
				Node *add = nullptr;
				add = new Node;

				add->data = insert;
				add->llink = moving;

				cout << moving->data << " ";
				cout << add->data;
				break;
			}
			
			cout << moving->data;
			break;
		}

		cout << moving->data << " ";

		if (moving->rlink->data > insert && moving->data < insert) {
			Node *add = nullptr;
			add = new Node;

			add->data = insert;
			add->llink = moving;
			add->rlink = moving->rlink;

			cout << add->data << " " << add->rlink->data << " ";

			moving->rlink = add;
			add->rlink->llink = add;

			moving = add->rlink;
		}
	moving = moving->rlink;
	}

	return 0;
}

