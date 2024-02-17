package easy

import (
	"strings"
)

func NumJewelsInStones(jewels string, stones string) int {
	var builder strings.Builder
	for _, char := range stones {
		if !strings.ContainsRune(jewels, char){
			builder.WriteRune(char)
		}
	}
	return len(stones) - len(builder.String())
}

func AltSolution(jewels string, stones string) int {
	// create map for the jewels
	jmap := make(map[rune]int)
	// store each char/rune as keys
	for _, char := range jewels {
		jmap[char] += 1;
	}
	ans := 0
	// loop through the stones
	for _, char := range stones {
		// check if char is in jewels
		if numOfJewels, ok := jmap[char]; ok {
			ans +=  numOfJewels; // increase
		}
	}
	return ans
}