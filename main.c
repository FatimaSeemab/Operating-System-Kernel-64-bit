#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("*******"); print_str("   "); 
    print_str("*******");  print_str("   "); 
    print_str("*******"); print_str("   ");  
    print_str("*******"); print_str("   "); 
    print_str("*******"); print_str("   "); 
    print_char('\n');
      for(int i=0;i<6;i++)
  { print_str("*      "); print_str("   "); 
    print_str("*      "); print_str("   "); 
    print_str("*      "); print_str("   "); 
    print_str("*      "); print_str("   "); 
    print_str("*      "); print_str("   "); 
    print_char('\n');}
    print_str("*******"); print_str("   ");
    print_str("*******"); print_str("   ");
    print_str("*******"); print_str("   ");
    print_str("       "); print_str("   "); 
    print_str("*******"); print_str("   "); 
    print_char('\n');
     for(int i=0;i<6;i++)
    {print_str("      "); print_str("*"); 
    print_str("   "); print_str("*      ");
    print_str("   "); print_str("*      ");
    print_str("   "); print_str("*      ");
    print_str("   "); print_str("      *");
     print_char('\n');
    }

    print_str("*******"); 
    print_str("   "); 
    print_str("*******"); 
     print_str("   "); 
    print_str("*******"); 
    print_str("   ");  
    print_str("*******"); 
    print_str("   "); 
    print_str("*******"); print_str("   "); 
    
      print_char('\n');

}