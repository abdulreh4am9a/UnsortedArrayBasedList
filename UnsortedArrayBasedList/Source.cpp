#include"list.h"
int main() {
	list<char> l;
	l.insert('A');
	l.insert('B');
	l.insert('C');
	l.insert('D');
	l.insert('E');
	cout << l.find('E') << endl;
	cout << l.update('E','G') << endl;
	cout << l.length() << endl;
	cout << l.erase('G') << endl;
	cout << l.length() << endl;
	cout << l.full() << endl;
	cout << l.empty() << endl;
	l.make_empty();
	cout << l.empty() << endl;
}