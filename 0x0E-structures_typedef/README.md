# Learning about Structures, typedef in c:
> ### what is structure in c:
> > A structure is a user defined data type available in C that allows to combine data items of different kinds
> ### how to creat a struct:
> >You can create a structure by using the struct keyword and declare each of its members inside curly braces.
> 
### code example:
    struct MyStructure {   // Structure declaration
    int myNum;           // Member (int variable)
    char myLetter;       // Member (char variable)
    }; // End the structure with a semicolon
> ### hwo to assign values to your struct:
> > To access members of a structure, use the dot syntax (.):
### code example:
    // Create a structure called myStructure
    struct myStructure {
    int myNum;
    char myLetter;
    };
    
    int main() {
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    
    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    
    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    
    return 0;
    } 

or

    // Create a structure
    struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
    };
    
    int main() {
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};
    
    // Print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
    
    return 0;
    } 

-------

> ### what is typedef keyword in c:
> > The C programming language provides a keyword called typedef, which you can use to give a type a new name.

### code example:
    typedef int hello;
    
    int main(void)
    {
        hello i = 1;
        hello j = 2;
        printf("%d", i + j);
        return (0);
    }

> ### typedef vs #define:
> **#define** is a C-directive which is also used to define the aliases for various data types similar to typedef but with the following differences:
> > - **typedef** is limited to giving symbolic names to types only whereas #define can be used to define alias for values as well, q., you can define 1 as ONE etc.
> > - **typedef** interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.