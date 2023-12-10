# fminus
A small functional language

## Syntax
```
# this is a comment

# this is a variable declaration
x := 1;            # x is an integer type
x := -1;           # x is still an integer type, and `-` is a unary function (more on that below, but basically there are no negative integer literals)
y := 'hello';      # y is a string type
z := [1, '2', -3]; # z is a list type, and lists can contain values of different types (also expressions (`-3` is a function call, remember?))
w := z(2);         # index operations are unary function calls

[1, 2, 3] each print;   # you iterate over lists with `each` - a binary function
each([1, 2, 3], print); # this is equivalent to the above

# this is a function declaration
f := \x -> x + 1;
g := \x, y -> x * y;

# although I would have liked it, `=` and `:=` are not functions (because there would be inconsistencies with precedence or a lot of parentheses)

# these are function calls
f 1;
f x;
f - 1; # this is equivalent to `-(f, 1)`, not `f(-1)` - binary functions take precedence over unary functions
f(-1);
f();

# let `h` be some binary function
1 h -2; # this is equivalent to `h(1, -)`, so you need to parenthesize the unary function
1 h (-2); # this is equivalent to `h(1, -2)` and probably what you want
# it is important to notice that unary function calls such as `-x` are desugared into `0-x` after parsing

# this is another example for function calls
1 g 2;
1 g 2 g 3; # equivalent to `(1 g 2) g 3`
g(1, 2);

# unary functions are right-associative (i.e. `f g x` is equivalent to `f (g x)`),
# while binary functions are left-associative (i.e. `f x g y` is equivalent to `(f x) g y`)
# this is so that `-1` is a unary function and `--1` is not `(--) 1`, but `-(-1)`
# but we will still be able to write `x map f map g fold x` instead of having to parenthesize everything

# this is a simple if-else statement
if (x == 1) (
    print 'x is 1';
) else if (x == 2) (
    print 'x is 2';
) else (
    print 'x is not 1';
)

# if statements are expressions and can return values
x := if (y == 1) (
    1
) else (
    2
);
```