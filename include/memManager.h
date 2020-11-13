#include<memory>

using namespace std;

template<typename T>
class MemoryManager{
private:
	unique_ptr<T> buffer;
	size_t head = 0;
	size_t tail = 0;
public:
	MemoryManager();
	void enqueue(T);
	T dequeue();
	bool empty();
	bool full();
}