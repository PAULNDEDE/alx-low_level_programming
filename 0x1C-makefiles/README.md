This project focuses on makefiles in C programing.
What is Make and Makefiles?
Make is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles. The Makefile contains a set of directives used by the make build automation tool to generate a target/goal.

When, Why, and How to Use Makefiles
When to Use Makefiles
When managing a large project with multiple source files.
When the build process is complex and involves several steps like compiling, linking, and testing.
When you want to automate repetitive tasks like compiling code, running tests, or deploying applications.
Why Use Makefiles
Efficiency: Only the parts of the code that have changed are recompiled, saving time.
Consistency: Ensures that the build process is the same every time it's run.
Automation: Automates the build process, reducing manual effort and errors.
Flexibility: Can be used to manage builds in various programming languages and environments.
How to Use Makefiles
Create a Makefile: Write a Makefile in your project directory.
Define Rules: Specify how to build each part of your project.
Run Make: Use the make command in the terminal to execute the instructions in the Makefile.
What Are Rules and How to Set and Use Them
Rules in Makefiles
Rules are the instructions for building the targets. A rule generally consists of three parts:

Target: The file to be created or updated.
Prerequisites: The files that are used to create the target.
Recipe: The commands to be executed to create or update the target.
