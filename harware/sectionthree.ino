void sectionthree() {

   if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 3000) {
      
      if(s1){
        //INIT TANGIBLE SCORES 
        usbMIDI.sendNoteOn(1, 127, 11);
        usbMIDI.sendNoteOn(1, 127, 12);
        usbMIDI.sendNoteOn(1, 127, 13);
        s1=false;
        s2=true;
      }  
      
      ledBlock(IVORY, 35, 57);   
      dimin(40,20);
      
   }
   if (currentMillis - previousMillis  > 3000 && currentMillis - previousMillis < 4000) {   
      ledBlock(IVORY, 35, 57);
           
      dimout(0,5);
      if(s2){
        //usbMIDI.sendNoteOn(2, 99, 11);
        //usbMIDI.sendNoteOn(2, 99, 12);
        //usbMIDI.sendNoteOn(2, 99, 13);
        s2=false;
        s1=true;
      } 
      
   } 
  if (currentMillis - previousMillis  > 4000 && currentMillis - previousMillis < 5000) {
      if(s1){
        //usbMIDI.sendNoteOn(3, 99, 11);
        //usbMIDI.sendNoteOn(3, 99, 12);
        //usbMIDI.sendNoteOn(3, 99, 13);
        s1=false;
        s2=true; 
      }  
      
      ledBlock(IVORY, 70, 80);   
      dimin(40,10);
      
   }
   if (currentMillis - previousMillis  > 5000 && currentMillis - previousMillis < 6500) {   
      ledBlock(IVORY, 70, 80);   
      dimout(0,10);

   } 


   if (currentMillis - previousMillis  > 6500 && currentMillis - previousMillis < 9000) {
      if(note){
        //usbMIDI.sendNoteOn(19, 22, 4);
        note=false;
         
      }  
      
      ledBlock(IVORY, 19, 22);   
      dimin(40,20);
      
   }
   if (currentMillis - previousMillis  > 9000 && currentMillis - previousMillis < 10000) {   
      ledBlock(IVORY, 19, 22);     
      dimout(0,7);
      
   } 

   if (currentMillis - previousMillis  > 10000 && currentMillis - previousMillis < 15000) {
      if(note){
        //usbMIDI.sendNoteOn(19, 22, 4);
        note=false;
         
      }  
      
      ledBlock(IVORY, 0, 18);   
      dimin(40,20);
      
   }
   //hasa aqui he tocado en la derecha varios animalitos, ahora aparecen por la izquierda
   if (currentMillis - previousMillis  > 15500 && currentMillis - previousMillis < 16500) {   
      brightness = 40;
      ledBlock(IVORY, 235, 237);   
      //Serial.println("1");       
   }
   if (currentMillis - previousMillis  > 16500 && currentMillis - previousMillis < 17500) { 
    Serial.println("crec -12");
    brightness = 40;  
      ledBlock(IVORY, 203, 207);
      ledBlock(IVORY, 235, 237); 
      ledBlock(IVORY, 148, 150);  
      ledBlock(IVORY, 128, 133);
      //ledBlock(IVORY, 235, 237);
      ledBlock(IVORY, 33, 34);
      ledBlock(IVORY, 84, 88);
      ledBlock(IVORY, 58, 60);
       ledBlock(IVORY, 161, 163); 
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      //Serial.println("2");
                 
   }
   if (currentMillis - previousMillis  > 17500 && currentMillis - previousMillis < 18500) {
    Serial.println("crec -11");   
    brightness = 40;
      //ledBlock(IVORY, 209, 221);
      ledBlock(IVORY, 115, 116); 
      ledBlock(IVORY, 203, 207);  
      ledBlock(IVORY, 128, 133);
      ledBlock(IVORY, 58, 60);
      //ledBlock(IVORY, 203, 207);
      ledBlock(IVORY, 148, 150); 
      ledBlock(IVORY, 235, 237); 
      ledBlock(IVORY, 115, 116);  
      //ledBlock(IVORY, 209, 221);
      //ledBlock(IVORY, 128, 133);
      //ledBlock(IVORY, 235, 237);
      ledBlock(IVORY, 33, 34);
      ledBlock(IVORY, 84, 88);
      ledBlock(IVORY, 161, 163);
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);
      //Serial.println("3"); 
               
   }
   if (currentMillis - previousMillis  > 18500 && currentMillis - previousMillis < 19500) { 
    Serial.println("crec -10");
    brightness = 40;  
      //ledBlock(IVORY, 209, 221);     
      ledBlock(IVORY, 203, 207);  
      ledBlock(IVORY, 164, 166);  
      ledBlock(IVORY, 35, 57); 
      //ledBlock(IVORY, 203, 207);
      ledBlock(IVORY, 148, 150); 
      ledBlock(IVORY, 235, 237); 
      ledBlock(IVORY, 115, 116);  
      //ledBlock(IVORY, 209, 221);
      ledBlock(IVORY, 128, 133);
      //ledBlock(IVORY, 235, 237);
      ledBlock(IVORY, 33, 34);
      ledBlock(IVORY, 84, 88);
      ledBlock(IVORY, 58, 60);
      //ledBlock(IVORY, 35, 57);
      ledBlock(IVORY, 161, 163); 
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);
      //Serial.println("33"); 
               
   }
   if (currentMillis - previousMillis  > 19500 && currentMillis - previousMillis < 21500) { 
    Serial.println("crec -9"); 
    brightness = 40; 
      ledBlock(IVORY, 283, 293);
      ledBlock(IVORY, 115, 116);
      //ledBlock(IVORY, 283, 293); 
      ledBlock(IVORY, 33, 34);  
       //ledBlock(IVORY, 209, 221);
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 203, 207); 
      ledBlock(IVORY, 164, 166);
      //ledBlock(IVORY, 33, 34);
      ledBlock(IVORY, 84, 88);
      ledBlock(IVORY, 148, 150); 
      ledBlock(IVORY, 58, 60);
      ledBlock(IVORY, 161, 163);
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);
      ledBlock(IVORY, 244, 258); 
      ledBlock(IVORY, 146, 147);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 168, 169);
      //Serial.println("4");          
   }

   //ahora apareecen los de enmedio
   if (currentMillis - previousMillis  > 21500 && currentMillis - previousMillis < 22500) {
    Serial.println("crec -8");  
    brightness = 40; 
      ledBlock(IVORY, 283, 293);
      //ledBlock(IVORY, 115, 16);    
      ledBlock(IVORY, 33, 34); 
      ledBlock(IVORY, 35, 57);  
      //ledBlock(IVORY, 35, 57);
      //ledBlock(IVORY, 283, 293);
      ledBlock(IVORY, 115, 116);
      //ledBlock(IVORY, 283, 293); 
      //ledBlock(IVORY, 33, 34);  
      ledBlock(IVORY, 209, 221);
      //ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 203, 207); 
      ledBlock(IVORY, 164, 166); 
      //ledBlock(IVORY, 33, 34);
      ledBlock(IVORY, 84, 88);   
      ledBlock(IVORY, 148, 150); 
      ledBlock(IVORY, 58, 60);
      ledBlock(IVORY, 161, 163);
      ledBlock(IVORY, 142, 145);
      ledBlock(IVORY, 180, 182);
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);
      ledBlock(IVORY, 244, 258); 
      ledBlock(IVORY, 146, 147);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 168, 169);
      //Serial.println("5");
       
   }
   if (currentMillis - previousMillis  > 22500 && currentMillis - previousMillis < 23500) { 
    Serial.println("crec -7");  
    brightness = 40;
      ledBlock(IVORY, 118, 121); 
      ledBlock(IVORY, 279, 280);  
      ledBlock(IVORY, 33, 34);  
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 225, 231);  
      ledBlock(IVORY, 283, 293);
      ledBlock(IVORY, 115, 116);
      ledBlock(IVORY, 283, 293); 
      //ledBlock(IVORY, 33, 34);  
      ledBlock(IVORY, 209, 221);
      //ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 203, 207); 
      ledBlock(IVORY, 164, 166); 
      //ledBlock(IVORY, 33, 34);
      ledBlock(IVORY, 84, 88);
      ledBlock(IVORY, 148, 150);
      ledBlock(IVORY, 58, 60); 
      ledBlock(IVORY, 161, 163);
      ledBlock(IVORY, 142, 145);
      ledBlock(IVORY, 180, 182);
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);
      ledBlock(IVORY, 244, 258);
      ledBlock(IVORY, 146, 147);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 168, 169); 
      //Serial.println("6");       
   }
   if (currentMillis - previousMillis  > 23500 && currentMillis - previousMillis < 24500) { 
    Serial.println("crec -6");
    brightness = 40;  
      ledBlock(IVORY, 172, 175);    
      ledBlock(IVORY, 118, 121); 
      ledBlock(IVORY, 279, 280);  
      ledBlock(IVORY, 84, 88);
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 225, 231); 
      ledBlock(IVORY, 283, 293);
      ledBlock(IVORY, 115, 116);
      //ledBlock(IVORY, 283, 293); 
      ledBlock(IVORY, 33, 34);  
      ledBlock(IVORY, 209, 221);
      //ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 203, 207); 
      ledBlock(IVORY, 164, 166);  
      //ledBlock(IVORY, 33, 34);
      //ledBlock(IVORY, 84, 88); 
      ledBlock(IVORY, 58, 60);  
      ledBlock(IVORY, 161, 163);  
      ledBlock(IVORY, 142, 145);
      ledBlock(IVORY, 180, 182);  
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);
      ledBlock(IVORY, 244, 258); 
   }
   if (currentMillis - previousMillis  > 24500 && currentMillis - previousMillis < 25500) {
    Serial.println("crec -5");  
    brightness = 40; 
      ledBlock(IVORY, 164, 166);  
      ledBlock(IVORY, 172, 175);    
      ledBlock(IVORY, 118, 121); 
      ledBlock(IVORY, 279, 280);  
      ledBlock(IVORY, 84, 88); 
      ledBlock(IVORY, 128,133); 
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 225, 231);   
      ledBlock(IVORY, 58, 60);   
      ledBlock(IVORY, 161, 163); 
      ledBlock(IVORY, 142, 145);
      ledBlock(IVORY, 180, 182);
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);    
      ledBlock(IVORY, 244, 258); 
   }
   if (currentMillis - previousMillis  > 25500 && currentMillis - previousMillis < 26500) { 
    Serial.println("crec -4");
    brightness = 40;  
      ledBlock(IVORY, 122, 127);
      ledBlock(IVORY, 164, 166);  
      ledBlock(IVORY, 172, 175);    
      ledBlock(IVORY, 118, 121); 
      ledBlock(IVORY, 279, 280);  
      ledBlock(IVORY, 84, 88); 
      ledBlock(IVORY, 128,133); 
      ledBlock(IVORY, 19, 22);  
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 225, 231);   
      ledBlock(IVORY, 58, 60);  
      ledBlock(IVORY, 161, 163);   
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      //ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 89, 97);  
      ledBlock(IVORY, 283, 293);
      ledBlock(IVORY, 244, 258); 
   }
   if (currentMillis - previousMillis  > 26500 && currentMillis - previousMillis < 27500) { 
    Serial.println("crec -3");
    brightness = 40;  
      ledBlock(IVORY, 176, 179);  
      ledBlock(IVORY, 122, 127);
      ledBlock(IVORY, 164, 166);  
      ledBlock(IVORY, 172, 175);    
      ledBlock(IVORY, 118, 121); 
      ledBlock(IVORY, 279, 280);  
      ledBlock(IVORY, 84, 88); 
      ledBlock(IVORY, 128,133); 
      ledBlock(IVORY, 19, 22); 
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 225, 231);  
      ledBlock(IVORY, 58, 60);  
      ledBlock(IVORY, 161, 163);
      ledBlock(IVORY, 142, 145);
      ledBlock(IVORY, 180, 182);  
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 283, 293);  
      ledBlock(IVORY, 244, 258);      
   }
   if (currentMillis - previousMillis  > 27500 && currentMillis - previousMillis < 28500) { 
    Serial.println("crec -2");  
    brightness = 40;
      ledBlock(IVORY, 139, 141);  
      ledBlock(IVORY, 122, 127);
      ledBlock(IVORY, 164, 166);  
      ledBlock(IVORY, 172, 175);    
      ledBlock(IVORY, 118, 121); 
      ledBlock(IVORY, 279, 280);  
      ledBlock(IVORY, 84, 88); 
      ledBlock(IVORY, 128,133); 
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 81, 83);  
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 225, 231);   
      ledBlock(IVORY, 58, 60);  
      ledBlock(IVORY, 161, 163); 
      ledBlock(IVORY, 142, 145);
      ledBlock(IVORY, 180, 182);    
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);  
      ledBlock(IVORY, 283, 293);   
      ledBlock(IVORY, 244, 258);     
   }
   if (currentMillis - previousMillis  > 28500 && currentMillis - previousMillis < 29500) {   
    Serial.println("crec -1");
    brightness = 40;
      ledBlock(IVORY, 139, 141);  
      ledBlock(IVORY, 122, 127);
      ledBlock(IVORY, 164, 166);  
      ledBlock(IVORY, 172, 175);    
      ledBlock(IVORY, 118, 121); 
      ledBlock(IVORY, 279, 280);  
      ledBlock(IVORY, 84, 88); 
      ledBlock(IVORY, 128,133); 
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 81, 83);   
      ledBlock(IVORY, 58, 60);      
      ledBlock(IVORY, 282, 282);    
      ledBlock(IVORY, 294, 295); 
      ledBlock(IVORY, 35, 57); 
      ledBlock(IVORY, 225, 231); 
      //ledBlock(IVORY, 58, 60);   
      ledBlock(IVORY, 161, 163); 
      ledBlock(IVORY, 142, 145);
      ledBlock(IVORY, 180, 182);   
      ledBlock(IVORY, 223, 224);
      ledBlock(IVORY, 233, 233);  
      ledBlock(IVORY, 244, 258); 
      
      //pixel_loc[1] = 0;
      //pixel_loc[2] = 109;
      //pixel_loc[3] = 199;

      pixel_loc[3] = 0;

      dimout(0,35);
      s1= true;
      s2= true;
   }
   //IR CRECIENDO
   /*//ESTO MOLA SON MOVIMIENTOS GRACIOSOS
   if (currentMillis - previousMillis  > 29500 && currentMillis - previousMillis < 38500) {   
       dimout(40,15);
       gotoledfull(IVORY, pixel_loc[1], 100, 5, 1);
       gotoledfull(IVORY, pixel_loc[2], 187, 5, 2);
       gotoledfull(IVORY, pixel_loc[3], 290, 5, 3);
  
   }*/
   
   if (currentMillis - previousMillis  > 29500 && currentMillis - previousMillis < 35500) {   
    //INIT TANGIBLE SCORES TO MUTE (AREA 99)
        if(s1){
          usbMIDI.sendNoteOn(4, 127, 11);
          usbMIDI.sendNoteOn(4, 127, 12);
          usbMIDI.sendNoteOn(4, 127, 13); 
          s1=false;
        }
        
       //dimin(40,15);
       brightness = 40;
       Serial.println("fin -3");
       gotoledfull2(IVORY, 0, 32, 23, 4);
       gotoledfull2(IVORY, 109, 152, 23, 5);
       gotoledfull2(IVORY, 199, 242, 23, 6);
       //dimout(0,50);
       //Serial.println("1");
  
   }
   if (currentMillis - previousMillis  > 35500 && currentMillis - previousMillis < 43000) {   
       //dimin(40,15);
       //brightness = 40;
       Serial.println("fin -2");
       gotoledfull2(IVORY, 33, 76, 23, 1);
       gotoledfull2(IVORY, 152, 178, 23, 2);
       gotoledfull2(IVORY, 243, 279, 23, 3);
       //dimout(0,50);
       //Serial.println("11");
  
   }
   if (currentMillis - previousMillis  > 43000 && currentMillis - previousMillis < 46500) {   
       //dimin(40,15);
       //brightness = 40;
       Serial.println("fin -1");
       gotoledfull2(IVORY, 77, 107, 23, 4);
       gotoledfull2(IVORY, 153, 197, 23, 5);
       gotoledfull2(IVORY, 244, 298, 23, 6);
       //dimout(0,50);
       //Serial.println("111");
   }
   if (currentMillis - previousMillis  > 46500 && currentMillis - previousMillis < 51500) {   
       //dimin(40,15);
       brightness = 40;
      if(s2){
          usbMIDI.sendNoteOn(3, 127, 11);
          usbMIDI.sendNoteOn(3, 127, 12);
          usbMIDI.sendNoteOn(3, 127, 13); 
          s1=false;
        }
       
       gotoledfull2(IVORY, 0, 108, 23, 4);
       gotoledfull2(IVORY, 109, 198, 23, 2);
       gotoledfull2(IVORY, 199, 298, 23, 3);
       note =true;
       //Serial.println("1111");
   }
   if (currentMillis - previousMillis  > 51500 && currentMillis - previousMillis < 52500) {   
       
   }
   if (currentMillis - previousMillis  > 52500 && currentMillis - previousMillis < 52550) {   
       if(note) {
         
        note = false;
     
       //INIT TANGIBLE SCORES TO MUTE (AREA 99)
       usbMIDI.sendNoteOn(99, 127, 11);
       usbMIDI.sendNoteOn(99, 127, 12);
       usbMIDI.sendNoteOn(99, 127, 13);
     
       //leds.setBrightness(0);
       //leds.show();
       brightness=0;
       previousMillis = millis();

       sec4 = sec3 + 52500;  

        section = 4;                        //VAMONOS A LA SIGUIENTE SECCION
        Serial.println("SECTION 4"); 

       //play the music for section 4
        usbMIDI.sendNoteOn(7, 127, 3);    //trigger subida-todo-Bonita.wav
      } 
      
   }







   ////
   
   ///





   
} ///END OF SECTION THREE
