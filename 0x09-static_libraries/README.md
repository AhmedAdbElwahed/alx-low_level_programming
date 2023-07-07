# learning about static lib in c
> #### what is a library:
> 
>> - A library is a file containing several object files, that can be used as a single entity in a linking phase of a program.
> 
> ### what is static lib:
>> - Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.
> 
> ### how to create a static lib:
>> - The basic tool used to create static libraries is a program called 'ar', for 'archiver'.
>> - In order to create a static library, we can use a command like this:
>>      ar rc libutil.a util_file.o util_net.o util_math.o

