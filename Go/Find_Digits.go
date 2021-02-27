func findDigits1(n int32) int32 {
	digits := n
	curdigit := int32(0)
	count := int32(0)

	for digits > 0 {
		curdigit = digits % 10
		digits /= 10
		if curdigit != 0 && n%curdigit == 0 {
			count++
		}
	}

	return count
}