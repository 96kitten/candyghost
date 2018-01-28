using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heartcont : MonoBehaviour {
	private float speed = 6;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.position +=new Vector3 (0,-speed * Time.deltaTime);
		if (transform.position.y <= -6) {
			Destroy (gameObject);
		}
	}
	void OnCollisionEnter2D (Collision2D other){
		if (other.gameObject.tag == "Player") {
			Destroy (gameObject);
		}
	}
}
