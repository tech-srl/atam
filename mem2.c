int main() { 
  void* p1 = malloc(1024);
  free(p1);
  // …
  free(p1);
}