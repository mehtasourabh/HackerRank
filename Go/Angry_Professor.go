func angryProfessor(k int32, a []int32) string {
	var count int32
	for _, time := range a {
		if time <= 0 {
			count++
		}

		if count >= k {
			return "NO"
		}
	}
	return "YES"
}