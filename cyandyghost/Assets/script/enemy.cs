using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemy : MonoBehaviour {
	private float speed = 4;

	void Start () {
		
	}

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
	}}