using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGeneratorSe : MonoBehaviour {
	float timer = 0.0f; 
	float interval= 2.2f;
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
		if (timer >= interval) {
			if (Random.Range (50,81) >= 50 && Random.Range (50,81) <= 66) {
				transform.position = new Vector3 (Random.Range (-2.4f, -0.4f), 5.6f);
				Instantiate (ene, transform.position, transform.rotation);
				timer = 0;
			}
			if (Random.Range (50,81) >= 67 && Random.Range (50,81) <= 71) {
				transform.position = new Vector3 (Random.Range (-2.4f, -0.4f), 5.6f);
				Instantiate (smsweet, transform.position, transform.rotation);
				timer = 0;
			}
			if (Random.Range (50,81) >= 72 && Random.Range (50,81) <= 74) {
				transform.position = new Vector3 (Random.Range (-2.4f, -0.4f), 5.6f);
				Instantiate (bisweet, transform.position, transform.rotation);
				timer = 0;
			}
			if (Random.Range (50,81) >= 75 && Random.Range (50,81) <= 76) {
				transform.position = new Vector3 (Random.Range (-2.4f, -0.4f), 5.6f);
				Instantiate (plushp, transform.position, transform.rotation);
				timer = 0;
			}
			if (Random.Range (50,81) >= 77 && Random.Range (50,81) <= 78) {
				transform.position = new Vector3 (Random.Range (-2.4f, -0.4f), 5.6f);
				Instantiate (minushp, transform.position, transform.rotation);
				timer = 0;
			}
			if (Random.Range (50,81) >= 79 && Random.Range (50,81) <= 80) {
				transform.position = new Vector3 (Random.Range (-2.4f, -0.4f), 5.6f);
				Instantiate (muteki, transform.position, transform.rotation);
				timer = 0;
			}
		}
	}
}
