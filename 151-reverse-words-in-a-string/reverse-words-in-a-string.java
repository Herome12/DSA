class Solution {
    public String reverseWords(String s) {
          String str[] = s.trim().split("\\s+");
        String words ="";
        for(int i=str.length-1;i>=0;i--){
            words += str[i] + " ";
        }
        return words.trim();

    }
}