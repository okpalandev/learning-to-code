public class Robot {
    private int speed;
    private int calcs;
    private int chargeLevel =3;
    public Robot(int moveSpeed,int calc){
        speed = moveSpeed;
        calcs = calc;
    }

    public void calculate(){
        if(chargeLevel > 0){
            chargeLevel--;
            System.out.println("Robot is doing "+ calcs+"." + "Battery power is now at: "+ chargeLevel);
        }
        else {
            System.out.println("Robot battery is dead, it needs to charge" );
        }
    }

    public void move() {
        if(chargeLevel > 0){
            chargeLevel--;
            System.out.println("Robot is mocing "+ calcs+"." + "Battery power is now at: "+ chargeLevel);
        } else {
            System.out.println("Robot battery is dead, it needs to charge" );
        }
    }

    

}
