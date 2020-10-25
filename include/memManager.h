typedef struct
{
    void *buffer;     // data buffer
    void *buffer_end; // end of data buffer
    size_t capacity;  // maximum number of items in the buffer
    size_t count;     // number of items in the buffer
	size_t amt_of_mem; //amount of available memory in the buffer
    void *head;       // pointer to head
    void *tail;       // pointer to tail
} buffer;

buffer* init(int, int);

bool push_back(buffer*);

void* pop_off(buffer*, int);

void clear(buffer*);