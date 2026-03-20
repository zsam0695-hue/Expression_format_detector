Your DEVLOG.md must include dated entries describing:

- What you worked on during each session.

- Bugs or issues you encountered.

- How you tested your code.

- What you fixed or improved.

This log is part of the grade and is used to assess your development process, not just the final result.

Entry 03/20/2026
- Worked on: The entire `ArrayStack.h` file, for fun and because I have nothing better to do right now. I commented out all the parts in main method in `main.cpp` since I haven't started on that yet and wanted to test out the methods I wrote from `ArrayStack.h`. 
- Bugs/Issues: I initialized a vector called `test`, and for some reason it wouldn't recognize the method `push()` from `ArrayStack.h`. I thought I was calling it wrong or had something in the method signature that I was missing. But no, the method and testing seemed all correct. I then thought maybe there's something wrong with the `#include` part of it. But that looked normal like from other projects too. 
- Tested: I first tried testing in the main method using `vector<int> test`, but that gave an error, so after a while I was finally left with `ArrayStack<int> test`.
- Fixed/Improved: I finally realized that in `main.cpp` I have to initialize `test` as an `ArrayStack<int>` and not `vector<int>`, since vector doesn't even have a method called push. :'(