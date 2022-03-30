pair<long long, long long> getMinMax(long long a[], int n) {
    ll mini = 1e18, maxi = -1;
    for(int i=0; i<n; i++){
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
    }
    return {mini, maxi};
}
