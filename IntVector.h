#ifndef __IntVector__
#define __IntVector__

using namespace std;

class IntVector
{
    private:
    unsigned int _size;     // Stores amount of actual elements in array
    unsigned int _capacity; // Stores array size
    int *_data;             // Pointer for dynamically allocated array of intergers

    public:
    IntVector(unsigned int capacity = 0, int value = 0);    // Constructor
    ~IntVector();                                           // Destructor
    unsigned size() const;                                  // Returns the array size (Actual inputs)
    unsigned capacity() const;                              // Returns array capacity
    bool empty() const;                                     // Returns true if array is empty
    const int& at(unsigned int index) const;                // Returns the value stored at that exact index
    const int& front() const;                               // Returns the value stored at index 0
    const int& back() const;                                // Returns value stored at the last value (Using .back)

};

#endif


