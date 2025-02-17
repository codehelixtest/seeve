
unsigned int amount(int y) { return (unsigned int)(y < 0 ? 0 : y); }

int main(){
   int amoun;
   int value=-300;
   amoun=amount(value);
   return 0;
}
