using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicScript : MonoBehaviour {

	private AudioSource Candyeat;

	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	void OnCollisionEnter2D (Collision2D other){
		if (other.gameObject.tag == "smallpoint") {
			Candyeat.PlayOneShot (Candyeat.clip);
		}
	}
}
