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

Entry 03/23/2026
- Worked on: The test cases to finish testing my methods from `ArrayStack.h`. I also worked on and wrote some stuff for `tokenize` and `precedence.
- Bugs/Issues: I ran into the opposite issue from the testing  last time. I was trying to use the method `push()` from the `ArrayStack.h` in the `tokenize` method, but this time I needed the opposite, since it used a vector and needed to use `push_back()`.
- Tested: I finished testing all of the methods from the `ArrayStack.h`, but my computer is dying and won't get a chance to test my `tokenize` and `precedence` methods.
- Fixed/Improved: Didn't really have anything that needed fixing, at least not that I know of yet, except for the usage of `push()` and `push_back()` when it came to the `tokenize` method.