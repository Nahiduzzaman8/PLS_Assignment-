              1. Fixed Stack Dynamic Arrays
C++: int arr[5];
Size: Fixed
Memory Location: Stack (only valid in the scope of the function)
Resizable: No
Details: The size is fixed at compile-time, and memory is allocated on the stack. It’s a simple, efficient way to work with arrays but with the limitation that the size can’t be changed during runtime.


Python: arr = [0]*5
Size: Logically fixed (but can be resized)
Memory Location: Heap (Python lists are dynamic arrays stored on the heap)
Resizable: No
Details: Python lists are implemented as dynamic arrays. This means they can grow in size when needed, but in this case, it is logically fixed to 5 elements, though it can be changed.



              2. Stack Dynamic Arrays

C++: int* arr = new int[size];
Size: Determined at runtime
Memory Location: Heap (allocated using new)
Resizable: No (though you can manually resize by allocating new memory)
Details: Memory is allocated on the heap, and the size can be determined dynamically at runtime. However, the array itself does not resize automatically.



Python: arr = [0]*size
Size: Determined at runtime
Memory Location: Heap (Python lists)
Resizable: No
Details: Python's list is a dynamically allocated array that grows as needed, but the size is fixed when created in the same way as in C++.



              3. Fixed Heap Dynamic Arrays
C++: int* arr = new int[5];
Size: Fixed
Memory Location: Heap
Resizable: No
Details: Like the previous example, but the memory allocation is on the heap. The array is of a fixed size and does not resize, but it exists on the heap.



Python: array.array('i', [0, 0, 0, 0, 0])
Size: Fixed
Memory Location: Heap
esizable: No
Details: Python uses array.array for more efficient storage of homogeneous data types, similar to arrays in C. However, like in C++, the size is fixed once allocated.



              4. Heap Dynamic Arrays

C++: std::vector<int> arr;
Size: Variable
Memory Location: Heap
Resizable: Yes
Details: std::vector in C++ is a dynamic array that can grow or shrink in size automatically, unlike static arrays. It’s allocated on the heap.


Python: arr = []
Size: Variable
Memory Location: Heap
Resizable: Yes
Details: Python lists behave similarly to C++ vectors, automatically resizing as items are added or removed.
