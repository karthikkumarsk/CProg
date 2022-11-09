/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mappingwords;

/**
 *
 * @author karthi
 */
import java.util.*;
public class Mappingwords {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Map<String, String> slangs = new HashMap<String, String>();
        slangs.put("ece", "Electronucs and Communication Engineering");
        slangs.put("Elec and Comm", "Electronucs and Communication Engineering");
        Set set = slangs.entrySet();
        Iterator i = set.iterator();

        String sentence = "Elec and Comm";
        StringBuilder sb = new StringBuilder();

        for (String word : sentence.split(" ")) {
            while(i.hasNext()) {
                Map.Entry<String, String> me = (Map.Entry)i.next();
                if (word.equalsIgnoreCase(me.getKey())) {
                    sb.append(me.getValue());
                    continue;
                }
                sb.append(word);
            }
        }
        System.out.println(sb.toString());
    } 
}
