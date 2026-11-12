# C Programming Practice

A beginner-friendly repository documenting my progress while learning C programming. It contains small examples that demonstrate introductory concepts and a separate tracker for university problem-solving practice.

## Repository Overview

- **Language:** C
- **Level:** Beginner
- **Published C examples:** 4
- **Problem tracker:** 98 AC entries recorded in the university course tracker, representing 97 unique problem URLs

## C Programs

| File | Concepts |
|---|---|
| [01-hello-world.c](./01-hello-world.c) | Program structure and output |
| [02-input-output.c](./02-input-output.c) | Reading two integers and printing their sum |
| [03-even-odd.c](./03-even-odd.c) | Conditions and the modulo operator |
| [04-largest-of-three.c](./04-largest-of-three.c) | Comparing three numbers with conditional statements |

## Compile and Run

A C compiler such as GCC is required.

### Build all four examples with GNU Make

From the repository root, run:

```bash
make
```

The executables are created in the `build/` directory. To remove generated files:

```bash
make clean
```

### Compile one program manually

For example:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic 01-hello-world.c -o hello
```

Run it on Linux or macOS:

```bash
./hello
```

On Windows, run the generated executable (for example, `hello.exe`) from the terminal. GNU Make is optional; manual GCC commands work without it.

## Problem-Solving Tracker

The [problem-tracker folder](./problem-tracker/) contains the CSV and its documentation.

| Platform | AC entries in source tracker |
|---|---:|
| Beecrowd | 48 |
| Codeforces | 25 |
| HackerRank | 25 |
| **Total** | **98** |

**Data notes:**
- The 98 entries contain 97 unique problem URLs; one URL appears twice in the original tracker and is retained as a separate entry.
- The source sheet includes three AC-labelled class exercises without external problem URLs. They are not part of this linked-problem CSV.
- Verdicts and solve metadata are transcribed from the course tracker and have not been independently re-verified against each platform.
- The original course tracker does not reliably identify the programming language used for each submission. For the 12 HackerRank source files now mapped below, language labels come from the uploaded HackerRank submission export.
- The tracker contains problem links and metadata; source code is published separately under `solutions/` when a matching submission is available.

## Learning Roadmap

As I continue practising, I plan to add more examples covering loops, arrays, functions, strings, and progressively more involved problem-solving exercises. New topics will be added as I work through them.

## Learning Approach

- Understand the problem before writing code.
- Test programs with different inputs.
- Keep examples small and readable.
- Document progress honestly and improve the code over time.

---

This repository is a record of my learning process as a CSE undergraduate.

## Automated Build Check

A GitHub Actions workflow compiles each C source file in the repository root using GCC with C11 and warning flags. It runs on pushes and pull requests targeting `main`, and can also be started manually from the Actions tab.

The four currently published C examples were also compiled locally with the same GCC standard and warning flags.

## Published Platform Solutions

Source files supplied for online-judge problems are organised under [`solutions/`](./solutions/). Published examples include [Codeforces contest 219158, problem C](./solutions/Codeforces/219158-C.c) [problem D](./solutions/Codeforces/219158-D.c), and [problem E](./solutions/Codeforces/219158-E.c), and [problem F](./solutions/Codeforces/219158-F.c), [problem G](./solutions/Codeforces/219158-G.c), [problem H](./solutions/Codeforces/219158-H.c), [problem I](./solutions/Codeforces/219158-I.c), [problem J](./solutions/Codeforces/219158-J.c), and [problem K](./solutions/Codeforces/219158-K.c), [problem P](./solutions/Codeforces/219158-P.c), [problem Q](./solutions/Codeforces/219158-Q.c), [problem R](./solutions/Codeforces/219158-R.c), [problem S](./solutions/Codeforces/219158-S.c), and [problem T](./solutions/Codeforces/219158-T.c), [problem U](./solutions/Codeforces/219158-U.c), and [problem X](./solutions/Codeforces/219158-X.c), all written in C. HackerRank source files are also available in the [HackerRank solutions folder](./solutions/HackerRank/): 9 Conditions submissions in C++20 and 3 Loops submissions in C. These 12 files were matched to full-score entries in the uploaded platform export. The other HackerRank tracker rows remain unmapped until matching source submissions are available.
