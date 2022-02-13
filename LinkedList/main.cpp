#include "AllLibraries.h"
#include "SinglyLinkedList.h"

int main()
{
	SinglyLinkedList a;
	a.AddToHead(12);
	a.AddToTail(11);
	a.AddToTail(11);
	a.AddToTail(11);
	a.AddToTail(12);
	a.AddToTail(12);
	a.AddToTail(12);
	a.AddToTail(12);
	a.AddToTail(13);
	a.AddToTail(13);
	a.AddToTail(13);
	a.AddToTail(13);
	a.AddToTail(13);
	a.Print();
	a.Reverse();
	a.SetAt(15, 2);
	a.Contains(16);
	a.Print();
	a.SortAsc();
	a.Print();
	a.SortDesc();
	a.Print();
	//a.Shuffle();
	a.Print();

	SinglyLinkedList b;
	//b = a.Clone();
	cout << "clone\n";
	b.Print();
	a.Equals(b);
	a.MergeWith(b);
	cout << "merge\n";
	a.Print();
	b.Print();
	b = a;
	a.Print();
	b.Print();
	//cout << b[5] << "\n";
	a += b;
	a.Print();
	b.Print();

	return 0;
}