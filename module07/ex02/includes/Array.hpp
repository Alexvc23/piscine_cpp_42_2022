#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Colors.hpp"


using std::cout;
using std::endl;

template <typename T>
class Array
{
public:
	//? Constructors
	Array() : _size(0), _data(nullptr)
	{
		cout << "\e[0;33mDefault Constructor called of Array\e[0m" << endl;
	}

	Array(const Array &copy) : _size(copy.size()), _data(new T[copy.size()])
	{
		for (size_t i = 0; i < _size; i++)
			_data[i] = copy._data[i];
		cout << "\e[0;33mCopy Constructor called of Array\e[0m" << endl;
	}

	Array(unsigned int size) : _size(size), _data(new T[size])
	{
		cout << "\e[0;33mFields Constructor called of Array\e[0m" << endl;
	}

	//? Destructor
	~Array()
	{
		delete[] _data;
		cout << "\e[0;31mDestructor called of Array\e[0m" << endl;
	}

	//? Operators
	Array &operator=(const Array &other)
	{
		cout << BOLD << "overload operator = called\n" << END;
		if (this != &other)
		{
			delete[] _data;
			_size = other.size();
			_data = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_data = other._data[i];
		}
		return *this;
	}

	//? Elements can be accessed through the subscript operator: [ ].
	T &operator[](unsigned int index)
	{
		if (index >= _size)
		{
			throw std::out_of_range("Index out of range");
		}
		return _data[index];
	}

	const T &operator[](unsigned int index) const
	{
		if (index >= _size)
		{
			throw std::out_of_range("Index out of range");
		}
		return _data[index];
	}

	//? Getters / Setters
	unsigned int size() const
	{
		return _size;
	}
	T *getData() const
	{
		return _data;
	}
private:
	unsigned int _size;
	T *_data;
};

#endif