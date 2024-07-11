void serial(){
String data = Serial2.readStringUntil('\n');

// Pisahkan data menjadi dua nilai berdasarkan koma
int commaIndex = data.indexOf(',');
if (commaIndex != -1) {
  String x1_str = data.substring(0, commaIndex);
  String y1_str = data.substring(commaIndex + 1);

  // Konversi nilai x1 dan y1 ke tipe data int
  int x1 = x1_str.toInt();
  int y1 = y1_str.toInt();

  // Sekarang kita memiliki nilai x1 dan y1 dalam tipe data int
  Serial.print("nilai x1 (int): ");
  Serial.println(x1);
  Serial.print("Nilai y1 (int): ");
  Serial.println(y1);
}

}