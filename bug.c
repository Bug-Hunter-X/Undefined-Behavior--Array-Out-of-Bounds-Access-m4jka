int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr + 5; 
  *ptr = 10;  // This will cause undefined behavior
  return 0;
}