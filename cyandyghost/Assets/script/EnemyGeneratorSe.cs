using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyGeneratorSe : MonoBehaviour {
	float timer = 0.0f; 
	float interval= 2.2f;
	public GameObject ene;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if (timer >= interval) {
			transform.position = new Vector3 (Random.Range(-2.4f,-0.4f),5.6f);
			Instantiate(ene, transform.position,transform.rotation);
			timer = 0;
		}
	}
}
