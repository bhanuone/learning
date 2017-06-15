require 'set'

# str = File.read("/home/bhanu/Desktop/big.txt")

class AnagramsFinder

  def initialize(file_path)
    @file_path = file_path
    @dictionary = Hash.new { |h, key| h[key] = Set.new([]) }
    build_anagrams
  end

  def get_anagrams(word)
    @dictionary[compute_class(word)].to_a
  end

  def build_anagrams
    file = File.read(@file_path)
    list = file.downcase.split
    list.each do |word|
      a_class = compute_class(word)
      @dictionary[a_class].add(word)
    end
  end

  private
  
  def compute_class(word)
    counts = {}
    word.chars.sort.each do |c|
      if counts.key?(c)
        counts[c] += 1
      else
        counts[c] = 1
      end
    end
    counts.to_a.flatten.join
  end 
end
