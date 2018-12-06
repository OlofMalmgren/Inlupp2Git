#pragma once
#include <iostream>
using namespace std;


template <class Datatype>
class DoubleLinkedlist
{
public:
	DoubleLinkedlist();
	void AddDoubleLinkedList();	
	void AddIteamByIndex(Datatype id, Datatype value);
	Datatype DeleteIteamDoublelinkedList(Datatype id, Datatype value);
	Datatype GetIteamByIndexDoubleLinkedList(Datatype id, Datatype value);
	void ChangeOrderDoubleLinkedList();
	Datatype GetSizeOfDoubleLinkedList();



protected:

	typedef struct
	{
		DATATYPE Value;
		DATATYPE ID;
		struct doublelinkedlist* Next;
		struct doublelinkedlist* Prev;
	}doublelinkedlist;


};

