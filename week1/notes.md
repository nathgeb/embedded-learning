Tooling:
Why did g++ work in WSL but not in cmd?
-Because windows checks its PATH for g++ by default, g++ was installed in WSL's PATH but not cmds, theyre separate file systems on the same hardware
What does each part of g++ -std=c++17 -Wall -Wextra hello.cpp -o hello.bin do?
- the -std=c++17 is picking the language, wall and wextra are "warning all and warning extra" error warnings, hello.cpp is the file to compile into binary, -o hello.bin is the name of the compiled binary that u pick (and its extension)
Why does running a program need ./ in front of its name?
-so that the computer knows where to check, otherwise it will just check PATH
What do git add, commit, push and pull each do? Which of them need the internet?
-git add adds whatevers included to a staging ground, commit saves it to version history (with a message) and push syncs it with online repo, pull syncs your local repo with online repo
What happens if you add an already-committed file to .gitignore?
-once you run rm --cached on the file git will stop caching it, but previous ones remain in version history

C++
Why is it a bug to write if (x = 5), and why does the compiler still accept it?
-because it will always be true as u assigned x to 5, didn't check if it's equal, any value other than 0 will be true, compiler will accept it because its still compilable code
What happens when a function that returns int reaches its end without a return?
-it will  return garbage, or 0, or crash, this is undefined behaviour and Wall warns about it
What happens when you compare a signed int with an unsigned int? What does -1 turn into?
-the compiler forces on to the other, like forces the signed int into unsigned, -1 would have all its filled 1s read as a huge number
What does 7 / 2 give, and why? Name two ways to get 3.5.
-3, because its integer division so decimals are dropped, you can cast 7 or 2 to a double beforehand to get 3.5, other way is to write either as a double like 7.0/2 or 7/2.0
Why does double(a+b)/2 give 1.5 but double((a+b)/2) give 1.0?
-because first case casts the sum to double before dividing, other casts an already dropped decimal result to a double
What's the difference between a declaration and a definition? Why does the order of functions in a file matter?
-a declaration is just letting the compiler know the function exists, its name, its arguments, and its return type, the definiton adds on how the function acts. order matters because you need to declare a function before calling it or the compiler won't recognize it

Which concept from tonight is the shakiest for you?
-the binary stuff with negatives and whatnot, and second place the file/path stuff