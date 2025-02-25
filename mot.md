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

python interpreter language =>   machine code =>   interpreter  for something else
c is interpereter for cpu  compiler
java with jvm (machine code)

c => no garbage collector is a win (learn to be a psy destroyer jeje)  programming responsible to memory leak  , c is memory safe language? no necc...,  no violate buffer memory
------------------------------------------------||||| ---------------------------------------------------------


c is easy to access whatever you want.
