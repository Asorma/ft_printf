# ft_printf
***
## Definitions

- **Variadic Functions**: These are functions to which you can give different amounts of variables or arguments each time you use them. For example, in `printf`, you can use as many `%d` (or any other format specifiers) as you need, and the function will print all the corresponding values you provide. So, if you want to print 5 numbers with `printf`, you can write something like `printf("%d %d %d %d %d", num1, num2, num3, num4, num5);`, and `printf` will print the five numbers you have given. If another day you need to print just 3 numbers, you can easily change it to `printf("%d %d %d", num1, num2, num3);`. The function adapts to the number of arguments you provide.

 ## Rules

- Your project must be written in C.

- Adhere to the Norm (Norminette). Any deviations will result in a score of zero.

- Functions should not end unexpectedly (e.g., segfault, bus error). Such issues will render the project non-functional and score zero.

- Properly manage memory allocation and prevent memory leaks.

- Include a Makefile with flags -Wall, -Werror, and -Wextra. The Makefile must not relink and should contain rules like $(NAME), all, clean, fclean, and re.

- For bonuses, include a bonus rule in your Makefile. Bonus features must be in separate files (_bonus.{c/h}).

- If using libft, include its source and Makefile in a libft directory. Your project's Makefile should first compile the library then the project.

- Creating test programs for your project is recommended, though they are not part of the evaluation.

- Submit your work through your assigned Git repository. Only the repository's contents will be evaluated.
