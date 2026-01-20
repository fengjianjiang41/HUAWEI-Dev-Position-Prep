Standard Template Library (STL) Containers
The C++ STL containers are template-based, meaning they can store almost any data type. They are generally categorized into sequence containers, container adapters, and associative containers. 
Sequence Containers
These containers store elements in a linear sequence and provide methods for accessing them in order. 
std::array: A fixed-size array that stores elements in contiguous memory locations. Its size is determined at compile time.
std::vector: A dynamic array that can automatically grow and shrink in size as elements are added or removed. It provides fast, indexed access to elements, but insertions and deletions can be slower than in other dynamic structures.
std::list: Implemented as a doubly-linked list. It allows efficient insertions and deletions at any position but does not provide direct random access (accessing by index) to elements.
std::forward_list: A singly-linked list, more memory-efficient than std::list, but only allows forward traversal.
std::deque (Double-Ended Queue): A sequence container that allows efficient insertion and deletion of elements at both the beginning and the end. 
Container Adaptors
These are not full-fledged containers but provide different interfaces to existing sequence containers, adapting their functionality for specific purposes. 
std::stack: Implements a Last-In, First-Out (LIFO) data structure. Elements are added and removed from only one end (the "top") using push() and pop() operations.
std::queue: Implements a First-In, First-Out (FIFO) data structure. Elements are added to one end (the "back") and removed from the other (the "front").
std::priority_queue: A queue where each element has a priority. The element with the highest priority is always at the front, ready to be dequeued. 
Associative Containers 
These containers store elements with unique keys (or multiple keys) and are highly optimized for fast searching and retrieval. They typically use self-balancing binary search trees (like Red-Black trees) for storage, keeping elements in a sorted order. 
std::set: Stores a collection of unique elements, ordered by their values.
std::map: Stores elements as key-value pairs, ordered by the keys. It provides efficient retrieval of values based on their associated keys.
std::multiset and std::multimap: Similar to std::set and std::map, respectively, but allow duplicate elements or keys. 
Unordered Associative Containers 
These use hash tables for storage, which provide faster average-case insertion, deletion, and search operations than their ordered counterparts, but do not maintain any specific order of elements. 
std::unordered_set: Stores unique elements in an unordered manner.
std::unordered_map: Stores key-value pairs in an unordered manner. 
