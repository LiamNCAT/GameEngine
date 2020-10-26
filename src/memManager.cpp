#include <memManager.h>
#include <stdlib.h>

buffer* init(int capacity, int sz){
	buffer* buff = malloc(sizeof buffer);
	
	buff->buffer = malloc(sz*capacity);
	buff->buffer_end = (char*)buff->buffer+(sz*capacity);
	
	if(buff == NULL){
		return NULL;
	}
	
	buff->amt_of_mem = sz*capacity;
	buff->count = 0;
	
	buff->capacity = capacity;
	
	buff->head = buff->buffer;
	buff->tail = buff->buffer;
	
	return buff;
}

bool push_back(buffer* buf, void* item){
	if(buf->amt_of_mem == 0){
		printf("Buffer Full");
		return false;
	}
	
	int sz = sizeof item;
	memcpy(buf->head, item, sz);
	
	buf->head = (char*) buf->head + sz;
	buf->amt_of_mem -= sz;
	buf->count ++;
	
	return true;
}

void* pop_front(buffer* buf){
	
}