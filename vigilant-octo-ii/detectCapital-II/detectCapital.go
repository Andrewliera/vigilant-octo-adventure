package main

import (
	"fmt"
	"unicode"
)

func detectCapitalUse(word string) bool {

	count := 0

	for _, indx := range word {
		if unicode.IsUpper(indx) {
			count++
		}
	}

	if count == len(word) || count == 0 {
		return true
	}

	if count == 1 && 'A' <= word[0] && word[0] <= 'Z' {
		return true
	}
	return false

}
func main() {
	word := "FlGaG"
	test := detectCapitalUse(word)
	fmt.Println(test)
}
