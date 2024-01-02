# ft_printf
***
- **Variadic Functions**: These are functions to which you can give different amounts of variables or arguments each time you use them. For example, in `printf`, you can use as many `%d` (or any other format specifiers) as you need, and the function will print all the corresponding values you provide.
  
So, if you want to print 5 numbers with `printf`, you can write something like `printf("%d %d %d %d %d", num1, num2, num3, num4, num5);`, and `printf` will print the five numbers you have given. If another day you need to print just 3 numbers, you can easily change it to `printf("%d %d %d", num1, num2, num3);`. The function adapts to the number of arguments you provide.
