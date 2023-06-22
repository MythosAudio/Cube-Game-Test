using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicTrigger : MonoBehaviour
{
    public GameObject PlayerMusic;

    private void OnTriggerEnter(Collider other)
    {
     
        if (other.tag == "Player")
        {
            AkSoundEngine.PostEvent("MusicTrigger500", PlayerMusic);
        }

    }
}
