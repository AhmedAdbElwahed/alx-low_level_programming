# Learning about calloc and realloc in C
> ### what dose calloc do?
>> - allocates the requested memory and returns a pointer to it.
>> - The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.
> 
> ### Declaration:
    void *calloc(size_t nitems, size_t size)
> ### what dose realloc do?
>> - attempts to resize the memory block pointed to by ptr that was previously allocated with a call to malloc or calloc.
>
> ### Declaration:
    void *realloc(void *ptr, size_t size)