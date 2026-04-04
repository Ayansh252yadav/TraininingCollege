import java.io.File.*;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class FIleHanding {
    public static void main(String[] args) throws IOException {
        
        FileWriter writer = new FileWriter("example.txt",true);
        writer.write("\n file appended");
        writer.close(); // IMPORTANT

        // Step 2: Read from file
        File file = new File("example.txt");
        Scanner read = new Scanner(file);

        while (read.hasNextLine()) {
            String data = read.nextLine();
            System.out.println(data);
        }

        read.close(); // IMPORTANT
    }
                // if(file.createNewFile()){
        //     System.out.println("file created successfully");
        // }else{
        //     System.out.println("file not created");
        // }
        
    }

