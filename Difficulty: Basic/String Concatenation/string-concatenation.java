// User function Template for Java
class Solution {
    public static String concatenateStrings(ArrayList<String> arr) {
        // Your code here
        StringBuilder sb = new StringBuilder();
        
        for(String str : arr){
            sb.append(str);
        }
        
        return sb.toString();
    }
}