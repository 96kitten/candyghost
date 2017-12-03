using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Playercont : MonoBehaviour {
	int hp;
	void Start () {
		hp = 5;
	}

	void Update () {
		
	}
	void OnCollitionEnter (Collider other){
		if (other.gameObject.tag == "enemy") {
			hp = hp = 1;
			Debug.Log ("damage");
		}
	}
}
