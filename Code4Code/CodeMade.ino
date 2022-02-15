PROGMEM char a1[] = 
  "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"
  "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ"
  "KLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRST"
  "UVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCD"
  "EFGHIJKLMNOPQRSTUVWXYZ123";
PROGMEM char a2[] = 
  "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"
  "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghij"
  "klmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrst"
  "uvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd"
  "efghijklmnopqrstuvwxyz123";
PROGMEM char z1[] = 
  "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBA"
  "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQ"
  "PONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHG"
  "FEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBAZYXW"
  "VUTSRQPONMLKJIHGFEDCBA456";
PROGMEM char z2[] = 
  "zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba"
  "zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrq"
  "ponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihg"
  "fedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxw"
  "vutsrqponmlkjihgfedcba456";


char szPi[PI_DIGITS_SZ];

DATA_PLACE char szMyPi1[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc1( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc2( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi1) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi2[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc2( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc3( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi2) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi3[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc3( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc4( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi3) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi4[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc4( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc5( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi4) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi5[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc5( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc6( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi5) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi6[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc6( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc7( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi6) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi7[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc7( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc8( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi7) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi8[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc8( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc9( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi8) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi9[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc9( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc10( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi9) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi10[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc10( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc11( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi10) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi11[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc11( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc12( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi11) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi12[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc12( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc13( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi12) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi13[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc13( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc14( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi13) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi14[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc14( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc15( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi14) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi15[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc15( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc16( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi15) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi16[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc16( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc17( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi16) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi17[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc17( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc18( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi17) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi18[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc18( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc19( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi18) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi19[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc19( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc20( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi19) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi20[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc20( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc21( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi20) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi21[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc21( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc22( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi21) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi22[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc22( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc23( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi22) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi23[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc23( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc24( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi23) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi24[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc24( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc25( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi24) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi25[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc25( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc26( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi25) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi26[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc26( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc27( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi26) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi27[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc27( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc28( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi27) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi28[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc28( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc29( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi28) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi29[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc29( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc30( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi29) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi30[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc30( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc31( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi30) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi31[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc31( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc32( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi31) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi32[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc32( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc33( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi32) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi33[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc33( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc34( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi33) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi34[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc34( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc35( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi34) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi35[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc35( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc36( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi35) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi36[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc36( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc37( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi36) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi37[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc37( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc38( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi37) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi38[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc38( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc39( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi38) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi39[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc39( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc40( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi39) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi40[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc40( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc41( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi40) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi41[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc41( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc42( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi41) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi42[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc42( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc43( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi42) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi43[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc43( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc44( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi43) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi44[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc44( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc45( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi44) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi45[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc45( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc46( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi45) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi46[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc46( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc47( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi46) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi47[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc47( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc48( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi47) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi48[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc48( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc49( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi48) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi49[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc49( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc50( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi49) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi50[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc50( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc51( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi50) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi51[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc51( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc52( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi51) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi52[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc52( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc53( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi52) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi53[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc53( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc54( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi53) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi54[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc54( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc55( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi54) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi55[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc55( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc56( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi55) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi56[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc56( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc57( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi56) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi57[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc57( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc58( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi57) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi58[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc58( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc59( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi58) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi59[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc59( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc60( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi59) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi60[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc60( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc61( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi60) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi61[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc61( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc62( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi61) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi62[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc62( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc63( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi62) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi63[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc63( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc64( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi63) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi64[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc64( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc65( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi64) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi65[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc65( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc66( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi65) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi66[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc66( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc67( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi66) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi67[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc67( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc68( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi67) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi68[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc68( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc69( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi68) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi69[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc69( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc70( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi69) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi70[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc70( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc71( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi70) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi71[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc71( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc72( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi71) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi72[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc72( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc73( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi72) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi73[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc73( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc74( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi73) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi74[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc74( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc75( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi74) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi75[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc75( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc76( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi75) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi76[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc76( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc77( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi76) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi77[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc77( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc78( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi77) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi78[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc78( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc79( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi78) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi79[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc79( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc80( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi79) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi80[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc80( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc81( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi80) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi81[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc81( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc82( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi81) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi82[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc82( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc83( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi82) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi83[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc83( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc84( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi83) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi84[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc84( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc85( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi84) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi85[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc85( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc86( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi85) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi86[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc86( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc87( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi86) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi87[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc87( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc88( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi87) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi88[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc88( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc89( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi88) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi89[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc89( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc90( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi89) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi90[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc90( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc91( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi90) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi91[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc91( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc92( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi91) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi92[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc92( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc93( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi92) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi93[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc93( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc94( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi93) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi94[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc94( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc95( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi94) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi95[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc95( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc96( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi95) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi96[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc96( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc97( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi96) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi97[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc97( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc98( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi97) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi98[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc98( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc99( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi98) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi99[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc99( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc100( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi99) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi100[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc100( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc101( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi100) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi101[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc101( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc102( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi101) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi102[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc102( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc103( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi102) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi103[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc103( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc104( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi103) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi104[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc104( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc105( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi104) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi105[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc105( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc106( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi105) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi106[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc106( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc107( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi106) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi107[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc107( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc108( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi107) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi108[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc108( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc109( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi108) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi109[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc109( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc110( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi109) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi110[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc110( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc111( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi110) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi111[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc111( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc112( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi111) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi112[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc112( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc113( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi112) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi113[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc113( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc114( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi113) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi114[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc114( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc115( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi114) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi115[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc115( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc116( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi115) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi116[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc116( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc117( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi116) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi117[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc117( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc118( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi117) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi118[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc118( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc119( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi118) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi119[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc119( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc120( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi119) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi120[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc120( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc121( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi120) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi121[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc121( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc122( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi121) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi122[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc122( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc123( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi122) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi123[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc123( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc124( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi123) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi124[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc124( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc125( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi124) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi125[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc125( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc126( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi125) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi126[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc126( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc127( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi126) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi127[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc127( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc128( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi127) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi128[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc128( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc129( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi128) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi129[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc129( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc130( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi129) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi130[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc130( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc131( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi130) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi131[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc131( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc132( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi131) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi132[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc132( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc133( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi132) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi133[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc133( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc134( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi133) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi134[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc134( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc135( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi134) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi135[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc135( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc136( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi135) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi136[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc136( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc137( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi136) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi137[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc137( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc138( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi137) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi138[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc138( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc139( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi138) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi139[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc139( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc140( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi139) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi140[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc140( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc141( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi140) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi141[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc141( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc142( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi141) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi142[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc142( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc143( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi142) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi143[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc143( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc144( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi143) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi144[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc144( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc145( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi144) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi145[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc145( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc146( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi145) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi146[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc146( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc147( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi146) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi147[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc147( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc148( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi147) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi148[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc148( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc149( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi148) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi149[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc149( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc150( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi149) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi150[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc150( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc151( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi150) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi151[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc151( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc152( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi151) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi152[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc152( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc153( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi152) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi153[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc153( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc154( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi153) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi154[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc154( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc155( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi154) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi155[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc155( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc156( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi155) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi156[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc156( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc157( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi156) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi157[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc157( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc158( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi157) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi158[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc158( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc159( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi158) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi159[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc159( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc160( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi159) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi160[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc160( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc161( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi160) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi161[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc161( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc162( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi161) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi162[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc162( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc163( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi162) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi163[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc163( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc164( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi163) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi164[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc164( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc165( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi164) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi165[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc165( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc166( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi165) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi166[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc166( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc167( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi166) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi167[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc167( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc168( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi167) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi168[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc168( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc169( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi168) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi169[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc169( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc170( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi169) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi170[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc170( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc171( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi170) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi171[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc171( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc172( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi171) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi172[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc172( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc173( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi172) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi173[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc173( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc174( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi173) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi174[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc174( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc175( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi174) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi175[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc175( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc176( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi175) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi176[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc176( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc177( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi176) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi177[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc177( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc178( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi177) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi178[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc178( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc179( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi178) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi179[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc179( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc180( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi179) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi180[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc180( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc181( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi180) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi181[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc181( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc182( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi181) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi182[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc182( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc183( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi182) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi183[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc183( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc184( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi183) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi184[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc184( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc185( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi184) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi185[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc185( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc186( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi185) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi186[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc186( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc187( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi186) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi187[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc187( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc188( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi187) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi188[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc188( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc189( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi188) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi189[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc189( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc190( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi189) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi190[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc190( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc191( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi190) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi191[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc191( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc192( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi191) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi192[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc192( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc193( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi192) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi193[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc193( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc194( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi193) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi194[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc194( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc195( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi194) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi195[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc195( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc196( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi195) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi196[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc196( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc197( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi196) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi197[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc197( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc198( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi197) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi198[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc198( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc199( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi198) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

DATA_PLACE char szMyPi199[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc199( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = ThisFunc0( inVar, priorPiSum, knownPiSum );
  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi199) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}

// Terminate Function Here
DATA_PLACE char szMyPi0[]="314159265358979323846264338327950288419716939937510582097494";
CODE_PLACE uint32_t ThisFunc0( uint32_t inVar, uint32_t priorPiSum, const uint32_t *knownPiSum ) { 
  uint32_t outVar = 0;

  uint32_t myPi = seePi( PI_DIGITS, szPi );
  if ( strcmp( szPi, szPiDigits ) )
    Serial.printf( "%cPI FAIL szPiDigits String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( strcmp( szPi, szMyPi0) )
    Serial.printf( "%cPI FAIL szMyPi String pi>>%s in %s%c%c",13, szPi, __FUNCTION__,13,13 );
  if ( myPi == priorPiSum && myPi == *knownPiSum )
    outVar++; 
  else
    Serial.printf( "%cPI FAIL pi SUMS >>%lu %lu %lu in %s%c%c",13, myPi, priorPiSum, *knownPiSum, __FUNCTION__,13,13 );
  return outVar;
}
