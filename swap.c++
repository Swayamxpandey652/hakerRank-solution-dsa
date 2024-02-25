vector<int> reverseArray(vector<int> a) {
int i=0;
int j= a.size()-1;
while(i<j){
int temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
return a;
}
