C is a low-level (but once regarded high level) systems programming language. The C language gives you complete control over the memory space of your process, and ability to write complex control structures to work with that memory, and access to the kernel API for the system you're on.

C is hard.
But, C also gives you the ability to shoot yourself in the foot. When you make a mess, you need to clean it up. C doesn't make any assumptions for you, if you say you know what you're doing... then thats it. The C language will let you keep going. If you malloc from the heap, you better free it. If you create a buffer for user memory, you better hope the data is the right size.

... so why bother?
While learning C is difficult, the language will make it easier to learn other languages. Having an understand at such a low level of how the computer works will make learning other languages like Python and Javascript SO much easier.

-------------------------------------------------------- |||| --------------------------------------------------------------- ||||

C is a language that is unlike many other languages. C does not have a garbage collector, or a live runtime, or really anything going on versus exactly what you tell it to do.

Interpreted vs Compiled
C is a compiled language, meaning when "compiled", or converted to machine code, the compiler converts the human readable code into code that the processor is able to understand. This is different than languages like Python that are interpreted, meaning an interpreter written in a compiled language reads and executes the code in a sandbox. This comes with a performance hit, but generally makes the code safer and easier to trust.

Garbage Collection
Unlike languages like Go that depend on live garbage collection to clean up memory leaks, C does not have this. This manifests in two forms. The first is positive, where C has a significant performance benefit from not having to run the garbage collection algorithm constantly to check for lost memory. But, on the other hand, the language depends on the user to free the memory that it no longer needs. This is very hard to do correctly, even for veteran programmers.

Strong vs Weak Typing
While the answer to this is generally a holy war, C is a weakly typed language. While the types of the language are defined at compile time, the actual type can be converted later on in the code through type casting. Because the types are not enforced by the compiler throughout the life of the source code, the language is considered to be weakly typed.

python interpreter language => machine code => interpreter for something else
c is interpereter for cpu compiler
java with jvm (machine code)

c => no garbage collector is a win (learn to be a psy destroyer jeje) programming responsible to memory leak , c is memory safe language? no necc..., no violate buffer memory
------------------------------------------------||||| ---------------------------------------------------------

c is easy to access whatever you want.

Is C Still Relevant in Today's World?
...yes. Next question. like antirez be a c programming linux dev

Just Kidding
But seriously, yes, C is still an extremely relevant language and shows no signs of going away any time soon, despite the language being over 50 years old. The language has stood the test of time because of the power and performance the language brings to the developer fairly simply.

BUT WHAT ABOUT RUST?!
Yes, we all understand that there are other languages that are gaining more and more traction every day. But, this doesn't mean C is going away. There is still C in the operating system you're using, the browser you're in, your router, your microwave. There is C LITERALLY EVERYWHERE.

$$
Also don't forget, even if the language is old, there's money to be made in languages that don't get a lot of love. Looking at you COBOL....


php - c#
c     =>  golang (100k) singapore || korean || europe


works hard as fuck
Introduction to Variables
What is a variable?
Variables are locations in memory used in programming languages to hold information relevant to the program, to eventually be displayed to the user or impact the control flow of the program.

Why do I need variables?
Lets take for example the project for this course, our employee database. Any information that we want to store about the employee will have to be stored in a variable. This is unavoidable.

How do variables in C work?
In C, all variables are declared in the following piece of code, known as a declaration.

type name = initial value;

This expression creates a variable of type type, which has the name name, and contains the value initial value. The type will be used to describe what type of information is in that variable. For example, an int is used to store numbers. We will discuss additional variable types in other lessons.

int personID = 1;

This code creates a variable whose type is an integer, and name is personID. It's extremely important to give our variables meaningful names so we know what they do. Otherwise, when we go back to read our code, or god forbid someone ELSE reads our code, we'll have no idea what our code is doing.


Variable Scope Rules
What is scope?
Scope is a region in a program that is able to access a particular variable or set of variables in memory.

Why do I need to know about scope?
Variable scope in C affects what parts of the code can access our variables, and will eventually inform how we structure our program.

How does variable scope work in C?
In C, there are two primary types of scope. Local and Global scope.

Local Scope
Local Scope is defined by the region inside of the parenthesis of a function, and defines where the program can access variables. For example, here we define a variable called personID. Because personID is declared within main, personID can later be modified in that function. The variable is "in scope."

int main()
{
    int personID = 0;
    personID += 1;
}

With a functions local scope, we can also create regions of sub-scope where we can create additional variables that cannot be affected by the outside scope.

int main()
{
    int personID = 0;
    personID += 1;
    {
        // this will not affect the other personID
        int personID = 0;
    }
}

Global Scope
When a variable is declared outside of the confines of a function, all regions of code can touch that variable. Because everyone can access it, that variable is in global scope.

int g_NumPersons = 0;

int main()
{
    int personID = 0;
    personID += 1;
}

Here, g_NumPersons is in global scope. This is generally accepted as bad practice, because tracking the logic used in this variable against all lines of code is hard to do, and can lead to logic errors


Variable Scope Rules
What is scope?
Scope is a region in a program that is able to access a particular variable or set of variables in memory.

Why do I need to know about scope?
Variable scope in C affects what parts of the code can access our variables, and will eventually inform how we structure our program.

How does variable scope work in C?
In C, there are two primary types of scope. Local and Global scope.

Local Scope
Local Scope is defined by the region inside of the parenthesis of a function, and defines where the program can access variables. For example, here we define a variable called personID. Because personID is declared within main, personID can later be modified in that function. The variable is "in scope."

int main()
{
    int personID = 0;
    personID += 1;
}

With a functions local scope, we can also create regions of sub-scope where we can create additional variables that cannot be affected by the outside scope.

int main()
{
    int personID = 0;
    personID += 1;
    {
        // this will not affect the other personID
        int personID = 0;
    }
}

Global Scope
When a variable is declared outside of the confines of a function, all regions of code can touch that variable. Because everyone can access it, that variable is in global scope.

int g_NumPersons = 0;

int main()
{
    int personID = 0;
    personID += 1;
}

Here, g_NumPersons is in global scope. This is generally accepted as bad practice, because tracking the logic used in this variable against all lines of code is hard to do, and can lead to logic errors


$$
