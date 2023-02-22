# push_swap
This program takes as it's input either a list of intigers or one string consisting of intigers seperated by a space, and prints out a set of instructions
that would sort the list in ascending order. The moves are named: sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb. And here's what they do:

pa push the top first element of stack b to stack a

pb push the top first element of stack a to stack b

sa swap first 2 elements of stack a

sb swap first 2 elements of stack b

ss execute sa and sb

ra rotate stack a (shift up all elements of stack a by 1, the first element becomes the last one)

rb rotate stack b

rrexecute ra and rb

rra reverse rotate a (shift down all elements of stack a by 1, the last element becomes the first one)

rrb reverse rotate b

rrr execute rra and rrb

Here's an example of the program's output:

<img width="705" alt="Screen Shot 2023-02-22 at 16 04 40" src="https://user-images.githubusercontent.com/35448350/220644156-2f8b0e73-6188-4779-970c-cda9250bcb86.png">

I am using my own libft, and my own printf and only write, and malloc and free from C's libraries.
