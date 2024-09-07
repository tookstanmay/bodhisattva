# **Acknowledgement & Copyright Letter** {#acknowledgement-&-copyright-letter}

I would like to express my sincere gratitude to the following resources that have been invaluable in my learning journey of C++:

* GeeksforGeeks  
* javatpoint  
* cplusplus.com  
* W3Schools  
* InterviewBit (for OOPs interview Questions)

All the code used in this guide is available on a github repository, you can use it as you want.  
Download from below link:

These websites have provided comprehensive tutorials, examples, and explanations, covering a wide range of C++ concepts and topics. Their clear and concise presentations have significantly enhanced my understanding of the language.  
Copyright Notice  
This document is intended for personal use only and is not to be distributed or reproduced without written permission. The content may be subject to copyright laws and regulations. Please respect the intellectual property rights of the original authors and sources.  
You can read as much you want from it.

Email: [velocitytanmay@gmail.com](mailto:velocitytanmay@gmail.com)

# 

# **Index** {#index}

[**Acknowledgement & Copyright Letter	1**](\#acknowledgement-&-copyright-letter)

[**Index	2**](\#index)

[**C++: Data Types	5**](\#c++:-data-types)

[Modifiers	5](\#modifiers)

[Struct	5](\#struct)

[Enum	6](\#enum)

[Union	8](\#union)

[**C++ Pointers	10**](\#c++-pointers)

[Definition of Pointers in C++	10](\#definition-of-pointers-in-c++)

[Pointer to a Pointer	11](\#pointer-to-a-pointer)

[References and Pointers	12](\#references-and-pointers)

[Call-By-Value	13](\#call-by-value)

[Call-By-Reference with a Pointer Argument	13](\#call-by-reference-with-a-pointer-argument)

[Call-By-Reference with a Reference Argument	13](\#call-by-reference-with-a-reference-argument)

[What’s a reference?	13](\#what’s-a-reference?)

[Array names are also pointers in C++	14](\#array-names-are-also-pointers-in-c++)

[Pointer Expressions and Pointer Arithmetic	18](\#pointer-expressions-and-pointer-arithmetic)

[Types of Pointers	19](\#types-of-pointers)

[String literals pointers	19](\#string-literals-pointers)

[Void Pointers	19](\#void-pointers)

[Invalid pointers	19](\#invalid-pointers)

[NULL Pointers	20](\#null-pointers)

[Dangling Pointer	20](\#dangling-pointer)

[Wild Pointer	20](\#wild-pointer)

[Function Pointers	22](\#function-pointers)

[More Knowledge about Pointers	23](\#more-knowledge-about-pointers)

[Array of Function Pointers	23](\#array-of-function-pointers)

[Functions returning pointers	24](\#functions-returning-pointers)

[Difference between pointer to constant, constant pointer and constant pointer to constants	25](\#difference-between-pointer-to-constant,-constant-pointer-and-constant-pointer-to-constants)

[Pointer to Constant	25](\#pointer-to-constant)

[Constant Pointer	25](\#constant-pointer)

[Constant pointer to constant	26](\#constant-pointer-to-constant)

[Malloc, Calloc, Realloc and Free	27](\#malloc,-calloc,-realloc-and-free)

[Malloc	27](\#malloc)

[Calloc	28](\#calloc)

[Free	28](\#free)

[Realloc	29](\#realloc)

[**C++ OOP	31**](\#c++-oop)

[Class	32](\#class)

[Object	33](\#object)

[Access Modifiers	33](\#access-modifiers)

[Friend Class	35](\#friend-class)

[Functions & Types	37](\#functions-&-types)

[Member Functions	37](\#member-functions)

[Inline Functions	38](\#inline-functions)

[Friend Functions	38](\#friend-functions)

[Constructors	43](\#constructors)

[Default Constructors	43](\#default-constructors)

[Parameterized Constructors	43](\#parameterized-constructors)

[Copy Constructors	43](\#copy-constructors)

[Move Constructors	44](\#move-constructors)

[Destructors	44](\#destructors)

[Static Keyword	47](\#static-keyword)

[Static Members	47](\#static-members)

[Static Member Function	50](\#static-member-function)

[‘this’ Pointer	52](\#‘this’-pointer)

[Scope Resolution Operator	53](\#scope-resolution-operator)

[Local Classes	54](\#local-classes)

[Nested Classes	55](\#nested-classes)

[Inheritance	57](\#inheritance)

[Single Level Inheritance	58](\#single-level-inheritance)

[Multi Level Inheritance	59](\#multi-level-inheritance)

[Multiple Inheritance	61](\#multiple-inheritance)

[Avoiding Ambuigity in name resolution	62](\#avoiding-ambuigity-in-name-resolution)

[Hybrid Inheritance	63](\#hybrid-inheritance)

[Aggregation in C++	67](\#aggregation-in-c++)

[Encapsulation	70](\#encapsulation)

[Abstraction	72](\#abstraction)

[Ways to abstract?	72](\#ways-to-abstract?)

[Types of Abstraction?	72](\#types-of-abstraction?)

[Data abstraction	72](\#data-abstraction)

[Control abstraction	72](\#control-abstraction)

[Polymorphism	76](\#polymorphism)

[Compile time polymorphism	76](\#compile-time-polymorphism)

[Function Overloading	76](\#function-overloading)

[Operator Overloading	78](\#operator-overloading)

[Run-Time Polymorphism	80](\#run-time-polymorphism)

[**Exception Handling	85**](\#exception-handling)

[**Files and Streams	89**](\#files-and-streams)

[**Multi-threading in C++	92**](\#multi-threading-in-c++)

[**OOPs Interview Questions	94**](\#oops-interview-questions)

[Basic OOPs Interview Questions	95](\#basic-oops-interview-questions)

[Advanced OOPs Interview Questions	98](\#advanced-oops-interview-questions)

[OOPs Coding Problems	108](\#oops-coding-problems)

# 

# **C++: Data Types** {#c++:-data-types}

## **Modifiers** {#modifiers}

### **Struct** {#struct}

* Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.  
* Unlike an array, a structure can contain many different data types (int, string, bool, etc.).  
* Code

  `struct myDataType { // This structure is named "myDataType"`

    `int myNum;`

    `string myString;`

  `};`

* **Usecases:**  
  * Structs can be used as user-defined datatypes  
  * We can create variables of type struct  
  * Encapsulation of data  
  * Structs can behave like classes in C++, they can have their own constructors and destructors  
  * We can define methods in structs in C++, NOT in C language

### **Enum** {#enum}

* An enum is a special type that represents a group of constants (unchangeable values).  
* Default start from 0, but you can assign start value to starting constant.  
* Code

  *`#include`* `<bits/stdc++.h>`

  *`using`* `namespace std;`


  `enum week {`

      `monday = 1,`

      `tuesday,`

      `wednesday,`

      `thursday,`

      `friday,`

      `saturday,`

      `sunday`

  `};`


  `int main() {`


      `week today = wednesday;`

      `cout << today << endl;`


      `return 0;`

  `}`

* **Usecases:**  
  * Heard of READ, WRITE, EXECUTE? That’s where these are used  
  * Code

    *`#include`* `<bits/stdc++.h>`

    *`using`* `namespace std;`

    

    `enum permission {`

        `EXECUTE = 1,`

        `WRITE = 2,`

        `READ = 4`

    `};`

    

    `int main() {`

    

        `int permission = EXECUTE | READ | WRITE;`

        `cout << permission << endl;`

    

        *`// chmod u=rwx,g=rx,o=r myfile`*

        *`// example "sudo chmod +777 etc/file.network"`*

    

        `return 0;`

    `}`

    

    *`// output`*

    *`// 7`*

### **Union** {#union}

* union is a user-defined datatype in which we can define members of different types of data types just like structures.  
* But one thing that makes it different from structures is that the member variables in a union share the same memory location, unlike a structure that allocates memory separately for each member variable.   
* The size of the union is equal to the size of the largest data type.  
* Like structs unions can have members, constructors and destructors in C++, NOT in C.  
* **Usecases:**  
  * When the available memory is limited, it can be used to achieve memory efficiency.  
  * It is used to encapsulate different types of data members.  
  * It helps in optimizing the performance of applications.  
* If you allocate values to all variables in a union, only the last one retains and others give garbage values  
* Code

  *`#include`*`<bits/stdc++.h>`

  *`using`* `namespace std;`


  `union myunion {`

  `public:`

      `int data;`

      `int age;`

      `char grade;`


  

      `myunion(int d, int a, char g) {`

          `this->age = a;`

          `this->data = d;`

          `this->grade = g;`

      `}`

  `};`


  

  `int main(){`


      `return 0;`

  `}`

We can define anonymous struct, enum and union in a class,

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class student {`  
`public:`  
    `string name;`

    `struct {`  
        `int standard;`  
        `char grade;`  
    `};`

    `enum {`  
        `EXEC = 1,`  
        `READ = 2,`  
        `WRITE = 4`  
    `};`

    `union {`  
        `int enroll;`  
        `int rank;`  
    `};`  
`};`

`int main() {`

    `return 0;`  
`}`

# **C++ Pointers** {#c++-pointers}

Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 

## 

## **Definition of Pointers in C++** {#definition-of-pointers-in-c++}

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`int main() {`

    `int a = 12;`  
    `int *addr = &a;`

    `cout << addr << endl;`  
    `cout << *addr << endl;`

    `return 0;`  
`}`

*`// output`*  
*`// 0x61ff08`*  
*`// 12`*

*Why is there a need to specify data type for pointers as well? Since, it just stores an address then why specify data type? Why can’t use int \* instead of double \* for a double data type?*

The reason we associate data type with a pointer is that it knows how many bytes the data is stored in. When we increment a pointer, we increase the pointer by the size of the data type to which it points.

## **Pointer to a Pointer** {#pointer-to-a-pointer}

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`int main() {`

    `int a = 12;`  
    `int *addr = &a;`  
    `int **b = &addr;`

    `cout << b << endl;`  
    `cout << *b << endl;`  
    `cout << **b << endl;`

    `cout << endl;`  
    `cout << addr << endl;`  
    `cout << *addr << endl;`

    `return 0;`  
`}`

*`// Output`*  
*`// 0x61ff04     // address of b`*  
*`// 0x61ff08     // address of addr, through b`*  
*`// 12           // value of a, through b`*

*`// 0x61ff08     // address of addr`*  
*`// 12           // value of a, through addr`*

## **References and Pointers** {#references-and-pointers}

There are 3 ways to pass C++ arguments to a function:

1. Call-By-Value  
2. Call-By-Reference with a Pointer Argument  
3. Call-By-Reference with a Reference Argument

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`int find_val1(int n) {`  
    `cout << "pass by value: " << n << endl;`

    `return 0;`  
`}`

`int find_val2(int *n) {`  
    `cout << "pass by reference, pointer: " << "address of n: " << n << " value of dereferenced n: " << *n << endl;`

    `return 0;`  
`}`

`int find_val3(int &n) {`  
    `cout << "pass by reference, reference argument: " << "address of n: " << &n << " value of n: " << n << endl;`

    `return 0;`  
`}`

`int main() {`

    `int n = 12;`

    `find_val1(n);       // pass by value`  
    `find_val2(&n);      // pass by pointer`  
    `find_val3(n);       // pass by reference`

    `return 0;`  
`}`

### **Call-By-Value** {#call-by-value}

* **Mechanism**: A copy of the value of the argument is passed to the function.  
* **Behavior**: Any modifications made to the argument within the function do not affect the original value outside the function.  
* **Use Cases**: When you want to pass a value to a function without modifying the original variable.

### **Call-By-Reference with a Pointer Argument** {#call-by-reference-with-a-pointer-argument}

* **Mechanism**: A pointer to the memory location of the argument is passed to the function.  
* **Behavior**: Modifications made to the argument within the function directly affect the original value outside the function.  
* **Use Cases**: When you want to modify the original value of an argument within a function.

### **Call-By-Reference with a Reference Argument** {#call-by-reference-with-a-reference-argument}

* **Mechanism**: A reference to the argument is passed to the function.  
* **Behavior**: Modifications made to the argument within the function directly affect the original value outside the function.  
* **Use Cases**: Similar to Call-By-Reference with a Pointer Argument, but often considered more convenient and safer.

### **What’s a reference?** {#what’s-a-reference?}

Reference means alias. In simple words, we create another name for same variable. We can now perform operations on the same container having two or more names.

### **Array names are also pointers in C++** {#array-names-are-also-pointers-in-c++}

An array name can often be treated as a constant pointer to the first element of the array.

*Are vectors too pointer names?*  
No, they aren’t. C++ internally manages vectors by allocating memory dynamically. Vectors are dynamically resizable class, while arrays aren’t class.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`void tanmay() {`  
    `int arr[] = {1, 2, 3, 4, 5};`  
    `cout << "accessing using normal method: " << endl;`  
    `cout << arr[0] << " " << arr[1] << " " << arr[2] << endl`  
         `<< endl;`

    *`// pointer to arr`*  
    `int *ptr = arr;`

    `cout << "accessing using pointer name dereferencing: " << endl;`  
    `cout << *ptr << " " << *(ptr + 1) << " " << *(ptr + 2) << endl`  
         `<< endl;`

    `cout << "accessing using normal method for pointer name: " << endl;`  
    `cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl`  
         `<< endl;`  
    `cout << "accessing using array name dereferencing: " << endl;`  
    `cout << *(arr) << " " << *(arr + 1) << " " << *(arr + 2) << endl;`  
`}`

`int main() {`

    `tanmay();`

    `return 0;`  
`}`

*`// Output`*  
*`// accessing using normal method:`*  
*`// 1 2 3`*

*`// accessing using pointer name dereferencing:`*  
*`// 1 2 3`*

*`// accessing using normal method for pointer name:`*  
*`// 1 2 3`*

*`// accessing using array name dereferencing:`*  
*`// 1 2 3`*

| Feature | Array | Pointer |
| :---- | :---- | :---- |
| **Declaration** | data\_type array\_name\[size\]; | data\_type \*pointer\_name; |
| **Memory Allocation** | Static allocation (fixed size at compile time) | Dynamic allocation (size can be determined at runtime using new) |
| **Access** | array\_name\[index\] | \*(pointer\_name \+ index) |
| **Size** | Fixed size at compile time | Can be changed at runtime |
| **Arithmetic Operations** | Pointer arithmetic can be applied to arrays | Pointer arithmetic can be applied directly |
| **Initialization** | Can be initialized directly with values | Must be initialized with an address |
| **Passing to Functions** | Passed by value (copy is made) | Passed by reference (original value is modified) |
| **Common Use Cases** | Storing collections of elements with known size | Dynamically allocating memory for unknown size collections, implementing linked lists, and other data structures |

Array name are pointers to first element, but pointers and arrays are different

*`#include`* `<iostream>`

`int main() {`  
    `int arr[5] = {1, 2, 3, 4, 5};`  
    `int *ptr = arr; // Pointer to the first element of the array`

    *`// Accessing elements:`*  
    `std::cout << arr[2] << std::endl;     // Array notation`  
    `std::cout << *(ptr + 2) << std::endl; // Pointer arithmetic`

    *`// Trying to modify the array name (invalid):`*  
    *`// arr = new int[10]; // Error`*

    *`// Modifying the pointer:`*  
    `ptr = new int[10]; // Valid`

    `return 0;`  
`}`

*`// Output`*  
*`// 3`*  
*`// 3`*

Size of pointer remains same for all data types (based on gcc compiler):  
Even though ptr\_arr points to arr, it’s size is 4 bytes.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`int main() {`

    `int a = 0;`  
    `char b = 'a';`  
    `long c = 1l;`  
    `double d = 0.0;`  
    `long long e = 0L;`

    `int *ptra = &a;`  
    `char *ptrb = &b;`  
    `long *ptrc = &c;`  
    `double *ptrd = &d;`  
    `long long *ptre = &e;`

    `cout << sizeof(ptra) << endl`  
         `<< sizeof(ptrb) << endl`  
         `<< sizeof(ptrc) << endl`  
         `<< sizeof(ptrd) << endl`  
         `<< sizeof(ptre) << endl;`

    `int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};`  
    `int *ptr_arr = arr;`

    `cout << sizeof(arr) << endl`  
         `<< sizeof(ptr_arr) << endl;`

    `return 0;`  
`}`

## **Pointer Expressions and Pointer Arithmetic** {#pointer-expressions-and-pointer-arithmetic}

* incremented ( \++ )  
* decremented ( — )  
* an integer may be added to a pointer ( \+ or \+= )  
* an integer may be subtracted from a pointer ( – or \-= )  
* difference between two pointers (p1-p2)

**Note:** Pointer arithmetic is meaningless unless performed on an array.

**Advanced Pointer Notation**

    `int nums[2][3]  =  { { 16, 18, 20 }, { 25, 26, 27 } };`

In general, nums\[ i \]\[ j \] is equivalent to \*(\*(nums+i)+j) 

## **Types of Pointers** {#types-of-pointers}

### **String literals pointers** {#string-literals-pointers}

    `const char *str = "Hello World!";`  
    `cout << str << endl;`

### **Void Pointers** {#void-pointers}

* Void pointers have great flexibility as they can point to any data type. There is a payoff for this flexibility.   
* These pointers cannot be directly dereferenced.   
* They have to be first transformed into some other pointer type that points to a concrete data type before being dereferenced. 

    `int a = 12;`  
    `void *ptr = &a;`  
    `int *next = (int *)ptr;`

    `cout << ptr << " " << &ptr << " " << *next << endl;`

### **Invalid pointers** {#invalid-pointers}

* A pointer should point to a valid address but not necessarily to valid elements (like for arrays). These are called invalid pointers.   
* Uninitialized pointers are also invalid pointers.  
* Here, ptr1 is uninitialized so it becomes an invalid pointer and ptr2 is out of bounds of arr so it also becomes an invalid pointer. (Note: invalid pointers do not necessarily raise compile errors)

    `int *ptr1;`  
    `int arr[10];`  
    `int *ptr2 = arr + 20;`

### **NULL Pointers** {#null-pointers}

A null pointer is a pointer that point nowhere and not just an invalid address. Following are 2 methods to assign a pointer as NULL.

    `int *ptr1 = 0;`  
    `int *ptr2 = NULL;`

### **Dangling Pointer** {#dangling-pointer}

* A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer.   
* Such a situation can lead to unexpected behavior in the program and also serve as a source of bugs in C programs.

    `int *ptr = (int *)malloc(sizeof(int));`

    *`// After below free call, ptr becomes a dangling pointer`*  
    `free(ptr);`  
    `printf("Memory freed\n");`

    *`// removing Dangling Pointer`*  
    `ptr = NULL;`

Reasons for dangling pointer

* Memory deleted  
* Function returning pointer of local variable  
* When variable goes out of scope, eg, defining pointer within small scope

### **Wild Pointer** {#wild-pointer}

* A pointer that has not been initialized to anything (not even NULL) is known as a wild pointer. The pointer may be initialized to a non-NULL garbage value that may not be a valid address. 

`dataType *pointerName;`  
**Advantages of Pointers**

* Pointers reduce the code and improve performance. They are used to retrieve strings, trees, arrays, structures, and functions.  
* Pointers allow us to return multiple values from functions.  
* In addition to this, pointers allow us to access a memory location in the computer’s memory.  
* Functions also have addresses in memory  
* Function names too acts as pointers to their addresses in memory

  *`#include`* `<bits/stdc++.h>`

  *`using`* `namespace std;`


  `void tanmay() {`

      `cout << "Tanmay S." << endl;`

  `}`


  `int main() {`


      `printf("%p\n", main);`

      `printf("%p\n", tanmay);`


      `return 0;`

  `}`


  *`// Output`*

  *`// 0040148E`*

  *`// 00401460`*


### **Function Pointers** {#function-pointers}

* Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.  
* Unlike normal pointers, we do not allocate de-allocate memory using function pointers.  
* A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing \*, the program still works.

  *`#include`* `<bits/stdc++.h>`

  *`using`* `namespace std;`


  `void computer(int n) {`

      `cout << "value of n: " << n << endl;`

  `}`


  `int main() {`


      `void (*ptr)(int) = &computer;`


      `ptr(10);    // either this way`

      `(*ptr)(11); // or this way both ways it works`


      `return 0;`

  `}`

## **More Knowledge about Pointers** {#more-knowledge-about-pointers}

### **Array of Function Pointers** {#array-of-function-pointers}

* Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers.  
* These can be used in place of switch case statements.  
* You can pass pointers to a function as well, and pointer functions in another function as well

  *`#include`* `<bits/stdc++.h>`

  *`using`* `namespace std;`


  `void add(int a, int b) {`

      `cout << "addition: " << (a + b) << endl;`

  `}`


  `void subtract(int a, int b) {`

      `cout << "subtraction: " << (a - b) << endl;`

  `}`


  `void multiply(int a, int b) {`

      `cout << "multiplication: " << (a * b) << endl;`

  `}`


  `int main() {`


      `void (*fun_ptr[])(int, int) = {&add, &subtract, &multiply};`

      `int a = 12, b = 5;`

      `(*fun_ptr[0])(a, b);`

      `(*fun_ptr[1])(a, b);`

      `(*fun_ptr[2])(a, b);`


      `return 0;`

  `}`


  *`// Output`*

  *`// addition: 17`*

  *`// subtraction: 7`*

  *`// multiplication: 60`*

### **Functions returning pointers** {#functions-returning-pointers}

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

*`// instead make x static or global`*  
`int *func() {`  
    `int x = 100;`  
    `int *ptr = &x;`

    `return ptr;`  
`}`  
`int main() {`  
    `int *addr = func();`  
    `fflush(stdin);`

    `printf("%p\n", addr);`

    `return 0;`  
`}`

*`// Output`*  
*`// 0061FEF0`*

### **Difference between pointer to constant, constant pointer and constant pointer to constants** {#difference-between-pointer-to-constant,-constant-pointer-and-constant-pointer-to-constants}

#### **Pointer to Constant** {#pointer-to-constant}

Here, the pointed variable is constant, it can’t change, but the pointer can change and point to another const variable

    `const int high = 100;`  
    `const int *ptr = &high;`  
    `cout << high << " " << *ptr << endl;`

    `const int low = 0;`  
    `ptr = &low;`  
    `cout << low << " " << *ptr << endl;`

#### **Constant Pointer** {#constant-pointer}

This pointer can only hold single address, when tried to change to another memory, it gives read-only variable error

    `int high = 100;`  
    `int *const ptr = &high;`

    `cout << high << " " << *ptr << endl;`

    `int low = 0;`  
    `ptr = &low; // gives error, read-only variable 'ptr'`  
    `cout << low << " " << *ptr << endl;`

The value residing in \*ptr can be changed, but not memory

    `*ptr = 1000;`  
    `cout << *ptr << endl`  
         `<< ptr << endl;`

#### **Constant pointer to constant** {#constant-pointer-to-constant}

Constant value and constant memory in pointer

    `const int high = 100;`  
    `const int low = 0;`

    `const int *const ptr = &high;`  
    `cout << high << " " << *ptr << endl;`

    `ptr = &low;  // gives error, read-only variable 'ptr'`  
    `*ptr = 1000; // assignment of read-only location error`

## **Malloc, Calloc, Realloc and Free** {#malloc,-calloc,-realloc-and-free}

Header file required:  **\<stdlib.h\>**

1. Malloc (Memory Allocation)  
2. Calloc (Contiguous Memory Allocation)  
3. Realloc (Reallocation)  
4. Free (Memory Deallocation)

### 

### **Malloc** {#malloc}

* Memory allocation is used to assign a large chunk of memory and returns a void pointer to it’s base address. It just gives us a large chunk of memory, do whatever you want with it.  
* It takes only size of memory as argument

    *`// gives me a memory block of 4 * 4 = 16 size (as per gcc)`*  
    `int *ptr_malloc = (int *)malloc(4 * sizeof(int));`

    `for (int i = 0; i < 4; i++) {`  
        `ptr_malloc[i] = i + 1;`  
    `}`

    `for (int i = 0; i < 4; i++) {`  
        `cout << ptr_malloc[i] << " ";`  
    `}`  
    `cout << endl;`

### 

### **Calloc** {#calloc}

* Does the same but in a contiguous manner and asks for number of memory blocks with size of each block.  
* It takes number of blocks and size of each blocks as arguments  
* In following case, I’ve used memory using int but assigned to a char pointer

    *`// gives me 5 block of size 4 each = 20 bytes (as per gcc)`*  
    *`// since I'm storing character here, of 1 byte each`*  
    *`// it only uses 1 byte`*  
    `char *ptr_calloc = (char *)calloc(5, sizeof(int));`

    `for (int i = 0; i < 5; i++) {`  
        `ptr_calloc[i] = 'a' + i;`  
    `}`

    `for (int i = 0; i < 5; i++) {`  
        `cout << ptr_calloc[i] << " ";`  
    `}`  
    `cout << endl;`

    `for (int i = 0; i < 5; i++) {`  
        `printf("%p %d\n", (ptr_calloc + i), sizeof(ptr_calloc[i]));`  
    `}`  
    `cout << endl;`

### **Free**  {#free}

Frees up the space or deallocates the space given using malloc or calloc.

    `free(ptr_calloc);`

### **Realloc** {#realloc}

This one is used to change the size of memory issued using malloc or calloc at runtime, it can increase the size or decrease the size.

    `ptr_malloc = (int *)realloc(ptr_malloc, 10 * sizeof(int));`

    `for (int i = 4; i < 10; i++) {`  
        `ptr_malloc[i] = i + 1;`  
    `}`

    `for (int i = 0; i < 10; i++) {`  
        `cout << ptr_malloc[i] << " ";`  
    `}`  
    `cout << endl;`

**Pointer Usecases**

* Dynamic memory allocation  
* Used in data structures like linked lists, trees and graphs where we don’t know the final size of data  
* Used in low level memory operations for writing device drivers  
* Function pointers are used in interrupt handling and callback mechanisms (in real world you don’t see all interrupts coming up at once, they’re executed sequentially one after the other and OS doesn’t create instances of them, it simply uses pointers and addresses to call those interrupt handlers by reference)  
* Used in accessing array elements, array of any dimension

*Are Pointers Integers?*  
No, they’re not. Pointer is an address and a positive hexadecimal number.

*Ways to initialize pointers?*  
Pointer variables are initialized by one of the following ways.

* Static Memory Allocation

    `int data = 10;`  
    `int *ptr = &data; // Pointer to a statically allocated variable`

* Dynamic Memory Allocation

    `int *ptr = (int *)malloc(sizeof(int)); // Allocate memory for an integer`  
    `if (ptr != nullptr) {`  
        `*ptr = 20; // Assign a value to the allocated memory`  
    `}`

# **C++ OOP** {#c++-oop}

**OOP**  
Object Oriented Programming is a paradigm of computer programming that utilize real-world entities to make programs easy to understand to humans. It gives the code an intuitive reasoning to bee more realistic and be a part of natural thinking of human.  
There are some basic concepts that act as the building blocks of OOPs i.e.

* Class  
* Objects  
* Encapsulation  
* Abstraction  
* Polymorphism  
* Inheritance  
* Dynamic Binding  
* Message Passing

## **Class** {#class}

* A class is the building block in whole of the OOPs.  
* It is a user-defined data type and  
* It’s like a blueprint for an object that contains the features and behaviours.  
* Here, features are the data members and behaviours are member functions of that class.  
* Member functions are defined to manipulate these data members  
* These members and functions can only be accessed by creating an instance of that class.  
  * For eg, cars are available in every type everywhere hence we can consider a class of cars with common properties, where  
    * Each car has 4 tyres, their average, max speed, shift mechanism, etc  
    * And each car has functions like increase\_speed, apply\_break, etc

  `class Cars {`

  `public:`

      `int wheels = 4;`

      `int doors;`

      `float speed;`

      `double mileage;`

      `double tank_size_in_ltr;`


      `Cars(int drs, double mlg, double tank_size) {`

          `this->doors = drs;`

          `this->mileage = mlg;`

          `this->tank_size_in_ltr = tank_size;`

      `}`


      `void increase_speed(float acceleration, float time) {`

          `this->speed += (acceleration * time);`

      `}`

  `};`

## **Object** {#object}

* An object is an instance of class, like an entiry having features and behaviours of that class  
* Class itself doesn’t occupy memory on it’s own, but when it’s instance is created (i.e., the object), the object occupies memory  
* Objects are used to carry information and communicate within the program or functionality

    `Cars mustang(2, 16.5, 42.7);`  
    `mustang.speed = 12;`  
    `float time = 12.2;`  
    `float acceleration = 18.2;`

    `mustang.increase_speed(acceleration, time);`  
    `cout << mustang.speed << endl;`

## **Access Modifiers** {#access-modifiers}

* Access modifiers control the access of members and function of a class.  
* They’re keywords and members and functions under them have that level of access.  
* They are of three types:  
  * **Public**  
    * Public members can be accessed outside the class  
  * **Private**  
    * Private members can be accessed only inside the class  
    * Either by member functions of friend functions, not even by classes inside base class  
  * **Protected**  
    * Protected members can be accessed within the class and the derived class (even in multilevel inheritance).  
    * Not even the inner class members can access protected members of base class.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class student {`  
`private:`  
    `string roll_no;`

`public:`  
    `string name;`  
    `int standard;`  
    `char division;`

    `void set_roll(string roll) {`  
        `this->roll_no = roll;`  
    `}`

    `void get_roll() {`  
        `cout << "Roll no. is: " << this->roll_no << endl;`  
    `}`  
`};`

`int main() {`

    `student s1;`

    *`// cannot access as it's private and`*  
    *`// can be accessed inside the class only`*  
    *`// that's why set_roll() and get_roll() are`*  
    *`// able to access and manipulate it`*  
    `s1.roll_no;`

    `return 0;`  
`}`

## **Friend Class** {#friend-class}

* Friend class helps you access the private and protected members & functions of other classes.  
* But they have to have a declaration inside the base class.  
* Placement of a friend class doesn’t get affected even if it’s defined under public, private or protected, when declared inside base class.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class accounts {`  
`private:`  
    `int customer_id;`  
    `int bank_balance = 0;`  
    `int loan_amount = 0;`

`public:`  
    `accounts(int id, int balance, int amount) {`  
        `this->customer_id = id;`  
        `this->bank_balance = balance;`  
        `this->loan_amount = amount;`  
    `}`

    `friend class loans;`  
`};`

`class loans {`  
`public:`  
    `void display(accounts &customer) {`  
        `cout << endl`  
             `<< endl;`

        `cout << "Customer ID: " << customer.customer_id << endl`  
             `<< "Customer Balance: " << customer.bank_balance << endl`  
             `<< "Customer loan amount: " << customer.loan_amount << endl;`

        `cout << endl`  
             `<< endl;`  
    `}`  
`};`

`int main() {`

    `accounts acc1(12345, 10000, 5000);`  
    `loans loan_acc1;`  
    `loan_acc1.display(acc1);`

    `return 0;`  
`}`

*`// Output`*  
*`// Customer ID: 12345`*  
*`// Customer Balance: 10000`*  
*`// Customer loan amount: 5000`*

## **Functions & Types** {#functions-&-types}

### **Member Functions** {#member-functions}

* Member functions can be defined inside the class and outside too.  
* Before defining them outside you’ve to declare them inside the class, otherwise this won’t work.  
* To define them outside, we’ll use scope resolution operator considering class name.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class student {`  
`private:`  
    `string roll_no;`

`public:`  
    `string name;`  
    `int standard;`  
    `char division;`

    `void set_roll(string); // declaring set_roll()`  
    `void get_roll();       // declaring get_roll()`  
`};`

*`// defining set_roll() and get_roll()`*  
*`// outside the scope of class student`*  
`void student::set_roll(string roll) {`  
    `this->roll_no = roll;`  
`}`  
`void student::get_roll() {`  
    `cout << "Roll no. is: " << this->roll_no << endl;`  
`}`

`int main() {`

    `student s1;`

    `s1.name = "Tanmay";`  
    `cout << s1.name << endl;`

    `s1.set_roll("ABCX1211");`  
    `s1.get_roll();`

    `return 0;`  
`}`

### 

### **Inline Functions** {#inline-functions}

* Inline functions are the functions which the compiler doesn’t calls, it simply replaces the function calls with actual code.  
* More like whenever you’ll define inline functions it’ll not call the function **BUT** replace the code in execution with inline function everytime it calls it.  
* Inline functions can be useful when you have better code than compiler for an operation, thus improving performance.  
* These can be defined using an inline keyword before function return-type.

### **Friend Functions** {#friend-functions}

* Just like friend classes, friend functions can help access and manipulate private and protected members of a class.  
* A function can be friendly with multiple classes.  
* There are two ways to define a friend function:  
  * Global Friend function  
    * Declared inside base class and defined outside base class

  *`#include`* `<bits/stdc++.h>`

  *`using`* `namespace std;`


  `class base {`

  `private:`

      `int private_variable;`


  `protected:`

      `int protected_variable;`


  `public:`

      `base(int prvt, int prtc) {`

          `this->private_variable = prvt;`

          `this->protected_variable = prtc;`

      `}`


      `friend void display(base &obj);`

  `};`


  `void display(base &obj) {`

      `cout << endl`

           `<< endl;`


      `cout << "Private variable: " << obj.private_variable << endl`

           `<< "Public variable: " << obj.protected_variable << endl;`


      `cout << endl`

           `<< endl;`

  `}`


  `int main() {`


      `base ball(101, 111);`

      `display(ball);`


      `return 0;`

  `}`

* Friend member function of another class

  *`#include`* `<bits/stdc++.h>`

  *`using`* `namespace std;`


  *`// declaration before to avoid error in another class`*

  *`// as we're using it's object in display function`*

  `class base;`


  *`// another class definition`*

  `class another {`

  `public:`

      `void display(base &obj);`

  `};`


  *`// base class definition`*

  `class base {`

  `private:`

      `int private_variable;`


  `protected:`

      `int protected_variable;`


  `public:`

      `base(int prvt, int prtc) {`

          `this->private_variable = prvt;`

          `this->protected_variable = prtc;`

      `}`


      *`// declaration of display function`*

      `friend void another::display(base &obj);`

  `};`


  *`// definition of display function`*

  *`// look we did defined it the way we define functions whose`*

  *`// definition is outside`*

  *`// class_name::function_name`*

  `void another::display(base &obj) {`

      `cout << endl`

           `<< endl;`


      `cout << "Private variable: " << obj.private_variable << endl`

           `<< "Public variable: " << obj.protected_variable << endl;`


      `cout << endl`

           `<< endl;`

  `}`


  `int main() {`


      `base ball(101, 111);`


      `another game;`

      `game.display(ball);`


      `return 0;`

  `}`

**Advantages of Friend Functions**

* A friend function is able to access members without the need of inheriting the class.  
* The friend function acts as a bridge between two classes by accessing their private data.  
* It can be used to increase the versatility of overloaded operators.  
* It can be declared either in the public or private or protected part of the class.

**Disadvantages of Friend Functions**

* Friend functions have access to private members of a class from outside the class which violates the law of data hiding.  
* Friend functions cannot do any run-time polymorphism in their members.

**Important Points About Friend Functions and Classes**

* Friends should be used only for limited purposes. Too many functions or external classes are declared as friends of a class with protected or private data access lessens the value of encapsulation of separate classes in object-oriented programming.  
* Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.  
* Friendship is not inherited.  
* The concept of friends is not in Java.

**Why do we give semicolons at the end of class?**

* The main reason why semi-colons are there at the end of the class is compiler checks if the user is trying to create an instance of the class at the end of it.   
* Yes, just like structure and union, we can also create the instance of a class at the end just before the semicolon.   
* As a result, once execution reaches at that line, it creates a class and allocates memory to your instance.

  *`#include`* `<bits/stdc++.h>`

  *`using`* `namespace std;`


  `class student {`

  `private:`

      `string roll_no;`


  `public:`

      `string name;`

      `int standard;`

      `char division;`


      `void set_roll(string);`

      `void get_roll();`


      `student() {`

          `cout << "Hey student entry created!" << endl;`

      `}`


  `} student_one; // object instantiated`


  `int main() {`


      `return 0;`

  `}`

## **Constructors** {#constructors}

* Constructor in C++ is a special method that is invoked automatically at the time an object of a class is created.   
* It is used to initialize the data members of new objects generally.   
* The constructor in C++ has the same name as the class or structure.   
* It constructs the values i.e. provides data for the object which is why it is known as a constructor.  
* They are of 4 types:  
  * **Default Constructor**: No parameters. They are used to create an object with default values.  
  * **Parameterized Constructor**: Takes parameters. Used to create an object with specific initial values.  
  * **Copy Constructor**: Takes a reference to another object of the same class. Used to create a copy of an object.  
  * **Move Constructor**: Takes an rvalue reference to another object. Transfers resources from a temporary object.

### **Default Constructors** {#default-constructors}

* A constructor without any arguments or with the default value for every argument is said to be the Default constructor.   
* By default the compiler defines the default constructor itself.  
* If you define an explicit constructor with parameters, then declare an empty constructor with no parameters (for objects with no parameters).

### **Parameterized Constructors** {#parameterized-constructors}

* These constructors have parameters in their definition.  
* Used for overloading default constructors.  
* Used for assigning values to members.

### **Copy Constructors** {#copy-constructors}

* These constructors take the object of their class as parameter and their purpose is to copy the contents of one object to another.  
* By default like other constructors they too exist and created by compiler to copy one object to another.  
* It makes shallow copy, where all the references are kept as it is.  
* In case of pointers, if the first object has its pointers deleted then the second object’s pointers will become dangling pointers as their reference has been deleted.  
* To make deep copy, where even pointers’s copy is created, we need copy constructors.

### **Move Constructors** {#move-constructors}

* Creates a new object by transferring resources from an existing object.  
* Steals resources from the original object, leaving it in a valid but unspecified state.  
* Generally more efficient than the copy constructor as it avoids unnecessary data copying.  
* It makes a deep copy from initial object.

## 

## **Destructors** {#destructors}

* A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor.   
* Destructor has the same name as their class name preceded by a tilde (\~) symbol.  
* It is not possible to define more than one destructor.  
* The destructor is only one way to destroy the object created by the constructor. Hence, destructor cannot be overloaded.  
* It cannot be declared static or const.  
* Destructor neither requires any argument nor returns any value.  
* It is automatically called when an object goes out of scope.   
* Destructor release memory space occupied by the objects created by the constructor.  
* In destructor, objects are destroyed in the reverse of an object creation.

**When destructor is called?**

* Destructor is called when the function ends.  
* Destructor is called when the program ends.  
* Destructor is called when a block containing local variables ends.  
* Destructor is called when a delete operator is called.

**How to call destructors explicitly?**

* Destructor can also be called explicitly for an object.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class student {`  
`private:`  
    `string roll_no;`

`public:`  
    `string name;`  
    `int standard;`  
    `char division;`

    `void set_roll(string);`  
    `void get_roll();`

    `student() {`  
        `cout << "Hey student entry created!" << endl;`  
    `}`

    *`// destructor`*  
    `~student() {`  
        `cout << "destructor called!" << endl;`  
    `}`

`} student_one; // object instantiated`

`int main() {`

    `student s1;`

    *`// explicit destructor calling`*  
    `s1.~student();`

    `return 0;`  
`}`

**Frequently Asked Questions on C++ Constructors & Destructors**

*What Are the Functions That Are Generated by the Compiler by Default, If We Do Not Provide Them Explicitly?*  
The functions that are generated by the compiler by default if we do not provide them explicitly are:

* Default Constructor  
* Copy Constructor  
* Move Constructors  
* Assignment Operator  
* Destructor

*Can We Make the Constructors Private?*  
Yes, in C++, constructors can be made private. This means that no external code can directly create an object of that class.

*How Constructors Are Different from a Normal Member Function?*  
A constructor is different from normal functions in following ways: 

* Constructor has same name as the class itself  
* Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments  
* Constructors don’t have return type  
* A constructor is automatically called when an object is created.  
* It must be placed in public section of class.  
* If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).

*Can We Have More Than One Constructor in a Class?*  
Yes, we can have more than one constructor in a class. It is called Constructor Overloading.

*Can destructor be private?*  
Yes, destructor can be defined as private when we want to control the deletion of the object manually.

## **Static Keyword** {#static-keyword}

### **Static Members** {#static-members}

Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:

* Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.  
* It is initialized before any object of this class is created, even before the main starts outside the class itself.  
* It is visible can be controlled with the class access specifiers.  
* Its lifetime is the entire program.

*`#include`* `<iostream>`  
*`using`* `namespace std;`

*`// creating a dummy class to define the static data member`*  
*`// it will inform when its type of the object will be`*  
*`// created`*  
`class stMember {`  
`public:`  
    `int val;`  
    *`// constructor to inform when the instance is created`*  
    `stMember(int v = 10) : val(v) {`  
        `cout << "Static Object Created" << endl;`  
    `}`  
`};`

*`// creating a demo class with static data member of type`*  
*`// stMember`*  
`class A {`  
`public:`  
    *`// static data member`*  
    `static stMember s;`  
    `A() { cout << "A's Constructor Called " << endl; }`  
`};`

`stMember A::s = stMember(11);`

*`// Driver code`*  
`int main() {`

    *`// Statement 1: accessing static member without creating`*  
    *`// the object`*  
    `cout << "accessing static member without creating the "`  
            `"object: ";`  
    *`// this verifies the independency of the static data`*  
    *`// member from the instances`*  
    `cout << A::s.val << endl;`  
    `cout << endl;`

    *`// Statement 2: Creating a single object to verify if`*  
    *`// the seperate instance will be created for each object`*  
    `cout << "Creating object now: ";`  
    `A obj1;`  
    `cout << endl;`

    *`// Statement 3: Creating multiple objects to verify that`*  
    *`// each object will refer the same static member`*  
    `cout << "Creating object now: ";`  
    `A obj2;`  
    `cout << "Printing values from each object and classname"`  
         `<< endl;`

    `cout << "obj1.s.val: " << obj1.s.val << endl;`  
    `cout << "obj2.s.val: " << obj2.s.val << endl;`  
    `cout << "A::s.val: " << A::s.val << endl;`

    `return 0;`  
`}`

**FAQs on static members?**

*Can static data members be private?*  
Yes, static data members can be private. They follow the same access control rules as regular data members and can be accessed through public member functions of the class.

*Can we initialize a static data member within the class definition?*  
No, static data members must be defined outside the class definition. However, they can be initialized inline if they are of integral or enumeration type (C++17 onwards).

*Can we inherit static data members ?*  
Static data members are class-specific and cannot be inherited. But we can access the static data member in the derived class directly using variable name

*Can we have static member functions in a class?*  
Yes, static member functions can be defined in a class. They can access static data members but cannot access non-static data members or this pointer.

### **Static Member Function** {#static-member-function}

Static Member Function in a class is the function that is declared as static because of which function attains certain properties as defined below:

* A static member function is independent of any object of the class.   
* A static member function can be called even if no objects of the class exist.  
* A static member function can also be accessed using the class name through the scope resolution operator.  
* A static member function can access static data members and static member functions inside or outside of the class.  
* They cannot access non-static members.  
* Static member functions have a scope inside the class and cannot access the current object pointer.  
* You can also use a static member function to determine how many objects of the class have been created.

*`#include`* `<iostream>`  
*`using`* `namespace std;`

`class Box {`  
`private:`  
    `static int length;`  
    `static int breadth;`  
    `static int height;`  
    `int hello;`

`public:`  
    `static void print() {`  
        `cout << "The value of the length is: " << length << endl;`  
        `cout << "The value of the breadth is: " << breadth << endl;`  
        `cout << "The value of the height is: " << height << endl;`  
    `}`  
`};`

*`// initialize the static data members`*  
`int Box ::length = 10;`  
`int Box ::breadth = 20;`  
`int Box ::height = 30;`

`int main() {`

    `Box b;`

    `cout << "Static member function is called through Object name: \n"`  
         `<< endl;`  
    `b.print();`

    `cout << "\nStatic member function is called through Class name: \n"`  
         `<< endl;`  
    `Box::print();`

    `return 0;`  
`}`

## 

## **‘this’ Pointer** {#‘this’-pointer}

* The this pointer is a special pointer that implicitly exists within the scope of a non-static member function of a class. It points to the current object, i.e., the object whose member function is being called.

**How it works**

* When a member function is invoked on an object, the compiler passes the address of that object as a hidden argument to the function.   
* This hidden argument is the this pointer.

**When is it used?**

* **Accessing current object's members**: It's used to differentiate between local variables and member variables with the same name.  
* **Returning the current object**: It's used in method chaining or to return a reference to the current object for further manipulation.  
* **Passing the current object as an argument**: You can pass the this pointer as an argument to other functions.  
* **Operator overloading**: It's used in operator overloading to manipulate objects.

*`#include`* `<iostream>`

`class MyClass {`  
`public:`  
    `int x;`

    `MyClass(int val) : x(val) {}`

    `void display() {`  
        `std::cout << "x: " << x << std::endl;`  
    `}`

    `MyClass &add(int val) {`  
        `x += val;`  
        `return *this; // Returning a reference to the current object`  
    `}`  
`};`

`int main() {`  
    `MyClass obj(10);`  
    `obj.display(); // Output: x: 10`

    *`// method chaining`*  
    `obj.add(5).add(2).display(); // Output: x: 17`  
    `return 0;`  
`}`

## **Scope Resolution Operator** {#scope-resolution-operator}

* Only used for resolution of static members.  
* If you want to use class member, then use *‘this’.*  
* *Scope resolution* and *‘this’* are used for differentiating between class members and explicit variables.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Test {`  
`public:`  
    `static int a;`

    `void func(int a) {`  
        *`// scope resolution for member 'a'`*  
        `cout << Test::a << endl;`  
    `}`  
`};`

`int Test::a = 10;`

`int main() {`

    `Test t1;`  
    `t1.func(12);`

    `return 0;`  
`}`

## **Local Classes** {#local-classes}

* A class declared inside a function becomes local to that function and is called Local Class in C++.  
* A local class name can only be used locally i.e., inside the function and not outside it.  
* The methods of a local class must be defined inside it only.  
* A local class can have static functions but, not static data members.  
* Local classes can access global types, variables, and functions.

*`#include`* `<iostream>`  
*`using`* `namespace std;`

`void fun() {`  
    `class Test { // local to function`  
    `public:`  
        *`// Fine as the method is defined`*  
        *`// inside the local class`*  
        `void method() {`  
            `cout << "Local Class method() called";`  
        `}`  
    `};`

    `Test t;`  
    `t.method();`  
`}`

`int main() {`  
    `fun();`  
    `return 0;`  
`}`  
*// Output*  
*// Local Class method() called*

## **Nested Classes** {#nested-classes}

* Nested classes are the classes which are declared inside other class.  
* It might be possible to declare them outside but definition should be present.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Enclosed {`  
`public:`  
    `int x = 10;`  
    `static const int z = 22;`

    `class Nested1; // nested class declared here`

    `class Nested2 { // nested2 class defined here`  
    `public:`  
        `int xy = 111;`  
    `};`

    `void enc_func(Nested2 *n) {`  
        `cout << "Called from outside Nested2, inside Enclosed: " << n->xy << endl;`  
    `}`  
`};`

*`// nested class defined`*  
`class Enclosed::Nested1 {`  
`public:`  
    `int y = 11;`

    `void func(Enclosed *e) {`  
        `cout << "Called from inside Nested1: " << this->y << endl;`  
        `cout << "Enclosed variable x: " << e->x << endl`  
             `<< endl;`  
    `}`  
`};`

`int main() {`

    `Enclosed e1;`  
    `Enclosed::Nested1 n1;`  
    `Enclosed::Nested2 n2;`

    `n1.func(&e1);`  
    `e1.enc_func(&n2);`

    `return 0;`  
`}`

*`// Output`*  
*`// Called from inside Nested1: 11`*  
*`// Enclosed variable x: 10`*

*`// Called from outside Nested2, inside Enclosed: 111`*

**Difference between Classes and Structures**

| Feature | Class | Structure |
| :---- | :---- | :---- |
| **Default Access Specifier** | Private | Public |
| **Members** | Can have both data members and member functions | Can have both data members and member functions |
| **Inheritance** | Supports multiple inheritance | Supports multiple inheritance |
| **Constructors and Destructors** | Can have constructors and destructors | Can have constructors and destructors |
| **Polymorphism** | Supports polymorphism (virtual functions) | Supports polymorphism (virtual functions) |
| **Common Use Cases** | Modeling real-world entities, encapsulating data and behavior | Grouping related data together for organization |

## **Inheritance** {#inheritance}

Inheritance is the process in which one object can acquire all the properties of its parent object automatically. It is used so that you can reuse, modify and extend the attributes and behaviours which are defined in another class.  
Here, the class which inherits the attributes and behaviours is called the derived class and the one which is being inherited is called as base class.

**Why use inheritance?**  
Inheritance is useful for code reusability. Now you can access the members and functions of parent class without writing the same code again.  
For eg, there is a parent class named Vehicle containing required attributes like doors, tires, colors. You can extend this class to any vehicle type, be it car, bicycle, motorcycle, truck, etc.

C++ supports **five types of inheritance:**

* Single inheritance  
* Multiple inheritance  
* Hierarchical inheritance  
* Multilevel inheritance  
* Hybrid inheritance

Syntax of derived class,

   `class derived_class_name : access_modifier base_class_name {`  
       *`// body of derived_class`*  
   `}`

**Derived\_class\_name**: it is the name of derived class.

**Access\_modifier**: it is the visibility mode which specifies whether we want to inherit features in public manner of private.

* When a class is inherited publicly,  
  * Member Functions can access public & protected variables and functions inside the derived class.  
  * Objects of derived class can access only the public variables and functions.  
* When a class is inherited in protected mode,  
  * Member functions can access only the public & protected variables and functions inside the derived class.  
  * Objects of derived class cannot access any type of data.  
* When a class is inherited in private mode,  
  * Member functions can access only the public & protected variables and functions inside the derived class.  
  * Objects of derived class cannot access anything.

**Base\_class\_name**: it is the name of the class which is being inherited.

By default, the access mode is private if you don’t specify anything.

### **Single Level Inheritance** {#single-level-inheritance}

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Employee {`  
`public:`  
    `int ID;`  
    `float salary;`  
`};`

`class Developer : public Employee {`  
`public:`  
    `float bonus;`

    `Developer(float salary, float bonus) {`  
        `this->salary = salary;`  
        `this->bonus = bonus;`  
    `}`  
`};`

`int main() {`

    `Developer dv1(20000, 1000);`

    `cout << "Salary: " << dv1.salary << endl`  
         `<< "Bonus: " << dv1.bonus << endl;`

    `return 0;`  
`}`  
*`// output`*  
*`// Salary: 20000`*  
*`// Bonus: 1000`*

### **Multi Level Inheritance** {#multi-level-inheritance}

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Boeing {`  
`public:`  
    `vector<string> materials;`  
    `double payload;`  
    `double fuel = 0;`  
    `double velocity = 0;`  
    `double acceleration;`  
    `double wingspan;`

    `void set_velocity(double v) {`  
        `this->velocity = v;`  
    `}`

    `void fill_fuel(double intake) {`  
        `this->fuel = intake;`  
    `}`  
`};`

`class Boeing_Commercial_Planes : public Boeing {`  
`public:`  
    `int passenger_capacity;`  
    `double altitude;`  
    `int parachutes = 20;`  
    `bool auto_pilot = false;`

    `void set_altitude(double alt) {`  
        `this->altitude = alt;`  
    `}`

    `void turn_auto_pilot() {`  
        `this->auto_pilot = !this->auto_pilot;`  
    `}`  
`};`

`class Boeing_747 : public Boeing_Commercial_Planes {`  
`public:`  
    `int engines;`  
    `double range;`

    `void set_engines(int count) {`  
        `this->engines = count;`  
    `}`

    `void set_range(double r) {`  
        `this->range = r;`  
    `}`  
`};`

`int main() {`

    `Boeing_747 New_Delhi_Chicago;`  
    `New_Delhi_Chicago.fill_fuel(1000);`  
    `New_Delhi_Chicago.wingspan = 21.34;`  
    `New_Delhi_Chicago.set_altitude(20000);`  
    `New_Delhi_Chicago.set_engines(4);`

    `cout << "Velocity: " << New_Delhi_Chicago.velocity << endl;`  
    `cout << "Parachutes: " << New_Delhi_Chicago.parachutes << endl;`

    `return 0;`  
`}`

*`// Output`*  
*`// Velocity: 0`*  
*`// Parachutes: 20`*

### **Multiple Inheritance** {#multiple-inheritance}

*`#include`* `<iostream>`  
*`using`* `namespace std;`

`class Vehicle {`  
`public:`  
    `void move() {`  
        `cout << "Vehicle is moving." << endl;`  
    `}`  
`};`

`class Engine {`  
`public:`  
    `void start() {`  
        `cout << "Engine is starting." << endl;`  
    `}`  
`};`

`class Car : public Vehicle, public Engine {`  
`public:`  
    `void display() {`  
        `move();`  
        `start();`  
    `}`  
`};`

`int main() {`  
    `Car car;`  
    `car.display();`  
    `return 0;`  
`}`

*`// output`*  
*`// Vehicle is moving.`*  
*`// Engine is starting.`*

### **Avoiding Ambuigity in name resolution**  {#avoiding-ambuigity-in-name-resolution}

Sometimes in multiple inheritance different classes might be having functions & members with same names. This can lead to ambiguity of which function to call. To resolve this we use class-resolution operator hence stating which function or member to call of which class.

### **Hybrid Inheritance** {#hybrid-inheritance}

It’s a combination of more than one type of inheritances.  
For eg, here we combined multiple and multi-level inheritance.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Vehicle {`  
`public:`  
    `double mileage;`  
    `int doors;`  
    `string color;`  
    `string fuel_type;`  
`};`

`class Car : public Vehicle {`  
`public:`  
    `bool transmission;`  
    `double speed;`

    `void accelerate(double acc, double time) {`  
        `this->speed += (acc * time);`  
    `}`

    `void breaking(double ret, double time) {`  
        `this->speed -= (ret * time);`  
    `}`  
`};`

`class Truck : public Vehicle {`  
`public:`  
    `double capacity_tonnes;`  
    `double ground_clearance;`  
    `int height;`  
    `int length;`  
    `int width;`  
`};`

`class Ford_F150 : public Car, public Truck {`  
`public:`  
    `string model_name;`  
    `double max_torque;`  
    `double rim_size;`  
    `string breaking_type;`

    `Ford_F150() {`  
        `this->model_name = "Ford F150";`  
        `this->max_torque = 650;`  
        `this->capacity_tonnes = 1.474;`  
        `this->transmission = false;`  
        `this->Truck::mileage = 8; // resolving ambuiguity arising as both Car and Truck inherit Vehicle`  
        `this->rim_size = 18;`  
    `}`

    `void print() {`  
        *`// writing between "\033[1m \033[0m" makes text bold`*  
        `cout << "\033[1m Model: \033[0m" << this->model_name << endl;`  
        `cout << "\033[1m Torque: \033[0m" << this->max_torque << " Nm" << endl;`  
        `cout << "\033[1m Capacity: \033[0m" << this->capacity_tonnes * 1000 << " kg" << endl;`  
        `cout << "\033[1m Transmission: \033[0m" << (transmission == true ? "Manual" : "Automatic") << endl;`  
        `cout << "\033[1m Mileage: \033[0m" << this->Truck::mileage << " kmpl" << endl;`  
        `cout << "\033[1m Rim Size: \033[0m" << this->rim_size << " inches" << endl;`  
    `}`  
`};`

`int main() {`

    `Ford_F150 ftruck1;`  
    `ftruck1.print();`

    `return 0;`  
`}`

*`// output`*  
*`// Model: Ford F150`*  
*`// Torque: 650 Nm`*  
*`// Capacity: 1474 kg`*  
*`// Transmission: Automatic`*  
*`// Mileage: 8 kmpl`*  
*`// Rim Size: 18 inches`*  
**Heriarchial Inheritance**

*`#include`* `<iostream>`  
*`using`* `namespace std;`  
`class Shape {`  
`public:`  
    `int a;`  
    `int b;`  
    `void get_data(int n, int m) {`  
        `a = n;`  
        `b = m;`  
    `}`  
`};`

`class Rectangle : public Shape {`  
`public:`  
    `int rect_area() {`  
        `int result = a * b;`  
        `return result;`  
    `}`  
`};`

`class Triangle : public Shape {`  
`public:`  
    `int triangle_area() {`  
        `float result = 0.5 * a * b;`  
        `return result;`  
    `}`  
`};`

`int main() {`

    `Rectangle r;`  
    `Triangle t;`

    `int length = 10, breadth = 10, base = 10, height = 10;`

    `r.get_data(length, breadth);`  
    `int m = r.rect_area();`  
    `cout << "Area of Rectangle: " << m << endl;`

    `t.get_data(base, height);`  
    `float n = t.triangle_area();`  
    `cout << "Area of Triangle: " << n << endl;`  
    `return 0;`  
`}`

*`// Output`*  
*`// Area of Rectangle: 100`*  
*`// Area of Triangle: 50`*

### **Aggregation in C++** {#aggregation-in-c++}

Aggregation is little bit related to inheritance. It simply means that one class depends on another class and they have “**has-a**” relationship between them.  
For example, a car must have an engine.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Engine {`  
`private:`  
    `bool isRunning;`  
    `double horsePower;`  
    `string fuelType;`

`public:`  
    `Engine(double hp, string fuel) : isRunning(false), horsePower(hp), fuelType(fuel) {}`

    `void start() {`  
        `if (isRunning) {`  
            `cout << "Engine is already running." << endl;`  
            `return;`  
        `}`  
        `isRunning = true;`  
        `cout << "Engine started." << endl;`  
    `}`

    `void stop() {`  
        `if (!isRunning) {`  
            `cout << "Engine is already stopped." << endl;`  
            `return;`  
        `}`  
        `isRunning = false;`  
        `cout << "Engine stopped." << endl;`  
    `}`

    `double getHorsePower() {`  
        `return horsePower;`  
    `}`

    `string getFuelType() {`  
        `return fuelType;`  
    `}`  
`};`

`class Car {`  
`private:`  
    `Engine engine;`  
    `string modelName;`  
    `int year;`

`public:`  
    `Car(string model, int yr, double hp, string fuel) : engine(hp, fuel), modelName(model), year(yr) {}`

    `void drive() {`  
        `engine.start();`  
        `cout << modelName << " is driving." << endl;`  
    `}`

    `void stop() {`  
        `engine.stop();`  
    `}`

    `double getHorsePower() {`  
        `return engine.getHorsePower();`  
    `}`

    `string getFuelType() {`  
        `return engine.getFuelType();`  
    `}`

    `void printInfo() {`  
        `cout << "Car Model: " << modelName << endl;`  
        `cout << "Year: " << year << endl;`  
        `cout << "Horse Power: " << engine.getHorsePower() << endl;`  
        `cout << "Fuel Type: " << engine.getFuelType() << endl;`  
    `}`  
`};`

`int main() {`  
    `Car c1("Ford Mustang", 2023, 460, "Gasoline");`  
    `c1.printInfo();`  
    `c1.drive();`  
    `c1.stop();`

    `return 0;`  
`}`

*`// Output`*  
*`// Car Model: Ford Mustang`*  
*`// Year: 2023`*  
*`// Horse Power: 460`*  
*`// Fuel Type: Gasoline`*  
*`// Engine started.`*  
*`// Ford Mustang is driving.`*  
*`// Engine stopped.`*

## **Encapsulation** {#encapsulation}

Encapsulation is combining data and members (that manipulate them) under a single unit. Why?

* Data Hiding  
  * Not letting others know about our data & code  
* Abstraction  
  * Hiding complexity of program from end user, only necessary feature to outside world  
* Code reusability

For Eg, in a company we can divide different functionalities into departments of sections. Say, ‘sales’ and ‘accounts’ sections. Now, if an ‘accounts’ employee wants data of ‘sales’ he/she have to ask from the person handling ‘sales’. Thus we have achieved data hiding here and data reusability (no two copies between departments).

**Features of Encapsulation**

* We need an object to access data members and member functions of a class.  
* C++ is doesn’t implement complete Encapsulation. For complete Encapsulation member functions should not be able to access data members & functions outside the class (in C++ we can access global data members and functions).  
* Encapsulation helps in readability, and code maintenance.  
* Encapsulation helps in controlling access level of data members.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class bank {`  
`private:`  
    `int acc_no;`  
    `string name;`

`public:`  
    `bank(int number, string name) {`  
        `this->acc_no = number;`  
        `this->name = name;`  
    `}`

    `void setAcc(int number) {`  
        `this->acc_no = number;`  
    `}`

    `void getAcc() {`  
        `cout << this->acc_no << endl;`  
    `}`

    `void setName(string name) {`  
        `this->name = name;`  
    `}`

    `void getName() {`  
        `cout << this->name << endl;`  
    `}`  
`};`

`int main() {`

    `bank acc1(12345, "Tanmay, Sharma");`  
    `acc1.getAcc();`  
    `acc1.getName();`

    `acc1.setAcc(121);`  
    `acc1.setName("John, Wick");`

    `acc1.getAcc();`  
    `acc1.getName();`

    `return 0;`  
`}`

*`// Output`*  
*`// 12345`*  
*`// Tanmay, Sharma`*  
*`// 121`*  
*`// John, Wick`*

**What do we do?**

* Create class to combine data and functions  
* Use access modifiers to control level of exposure

## **Abstraction** {#abstraction}

Abstraction is hiding of inner complexity from outside world, providing only required or necessary information only.  
For eg, everyone knows how to drive a car but not everyone knows the inner mechanism.

### **Ways to abstract?** {#ways-to-abstract?}

1. Using Classes  
   Access modifiers for hiding  
     
2. Using Header files  
   No complete code is given, we only know about the utility. For eg, we know how to use pow() function but not know about complexity of math.h library

### **Types of Abstraction?** {#types-of-abstraction?}

#### **Data abstraction** {#data-abstraction}

* Hiding the representation and implementation  
* Utilizing classes and objects for abstraction  
* Eg, the above car example.

#### **Control abstraction** {#control-abstraction}

* Hiding the logic of performing task  
* Utilizing functions and header files  
* Eg, you probably don’t know how which algorithm does STL sort() function uses.

**Advantages of Abstraction?**

* Quite simple, you don’t want others to see your code.  
* You don’t want to confuse your users by showing underlying complexities.  
* You can change structure of code without affecting the outcome of it. Eg, you can change logical schema of database and the user probably won’t know about it.  
* It makes code more readable, you know where to work on code.

**Using Classes & Objects**

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class area {`

    *`// control the access of data members`*  
    *`// such that they can be accesses only`*  
    *`// inside the class`*  
    *`// outside people can only utilize the`*  
    *`// service`*  
`private:`  
    `double radius = 0.0;`  
    `double area = 0.0;`

    *`// outside people can only`*  
    *`// access the services available`*  
    *`// to them`*  
`public:`  
    `void setRadius(double radius) {`  
        `this->radius = radius;`  
    `}`

    `void getArea() {`  
        `area = M_PI * radius * radius;`  
        `cout << "Area of circle is: " << area << endl;`  
    `}`  
`};`

`int main() {`

    `area circle1;`  
    `circle1.setRadius(10.1);`  
    `circle1.getArea();`

    `return 0;`  
`}`

*`// Output`*  
*`// Area of circle is: 320.474`*

**Using Header files**  
Steps

* Create header file “myheader.h”  
* Create cpp file for storing logic “myheader.cpp”  
* Create main function somewhere else other than above files, import header and utilize

`myheader.h`

*`#ifndef`* `MYHEADER_H`  
*`#define`* `MYHEADER_H`

*`const`* `double PI = 3.14159265358979323846;`  
`double calculateArea(double radius);`

*`#endif`*

`myheader.cpp`

*`#include`* `"myheader.h"`

`double calculateArea(double radius) {`  
    `double area = PI * radius * radius;`

    `return area;`  
`}`

`main.cpp`

*`#include`* `"myheader.h"`  
*`#include`* `<iostream>`

*`using`* `namespace std;`

`int main() {`

    `double radius = 100.1;`  
    `double area = calculateArea(radius);`  
    `cout << "Area calculating from header files: " << area << endl;`

    `return 0;`  
`}`  
**Compile your code**

g*\++* *\-*o main main.cpp myheader.cpp

If above command doesn’t work, following might work:

* `g++ -c main.cpp`  
* `g++ -c myheader.cpp`  
* `g++ -o main main.o myheader.o`

## **Polymorphism** {#polymorphism}

* Polymorphism means having different forms  
* A man can be a father, son, brother at the same time  
* Polymorphism is the ability to be available in more than one form

### 

### **Compile time polymorphism** {#compile-time-polymorphism}

* It is called so because the compiler decides which method & operator functionality to use before compilation


#### **Function Overloading** {#function-overloading}

* There can exist multiple functions with same name but differentiated in number of parameters and type of parameters.  
* It is called function overloading as we’re utilizing the same function name for different purposes.  
* It’s said that function overloading only works when there’s difference in number of parameters and type of parameters. Not based on return type. Why?  
* It’s so because function overloading is performed at compile time and compiler distinguished between these functions based on signatures.  
* These signatures has nothing to do with return type. If signatures are different, then functions can be overloaded.

For eg, 

    `int add(int a, int b) {`  
        `return a + b;`  
    }

In above code, the function signature is 

    `add (int, int);`

Function Overloading Example,

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class mathematics {`  
`public:`  
    *`// function to add two variables`*  
    `int add(int a, int b) {`  
        `return a + b;`  
    `}`

    *`// function to add three variables`*  
    `int add(int a, int b, int c) {`  
        `return a + b + c;`  
    `}`  
`};`

`int main() {`

    `mathematics m1;`  
    `cout << "Call from two variable function: " << m1.add(5, 3) << endl;`  
    `cout << "Call from three variable function: " << m1.add(8, 11, 11) << endl;`

    `return 0;`  
`}`

*`// output`*  
*`// Call from two variable function: 8`*  
*`// Call from three variable function: 30`*

#### **Operator Overloading** {#operator-overloading}

* You’ve probably heard of that ‘+’ is used as integer, float addition and as well as string concatenations.  
* Yes, that’s one big example used like billion times. We’ll see how real operator overloading works.  
* In general, if you’ve created a class of objects, you can’t simply add the objects and wish to get a result. Well, that can be done. We can modify our operator to perform some task.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class coordinates {`  
`public:`  
    `int x;`  
    `int y;`

    `coordinates(int inp_x, int inp_y) {`  
        `this->x = inp_x;`  
        `this->y = inp_y;`  
    `}`

    `coordinates() {}; // default constructor`

    *`// real operator overloading`*  
    `coordinates operator+(coordinates const &temp) {`  
        `coordinates res;`  
        `res.x = this->x + temp.x;`  
        `res.y = this->y + temp.y;`  
        `return res;`  
    `}`

    `void print() {`  
        `cout << "X: " << this->x << ", Y: " << this->y << endl;`  
    `}`  
`};`

`int main() {`

    `coordinates cd1(10, 12);`  
    `coordinates cd2(11, 13);`

    *`// we're overloading + here`*  
    *`// and utilizing it to perform`*  
    *`// addition for two objects`*  
    `coordinates cd3 = cd1 + cd2;`  
    `cd3.print();`

    `return 0;`  
`}`

**Functions that can’t be overloaded**

* Functions that differ only by their return type.  
* Static functions.  
* Same parametric functions, say you passed a pointer in one function and an array in another (since array names acts as pointer to first element).  
* Parameters that are different only by a const. Eg, passing *int* and *const int*  is going to be considered same.

### **Run-Time Polymorphism** {#run-time-polymorphism}

* It is called so because the decision of selection which function to call is taken at runtime.  
* It is achieve using virtual functions.  
* Why use virtual functions?  
  * If we don’t use virtual functions compiler simply replaces the implementation of base class function with child class function.  
  * And not using virtual functions is called compile-time overriding.  
* In run-time polymorphism, function signature remains same.  
* In later languages like Java, all functions are virtual by default.  
* Compiler manages pointers for referencing to the required virtual function.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Animal {`  
`public:`  
    *`// we didn't made virtual function`*  
    *`// and hence no child function will be overridden`*  
    `void makeSound() {`  
        `cout << "Animal made sound!" << endl;`  
    `}`  
`};`

`class Dog : public Animal {`  
`public:`  
    `void makeSound() {`  
        `cout << "Dog barks!" << endl;`  
    `}`  
`};`

`class Cat : public Animal {`  
`public:`  
    `void makeSound() {`  
        `cout << "Cat meows!" << endl;`  
    `}`  
`};`

`class Lion : public Animal {`  
`public:`  
    `void makeSound() {`  
        `cout << "Lion Roars!" << endl;`  
    `}`  
`};`

`int main() {`

    `Animal *animals[3] = {new Dog(), new Cat(), new Lion()};`

    `for (auto sound : animals) {`  
        `sound->makeSound();`  
    `}`

    `return 0;`  
`}`

*`// Output`*  
*`// Animal made sound!`*  
*`// Animal made sound!`*  
*`// Animal made sound!`*

But in following code we’ll use virtual functions to call the targeted *makeSound()* function.

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`class Animal {`  
`public:`  
    *`// defining a virtual function`*  
    `virtual void makeSound() {`  
        `cout << "Animal made sound!" << endl;`  
    `}`  
`};`

`class Dog : public Animal {`  
`public:`  
    *`// overriding makeSound()`*  
    `void makeSound() override {`  
        `cout << "Dog barks!" << endl;`  
    `}`  
`};`

`class Cat : public Animal {`  
`public:`  
    *`// overriding makeSound()`*  
    `void makeSound() override {`  
        `cout << "Cat meows!" << endl;`  
    `}`  
`};`

`class Lion : public Animal {`  
`public:`  
    *`// overriding makeSound()`*  
    `void makeSound() override {`  
        `cout << "Lion Roars!" << endl;`  
    `}`  
`};`

`int main() {`

    `Animal *animals[3] = {new Dog(), new Cat(), new Lion()};`

    `for (auto sound : animals) {`  
        `sound->makeSound();`  
    `}`

    `return 0;`  
`}`

*`// Output`*  
*`// Dog barks!`*  
*`// Cat meows!`*  
*`// Lion Roars!`*

**Advantages and Disadvantages of Run-Time function overriding**

| Advantages | Disadvantages |
| :---- | :---- |
| Functions to implement are selected at runtime | Errors can be detected only at run-time (if any) |
| Common functions can be reused as per future requirements | Virtual function calls are quite slower than normal function calls |
| Changes made in base class directly applies those in child class | These procedures are dynamic in nature and add an extra layer of overheads |

**Function Overloading vs Overriding**

| Function Overloading | Function Overriding |
| :---- | :---- |
| Scope is generally same for two overloaded functions | Scope in Overriding is different |
| Function signature changes | Function signature remains same |
| This can be executed without the need for inheritance from parent class | This cannot be executed without inheriting from parent class |
| It is resolved at compile time | It comprises of both Compile-Time and Run-TIme overriding |

**Access parent function from child object,**

    `Animal *animals[3] = {new Dog(), new Cat(), new Lion()};`

    `for (auto sound : animals) {`  
        `sound->Animal::makeSound();`  
        *`// sound->makeSound();`*  
    `}`

# **Exception Handling** {#exception-handling}

Exception Handling in C++ is a process to handle runtime errors. We perform exception handling so the normal flow of the application can be maintained even after runtime errors.

In C++, exception is an event or object which is thrown at runtime. All exceptions are derived from *std::exception* class. It is a runtime error which can be handled. If we don't handle the exception, it prints exception message and terminates the program.

*std::exception*  
Base class for all standard C++ exceptions.  
Provides a virtual member function what() that returns a descriptive string about the exception.

*std::bad\_alloc*  
Thrown when memory allocation fails using new.

*std::bad\_cast*  
Thrown when a type cast operation fails.

*std::bad\_typeid*  
Thrown when a type identification operation fails.

*std::bad\_exception*  
Thrown when an exception is caught that is not a descendant of std::exception.

*std::domain\_error*  
Thrown when a function argument is outside the domain of its definition.

*std::invalid\_argument*  
Thrown when a function argument is invalid.

*std::length\_error*  
Thrown when a string or container is too long.

*std::out\_of\_range*  
Thrown when an index or iterator is out of range.

*std::logic\_error*  
Thrown when a logical error occurs during program execution.

*std::overflow\_error*  
Thrown when an arithmetic operation results in an overflow.

*std::range\_error*  
Thrown when a mathematical operation results in a value outside the range of representable numbers.

*std::underflow\_error*  
Thrown when an arithmetic operation results in an underflow.

*std::runtime\_error*  
Thrown when a runtime error occurs during program execution.

In C++, we use 3 keywords to perform exception handling

**try Block**

* Encloses a block of code that might throw an exception.  
* If an exception is thrown within the try block, the program control immediately jumps to the appropriate catch block.

**catch Block**

* Handles exceptions that are thrown within the corresponding try block.  
* Can specify multiple catch blocks to handle different types of exceptions.  
* The catch block's parameter type must match or be a base class of the exception type thrown.

**throw Statement**

* Used to explicitly throw an exception.  
* Takes an object of a class derived from std::exception as an argument.  
* When an exception is thrown, the program control jumps to the first matching catch block.

*`#include`* `<exception>`  
*`#include`* `<iostream>`  
*`using`* `namespace std;`

`int main() {`  
    `int num1, num2;`

    `try {`  
        `cout << "Enter two numbers: ";`  
        `cin >> num1 >> num2;`

        `if (num2 == 0) {`  
            `throw runtime_error("Division by zero is not allowed.");`  
        `}`

        `int result = num1 / num2;`  
        `cout << "Result: " << result << endl;`  
    `} catch (runtime_error &e) {`  
        `cerr << "Error: " << e.what() << endl;`  
    `}`

    `return 0;`  
`}`

*`// Output`*  
*`// Enter two numbers: 12 0`*  
*`// Error: Division by zero is not allowed.`*

**Custom Exceptions**

*`#include`* `<iostream>`  
*`using`* `namespace std;`

`class MyException : public exception {`  
`public:`  
    `const char *what() const noexcept override {`  
        `return "This is a custom exception";`  
    `}`  
`};`

`int main() {`  
    `try {`  
        `throw MyException();`  
    `} catch (MyException &e) {`  
        `cerr << "Caught custom exception: " << e.what() << endl;`  
    `}`

    `return 0;`  
`}`

*`// Output`*  
*`// Caught custom exception: This is a custom exception`*

# **Files and Streams** {#files-and-streams}

In C++ programming we are using the ***iostream*** standard library, it provides cin and cout methods for reading from input and writing to output respectively.

To read and write from a file we are using the standard C++ library called ***fstream***.

**fstream Library**  
Provides classes for input, output, and input/output operations on files.  
Includes the following classes:

* ifstream: Input file stream (reading from a file).  
* ofstream: Output file stream (writing to a file).

Use the open() member function to open a file.  
Specify the file name and mode (e.g., ios::in, ios::out, ios::app).

// append text to file

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`int main() {`

    `fstream filestream;`

    `filestream.open("file.txt", ios::app);`

    `if (filestream.is_open()) {`  
        `filestream << endl`  
                   `<< "Hello, Tanmay Sharma!" << endl;`

        `filestream.close();`  
    `}`

    `return 0;`  
`}`

// reading from file

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`int main() {`

    `fstream file;`

    `file.open("file.txt", ios::in);`

    *`// one way, reading character by character`*  
    `if (file.is_open()) {`  
        `char ch;`  
        `while (file.get(ch)) {`  
            `cout << ch;`  
        `}`  
        `file.close();`  
    `}`

    `cout << endl;`

    *`// second way, reading line by line`*  
    `file.open("file.txt", ios::in);`  
    `if (file.is_open()) {`  
        `string str;`  
        `while (getline(file, str)) {`  
            `cout << str << endl;`  
        `}`  
        `file.close();`  
    `}`

    `return 0;`  
`}`

// writing to file

*`#include`* `<bits/stdc++.h>`  
*`using`* `namespace std;`

`int main() {`

    `fstream file;`  
    `file.open("file.txt", ios::out);`

    *`// putting a character`*  
    `if (file.is_open()) {`  
        `file.put('A');`  
        `file.close();`  
    `}`

    `file.open("file.txt", ios::out);`

    *`// putting a line`*  
    `if (file.is_open()) {`  
        `file << "Ghostbusters!!" << endl;`  
        `file << 66 << endl;`  
        `file.close();`  
    `}`

    `return 0;`  
`}`

| Feature | Reading | Writing | Appending |
| :---- | :---- | :---- | :---- |
| **Mode** | `ios::in` | `ios::out` | `ios::app` |
| **Operation** | Reads from the file | Writes to file, erases pre-existing data | Starts adding data just after the pointer’s position |
| **File Creation** | File must exist | If file is not present, it creates a new one | Appends to existing and if not present then creates one |

# **Multi-threading in C++** {#multi-threading-in-c++}

Multithreading in C++ is a technique that allows a single program to execute multiple tasks concurrently within a single process. This can improve performance and responsiveness, especially for applications that need to handle multiple tasks simultaneously.

Key Concepts

1. Thread: A thread is a lightweight process that shares the same memory space with other threads within the same process.  
2. Process: A process is a program that runs independently and has its own memory space.  
3. Concurrency: Multiple tasks are executed seemingly simultaneously, but they may not be truly parallel due to time-sharing.  
4. Parallelism: Multiple tasks are executed simultaneously on multiple cores or processors.

Benefits of Multithreading

1. Improved performance: Can speed up applications by utilizing multiple cores or processors.  
2. Responsiveness: Can make applications more responsive by allowing tasks to be executed in parallel.  
3. Modularity: Can break down complex tasks into smaller, more manageable threads.

Challenges of Multithreading

1. Synchronization: Ensuring that threads access shared resources in a safe and consistent manner.  
2. Deadlock: A situation where two or more threads are waiting for each other to release resources, resulting in a standstill.  
3. Race conditions: When multiple threads access shared data simultaneously, leading to unpredictable results.

*`#include`* `<iostream>`  
*`#include`* `<thread>`  
*`#include`* `<unistd.h>`  
*`using`* `namespace std;`

`void taskA() {`  
    `for (int i = 0; i < 10; i++) {`  
        `sleep(1);`  
        `cout << "taskA: " << i << endl;`  
        `fflush(stdout);`  
    `}`  
`}`

`void taskB() {`  
    `for (int i = 10; i < 20; i++) {`  
        `sleep(1);`  
        `cout << "taskB: " << i << endl;`  
        `fflush(stdout);`  
    `}`  
`}`

`int main() {`

    `thread t1(taskA);`  
    `thread t2(taskB);`

    `t1.join();`  
    `t2.join();`  
    `return 0;`  
`}`

// Output  
taskB: 10  
taskA: 0  
taskB: 11  
taskA: 1  
taskA: 2taskB: 12

taskA: 3  
taskB: 13  
taskA: 4  
taskB: 14  
taskA: 5  
taskB: 15  
taskA: 6  
taskB: 16  
taskA: 7  
taskB: 17  
taskA: 8  
taskB: 18  
taskA: 9  
taskB: 19

# **OOPs Interview Questions** {#oops-interview-questions}

OOPs, or Object-Oriented Programming is a programming model or paradigm which revolves around the concept of “OBJECTS”. Objects can be considered as real-world instances of entities like class, that contain some characteristics and behaviors specified in the class template.

In simple language, a class can be considered as the blueprint or template, based on which objects can be created. So the Objects are considered the instance of a class, and are therefore sometimes called “instances”. The term “characteristics” refers to the “what” about the Object, and the term “behavior” refers to the “how” about the Object.

For example, if we consider a car, then based on the OOPs model:

Class \= A specific car model, such as Audi A4, BMW I8, Maruti Suzuki Vitara Brezza, etc.  
Object \= A specific car of any model, like the car you own  
Characteristics \= What is the color of your car? What is the Chassis number of your car? etc  
Behavior \= How to start the car? How to change the gear of the car? etc.  
Characteristics are also known as data, attributes, or properties, and Behaviours are also known as the functions, procedures or methods, in the programming language.

The concept of “objects” allows the OOPs model to easily access, use and modify the instance data and methods, interact with other objects, and define methods in runtime (during the execution of the program). This gives the OOPs model significance and makes it diverse in its implementation.

In fact, the OOPs model is so popular, that many of the most widely used programming languages support and use this Object Oriented Programming or OOPs model, such as Java, C++, Python, C\#, etc.

## **Basic OOPs Interview Questions** {#basic-oops-interview-questions}

*What is the need for OOPs?*  
There are many reasons why OOPs is mostly preferred, but the most important among them are: 

1. OOPs helps users to understand the software easily, although they don’t know the actual implementation.  
2. With OOPs, the readability, understandability, and maintainability of the code increase multifold.  
3. Even very big software can be easily written and managed easily using OOPs.

*What are some major Object Oriented Programming languages?*  
The programming languages that use and follow the Object-Oriented Programming paradigm or OOPs, are known as Object-Oriented Programming languages. Some of the major Object-Oriented Programming languages include:

1. Java  
2. C++  
3. Javascript  
4. Python  
5. PHP

And many more.

*What are some other programming paradigms other than OOPs?*  
Programming paradigms refers to the method of classification of programming languages based on their features. There are mainly two types of Programming Paradigms:

1. Imperative Programming Paradigm  
2. Declarative Programming Paradigm

***Imperative Programming Paradigm***  
Imperative programming focuses on HOW to execute program logic and defines control flow as statements that change a program state. This can be further classified as:

1. Procedural Programming Paradigm: Procedural programming specifies the steps a program must take to reach the desired state, usually read in order from top to bottom.  
2. Object-Oriented Programming or OOP: Object-oriented programming (OOP) organizes programs as objects, that contain some data and have some behavior.  
3. Parallel Programming: Parallel programming paradigm breaks a task into subtasks and focuses on executing them simultaneously at the same time.

***Declarative Programming Paradigm***  
Declarative programming focuses on WHAT to execute and defines program logic, but not a detailed control flow. Declarative paradigm can be further classified into:

1. Logical Programming Paradigm: Logical programming paradigm is based on formal logic, which refers to a set of sentences expressing facts and rules about how to solve a problem  
2. Functional Programming Paradigm: Functional programming is a programming paradigm where programs are constructed by applying and composing functions.  
3. Database Programming Paradigm: Database programming model is used to manage data and information structured as fields, records, and files.

*What is meant by Structured Programming?*  
Structured Programming refers to the method of programming which consists of a completely structured control flow. Here structure refers to a block, which contains a set of rules, and has a definitive control flow, such as (if/then/else), (while and for), block structures, and subroutines.  
Nearly all programming paradigms include Structured programming, including the OOPs model.

*What are the main features of OOPs?*  
OOPs or Object Oriented Programming mainly comprises of the below four features, and make sure you don't miss any of these:

1. Inheritance  
2. Encapsulation  
3. Polymorphism  
4. Data Abstraction

*What are some advantages of using OOPs?*

1. OOPs is very helpful in solving very complex level of problems.  
2. Highly complex programs can be created, handled, and maintained easily using object-oriented programming.  
3. OOPs, promote code reuse, thereby reducing redundancy.  
4. OOPs also helps to hide the unnecessary details with the help of Data Abstraction.  
5. OOPs, are based on a bottom-up approach, unlike the Structural programming paradigm, which uses a top-down approach.  
6. Polymorphism offers a lot of flexibility in OOPs.

*Why is OOPs so popular?*  
OOPs programming paradigm is considered as a better style of programming. Not only it helps in writing a complex piece of code easily, but it also allows users to handle and maintain them easily as well. Not only that, the main pillar of OOPs \- Data Abstraction, Encapsulation, Inheritance, and Polymorphism, makes it easy for programmers to solve complex scenarios. As a result of these, OOPs is so popular.

*What is meant by the term OOPs?*  
OOPs refers to Object-Oriented Programming. It is the programming paradigm that is defined using objects. Objects can be considered as real-world instances of entities like class, that have some characteristics and behaviors.

## **Advanced OOPs Interview Questions** {#advanced-oops-interview-questions}

*What are access specifiers and what is their significance?*  
Access specifiers, as the name suggests, are a special type of keywords, which are used to control or specify the accessibility of entities like classes, methods, etc. Some of the access specifiers or access modifiers include “private”, “public”, etc. These access specifiers also play a very vital role in achieving Encapsulation \- one of the major features of OOPs.

*Are there any limitations of Inheritance?*  
Yes, with more powers comes more complications. Inheritance is a very powerful feature in OOPs, but it has some limitations too. Inheritance needs more time to process, as it needs to navigate through multiple classes for its implementation. Also, the classes involved in Inheritance \- the base class and the child class, are very tightly coupled together. So if one needs to make some changes, they might need to do nested changes in both classes. Inheritance might be complex for implementation, as well. So if not correctly implemented, this might lead to unexpected errors or incorrect outputs.

*What are the various types of inheritance?*  
The various types of inheritance include:

1. Single inheritance  
2. Multiple inheritances  
3. Multi-level inheritance  
4. Hierarchical inheritance  
5. Hybrid inheritance

*What is a subclass?*  
The subclass is a part of Inheritance. The subclass is an entity, which inherits from another class. It is also known as the child class.

*Define a superclass?*  
Superclass is also a part of Inheritance. The superclass is an entity, which allows subclasses or child classes to inherit from itself.

*What is an interface?*  
An interface refers to a special type of class, which contains methods, but not their definition. Only the declaration of methods is allowed inside an interface. To use an interface, you cannot create objects. Instead, you need to implement that interface and define the methods for their implementation. 

*What is meant by static polymorphism?*  
Static Polymorphism is commonly known as the Compile time polymorphism. Static polymorphism is the feature by which an object is linked with the respective function or operator based on the values during the compile time. Static or Compile time Polymorphism can be achieved through Method overloading or operator overloading.

*What is meant by dynamic polymorphism?*  
Dynamic Polymorphism or Runtime polymorphism refers to the type of Polymorphism in OOPs, by which the actual implementation of the function is decided during the runtime or execution. The dynamic or runtime polymorphism can be achieved with the help of method overriding.

*What is the difference between overloading and overriding?*  
Overloading is a compile-time polymorphism feature in which an entity has multiple implementations with the same name. For example, Method overloading and Operator overloading.

Whereas Overriding is a runtime polymorphism feature in which an entity has the same name, but its implementation changes during execution. For example, Method overriding.  
Image

*How is data abstraction accomplished?*  
Data abstraction is accomplished with the help of abstract methods or abstract classes.  
*What is an abstract class?*  
An abstract class is a special class containing abstract methods. The significance of abstract class is that the abstract methods inside it are not implemented and only declared. So as a result, when a subclass inherits the abstract class and needs to use its abstract methods, they need to define and implement them.

*How is an abstract class different from an interface?*  
Interface and abstract classes both are special types of classes that contain only the methods declaration and not their implementation. But the interface is entirely different from an abstract class. The main difference between the two is that when an interface is implemented, the subclass must define all its methods and provide its implementation. Whereas in object-oriented programming, when a subclass inherits from an abstract class with abstract methods, the subclass is generally required to provide concrete implementations for all of those abstract methods in the abstract class unless the subclass itself is declared as abstract.  
Also, an abstract class can contain abstract methods as well as non-abstract methods.

*Explain Inheritance with an example?*  
Inheritance is one of the major features of object-oriented programming, by which an entity inherits some characteristics and behaviors of some other entity and makes them their own. Inheritance helps to improve and facilitate code reuse.

Let me explain to you with a common example. Let's take three different vehicles \- a car, truck, or bus. These three are entirely different from one another with their own specific characteristics and behavior. But. in all three, you will find some common elements, like steering wheel, accelerator, clutch, brakes, etc. Though these elements are used in different vehicles, still they have their own features which are common among all vehicles. This is achieved with inheritance. The car, the truck, and the bus have all inherited the features like steering wheel, accelerator, clutch, brakes, etc, and used them as their own. Due to this, they did not have to create these components from scratch, thereby facilitating code reuse.

*What is an exception?*  
An exception can be considered as a special event, which is raised during the execution of a program at runtime, that brings the execution to a halt. The reason for the exception is mainly due to a position in the program, where the user wants to do something for which the program is not specified, like undesirable input.

*What is meant by exception handling?*  
No one wants its software to fail or crash. Exceptions are the major reason for software failure. The exceptions can be handled in the program beforehand and prevent the execution from stopping. This is known as exception handling.  
So exception handling is the mechanism for identifying the undesirable states that the program can reach and specifying the desirable outcomes of such states.  
Try-catch is the most common method used for handling exceptions in the program.

*What is meant by Garbage Collection in OOPs world?*  
Object-oriented programming revolves around entities like objects. Each object consumes memory and there can be multiple objects of a class. So if these objects and their memories are not handled properly, then it might lead to certain memory-related errors and the system might fail.

Garbage collection refers to this mechanism of handling the memory in the program. Through garbage collection, the unwanted memory is freed up by removing the objects that are no longer needed.

*Can we run a Java application without implementing the OOPs concept?*  
No. Java applications are based on Object-oriented programming models or OOPs concept, and hence they cannot be implemented without it.

However, on the other hand, C++ can be implemented without OOPs, as it also supports the C-like structural programming model.

*What is Compile time Polymorphism and how is it different from Runtime Polymorphism?*  
***Compile Time Polymorphism***: Compile time polymorphism, also known as Static Polymorphism, refers to the type of Polymorphism that happens at compile time. What it means is that the compiler decides what shape or value has to be taken by the entity in the picture.

***Runtime Polymorphism***: Runtime polymorphism, also known as Dynamic Polymorphism, refers to the type of Polymorphism that happens at the run time. What it means is it can't be decided by the compiler. Therefore what shape or value has to be taken depends upon the execution. Hence the name Runtime Polymorphism.

*What is a class?*  
A class can be understood as a template or a blueprint, which contains some values, known as member data or member, and some set of rules, known as behaviors or functions. So when an object is created, it automatically takes the data and functions that are defined in the class.  
Therefore the class is basically a template or blueprint for objects. Also one can create as many objects as they want based on a class.

For example, first, a car’s template is created. Then multiple units of car are created based on that template.

*What is an object?*  
An object refers to the instance of the class, which contains the instance of the members and behaviors defined in the class template. In the real world, an object is an actual entity to which a user interacts, whereas class is just the blueprint for that object. So the objects consume space and have some characteristic behavior.  
For example, a specific car.

*What is encapsulation?*  
One can visualize Encapsulation as the method of putting everything that is required to do the job, inside a capsule and presenting that capsule to the user. What it means is that by Encapsulation, all the necessary data and methods are bind together and all the unnecessary details are hidden to the normal user. So Encapsulation is the process of binding data members and methods of a program together to do a specific job, without revealing unnecessary details.

Encapsulation can also be defined in two different ways:

1. ***Data hiding***: Encapsulation is the process of hiding unwanted information, such as restricting access to any member of an object.  
2. ***Data binding***: Encapsulation is the process of binding the data members and the methods together as a whole, as a class.

*What is Polymorphism?*  
Polymorphism is composed of two words \- “poly” which means “many”, and “morph” which means “shapes”. Therefore Polymorphism refers to something that has many shapes.

In OOPs, Polymorphism refers to the process by which some code, data, method, or object behaves differently under different circumstances or contexts. Compile-time polymorphism and Run time polymorphism are the two types of polymorphisms in OOPs languages.

*How does C++ support Polymorphism?*  
C++ is an Object-oriented programming language and it supports Polymorphism as well:

***Compile Time Polymorphism***: C++ supports compile-time polymorphism with the help of features like templates, function overloading, and default arguments.  
***Runtime Polymorphism***: C++ supports Runtime polymorphism with the help of features like virtual functions. Virtual functions take the shape of the functions based on the type of object in reference and are resolved at runtime.  
*What is meant by Inheritance?*  
The term “inheritance” means “receiving some quality or behavior from a parent to an offspring.” In object-oriented programming, inheritance is the mechanism by which an object or class (referred to as a child) is created using the definition of another object or class (referred to as a parent). Inheritance not only helps to keep the implementation simpler but also helps to facilitate code reuse.

*What is Abstraction?*  
If you are a user, and you have a problem statement, you don't want to know how the components of the software work, or how it's made. You only want to know how the software solves your problem. Abstraction is the method of hiding unnecessary details from the necessary ones. It is one of the main features of OOPs.   
For example, consider a car. You only need to know how to run a car, and not how the wires are connected inside it. This is obtained using Abstraction.

*How much memory does a class occupy?*  
Classes do not consume any memory. They are just a blueprint based on which objects are created. Now when objects are created, they actually initialize the class members and methods and therefore consume memory.

*Is it always necessary to create objects from class?*  
No. An object is necessary to be created if the base class has non-static methods. But if the class has static methods, then objects don’t need to be created. You can call the class method directly in this case, using the class name.

*What is a constructor?*  
Constructors are special methods whose name is the same as the class name. The constructors serve the special purpose of initializing the objects.  
For example, suppose there is a class with the name “MyClass”, then when you instantiate this class, you pass the syntax:  
MyClass myClassObject \= new MyClass();

Now here, the method called after “new” keyword \- MyClass(), is the constructor of this class. This will help to instantiate the member data and methods and assign them to the object myClassObject.

*What are the various types of constructors in C++?*  
The most common classification of constructors includes:

***Default constructor***: The default constructor is the constructor which doesn’t take any argument. It has no parameters.

`class ABC {`  
   `int x;`  
       
   `ABC() {`  
       `x = 0;`  
   `}`  
`}`

***Parameterized constructor***: The constructors that take some arguments are known as parameterized constructors.

 `class ABC {`  
   `int x;`  
       
   `ABC(int y) {`  
       `x = y;`  
   `}`  
`}`

***Copy constructor***: A copy constructor is a member function that initializes an object using another object of the same class.

`class ABC {`  
   `int x;`  
       
   `ABC(int y) {`  
       `x = y;`  
   `}`

   *`// Copy constructor`*  
   `ABC(ABC abc) {`  
       `x = abc.x;`  
   `}`  
`}`  
*What is a copy constructor?*  
Copy Constructor is a type of constructor, whose purpose is to copy an object to another. What it means is that a copy constructor will clone an object and its values, into another object, is provided that both the objects are of the same class.

*What is a destructor?*  
Contrary to constructors, which initialize objects and specify space for them, Destructors are also special methods. But destructors free up the resources and memory occupied by an object. Destructors are automatically called when an object is being destroyed. 

*Are class and structure the same? If not, what's the difference between a class and a structure?*  
No, class and structure are not the same. Though they appear to be similar, they have differences that make them apart. For example, the structure is saved in the stack memory, whereas the class is saved in the heap memory. Also, Data Abstraction cannot be achieved with the help of structure, but with class, Abstraction is majorly used.

## **OOPs Coding Problems** {#oops-coding-problems}

*What is the output of the below code?*

*`#include`* `<iostream>`

*`using`* `namespace std;`  
`class BaseClass1 {`  
`public:`  
    `BaseClass1() { cout << "BaseClass1 constructor called" << endl; }`  
`};`

`class BaseClass2 {`  
`public:`  
    `BaseClass2() { cout << "BaseClass2 constructor called" << endl; }`  
`};`

`class DerivedClass : public BaseClass1, public BaseClass2 {`  
`public:`  
    `DerivedClass() { cout << "DerivedClass constructor called" << endl; }`  
`};`

`int main() {`  
    `DerivedClass derived_class;`  
    `return 0;`  
`}`

*`// Output`*  
*`// BaseClass1 constructor called`*  
*`// BaseClass2 constructor called`*  
*`// DerivedClass constructor called`*

***Reason***:  
The above program demonstrates Multiple inheritances. So when the Derived class’s constructor is called, it automatically calls the Base class's constructors from left to right order of inheritance.

*What will be the output of the below code?*

*`import`* `java.util.*;`

*`class`* `Scaler {`  
    `static int i;`

    `static {`  
        `System.out.println("a");`

        `i = 100;`  
    `}`  
`}`

*`public`* `class CodingTwo {`  
    `static {`  
        `System.out.println("b");`  
    `}`

    `public static void main(String[] args) {`  
        `System.out.println("c");`

        `System.out.println(Scaler.i);`  
    `}`  
`}`

*`// Output`*  
*`// b`*  
*`// c`*  
*`// a`*  
*`// 100`*

***Reason:***  
Firstly the static block inside the main-method calling class will be implemented. Hence ‘b’ will be printed first. Then the main method is called, and now the sequence is kept as expected.

*Predict the output?*

*`#include`* `<iostream>`  
*`using`* `namespace std;`

`class ClassA {`  
`public:`  
    `ClassA(int ii = 0) : i(ii) {}`  
    `void show() { cout << "i = " << i << endl; }`

`private:`  
    `int i;`  
`};`

`class ClassB {`  
`public:`  
    `ClassB(int xx) : x(xx) {}`  
    `operator ClassA() const { return ClassA(x); }`

`private:`  
    `int x;`  
`};`

`void g(ClassA a) { a.show(); }`

`int main() {`  
    `ClassB b(10);`  
    `g(b);`  
    `g(20);`

    `return 0;`  
`}`

*`// Output`*  
*`// i = 10`*  
*`// i = 20`*

***Reason:***  
ClassA contains a conversion constructor. Due to this, the objects of ClassA can have integer values. So the statement g(20) works. Also, ClassB has a conversion operator overloaded. So the statement g(b) also works.

*What will be the output in below code?*

*`public`* `class CodingFour {`  
      `public static void main(String[] arr) {`  
            `System.out.println("Main1");`  
      `}`

      `public static void main(String arr) {`  
            `System.out.println("Main2");`  
      `}`  
`}`

*`// Output`*  
*`// Main1`*

***Reason:***  
Here the main() method is overloaded. But JVM only understands the main method which has a String\[\] argument in its definition. Hence Main1 is printed and the overloaded main method is ignored. 

*Predict the output?*

*`#include`* `<iostream>`  
*`using`* `namespace std;`

`class BaseClass {`  
    `int arr[10];`  
`};`

`class DerivedBaseClass1 : public BaseClass {};`

`class DerivedBaseClass2 : public BaseClass {};`

`class DerivedClass : public DerivedBaseClass1, public DerivedBaseClass2 {};`

`int main(void) {`  
    `cout << sizeof(DerivedClass);`  
    `return 0;`  
`}`

*`// Output`*  
*`// 80`*

If the size of the integer is 4 bytes, then the output will be 80\.

***Reason:***   
Since DerivedBaseClass1 and DerivedBaseClass2 both inherit from class BaseClass, DerivedClass contains two copies of BaseClass. Hence it results in wastage of space and a large size output. It can be reduced with the help of a virtual base class.

*What is the output of the below program?*

*`#include`* `<iostream>`

*`using`* `namespace std;`  
`class A {`  
`public:`  
    `void print() { cout << "Inside A::"; }`  
`};`

`class B : public A {`  
`public:`  
    `void print() { cout << "Inside B"; }`  
`};`

`class C : public B {`  
`};`

`int main(void) {`  
    `C c;`

    `c.print();`  
    `return 0;`  
`}`

*`// Output`*  
*`// Inside B`*

***Reason:***  
The above program implements a Multi-level hierarchy. So the program is linearly searched up until a matching function is found. Here, it is present in both classes A and B. So class B’s print() method is called.   
