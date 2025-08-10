# Learnings

### Find all subarray with at most K values...

Use sliding window gives all subarray with at most k values - **from 0 to K**
 
### K at 

When question is about k ie perticular  : most of the time use sliding window  in this way

**Find at most k values - Find at most K-1 vlaues*

### In JS - Nums are 64 bit double-precesion floats

All numbers (except BigInt) are 64-bit double-precision floats (IEEE 754 binary64).

That means integers can only be exactly represented up to
Number.MAX_SAFE_INTEGER 


### In JS - Diff between MAX_SAFE_INTEGER vs MAX_VALUE

Number.MAX_SAFE_INTEGER → 9007199254740991 (2⁵³ − 1)

    Largest integer that can be represented exactly in JS double precision.

    Past this, integer math becomes unreliable due to lost mantissa bits.

Number.MAX_VALUE → ~1.7976931348623157e+308

    Absolute largest finite number JS can hold.

    Anything bigger becomes Infinity.

    Precision is terrible long before you reach here — it’s for huge floats, not safe integers.
