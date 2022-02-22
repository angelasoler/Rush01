<h1 align="center">
  Rush01
</h1>

<p align="center">
  <img alt="repository size" src="https://img.shields.io/github/repo-size/angelasoler/Rush01">
  
  <img alt="languanges" src="https://img.shields.io/github/languages/count/angelasoler/Rush01">

  <img alt="last commit" src="https://img.shields.io/github/last-commit/angelasoler/Rush01">
</p>

Collective challenge, trying to replicate tower table game (not finished, conditions and error treatment missing).

Receiving the parameter throught terminal using argc, argv in main.

In matrix_size directory you can print and array of x's of size 0 to 9. 
ex.

```gcc *.c ```

```./a.out 5 | cat -e```

```
x x x x x$
x x x x x$
x x x x x$
x x x x x$
x x x x x$
```

In array_multi directory you may print and array 4x4.
- You must give 15 number in a string , dividing by space if not you may get "error" as a response
- You could have unspected behaivor anyway
ex.

```gcc *.c ```

```./a.out "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4" | cat -e```

```
A A A A$
B B B B$
C C C C$
D D D D$
```

```gcc *.c ```

```./a.out "1 2 3 4 1 23 4 1 23 4 1 2 3 4" | cat -e```

```
Error$ 
```
