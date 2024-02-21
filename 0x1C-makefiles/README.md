0x1C. C - Makefiles

### What are `make` and `Makefiles`?

**`make`**: `make` is a build automation tool used in software development to compile and build executable programs and libraries from source code. It reads a file called `Makefile` to determine how to build and organize the code.

**`Makefiles`**: A `Makefile` is a plain text file that contains a set of rules used by `make`. It specifies how the code should be compiled, linked, and organized. `Makefiles` help automate the build process and manage dependencies efficiently.

### When, why, and how to use Makefiles:

**When to use Makefiles:**
- Use Makefiles when working on projects with multiple source files and dependencies.
- When you want to automate the build process to avoid manual compilation and linking.

**Why use Makefiles:**
- **Automation:** Automates the build process, making it easy to compile and link code.
- **Efficiency:** Handles dependencies intelligently, rebuilding only what is necessary.
- **Consistency:** Ensures that the build process is consistent across different systems and environments.

**How to use Makefiles:**
1. Create a `Makefile` in the project directory.
2. Define rules specifying how source files are compiled and linked.
3. Declare dependencies between files.
4. Run `make` in the terminal to initiate the build process.

### What are rules, and how to set and use them:

**Rules:**
- Rules define how to build a target file from one or more source files.
- A rule consists of a target, dependencies, and a set of commands.

**Setting and using rules:**
- Syntax: `target: dependencies`
  ```
  main.o: main.c utils.h
  	gcc -c main.c
  ```

### What are explicit and implicit rules:

**Explicit rules:**
- Explicit rules are specified with a complete recipe for generating a target from its dependencies.
  ```
  main.o: main.c utils.h
  	gcc -c main.c
  ```

**Implicit rules:**
- Implicit rules are predefined rules in `make` that can be used without specifying the complete recipe.
- For example, `make` can automatically compile a `.c` file to a `.o` file without an explicit rule.

### What are the most common/useful rules:

1. **`all`:** Builds the entire project.
   ```make
   all: target1 target2
   ```

2. **`clean`:** Removes generated files to start fresh.
   ```make
   clean:
   	rm -f *.o my_program
   ```

3. **`install`:** Installs the compiled program or libraries.
   ```make
   install: my_program
   	cp my_program /usr/local/bin
   ```

### What are variables and how to set and use them:

**Variables:**
- Variables in `make` are used to store values that can be referenced throughout the `Makefile`.

**Setting and using variables:**
- Syntax: `VAR_NAME = value`
  ```make
  CC = gcc
  CFLAGS = -Wall -O2

  my_program: main.o utils.o
  	$(CC) $(CFLAGS) -o my_program main.o utils.o
  ```
  
  In this example, `CC` and `CFLAGS` are variables used for the compiler and compilation flags, respectively.
