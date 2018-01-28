using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGenerator : MonoBehaviour {
	float timer = 0.0f; 
	float interval= 1.5f;
	public static bool feverflag = false;
	float feverinterval = 0.7f;
	public GameObject ene;
	public GameObject smsweet;
	public GameObject bisweet;
	public GameObject plushp;
	public GameObject minushp;
	public GameObject muteki;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if (feverflag == false) {
			if (timer >= interval) {
				if (Random.Range (10, 41) >= 10 && Random.Range (10, 41) <= 26) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (ene, transform.position, transform.rotation);
					timer = 0;
				}
				if (Random.Range (10, 41) >= 27 && Random.Range (10, 41) <= 31) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (smsweet, transform.position, transform.rotation);
					timer = 0;
				}
				if (Random.Range (10, 41) >= 32 && Random.Range (10, 41) <= 34) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (bisweet, transform.position, transform.rotation);
					timer = 0;
				}
				if (Random.Range (10, 41) >= 35 && Random.Range (10, 41) <= 36) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (plushp, transform.position, transform.rotation);
					timer = 0;
				}
				if (Random.Range (10, 41) >= 37 && Random.Range (10, 41) <= 38) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (minushp, transform.position, transform.rotation);
					timer = 0;
				}
				if (Random.Range (10, 41) >= 39 && Random.Range (10, 41) <= 40) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (muteki, transform.position, transform.rotation);
					timer = 0;
				}
			}
		}
		if (feverflag == true) {
			if (timer >= feverinterval) {
				if (Random.Range (10, 41) >= 10 && Random.Range (10, 41) <= 25) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (smsweet, transform.position, transform.rotation);
					timer = 0;
				}
				if (Random.Range (10, 41) >= 26 && Random.Range (10, 41) <= 35) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (bisweet, transform.position, transform.rotation);
					timer = 0;
				}
				if (Random.Range (10, 41) >= 36 && Random.Range (10, 41) <= 40) {
					transform.position = new Vector3 (Random.Range (-0.1f, 1.6f), 5.6f);
					Instantiate (plushp, transform.position, transform.rotation);
					timer = 0;
				}
			}
		}
	}
}
