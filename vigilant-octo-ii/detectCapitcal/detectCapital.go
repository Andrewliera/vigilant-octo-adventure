package main

import (
	"fmt"
	"strings"
)

func detectCapitalUse(word string) bool {

	foo := strings.ToUpper(word)
	bar := strings.ToLower(word)
	foobar := strings.Title(bar)

	switch word {
	case foo:
		fmt.Println(foo)
		return true
	case bar:
		fmt.Println(bar)
		return true
	case foobar:
		fmt.Println(foobar)
		return true
	default:
		fmt.Println(word)
		return false
	}

}
