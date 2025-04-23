#include <stdexcept>

template <typename T>
Heap<T>::Heap(int initialCapacity) : capacity(initialCapacity), size(0) {
    heapArray = new T[capacity];  // Initialize the dynamic array
}

template <typename T>
Heap<T>::~Heap() {
    delete[] heapArray;  // Free the allocated memory for the heap array
}

template <typename T>
void Heap<T>::push(const T& value) {
   
}

template <typename T>
T Heap<T>::pop() {
   
}

template <typename T>
T Heap<T>::top() const {
    if (size == 0) {
        throw std::out_of_range("Heap is empty");
    }
    return heapArray[0];
}

template <typename T>
bool Heap<T>::isEmpty() const {
    return size == 0;
}

template <typename T>
int Heap<T>::getSize() const {
    return size;
}

template <typename T>
void Heap<T>::bubbleUp(int index) {
    
}

template <typename T>
void Heap<T>::bubbleDown(int index) {
   
}

template <typename T>
void Heap<T>::resize() {
    capacity *= 2;  // Double the capacity
    T* newHeapArray = new T[capacity];  // Create a new larger array

    // Copy elements from the old array to the new array
    for (int i = 0; i < size; i++) {
        newHeapArray[i] = heapArray[i];
    }

    delete[] heapArray;  // Free the old array
    heapArray = newHeapArray;  // Update the heap array to the new one
}