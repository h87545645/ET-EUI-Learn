namespace ET
{
    public enum UnitType: byte
    {
        Player = 1,
        Monster = 2,
        NPC = 3,
    }
    
    public enum FrogDirection
    {
        None = 0,
        Left = -1,
        Right = 1,
    }
    
    public enum FrogState
    {
        None = 0,
        Standing = 1,
        Charge = 2,
        Falling = 3,
        Landing = 4,
        Walking = 5,
        Jumping = 6,
    }
}