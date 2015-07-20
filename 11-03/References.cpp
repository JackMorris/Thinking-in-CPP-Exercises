int main() {
  // (1) - Create a reference that is not initialized when it is created.
  int &a; // Compilation error - declaration of reference requires an initialiser.

  // (2) - Change a reference to refer to another object after it is initialized.
  int b = 1;
  int c = 2;
  int &d = b;
  d = c;
  // d is a reference to b.
  // No syntax exists to change d to a refernce to c. The above simply performs a copy assignment.

  // (3) - Create a NULL reference.
  int &e = 0;
  // This is the typical syntax for creating a null pointer (assign to 0).
  // However, the concept of a null reference doesn't exist.
  // The above attempts to create a reference to the temporary value containing 0 (which fails, as expected).
}
