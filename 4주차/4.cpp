#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* before;
		Node* next;
};

class Link {
	private:
		int size;

	public:
		Node* head;

		void InitSize();
		void InitNode();
		void FirstNode(); // 첫번쨰 노드로 head 이동

		void AddNode(int input);
		void DeleteNode(int index);
		int SearchNode(int index);
		const void PrintList();
		const void PrintSize();
};

void Link::InitSize() {
	size = 0;
}

void Link::InitNode() {
	head = new Node();
}

void Link::FirstNode() {
	while (head -> before != nullptr) 
		head = head -> before;
}

void Link::AddNode(int input) {
	if (size == 0) 
		head -> data = input;
	else {
		Node *addNode = new Node();
		addNode -> data = input;

		while (head -> next != nullptr)
			head = head -> next;

		head -> next = addNode;
		addNode -> before = head;
	}
	size++;
}

void Link::DeleteNode(int index) {
	Node *deleteNode = head;
	
	if (index > 0) {
		for (int i=0; i < index; i++)
			deleteNode = deleteNode -> next;

		deleteNode -> before -> next = deleteNode -> next;
		deleteNode -> next -> before = deleteNode -> before;
	}
	else
		head = deleteNode -> next;
	
	delete deleteNode;

	size--;
}

int Link::SearchNode(int index) {
	for (int i=0; i < size; i++) {
		if (i == index)
			break;
		else
			head = head -> next;
	}

	return head -> data;
}

const void Link::PrintList() {
	if (size == 0)
		cout << "데이터가 존재하지 않습니다.\n";
	else {
		while (head -> next != nullptr) {
			cout << head -> data << '\t';
			head = head -> next;
		}
		cout << head -> data << '\t';
	}
}

const void Link::PrintSize() {
	cout << "Linked List 사이즈: " << size;
}

int main(void) {
	Link link;
	int quit = 1, menu = 0, input = 0, index = 0;
	
	link.InitNode();
	link.InitSize();

	while (quit) {
		cout << "----- 링크드 리스트 프로그램 -----\n\n";
		cout << "1. 데이터 입력\n";
		cout << "2. 데이터 삭제\n";
		cout << "3. 데이터 값 찾기\n";
		cout << "4. 모든 데이터 출력\n";
		cout << "5. 데이터 크기 확인\n";
		cout << "6. 종료\n\n";
		cout << "----------------------------------\n";

		cin >> menu;

		switch (menu) {
			case 1:
				cout << "넣고 싶은 데이터를 입력하세요: ";
				cin >> input;
				link.AddNode(input);
				cout << "입력이 완료되었습니다.\n\n";
				link.FirstNode();
				break;

			case 2:
				cout << "삭제하고 싶은 데이터 인덱스를 입력하세요: ";
				cin >> index;
				link.DeleteNode(index);
				cout << "삭제가 완료되었습니다.\n\n";
				break;

			case 3:
				cout << "찾고 싶은 데이터의 인덱스를 입력하세요: ";
				cin >> index;
				cout << "\n인덱스" << index << "의 값: " << link.SearchNode(index);
				cout << "\n\n탐색을 완료했습니다.\n\n";
				link.FirstNode();
				break;

			case 4:
				link.PrintList();
				cout << "\n\n출력을 완료했습니다.\n\n";
				link.FirstNode();
				break;

			case 5:
				link.PrintSize();
				cout << "\n\n출력을 완료했습니다.\n\n";
				break;

			default:
				cout << "프로그램을 종료합니다.\n";
				quit = 0;
				break;
		}
	}
}
