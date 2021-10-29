func maxArea(height []int) int {
	start := 0
	end := len(height) - 1
	max_area := 0

	for start < end {
		length := end - start

		var min_height int
		if height[start] > height[end] {
			min_height = height[end]
		} else {
			min_height = height[start]
		}

		area := min_height * length
		if area > max_area {
			max_area = area
		}
		if height[start] > height[end] {
			end--
		} else {
			start++
		}

	}

	return max_area
}