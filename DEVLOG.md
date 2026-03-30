Your DEVLOG.md must include dated entries describing:

- What you worked on during each session.

- Bugs or issues you encountered.

- How you tested your code.

- What you fixed or improved.

This log is part of the grade and is used to assess your development process, not just the final result.

Entry 03/18/2026
- Initial entry
- Copied all files like `main.cpp` and `ArrayStack.h` over on to my code and made a `DEVLOG.md` file as well.
- Connected everything to GitHub right away and made a repository called `Expression_format_detector`.

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

Entry 03/25/2026
- Worked on: Tested and looked over the `tokenize` and `precedence` methods, changed small stuff. I also started and had enough time to finish the `isValidPostfix` method as well.
- Bugs/Issues: Not a bug, but when writing the `tokenize` method I wanted to write `char op = c` then got an error and realized it was since the type I'm pushing back to is `string`. But then I couldn't write `string op = c`.
- Tested: I tested `tokenize` and tested `isValidPostfix` as well, although the testing code was already written for that, just had to comment some stuff out so it wouldn't give me any errors for undefined methods.
- Fixed/Improved: Improved some lines of the `tokenize` method, like writing `string op = string(1, c)`. I also realized for `isValidPostfix` to be true, there should only be 1 more digit than there are operators. Also, there should be at least 1 operator, like just "4" is not valid. Otherwise, it should be false.

Entry 03/27/2026
- Worked on: I started and hopefully completed the `isValidInfix` method in main.
- Bugs/Issues: When it came to edge cases like unfinished parenthesis or finishing a parenthesis that never started, I struggled with a way to keep track of them. It also got pretty confusing keep setting `nextOp` to true or false depending on the value of the token, but the instructions kinda helped with that.
- Tested: I tested the `isValidInfix` method and everything looked great.
- Fixed/Improved: I decided to use and int called `equilibrium` since I can add for every `(` and subtract for every `)` resulting in something like an equilibrium in bio, always being balanced and equal to 0, otherwise returning false.

Entry 03/27/2026
- Worked on: Tested `isValidInfix` and `isValidPostfix` methods in the main function.
- Bugs/Issues: The `isValidInfix` was good, but when inputting `4 5 +`, which is a valid postfix, it would return neither and invalid. 
- Tested: I Tested the `isValidInfix` and `isValidPostfix` methods, but commented out some parts in the main method that would give errors.
- Fixed/Improved: I figured out that at the very end of my `isValidPostfix` method I was only returning true if the number of digits are exactly 1 more than the number of operators AND if the number of operators are strictly greater than 1. So all I needed to do was change 1 to 0, since we know there are still valid postfix with only 1 operator.

Entry 03/29/2026
- Worked on: I started on writing some of the `infixToPostfix` method.
- Bugs/Issues: No bugs or issues that I have come upon yet, also since I haven't finished the method.
- Tested: Couldn't really test anything yet because I haven't finished the `infixToPostfix` method yet.
- Fixed/Improved: I am currently in the process of sleeping on the rest of the `infixToPostfix` method since I'm a little stuck on how to go about the coding logic. I'll see if I can think of a different approach tomorrow.

