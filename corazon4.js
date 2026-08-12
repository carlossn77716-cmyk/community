let heart = "";
let size = 6;

// Upper part of the heart
for (let i = size / 2; i <= size; i += 2) {
  for (let j = 1; j < size - i; j += 2) {
    heart += "  ";
  }
  for (let j = 1; j <= i; j++) {
    heart += "❤️ ";
  }
  for (let j = 1; j <= size - i; j++) {
    heart += "  ";
  }
  for (let j = 1; j <= i; j++) {
    heart += "❤️ ";
  }
  heart += "\n";
}

// Lower part of the heart
for (let i = size; i >= 1; i--) {
  for (let j = i; j < size; j++) {
    heart += " ";
  }
  for (let j = 1; j <= (i * 2) - 1; j++) {
    heart += "❤️";
  }
  heart += "\n";
}

console.log(heart);
