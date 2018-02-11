using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicScript : MonoBehaviour {
	public AudioClip Candyeat;
	public AudioClip Enemyse;

	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	void OnCollisionEnter2D (Collision2D other){
		if (other.gameObject.tag == "smallpoint") {
			gameObject.GetComponent<AudioSource> ().PlayOneShot (Candyeat);
		}
		if (other.gameObject.tag == "bigpoint") {
			gameObject.GetComponent<AudioSource> ().PlayOneShot (Candyeat);
		}
		if (other.gameObject.tag == "enemy") {
			gameObject.GetComponent<AudioSource> ().PlayOneShot (Enemyse);
		}
	}
}
