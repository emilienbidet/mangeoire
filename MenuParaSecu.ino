void LMenuParaSecu() {
  //Menu Parametres programmateur////////////////////
  switch (MenuParaSecu) {
    case 0:
      break;
    case 1:
      lcd.clear(); MenuParaSecu++;
      break;
    case 2:
      lcd.setCursor(0, 0); lcd.print("- Securite Moteur  -");
      lcd.setCursor(0, 1); lcd.print("Etat");
      lcd.setCursor(0, 2); lcd.print("Tps av. activation");
      lcd.setCursor(0, 3); lcd.print("Retour");
      MenuParaSecu++;
      break;
    case 3:
      lcd.setCursor(19, 3); lcd.print(" ");
      lcd.setCursor(19, 1); lcd.print("<");
      lcd.setCursor(19, 2); lcd.print(" ");
      break;
    case 4:
      lcd.setCursor(19, 1); lcd.print(" ");
      lcd.setCursor(19, 2); lcd.print("<");
      lcd.setCursor(19, 3); lcd.print(" ");
      break;
    case 5:
      lcd.setCursor(19, 2); lcd.print(" ");
      lcd.setCursor(19, 3); lcd.print("<");
      lcd.setCursor(19, 1); lcd.print(" ");
      break;
    default:
      break;
  }
}
