/*
 * LED呼吸灯示例
 */
const int ledPin = 21;  // PWM生成后实际输出引脚

//设置PWM参数
const int freq = 5000;//PWM频率
const int ledChannel = 21;//信号生成GPIO
const int resolution = 8;//8位分辨率
 
void setup(){
  //PWM参数设置
  // ledcSetup(ledChannel, freq, resolution);
  ledcAttach(ledChannel, freq, resolution);
  
  //将生成信号通道绑定到输出通道上
  // ledcAttachPin(ledPin, ledChannel);
}
 
void loop(){
  //逐渐变亮
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }

  //逐渐变暗
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);   
    delay(15);
  }
}


