int lowerBound(vector<int> arr, int n, int x) {
	int l = 0,r = n-1;
	int ans = n;
	while(l<=r)
	{
		int mid = (l+r)/2;

		if(arr[mid]>=x)
		{
			ans = mid;
			r = mid-1;
		}
		else l = mid + 1;
		
	}

	return ans;
}
