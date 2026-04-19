# Jump Game

## Goals
- Practice getting input from the command line
- Practice using vectors
- Review solving problems with **recursion**

## Matthew’s Stats
- Time taken: 40 minutes
- Files: 3
- Lines of Code: 124 including whitespace, comments, and header files

## Restrictions and Requirements
- No global variables may be used
- Your submission must contain at least 2 or more .cpp files and one or more .h files

## Problem Description

1. You are given a list of integer numbers. 
2. Each number tells you how far to the right or left you can move from that spot. 
   - You can only move exactly that many spaces.
3. Moving from one number to the next is considered a move. 

Your goal is to find the sequence of moves that get you from the first number to the 
last number in the fewest moves possible. If there is no sequence of moves that will 
get you to the end, then you should state that. For example, if you were given the list

| Index | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|-------|---|---|---|---|---|---|---|
| Value | 1 | 2 | 4 | 1 | 1 | 1 | 7 |


Then the smallest sequence of moves that gets you from index 0 to index 6 is {0, 1, 3, 2, 6}.

If however the list of numbers was

| Index | 0 | 1 | 2 | 3  | 4 | 5 | 6 |
|-------|---|---|---|----|---|---|---|
| Value | 1 | 2 | 4 | 20 | 1 | 1 | 7 |

then there is no solution to the problem

## Input

### Command Line Arguments

- Will always be valid

1. The list of integers to solve 
  - Each integer will have a value greater than or equal to 0

### Standard Input

- None

## Implementation

1. You will find **recursion** to be very helpful in solving this problem.
2. When solving the problem, first go to the left and then go right
   - This will help us to have the **same solution** if there are multiple equally valid solutions
3. If a move would take you out of bounds of the list, either before the first entry
   or after the last entry, it is invalid and should not be taken

## Testing

Doing property based tests for this problem is likely too complicated, so I would recommend
only doing a few explicit tests. 

## Examples

### Example 1

`./JumpGame 1 2 4 1 1 1 7`

`The solution is: {0, 1, 3, 2, 6}`

### Example 2
`./JumpGame` 

`There is no solution to the given game.`

## CLion Specifics

### Setting Command Line Arguments
Command line arguments can be set by
1. Going to the configuration you want to add command line arguments to
2. Clicking  `...` next to the configuration
3. Selecting `Edit...`
4. Entering your command line arguments in `Program Arguments`

![Setting Command Line Arguments](resources/prompt_resources/EnteringCommandLineArguments.gif)

## What to Submit

Submit to GradeScope a clone of this repository with updates to it to solve the problem described.
You are allowed to create as many new files under `src` or `testing` as you
desire. 

- If you create new files under `src` make sure to add them to `${SRC_LIB_NAME}`
  - ![Where to add new src files to](resources/prompt_resources/where_to_add_new_source_files_to.png)
- If you create new files under `testing` make sure to add them to `${Testing_Name}`
  - ![Where to add new testing files to](resources/prompt_resources/where_to_add_new_testing_files_to.png)
