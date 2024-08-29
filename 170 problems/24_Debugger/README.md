## gdb

#### symbol tables

- check bin size before and after symbol tables

  - $ ls -lhs -
  - ctrl + x + a # open tui to view code while debugging
  - $ readelf -a a.out # info about the executable
  - $ nm -a a.out # view the debug symbols
  - $ nm -a a.out | wc -l # to count #of symbols

  - $ gcc -g main.c # to generate the debug
  - $ gdb a.out
  - $ gcc -g option flag
  - $ gcc -g generates debug information to be used by GDB debugger.

**option description**
-g0 no debug information
-g1 minimal debug information
-g default debug information
-g3 maximal debug information

#### Debug basic command

- (gdb) start s
- (gdb) run r
- (gdb) refresh
- (gdb) continue c
- (gdb) next n # execute whole line
- (gdb) step s # to execute the function body
- (gdb) finish fin # to finish the debug in the current function
- (gdb) Pressing ENTER # execute the previous command
- (gdb) quit

#### Breakpoints

- break b
- break Function Name
- break File Name:Line Number
- break Line Number
- break \*Address
- break ... if Condition

- info breakpoints
- enable
- disable
- delete

#### print

- print variable
- p variable
- p &variable ----address
