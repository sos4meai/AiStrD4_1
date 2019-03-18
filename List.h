#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

template <class T>

class List
{
private:
	class Element
	{
	public:
		T data;
		Element* next;
		Element* prev;
		Element(T data = 0, Element* next = nullptr, Element* prev = nullptr)
		{
			this->data = data;
			this->next = next;
			this->prev = prev;
		}
		
	};
	Element* head;
	Element* tail;
	size_t size;

public:
	List();
	~List();

	void push_back(T data);
	void push_front(T data);
	void pop_back();
	void pop_front();
	void insert(T data, size_t position);
	T at(size_t position);
	void remove(size_t position);
	size_t get_size();
	void print_to_console();
	void clear();
	void set(size_t position, T new_data);
	bool isEmpty();

	void input_list();
	bool head_equal(T expected);
	bool tail_equal(T expected);
	bool size_equal(size_t expected);

	friend ostream& operator<<(ostream& output_stream, Element* node)
	{
		cout << "|" << node->data << "|";
		return output_stream;
	}
};



template<class T>
List<T>::List()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

template<class T>
List<T>::~List()
{
	List::clear();
}


template<class T>
void List<T>::push_back(T data)
{
	Element* newElem = new Element(data, nullptr, tail);
	if (head == nullptr)
		head = newElem;
	else
		tail->next = newElem;
	tail = newElem;
	size++;
}

template<class T>
void List<T>::push_front(T data)
{
	Element *newElem = new Element(data, head, nullptr);
	if (head == nullptr)
		tail = newElem;
	else
		head->prev = newElem;
	head = newElem;
	size++;
}

template<class T>
void List<T>::pop_back()
{
	if (head != nullptr)
		if (head != tail)
		{
			Element *new_tail = tail->prev;
			delete tail;
			new_tail->next = nullptr;
			tail = new_tail;
			size--;
		}
		else
		{
			delete head;
			head = nullptr;
			tail = nullptr;
			size--;
		}
	else throw 0;
}

template<class T>
void List<T>::pop_front()
{
	if (head != nullptr)
		if (head != tail)
		{
			Element *new_head = head->next;
			delete head;
			new_head->prev = nullptr;
			head = new_head;
			size--;
		}
		else
		{
			delete head;
			head = nullptr;
			tail = nullptr;
			size--;
		}
	else throw 0;
}

template<class T>
void List<T>::insert(T data, size_t position)
{
	Element *newElem = new Element(data);
	if (position == size)
		List::push_back(data);
	if (position < size)
	{
		if (position == 0)
			List::push_front(data);
		if (position > 0)
		{
			Element* previous_position = head;
			while (position > 1)
			{
				previous_position = previous_position->next;
				position--;
			}
			newElem->next = previous_position->next;
			previous_position->next->prev = newElem;
			previous_position->next = newElem;
			newElem->prev = previous_position;

			size++;
		}
	}
	else throw 1;

}

template<class T>
T List<T>::at(size_t position)
{
	if (position < size)
	{
		Element* current_elem = head;
		while (position != 0)
		{
			current_elem = current_elem->next;
			position--;
		}
		return current_elem->data;
	}
	else throw 1;
}

template<class T>
void List<T>::remove(size_t position)
{
	if (position < size)
	{
		if (position == 0)
			List::pop_front();
		if (position == size - 1)
			List::pop_back();

		if ((position > 0) && (position < size - 1))
		{
			Element* previous_elem = head;
			while (position != 1)
			{
				previous_elem = previous_elem->next;
				position--;
			}
			Element* current_elem = previous_elem->next;
			previous_elem->next = current_elem->next;
			delete current_elem;
			current_elem = nullptr;
			size--;
		}
	}
	else throw 1;
}

template<class T>
size_t List<T>::get_size()
{
	return size;
}

template<class T>
void List<T>::print_to_console()
{
	system("cls");
	Element* current_elem = head;
	cout << "List:  ";
	while (current_elem != nullptr)
	{
		cout << current_elem << "  ";
		current_elem = current_elem->next;
	}
	cout << endl;
	if (head == nullptr)
		cout << "List is empty";
}

template<class T>
void List<T>::clear()
{
	while (head != nullptr)
		List::pop_front();
}

template<class T>
void List<T>::set(size_t position, T new_data)
{
	if (position < size)
	{
		if (position == 0)
			head->data = new_data;
		if (position == size - 1)
			tail->data = new_data;
		if ((position > 0) && (position < size - 1))
		{
			Element* current_elem = head;
			while (position != 0)
			{
				current_elem = current_elem->next;
				position--;
			}
			current_elem->data = new_data;
		}
	}
	else throw 1;
}

template<class T>
bool List<T>::isEmpty()
{
	if (head == nullptr)
		return true;
	return false;
}

template<class T>
void List<T>::input_list()
{
	while (1)
	{
		cout << "\n\n1 push_back   2 push_front   3 pop_back   4 pop_front\n5 insert   6 remove   7 set   8 end\n\n";
		int choice; cin >> choice;
		if (choice == 8) break;
		T data; size_t position;

		try
		{
			switch (choice)
			{
			case 1: cout << "Data: "; cin >> data; List::push_back(data); List::print_to_console(); break;
			case 2: cout << "Data: "; cin >> data; List::push_front(data); List::print_to_console(); break;
			case 3: List::pop_back(); List::print_to_console(); break;
			case 4: List::pop_front(); List::print_to_console(); break;
			case 5: cout << "Data and position: "; cin >> data >> position; List::insert(data, position); List::print_to_console(); break;
			case 6: cout << "Position: "; cin >> position; List::remove(position); List::print_to_console(); break;
			case 7: cout << "Data and position: "; cin >> data >> position; List::set(position, data); List::print_to_console(); break;
			}
		}
		catch (int error)
		{
			system("cls");
			cout << "Try again";
		}

		
	}

}

template<class T>
bool List<T>::head_equal(T expected)
{
	if (head->data == expected)
		return true;
	return false;
}

template<class T>
bool List<T>::tail_equal(T expected)
{
	if (tail->data == expected)
		return true;
	return false;
}

template<class T>
bool List<T>::size_equal(size_t expected)
{
	if (size == expected)
		return true;
	return false;
}
