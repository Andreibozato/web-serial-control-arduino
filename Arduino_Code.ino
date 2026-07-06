
#include <Wire.h>
#include <LiquidCrystal_I2C.h> 

// Configura o display no endereço I2C padrão (0x27) para 16 colunas e 2 linhas
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  // 1. Inicia a comunicação serial a 9600 (a mesma do seu site)
  Serial.begin(9600);
  
  // 2. Inicia o display e liga a luz de fundo
  lcd.init();
  lcd.backlight();
  
  // 3. Mostra uma mensagem inicial para você saber que ligou certo
  lcd.setCursor(0, 0);
  lcd.print("Aguardando site.");
}

void loop() {
  // Verifica se o site enviou algum texto
  if (Serial.available() > 0) {
    
    // Lê o texto até a quebra de linha (String, como você pediu!)
    String textoRecebido = Serial.readStringUntil('\n');
    
    // Dica de ouro: remove espaços invisíveis ou "Enter" (\r) que o site pode enviar
    textoRecebido.trim(); 
    
    // Verifica se o texto é exatamente a letra "V" (maíuscula ou minúscula)
    if (textoRecebido == "V" || textoRecebido == "v") {
      
      // Limpa a tela
      lcd.clear();
      
      // Escreve na primeira linha
      lcd.setCursor(0, 0); 
      lcd.print("O codigo");
      
      // Escreve na segunda linha
      lcd.setCursor(0, 1); 
      lcd.print("funcionou!");
      
      // Envia uma confirmação de volta para o site (feedback)
      Serial.println("Mensagem 'O codigo funcionou' exibida no display!");
      
    } else {
      // Se a pessoa digitar outra coisa, o Arduino avisa o site, mas não muda o display
      Serial.print("Comando ignorado: ");
      Serial.println(textoRecebido);
    }
  }
}
