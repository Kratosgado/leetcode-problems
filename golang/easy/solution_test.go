package easy

import (
	"testing"

	
)

func TestJewelsAndStones(t *testing.T) {
	jewels := "aA"
	stones := "aAAbbbb"
	expected := 3
	result := CountAlternative(jewels, stones)
	t.Log(result)
	if result != expected {
		t.Errorf("Expected %d but got %d", expected, result)
	}
}

func TestIsPalindrome(t *testing.T) {
	input := 121
	expected := true
	result := IsPalindrome(input)
	if result != expected {
		t.Errorf("Expected %t but got %t", expected, result)
	}
}