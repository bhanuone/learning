arow1 = gets.chomp
arow2 = gets.chomp
brow1 = gets.chomp
brow2 = gets.chomp
arow1.gsub!("X", "")
arow2.gsub!("X", "")
brow1.gsub!("X", "")
brow2.gsub!("X", "")

a = arow1 + arow2.reverse
b = brow1 + brow2.reverse

if (a * 2).index(b)
  puts "YES"
else
  puts "NO"
end