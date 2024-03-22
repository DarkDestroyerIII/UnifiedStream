# Unified Stream

### What exactly is this?
This class allows for a new object to created which through standard ostream operators, will output to multiple ostreams simultaneously. The useful addition to this class over my former dStream is that it can output to an *infinite* amount of streams passed to it

<details>
<summary>Background</summary>
This was a class that I designed based out of another class I created from a prior project I created which I lovingly refered to as the duelStream  or dStream for short. The creation of that class came out of pure frustration from having to print out the same message to both the fstream and cout. 
</details>



<details>
  <summary>Facts/Features</summary>
  
* Output to any number of ostreams
* ostreams are stored within a dynamically allocated array to keep the program "light" as well as personal challenge
* constructor features no strict looping structure
* Supports C++11
  
</details>

## TODO

- [ ] Add ability to use standard ostream functions to all of the stored streams through by creating a function called `apply()` which will take in a function pointer and apply that operation to all of the ostreams
- [ ] Allow users to choose to create a uStream specific to one type of ostream, allowing that user to use modifying functions to all of stored streams.
- [ ] add async ability to allow printing to several streams at the same time, allowing the program to print at greater speeds

