# Evaluating the Energy Efficiency of Optimization Techniques in C, Python, and Java

[Carlos Pulido](https://orcid.org/0009-0008-8122-3500)
[Félix García](https://orcid.org/0000-0001-6460-0353)
[Mª Ángeles Moraga](https://orcid.org/0000-0001-9165-7144)
[Miguel Baños-González](https://orcid.org/0009-0000-5444-7631)
[Juan Antonio Rico-Gallego](https://orcid.org/0000-0002-4264-7473)
[Javier Corral-García](https://orcid.org/0000-0002-4682-9389)

## Abstract

Software plays a critical role in modern society, but its energy consumption is a growing concern. This issue is especially relevant in the Internet of Things (IoT), which involves billions of devices operating under strict energy constraints, most of which rely on the C programming language due to its efficiency. Outside IoT environments, languages such as Python and Java have gained widespread adoption despite being less energy-efficient, particularly Python.

Optimization is therefore essential to reduce energy consumption in both contexts: (i) in IoT systems, where the large number of deployed devices leads to significant cumulative energy usage even when using efficient languages such as C; and (ii) in Python and Java applications, due to their widespread use and higher runtime energy demands.

However, software optimizations do not always lead to energy savings. Their impact must therefore be carefully evaluated. This paper analyzes the energy impact of 26 optimization techniques in C, Python, and Java across different compiler and runtime configurations. The study compares baseline and optimized implementations under each configuration and also investigates the effect of compiler and runtime settings—such as `-O0` versus `-O3` in C, CPython versus Nuitka in Python, and interpreter mode versus Just-In-Time (JIT) compilation in Java—applied consistently to both baseline and optimized versions.

The results show that Python achieves the highest proportion of energy improvements, with 58% of optimization techniques leading to energy savings and reductions of up to 70.38%. However, despite this effectiveness, Python still exhibits the highest overall energy consumption among the three programming languages.

## What is this?

This repository contains the results of 26 software optimization techniques implemented in C, Python, and Java.

* **C**: Evaluated with two compiler optimization levels: `-O0` and `-O3`.
* **Python**: Tested using the CPython interpreter and the Nuitka compiler.
* **Java**: Executed in two modes: with JIT enabled and with JIT disabled.

The study focuses on analyzing and comparing the **energy efficiency** of these optimization techniques across the three programming languages.

## How is it structured?

Each programming language contains two folders:

* `code`: Implementation of the 26 optimization techniques.
* `results`: Output results obtained from applying these techniques.

In addition, the repository includes two main scripts:

* `execute_tests.sh`: Script used to validate functional equivalence before energy measurement.
* `measure.sh`: Script used to execute the full experimental workflow and collect energy and performance measurements.

## Measurement Infrastructure

The `measure.sh` script is executed within a controlled experimental environment. Measurements are orchestrated by a dedicated control server, which coordinates the full experimental workflow.

This server is responsible for:

* Starting and stopping energy measurements via a remote IP-based interface.
* Executing all benchmark programs under controlled conditions.
* Collecting execution time and energy consumption data.
* Ensuring reproducibility across all experiments.

This infrastructure is integrated within the **FEETINGS experimental ecosystem**, which provides a coordinated framework for reproducible energy measurements.

## Functional Equivalence and Test Validation

Before running any measurements, the `execute_tests.sh` script is executed to ensure that both versions of each benchmark (standard and optimized) are functionally equivalent. Only benchmarks that produce identical return values across all test cases are considered valid for measurement.

The notion of equivalence is defined exclusively in terms of the **return value of the main computation function**. Although some implementations may internally use global variables, arrays, or mutable state, these are not considered for validation.

### What the tests check

The test suite validates that:

* The return value of the main function is identical across repeated executions.
* Both the standard and optimized versions produce exactly the same return values for all test cases.
* Execution is deterministic across runs.

### Test execution procedure

The `execute_tests.sh` script automatically:

1. Executes all predefined test cases for each programming language.
2. Runs each benchmark multiple times to ensure deterministic behavior.
3. Compares repeated executions of the same implementation.
4. Compares standard and optimized versions based on return values.

A benchmark is considered valid only if all checks succeed exactly.

## Sample Logs

The repository includes a `sample-logs` directory with example outputs generated during the measurement process. These files illustrate the structure and format of the collected data.

The logs include:

* Execution identifiers and timestamps
* Execution time measurements
* Energy consumption values
* Hardware-level readings from the Device Under Test (DUT)

The full dataset is not included due to its large size.

## Impact of failures

If a benchmark fails the functional equivalence tests:

* It is excluded from the measurement phase.
* No energy or performance data is collected.
* It is removed from the final dataset to ensure correctness and reproducibility.

## Contacts

[Green Team Alarcos](https://greenteamalarcos.uclm.es/)