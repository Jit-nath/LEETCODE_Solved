/* Given an integer x, return true if x is a palindrome, and false otherwise.

    Example 1 :
        Input : x = 121
        Output : true
    Explanation : 121 reads as 121 from left to right and from right to left.

    Example 2 :
        Input : x = -121
        Output : false
    Explanation : From left to right,it reads - 121. From right to left, it becomes 121 -.Therefore it is not a palindrome.

    Example 3 :
        Input : x = 10
        Output : false
    Explanation : Reads 01 from right to left.Therefore it is not a palindrome.

    Constraints :
        -231 <= x <= 231 - 1

    Follow up : Could you solve it without converting the integer to a string?
*/

#include <iostream>
#include <vector>
using namespace std;

bool isNegative(int num)
{
    return (num & 0x80000000) != 0;
}

bool Palindrome(int number)
{
    if (isNegative(number))
        return false;

    int original = number;
    int reversed = 0;

    // Reverse the number
    while (number > 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    // Check if reversed number equals the original number
    return original == reversed;
}

int main()
{
    int target = -121;

    cout << "Number is palindrome: " << (Palindrome(target) ? "true" : "false") << "\n";

    return 0;
}
