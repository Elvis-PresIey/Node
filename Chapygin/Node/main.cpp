#include "CNode.h"
#include "Functions.h"
#include <stdlib.h>
#include <time.h>

void main() {

	srand(time(NULL));  // ������������.

	CNode* p1 = new CNode;  // ������������� ���������������� ������ 1.
	CNode* head1 = p1;
	p1 -> val = rand() % 10;
	for (int i = 0; i < rand() % 100; i++) {
		CNode* tmp = new CNode;
		tmp -> val = 10 + rand() % 90 + 100 * i;
		p1 -> next = tmp;
		p1 = p1 -> next;
	}
	p1 -> next = 0;
	
	printf("1st list: ");  // ������ ���������� ������ 1.
	print(head1);

	CNode *p2 = new CNode;  // ������������� ���������������� ������ 2.
	CNode *head2 = p2;
	p2 -> val = rand() % 10;
	for (int i = 0; i < rand() % 100; i++) {
		CNode* tmp = new CNode;
		tmp -> val = 10 + rand() % 90 + 100 * i;
		p2 -> next = tmp;
		p2 = p2 -> next;
	}
	p2 -> next = 0;
	
	printf("2nd list: ");  // ������ ���������� ������ 2.
	print(head2);

	printf("Merged list: ");  // ������ ������������� ������.
	print(merge(head1, head2));
}
