#include"list.h"
int main() {
	list<char> l;
	l.insert('A');
	l.insert('B');
	l.insert('C');
	l.insert('D');
	l.insert('E');
	list<char> l2(l);
	l2.reset();
	while (!l2.is_last()) {
		cout << l2.get_next() << " ";
	}
	cout << endl;
	list<char> l1;
	l1 = l2;
	l1.reset();
	while (!l1.is_last()) {
		cout << l1.get_next() << " ";
	}
	cout << endl;
}