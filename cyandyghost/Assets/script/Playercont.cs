using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Playercont : MonoBehaviour {
	int hp;
	public GameObject hitpoint;
	public GameObject hitpoint2;
	public GameObject hitpoint3;
	public GameObject hitpoint4;
	public GameObject hitpoint5;
	void Start () {
		hp = 5;
	}

	void Update () {
		if (hp >= 5) {
			hp = 5;
			hitpoint.SetActive (true);
			hitpoint2.SetActive (true);
			hitpoint3.SetActive (true);
			hitpoint4.SetActive (true);
			hitpoint5.SetActive (true);
		} else if (hp == 4) {
			hitpoint.SetActive (false);
			hitpoint2.SetActive (true);
			hitpoint3.SetActive (true);
			hitpoint4.SetActive (true);
			hitpoint5.SetActive (true);
		}else if (hp == 3) {
			hitpoint.SetActive (false);
			hitpoint2.SetActive (false);
			hitpoint3.SetActive (true);
			hitpoint4.SetActive (true);
			hitpoint5.SetActive (true);
		}else if (hp == 2) {
			hitpoint.SetActive (false);
			hitpoint2.SetActive (false);
			hitpoint3.SetActive (false);
			hitpoint4.SetActive (true);
			hitpoint5.SetActive (true);
		}else if (hp == 1) {
			hitpoint.SetActive (false);
			hitpoint2.SetActive (false);
			hitpoint3.SetActive (false);
			hitpoint4.SetActive (false);
			hitpoint5.SetActive (true);
		}
		if (hp <= 0) {
			hitpoint.SetActive (false);
			hitpoint2.SetActive (false);
			hitpoint3.SetActive (false);
			hitpoint4.SetActive (false);
			hitpoint5.SetActive (false);
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
