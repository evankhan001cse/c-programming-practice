# C Programming Practice

A beginner-focused repository documenting my progress while learning C programming. It contains introductory C examples, online-judge source files, and clearly separated problem-tracker records.

## Repository Overview

- **Primary learning language:** C
- **Level:** Beginner
- **Introductory C examples in the repository root:** 4
- **Platform source files:** 16 Codeforces C files and 22 HackerRank files (13 C, 9 C++20)
- **Build support:** Makefile and a GCC-based GitHub Actions compile workflow

## C Programs

| File | Concepts |
|---|---|
| [01-hello-world.c](./01-hello-world.c) | Program structure and output |
| [02-input-output.c](./02-input-output.c) | Reading two integers and printing their sum |
| [03-even-odd.c](./03-even-odd.c) | Conditions and the modulo operator |
| [04-largest-of-three.c](./04-largest-of-three.c) | Comparing three numbers with conditional statements |

## Compile and Run

A C compiler such as GCC is required.

### Build all four introductory examples with GNU Make

From the repository root, run:

```bash
make
```

Executables are created in the `build/` directory. To remove generated files:

```bash
make clean
```

### Compile one program manually

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic 01-hello-world.c -o hello
./hello
```

GNU Make is optional; manual GCC commands work without it.

## Problem-Tracking Data

The [problem-tracker folder](./problem-tracker/) contains two separate datasets:

1. [Published tracker CSV](./problem-tracker/problem-tracker.csv): 98 records and 97 unique URLs. Its AC labels were copied from the original course tracker and are not independently verified platform verdicts.
2. [C263065 workbook snapshot](./problem-tracker/C263065-workbook-snapshot.csv): an export of the personal `C263065` worksheet only, not the other student worksheets in the workbook.

The workbook snapshot preserves 470 platform-URL rows, including repeated assignments. It contains 351 unique problem URLs and two distinct contest-page URLs. The worksheet marks 90 rows AC (89 unique URLs); 380 rows are blank. Blank means unknown, not unsolved.

All 89 unique AC-marked URLs in the snapshot are present in the published tracker CSV. Eight URLs in the published CSV have blank status in the new snapshot. The snapshot's AC labels are course-tracker data, not independently confirmed online-judge verdicts.

See the [problem-tracker README](./problem-tracker/README.md) for platform breakdowns and mapping caveats.

## Source Code Organisation

- [Codeforces solutions](./solutions/Codeforces/): 16 C source files.
- [HackerRank solutions](./solutions/HackerRank/): 9 Conditions files in C++20 and 13 Loops files in C.
- [Solutions index](./solutions/README.md): platform-folder overview.

The CSV now has exact `Source_File` paths for all 38 platform source files. The two previously unmapped Codeforces files (`219158-U.c` and `219158-X.c`) were matched to the exact problem URLs in the personal `C263065` worksheet. Existing source files are preserved; missing mappings are not guessed.

## Automated Build Check

The [GitHub Actions workflow](./.github/workflows/compile-c.yml) compiles each introductory C source file in the repository root using GCC/C11 and warning flags. It also syntax-checks the nested Codeforces/HackerRank C sources (C11) and HackerRank C++ sources (C++20). It runs on pushes and pull requests targeting `main`, and can also be started manually.

The latest run on 12 November 2026 completed successfully: four root C examples were compiled, and 29 nested C files plus 9 nested C++ files passed syntax checks. It reported three non-fatal operator-precedence warnings (two in Codeforces `219158-Q.c` and one in HackerRank `IFA-9.cpp`); the original source files were left unchanged. These checks do **not** run problem test cases or verify online-judge verdicts. [View the successful workflow run](https://github.com/evankhan001cse/c-programming-practice/actions/runs/43185825203).

## Learning Approach

- Understand the problem before writing code.
- Test programs with different inputs.
- Keep examples small and readable.
- Preserve original submitted source code.
- Record platform verdicts separately from source-file availability.

---

This repository documents my learning process as a CSE undergraduate.
