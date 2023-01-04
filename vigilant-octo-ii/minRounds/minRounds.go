package main

/*  
kinda misunderstood the blank identifier at first
but thank to this https://go.dev/blog/maps && https://www.educative.io/answers/what-is-the-blank-identifier-in-go 
now it makes sense, i felt like the overall golang code looks more readable to me than the c++ solution 
which i really liked
*/

func minimimRounds(tasks []int)int{

	result :=0
	temp_map := make(map[int]int)

	for _, count := range tasks {
		temp_map[count]++
	}

	for _, task_count := range temp_map{
		if task_count == 1 {
			return -1
		}
		else {
			result += (task_count + 2)/ 3
		}
	}
	
	return result

}