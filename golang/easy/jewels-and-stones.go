package main

import (
	"fmt"
	"strings"
)

func main() {
	jewels := "ace"
	stones := "dadc"
	fmt.Println(numJewelsInStones(jewels, stones))
}

func numJewelsInStones(jewels string, stones string) int {
	var builder strings.Builder
	for _, char := range stones {
		if !strings.ContainsRune(jewels, char){
			builder.WriteRune(char)
		}
	}
	return len(stones) - len(builder.String())
}
