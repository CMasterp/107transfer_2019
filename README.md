# 107transfer - Polynomial multiplications

- **Binary name:** 107transfer
- **Repository name:** 107transfer
- **Repository rigths:** ramassage-tek
- **Language:** everything working on "the dump"
- **Choosed language:** C
- **Compilation:** via Makefile, including re, clean and fclean rules

# Subject

A laboratory performs tests on new electronic components to be integrated into its last generation chipset.
Those components are entirely characterized by their transfer function, which determines frequency response; this function processes the input frequency and computes an output frequency (caracterizing the way the component amplifies or reduces the input frequency). The transfer functions of these components are rational functions, i.e. fractions such as both the numerator and the denominator are polynomials.
You have to develop a program to optimize the transfer function computations.

> :bulb: You have to manage several components in cascade. In such a case, the transfer function of the set of components is the product of the transfer funtions of each component.

A transfer function is defined by two strings (one for the numerator, one for the denominator), composed by the polynomial coefficients split by the ‘*’ sign.
For instance, “1*4*2*6*0*8” stands for 8x⁵ + 6x³ + 2x² + 4x + 1.

Your program has to print the frequency responses of the component for a every values in a range from 0 to 1, with a step of 0.001.

> :bulb: You should use a fast algorithm, slow programs will be considered non functional... Beware of precision when using floating-point numbers!

## Nao Marvin

| Details      | Nao Marvin :robot: (%) |
| ------------- |:-------------:|
| `rigor`: 100% \| `basic`: 100% \| `polynomials`: 100% \| `mathematical rigor`: 100% | 100% |

## Prerequisites

What you need

```
GlibC
gcc
make
```

## Compiling

Clone the repository and go inside. Then,

```
$ make
```

## Usage

```
~/B-MAT-100> ./107transfer [num den]*
```
- **num:** polynomial numerator defined by its coefficients
- **den:** polynomial denominator defined by its coefficients

## Examples

```
∼/B-MAT-200> ./107transfer “0*1*2*3*4” “1” > file
∼/B-MAT-200> head -n 12 file
0.000 -> 0.00000
0.001 -> 0.00100
0.002 -> 0.00201
0.003 -> 0.00302
0.004 -> 0.00403
0.005 -> 0.00505
0.006 -> 0.00607
0.007 -> 0.00710
0.008 -> 0.00813
0.009 -> 0.00916
0.010 -> 0.01020
0.011 -> 0.01125
∼/B-MAT-200> tail file
0.991 -> 9.73282
0.992 -> 9.76223
0.993 -> 9.79171
0.994 -> 9.82126
0.995 -> 9.85087
0.996 -> 9.88056
0.997 -> 9.91031
0.998 -> 9.94014
0.999 -> 9.97003
1.000 -> 10.00000
```

```
∼/B-MAT-200> ./107transfer “0*0*9” “1*3*5” “2*4*6” “8*8*8”> file
∼/B-MAT-200> head file
0.000 -> 0.00000
0.001 -> 0.00000
0.002 -> 0.00001
0.003 -> 0.00002
0.004 -> 0.00004
0.005 -> 0.00006
0.006 -> 0.00008
0.007 -> 0.00011
0.008 -> 0.00014
0.009 -> 0.00018
```

> :bulb: Mind the float numbers precision!