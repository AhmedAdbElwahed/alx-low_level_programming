# learning about the arguments to main in c
> arguments to main provide a useful opportunity to give parameters to programs.
> Typically, this facility is used to direct the way the program goes about its task.
> The declaration of main looks like this:
> 
    int main(int argc, char *argv[]);
or

    int main(int argc, char **argv);
> argc: means the arguments count.
> argv: means the arguments vector, it is one dimensional array consists of strings.
> When a program starts, the arguments to main will have been initialized to meet the following conditions:
>> - argc is greater than zero.
>> - argv[argc] is a null pointer.
>> - argv[0] through to argv[argc-1] are pointers to strings whose meaning will be determined by the program.
>> - argv[0] will be a string containing the program's name or a null string if that is not available. Remaining elements of argv represent the arguments supplied to the program. In cases where there is only support for single-case characters, the contents of these strings will be supplied to the program in lower-case.
