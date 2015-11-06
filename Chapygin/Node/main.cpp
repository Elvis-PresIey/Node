#include "CNode.h"

void print(CNode *pf) {
	while (pf != 0) {
		std::cout << pf -> val << std::endl;
		pf = pf -> next;
	}
}

void main() {
	CNode *p1 = new CNode;  // 1 список
	CNode *head1 = p1;
	p1 -> val = 1;
	for (int i = 0; i < 4; i++) {
		CNode* tmp = new CNode;
		tmp -> val = i + 2;
		p1 -> next = tmp;
		p1 = p1 -> next;
	}
	p1 -> next = 0;
	print(head1);

	CNode *p2 = new CNode; // 2 список
	CNode *head2 = p2;
	p2 -> val = 1;
	for (int i = 0; i < 4; i++) {
		CNode* tmp = new CNode;
		tmp -> val = 3 * i + 2;
		p2 -> next = tmp;
		p2 = p2 -> next;
	}
	p2 -> next = 0;
	print(head2);

	CNode *p3 = new CNode; // 3 список
	CNode *head3 = p3;

}