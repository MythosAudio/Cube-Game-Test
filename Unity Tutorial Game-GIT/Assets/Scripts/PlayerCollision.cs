using UnityEngine;

public class PlayerCollision : MonoBehaviour {

    public PlayerMovement movement;

    public uint Play_Music_Lvl1 { get; private set; }

    void OnCollisionEnter (Collision collisionInfo)
    {
        if (collisionInfo.collider.tag == "Obstacle")
        {
            movement.enabled = false;
            FindObjectOfType<GameManager>().EndGame();

            

        }
    }

}
