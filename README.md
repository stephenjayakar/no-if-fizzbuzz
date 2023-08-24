# Results

How I ran it: I actually changed which function I run in the code & recompiled
```sh
gcc main.c
time ./a.out
```

| Reference: | 9.407s |
|------------|--------|
| No `if`s:  | 9.018  |

Barely faster for `10000000` iterations. Around 5% faster.
