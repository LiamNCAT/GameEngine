#include <container\linkedlist.h>

template<typename T>
void LinkedList::insert(T data){
	if(empty()){
		first = new Node;
		first->data = data;
		first->next = NULL;
	}
	
	
}

template<typename T>
bool LinkedList::contains(T data){
	
}

template<typename T>
void LinkedList::delete(T data){
	
}

LinkedList::LinkedList(){
	first = NULL;
}

bool Linkedlist::empty(){
	return first == NULL;
}