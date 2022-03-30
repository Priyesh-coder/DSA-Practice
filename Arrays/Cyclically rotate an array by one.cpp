void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=1; i<n; i++){
        arr[n-i] = arr[n-1-i];
    }
    arr[0] = temp;
}
