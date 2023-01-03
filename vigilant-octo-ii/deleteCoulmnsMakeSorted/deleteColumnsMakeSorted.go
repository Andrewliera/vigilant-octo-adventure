package main

import "fmt"

func minDeletionSize(str []string) int {

	word_length := len(str[0])
	length := len(str)
	count := 0

	for i := 0; i < word_length; i++ {

		for j := 1; j < length; j++ {

			if str[j][i] < str[j-1][i] {
				count++
				break
			}
		}

	}

	return count
}
func main() {

	str := []string{"abc", "bce", "cae"}

	test := minDeletionSize(str)
	fmt.Println(test)
}
