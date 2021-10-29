func twoSum(nums []int, target int) []int {
	var ans []int
	m := make(map[int]int)

	for index, value := range nums {
		if val, ok := m[value]; ok {
			ans = append(ans, val, index)
			return ans
		}
		m[target-value] = index
	}

	return ans
}