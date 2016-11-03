#ifndef PQ_ADA
#define PQ_ADA
#include <queue>
#include <vector>
#include "container.h"
#include "state.h"

template <class T, class C>
class priority_queue_adaptor
	: public container<T> {
private:
	std::priority_queue<T, vector<T>, C> *s;
public:
	priority_queue_adaptor();
	~priority_queue_adaptor();
    void pop();
    void push(T);
    T top() const;
    unsigned int size();
};

template <class T, class C>
priority_queue_adaptor<T, C>::priority_queue_adaptor() {
	this->s = new std::priority_queue<T, vector<T>, C>();
}

template <class T, class C>
priority_queue_adaptor<T, C>::~priority_queue_adaptor() {
	delete this->s;
}

template <class T, class C>
void priority_queue_adaptor<T, C>::pop() {
	this->s->pop();
}

template <class T, class C>
void priority_queue_adaptor<T, C>::push(T element) {
	this->s->push(element);
}

template <class T, class C>
T priority_queue_adaptor<T, C>::top() const{
	return this->s->top();
}

template <class T, class C>
unsigned int priority_queue_adaptor<T, C>::size() {
	return this->s->size();
}
#endif /* PD_ADA */
