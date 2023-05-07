<h1>malloc, free</h1>

<h2>What are they?</h2>

<p>The malloc function (acronym for "memory allocation") is used to allocate dynamic memory at runtime. This function takes as argument the size in bytes of the memory to be allocated and returns a pointer to the start of the allocated memory. If the memory allocation is successful, malloc returns a valid pointer, otherwise it returns a null pointer (NULL).
The free function is used to free the memory previously allocated with malloc. This function takes as argument a pointer to the beginning of the allocated memory and frees that memory.</p>

<h2>Project objectives</h2>

<li>What is the difference between automatic and dynamic allocation</li>
<li>What is malloc and free and how to use them</li>
<li>Why and when use malloc</li>
<li>How to use valgrind to check for memory leak</li>
