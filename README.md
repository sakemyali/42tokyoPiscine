# 42tokyoPiscine (ali_piscine)

A collection of C exercises and small projects completed while attending the 42 Tokyo "piscine" (introductory bootcamp).

This repository contains the classic 42-style exercises (C00..C11), several shell exercises, and a small project named `BSQ` (Biggest Square) with a Makefile and test maps.

## Table of contents

- [What this project does](#what-this-project-does)
- [Why this is useful](#why-this-is-useful)
- [Getting started](#getting-started)
	- [Prerequisites](#prerequisites)
	- [Build & run the BSQ project (example)](#build--run-the-bsq-project-example)
	- [Run individual exercises](#run-individual-exercises)
- [Repository layout](#repository-layout)
- [Where to get help](#where-to-get-help)
- [Maintainers & contribution](#maintainers--contribution)

## What this project does

This repo is a personal workspace containing solutions to the 42 Tokyo piscine assignments. It is primarily a learning portfolio and contains:

- A working implementation of the BSQ (Biggest Square) exercise in `BSQ/` (C, Makefile, test maps).
- A large number of small C exercises grouped under `C00/` through `C11/` (each exercise in its own folder).
- Shell exercises and a few extra practice projects (see `Shell00/`, `Shell01/`, `Rush*/`, `exams/`).

The code is intended to be minimal, portable C code following the conventions used during the 42 curriculum.

## Why this is useful

- Review and learn idiomatic C for systems programming fundamentals.
- See practical examples of small, focused exercises that build up to larger projects.
- The `BSQ` project demonstrates file I/O, parsing, dynamic memory use, and algorithmic problem solving in C.

## Getting started

These quick steps will help you build and run the primary project (`BSQ`) and run individual exercises.

### Prerequisites

- POSIX-compatible shell (macOS, Linux)
- A C compiler (cc, gcc, or clang)
- make (for convenient builds)

### Build & run the BSQ project (example)

1. Change into the `BSQ` directory and build with the provided Makefile:

```bash
cd BSQ
make
```

2. Run the built executable. The program accepts one or more map file paths as arguments. If no arguments are given, it reads from standard input.

```bash
# run against a map file
./bsq maps/example.map

# or pipe a map via stdin
cat maps/example.map | ./bsq
```

3. A small map generator is provided at `BSQ/maps/map_generator.pl` (Perl) to create random maps for testing. Example:

```bash
perl maps/map_generator.pl 20 15 3 > test.map
./bsq test.map
```

### Run individual exercises

Most small exercises are single-source files under the `C*/exXX/` directories. To compile an exercise manually:

```bash
cc -Wall -Wextra -Werror -o ex_bin C01/ex00/ft_ft.c
./ex_bin
```

There are many exercises; use the folder names to find the one you want to build and run.

## Repository layout

- `BSQ/` — BSQ project (Makefile, `include/`, `srcs/`, `maps/`)
- `C00/` .. `C11/` — small C exercises arranged by subject
- `Shell00/`, `Shell01/` — shell scripting exercises
- `Rush*/`, `exams/` — short timed projects and exam practice

Explore directories to find the exercise you want to compile or read.

## Where to get help

- Open an issue or submit a pull request on the repository's GitHub page.
- Inspect source files and the `BSQ/include/bsq.h` header for function contracts and usage.

If you need to report bugs or request improvements, please include:

- Steps to reproduce
- The command you used to build / run
- Platform and compiler (e.g. macOS 13, clang 14)

## Maintainers & contribution

- Maintained by the repository owner: `sakemyali` (see GitHub profile in the repository metadata).

Contributions are welcome but please follow these lightweight rules:

1. Open an issue to discuss larger changes before sending a large PR.
2. Keep changes focused: one small feature or fix per PR.
3. Use clear commit messages and follow the coding style already used in the repository.

If you would like a formal CONTRIBUTING.md file added, please open an issue or submit a PR with your suggested text.

## Notes

- This repository does not include an explicit LICENSE file. If you intend to reuse or redistribute code, please ask the maintainer or add a LICENSE.
- This README focuses on helping other developers get started quickly; deeper documentation or exhaustive tests are kept in separate files when needed.

---

If you'd like, I can also add a minimal `CONTRIBUTING.md` and a simple LICENSE template — tell me which license you prefer (MIT, Apache-2.0, etc.).

