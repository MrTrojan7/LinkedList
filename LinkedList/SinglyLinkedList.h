#pragma once
#include "AllLibraries.h"
#include "Sorter.h"
class SinglyLinkedList
{
public:
	struct Node
	{
		int data = 0;
		Node* next = nullptr;
	};

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int count = 0;
	bool IsValidIndex(const int index) const;
	void Reverse(int* arr);
	void ToList(int* arr);
	void Shuffle(int* arr);
public:
	void AddToHead(int data);
	void AddToTail(int data);
	void InsertInto(int data, int position);
	void DeleteFromHead();
	void DeleteFromTail();
	void DeleteByIndex(int position);
	void Clear();
	void Print() const;
	int GetCount() const;
	int IndexOf(int data) const;
	int LastIndexOf(int data) const;
	bool IsEmpty() const;
	void Reverse();
	int* ToArray();
	void SetAt(int value, int index);
	bool Contains(int value);
	void SortAsc();
	void SortDesc();
	void Shuffle();
	bool Equals(const SinglyLinkedList& list);
	SinglyLinkedList Clone();
	void MergeWith(const SinglyLinkedList& list);

};

