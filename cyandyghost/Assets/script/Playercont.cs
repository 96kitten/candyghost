using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Playercont : MonoBehaviour {
	int hp;
	void Start () {
		hp = 5;
	}

	void Update () {
		if (hp <= 0) {
			SceneManager.LoadScene("Finish");
		}
	}
	void OnCollisionEnter2D (Collision2D other){
		if (other.gameObject.tag == "enemy") {
			hp = hp - 1;
			Debug.Log ("damage");
		}
	}
		
}
