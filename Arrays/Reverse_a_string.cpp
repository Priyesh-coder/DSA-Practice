string reverseWord(string str){
    int n = str.length();
    int st = 0, end = n-1;
    while(st<end){
        swap(str[st++],str[end--]);
    }
  return str;
}
