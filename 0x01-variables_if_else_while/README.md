# <span style="color:red;">SE Foundations</span>

### 0x01. C - Variables, if, else, while
**Language:** C  
**Weight:** 1  
**Project Duration:** Dec 15, 2023, 6:00 AM to Dec 16, 2023, 6:00 AM  
**Auto Review:** Launched at the deadline

### In a Nutshell
- **Auto QA Review:** 70.0/70 mandatory & 21.0/21 optional
- **Overall Score:** 200.0%
  - **Mandatory:** 100.0%
  - **Optional:** 100.0%
- **Calculation:** 100.0% + (100.0% * 100.0%) == 200.0%

### Concepts
For this project, we expect you to look at this concept:
[Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://savanna.alxafrica.com/concepts/100039)

### Resources
- **Read or Watch:**  
  Everything you need to know to start with C.pdf  
  Focus on the following slides:
  - Comments
  - Data types | Integer types
  - Declaration
  - Characters
  - Arithmetic operators
  - Variables assignments
  - Comparisons
  - Logical operators
  - if, if…else
  - while loops
- [Keyword and Identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [Integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [if statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [if...else statements in C](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational Operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical Operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [while loop](https://youtu.be/Ju1LYO9pkaI?si=ct-oQNql94MdTJ5a)
  
- [Introduction to C (Basic structure and variables)] (https://youtu.be/LM6IjCbtpZA?si=KpNiHcnk6fWRHawV)
### Learning Objectives
At the end of this project, you should be able to explain:
- Arithmetic operators and their usage
- Logical operators (boolean operators) and their usage
- Relational operators and their usage
- TRUE and FALSE values in C
- Boolean operators and their usage
- Usage of if, if ... else statements
- How to declare variables of types `char`, `int`, and `unsigned int`
- How to assign values and print them using `printf`
- How to use the `while` loop
- Understanding the ASCII character set
- Purpose of `gcc` flags `-m32` and `-m64`


### Tasks  :page_with_curl:
* **0. Positive anything is better than negative nothing**
  * [0-positive_or_negative.c](./0-positive_or_negative.c): C program that prints whether
  a randomly generated number is positive or negative, followed by a new line:
    * Completion of [this source code](https://github.com/GammachuT/0x01-variables_if_else_while/blob/master/0-positive_or_negative_c).
    * Stores a different random number every time the program is run.
    * Prints the number followed by `is positive` if the number is greater than 0, `is zero` if the number is zero, or `is negative` if the number is less than 0.

* **1. The last digit**
  * [1-last_digit.c](./1-last_digit.c): C program that prints the last digit of a
  randomly generated number, followed by a new line:
    * Completion of [this source code](https://github.com/GammachuT/0x01-variables_if_else_while/
blob/master/1-last_digit_c).
    * Stores a different value every time the program is run.
    * Prints the string `Last digit of` [number] `is` [last_digit] `and is` followed
    by `greater than 5` if the digit is greater than 5, `0` if the digit is 0, or
    `less than 6 and not 0` if the digit is less than 6 and not 0.

* **2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * [2-print_alphabet.c](./2-print_alphabet.c): C program that prints the alphabet in
  lowercase, followed by a new line, using only the `putchar` function exactly twice.

* **3. When I was having that alphabet soup, I never thought that it would pay off**
  * [3-print_alphabets.c](./3-print_alphabets.c): C program that prints the alphabet in
  lowercase, then in uppercase, followed by a new line, using only the `putchar`
  function exactly three times.

* **4. alphABET**
  * [4-print_alphabt.c](./4-print_alphabt.c): C program that prints the alphabet in lowercase
  except for the letters `q` and `e`, followed by a new line, using only the `putchar`
  function exactly twice.

* **5. Numbers**
  * [5-print_numbers.c](./5-print_numbers.c): C program that prints all single digit numbers
  of base 10 starting from `0`, followed by a new line.

* **6. Numberz**
  * [6-print_numberz.c](./6-print_numberz.c): C program that prints all single digit numbers
  of base 10 starting from `0`, followed by a new line, using only the `putchar` function
  exactly twice without any variables of type `char`.

* **7. Smile in the mirror**
  * [7-print_tebahpla.c](./7-print_tebahpla.c): C program that prints the lowercase alphabet
  in reverse, followed by a new line, using only the `putchar` function exactly twice.

* **8. Hexadecimal**
  * [8-print_base16.c](./8-print_base16.c): C program that prints all the numbers of base
  16 in lowercase, followed by a new line, using only the `putchar` function exactly three
  times.

* **9. Patience, persistence and perspiration make an unbeatable combination for success**
  * [9-print_comb.c](./9-print_comb.c): C program that prints all possible combinations of
  single-digit numbers, using only the `putchar` function exactly four times without any
  variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * Numbers are printed in ascending order.

* **10. 00...99**
  * [10-print_comb2.c](./10-print_comb2.c): C program that prints the numbers from `00`
  to `99` using only the `putchar` function exactly five times without any variables of
  type `char`:
    * Numbers are separated by `,`, followed by a space.
    * Numbers are printed in ascending order, with two digits.

* **11. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
  * [100-print_comb3.c](./100-print_comb3.c): C program that prints all possible different
  combinations of two digits using only the `putchar` function exactly five times without any
  variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * The two digits are different.
    * `01` and `10` are considered the same combination of the two digits `0` and `1`.
    * Prints only the smallest combination of two digits.
    * Numbers are printed in ascending order.

* **12. The success combination in business is: Do what you do better... and: do more of what you do...**
  * [101-print_comb4.c](./101-print_comb4.c): C program that prints all possible different
  combinations of three digits using only the `putchar` function exactly six times without
  any variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * The three digits are different.
    * `012`, `120`, `102`, `021`, `201` and `210` are considered the same combination of the three digits `0`, `1` and `2`.
    * Prints only the smallest combination of three digits.
    * Numbers are printed in ascending order.

* **13. Software is eating the World**
  * [102-print_comb5.c](./102-print_comb5.c): C program that prints all possible combinations
  of two-digit numbers using only the `putchar` function exactly eight times without any
  variables of type `char`:
    * Numbers range from `0` to `99`.
    * Two numbers are separated by a space.
    * Numbers are printed with two digits [ie. `1` is printed as `01`].
    * `00 01` and `01 00` are considered the same as the combination of of the numbers `0` and `1`.
    * Combinations of numbers are separated by `,`, followed by a space.
    * Combinations of numbers are printed in ascending order.
### Repository Details
- **GitHub Repository:** [alx-low_level_programming](https://github.com/GammachiT/alx-low_level_programming)
- **Directory:** 0x01-variables_if_else_while

### Copyright
© 2025 ALX, All rights reserved.
