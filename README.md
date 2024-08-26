# Colour Code

A simple program to print the posision of the cursor, as well as the colour under it as a hex code (in RGB).

### Use

Simply run the program, move the cursor where you want to see the pos and colour, and it will be printed to the screen. 
When you are finished, exit with ctrl+c.

**Example:**
```bash
D:\Programming\cpp\colourcode\release>colourcode.exe
HEX Color: #0c0c0c at (1585, 395)
HEX Color: #363636 at (2165, 301)
HEX Color: #243f24 at (2050, 229)
HEX Color: #243f24 at (2079, 210)
HEX Color: #2c2030 at (2079, 198)
HEX Color: #2c2030 at (2079, 183)
^C
```

### Compiling
Here is an example g++ command if you want to compile the code program yourself.
You'll likely need to link in the gdi32 library with -lgdi32.

```bash
g++ -O3 -o colourcode.exe colourcode.cpp -lgdi32
```
