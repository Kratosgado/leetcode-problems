package easy

import "fmt"

func IsPalindrome(x int) bool {
	if x < 0 {
		return false
	}
	// reverse the number
	rev, temp := 0, x
	for temp != 0 {
		rev = rev*10 + temp%10
		temp = temp / 10
	}
	
	fmt.Println(rev)
	return rev == x
}