using namespace std;

#include <stdexcept>

#include "IntVector.h"



IntVector::IntVector(unsigned int capacity, int value)
{

    _size = capacity;
    _capacity = capacity;
    _data = nullptr;

    if(capacity > 0)
    {
        _data = new int[capacity];

        for(unsigned int i = 0; i < capacity; i++)
        {

            _data[i] = value;

        }

    }

}

IntVector::~IntVector()
{

    delete[] _data;

}

unsigned int IntVector::size() const
{

    return _size;

}

unsigned int IntVector::capacity() const
{

    return _capacity;

}

bool IntVector::empty() const
{

    return size() == 0;

}

const int& IntVector::at(unsigned int index) const
{

    if(index >= size())
    {
        throw out_of_range("IntVector::at_range_check");
    }
    return _data[index];

}

const int& IntVector::front() const
{

    return _data[0];

}

const int& IntVector::back() const
{

    return _data[size()-1];

}
