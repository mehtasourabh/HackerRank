func utopianTree(n int32) int32 {
	height := int32(1)
	if n != 0 {
		for iSeason := int32(1); iSeason <= n; iSeason++ {
			if iSeason%2 == 1 {
				height *= 2
			} else {
				height++
			}
		}
	}
	return height
}