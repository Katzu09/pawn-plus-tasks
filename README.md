# pawn-plus-tasks

[![sampctl](https://img.shields.io/badge/sampctl-pawn--plus--tasks-2f2f2f.svg?style=for-the-badge)](https://github.com/Katzu09/pawn-plus-tasks)


## Installation

Simply install to your project:

```bash
sampctl package install katzu09/pawn-plus-tasks
```

Include in your code and begin using the library:

```pawn
#include <pp-tasks>
```

## Usage

### Defining a Task

You can create a recurring function with the `task` macro that will execute automatically at the designated interval.

```pawn
task FunctionName[interval]() 
{
    // logic here...
    // This code will run every <interval> milliseconds
}
```

## Thanks
- AGraber — for the reference from pp-hooks.  
- IllidanS4 — for creating PawnPlus, the core library behind this include.  
- Y-Less — for the reference from YSI y_timers.  
