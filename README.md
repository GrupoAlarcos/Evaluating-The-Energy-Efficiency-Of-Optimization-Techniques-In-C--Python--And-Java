# Evaluating the Energy Efficiency of Optimization Techniques in C, Python, and Java
[Carlos Pulido](https://orcid.org/0009-0008-8122-3500)  

[Félix García](https://orcid.org/0000-0001-6460-0353)

[Mª Ángeles Moraga](https://orcid.org/0000-0001-9165-7144)

[Miguel Baños-González](https://orcid.org/0009-0000-5444-7631)

[Juan Antonio Rico-Gallego](https://orcid.org/0000-0002-4264-7473)

[Javier Corral-García](https://orcid.org/0000-0002-4682-9389)


## Abstract
Software plays a critical role in modern society, but its energy consumption is a growing concern. This issue is especially evident in the Internet of Things (IoT), which involves billions of devices operating under
strict energy constraints, most of which rely on C Programming Language (PL) because of its energy efficiency. Outside of IoT, PLs like Python and Java have gained popularity despite being less energy-efficient,
particularly Python. Optimization is therefore essential to reduce energy use in both contexts: (i) in the IoT,
where the large number of devices causes high cumulative energy consumption despite using C; and (ii) for
Python and Java, given their widespread adoption and higher energy demands. However, software optimizations do not always lead to lower energy consumption. Therefore, their impact on energy efficiency must
be evaluated carefully. This paper evaluates the energy impact of 26 optimization techniques in C, Python,
and Java across different compiler and runtime configurations. The main focus is on comparing baseline
and optimized implementations under each configuration. In addition, the study investigates the effect of
compiler and runtime settings—such as -O0 versus -O3 in C, CPython versus Nuitka in Python, and interpreter mode versus Just-In-Time (JIT) compilation in Java—applied consistently to both baseline and
optimized versions to assess their influence on energy consumption. The results show that Python achieved
the best overall improvement, with 58% of the optimization techniques resulting in energy savings, achieving reductions of up to 70.38%. However, despite this high effectiveness in reducing energy consumption,
Python still exhibits the highest overall energy consumption among the three PLs.

## What is this?
This repository contains the results of 26 software optimization techniques implemented in C and Python.

- **C**: Evaluated with two compiler optimization levels: `-O0` and `-O3`.  
- **Python**: Tested using CPython interpreter and Nuitka compiler.
- **Java**: Executed in two modes: with JIT enabled and with JIT disabled.

The study focuses on analyzing and comparing the **energy efficiency** of these optimization techniques across the three programming languages.

## How is structured?
This repository contains one main folder: `programming_languages`.

### programming_languages
Each programming language contains two folders:
   - `code`: Code for the 26 optimization techniques.  
   - `results`: Results obtained from applying these techniques.

## Contacts
[Green Team Alarcos](https://greenteamalarcos.uclm.es/)

