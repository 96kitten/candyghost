using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGenerator : MonoBehaviour {
	float timer = 0.0f; 
	float interval= 1.5f;
	public GameObject ene;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if (timer >= interval) {
			transform.position = new Vector3 (Random.Range(-0.3f,1.6f),5.6f);
			Instantiate(ene, transform.position,transform.rotation);
			timer = 0;
		}
	}
}
