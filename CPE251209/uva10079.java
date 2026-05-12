import java.util.Scanner;

public class uva10079 {

    public static void main(String[] args) {
        //input cut count
        Scanner sc = new Scanner(System.in);
        int cut, pieces=1;
        while(true){
            System.out.println("切幾刀： ");
            if(sc.hasNextInt()){
                cut = sc.nextInt();
                if(cut >= 0){
                    pieces = 1 + cut*(cut+1)/2;
                }else break;
            }else break;
            System.out.println("have "+pieces+" pieces");
        }
        /*if(sc.hasNextInt()){
            cut = sc.nextInt();
            //output pizza pieces
            for(int i = 1; i <= cut; i++){
                pieces = (pieces - i) + i*2;
                System.out.println("cut:"+i);
                System.out.println("pieces: "+pieces);
            }
            System.out.println("final outcome: "+pieces);
        }*/
        sc.close();
    }
}