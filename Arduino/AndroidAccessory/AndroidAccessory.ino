#include <AndroidAccessory.h>

char manufacturer[] = "lmdsmart";
char model[] = "Arduino_ADK";
char description[] ="Accesorio basado en Arduino";
char ver[] = "1.0";
char uri[]="https://www.lmdsmart.com/";
char serial[]="00000000";
AndroidAccessory accessory(manufacturer,model,description,ver,uri,serial);

bool estado;

void setup() {
}

void loop() {
  if (!accessory.isConnected()) accessory.begin();
}
