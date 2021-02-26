func getCumulativeLikes(n int32, recv int32) int32 {
	if n == 0 {
		return int32(0)
	}
	return int32(recv/2) + getCumulativeLikes(n-1, (recv/2)*3)
}

func viralAdvertising(n int32) int32 {
	return getCumulativeLikes(n, 5)
}