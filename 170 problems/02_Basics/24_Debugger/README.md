# Debuggers programs

- A debugger is a program, so several ones may exist
- GNU debugger is named: gdb
- Microsoft visual debugger is a nice one (at least vs old gdb versions)

## GNU Debugger (gdb)

### Power of gdb

#### symbol tables

- check bin size before and after symbol tables

  - g++ main.cpp # **Release mode**
  - ctrl + x + a # open tui to view code while debugging
  - $ readelf -a a.out # info about the executable
  - $ nm -a a.out # view the debug symbols
  - $ nm -a a.out | wc -l # to count #of symbols

  - $ gcc -g main.c # to generate the debug symbol **Debug mode**
  - $ gdb a.out # gdb **executable file**
  - $ gcc -g option flag
  - $ gcc -g generates debug information to be used by GDB debugger.

**option description**
-g0 no debug information
-g1 minimal debug information
-g default debug information
-g3 maximal debug information

#### Debug basic command

- (gdb) start # put a temporary breakpoint @ main()
- (gdb) run r
- (gdb) refresh
- (gdb) continue c
- (gdb) next n # execute whole line _like **step over** in IDE_
- (gdb) step s # to execute the function body _like **step into** in IDE_
- (gdb) finish fin # to finish the debug in the current function _like **step return** in IDE_
- (gdb) Pressing ENTER # execute the previous command
- (gdb) quit

#### Breakpoints

- break or b
- break FunctionName
- break FileName:LineNumber # if u have more than file
- break LineNumber
- break Address
- break ... if Condition # conditional breakpoint

- info breakpoints
- enable breakpointNumber
- disable breakpointNumber
- delete breakpointNumber

#### print

- print variable
- p variable
- p &variable ----address

### watch

$ watch varName # stop when var changes (Put a auto breakpoint on the variable)

Also can put a condition
**$ watch var==3**

old value (expression) = 0
New value (expression) = 1

To test that this is an expression or value
Change var value to be 5 initially
Or
Change the expression to be true then false

### display

**$ display varName** # display the var value with each command

**$ info display** # to display variables will display with it's ids

**$ undisplay <id>**

### Overwrite

$ set var varname=value

### call

$ call fun(arg1, arg2)

in c++ you can't call the inline function

$ list fun() # display function implementation

The inline function that implemented into the class

$ ptype funname or varname

### print the type

$ whatis

$ disassemble /s

### print the assembly of the source code

**Ctrl + p** // to get the previous commad

**$ set print asm.demangle on** // To disappear the demangling discreption

### stack smash detect

$ backtrace or bt // show the functions frame that in the stack till now

$ frame <id>

$ info registers // To see the stack pointer register

$ show architecture

Show the memory

Stack pointer
Frame pointer

### mastering gdb segmentation fault

### gdb Reverse

$ target record-full // record instructions to allow u reverse in your code

$ rn or reverse next

Ctrl+x+2 // to view the code as a assembly.
