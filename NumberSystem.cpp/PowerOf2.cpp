#include <iostream>
using namespace std;
int main()
{
    // ================================================================
    // POWER OF 2 CHECKER - COMPLETE NOTES
    // ================================================================

    // WHAT IS POWER OF 2?
    // Start from 1 and keep doubling:
    // 2^0=1, 2^1=2, 2^2=4, 2^3=8, 2^4=16 ...
    // "how many times did you multiply by 2?"

    // HOW TO CHECK? (loop way)
    // keep dividing by 2 until you reach 1
    // if at any point it doesnt divide evenly → NOT power of 2
    // 8→4→2→1  ✅    6→3→1.5 ❌

    // POWER OF 2 IN BINARY:
    // always has exactly ONE '1' bit, rest all '0's
    // 1  = 00000001
    // 2  = 00000010
    // 4  = 00000100
    // 8  = 00001000
    // 6  = 00000110  ← two '1' bits, NOT power of 2

    // RIGHT SHIFT (>>)
    // n >> 1 = divide by 2
    // 8 = 1000 → shift right → 0100 = 4

    // LEFT SHIFT (<<)
    // n << 1 = multiply by 2
    // 4 = 0100 → shift left → 1000 = 8

    // THE BIT TRICK: n & (n-1) == 0
    // & means AND → only 1&1=1, everything else=0
    // WHY n-1 FLIPS ALL BITS OF POWER OF 2:
    //   borrowing chain! subtracting 1 from 10000:
    //   last 0 cant subtract → borrow from left
    //   that 0 cant borrow   → borrow from left
    //   keep going until finds the lone '1'
    //   that '1' becomes '0' (gave everything away)
    //   every '0' it passed gets 2, keeps 1, passes 1 → becomes '1'
    //   last bit gets 2, spends 1, keeps 1 → becomes '1'
    //   so: 10000-1 = 01111 (all bits flipped!)
    // WHY ONLY POWER OF 2 FLIPS ALL BITS:
    //   power of 2 has all 0s after the lone 1
    //   so borrowing travels ALL the way through
    //   normal numbers have 1s in middle → borrowing stops early
    // RESULT:
    //   power of 2:     n & (n-1) = 0  ✅ (nothing survived AND)
    //   not power of 2: n & (n-1) ≠ 0  ❌ (some 1 survived AND)

    // WHY 1 IS POWER OF 2:
    //   2^0 = 1 (multiplied by 2 zero times = never started)
    //   1 = 00000001 → only ONE '1' bit
    //   1 & 0 = 0 ✅

    // ================================================================

    int n;
    cin >> n;

    // METHOD 1 — loop (easy to understand)
    // if(n <= 0) { cout << 0; return 0; }
    // while(n != 1) {
    //     if(n % 2 != 0) { cout << 0; return 0; }
    //     n = n >> 1;   // divide by 2
    // }
    // cout << 1;

    // METHOD 2 — no loop (fast, one line)
    int ans = (n > 0 && (n & (n - 1)) == 0) ? 1 : 0;
    cout << ans;

    return 0;
}