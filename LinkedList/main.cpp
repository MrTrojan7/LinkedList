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
	a.Shuffle();
	a.Print();




	return 0;
}