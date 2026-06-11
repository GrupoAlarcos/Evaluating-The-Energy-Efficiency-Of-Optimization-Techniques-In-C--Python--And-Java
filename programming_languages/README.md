### programming_languages
This folder contains the complete experimental setup and results for the analysis of the 26 software optimization techniques evaluated in this study. 

The execution workflow is automated through a shell script (`.sh`), which runs all test cases for each programming The folder includes the following files:
- A shell script (`.sh`) used to automate the execution of all experiments.
- Log files generated during execution, including:
  - `info`, which provides details about the executed tests.
  - `success`, which records successful executions of test cases.
  - `error`, which captures failed executions and runtime issues.

Each programming language directory is then structured as follows:
- `code`: Contains the source code implementing the 26 optimization techniques.
- `results`: Includes the experimental results obtained from executing the techniques.