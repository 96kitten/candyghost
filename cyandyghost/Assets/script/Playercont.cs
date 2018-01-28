using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Playercont : MonoBehaviour {
	float timer = 0.0f;//タイマー
	float fevertimer = 0.0f;//フィーバータイマー
	int hp;//体力
	public static int score;//スコア
	public static bool feflag = false;//フィーバー判定
	public int fever = 0;//フィーバー
	public bool flag = false;//無敵時間
	//体力イラスト
	public GameObject hitpoint;
	public GameObject hitpoint2;
	public GameObject hitpoint3;
	public GameObject hitpoint4;
	public GameObject hitpoint5;
	//スコアテキスト
	public Text scoreText;
	//背景イラスト
	public GameObject floaillust;
	void Start () {
		hp = 5;
		score = 0;
		fever = 0;
		feflag = false;
	}

	void Update () {

		//フィーバー持ち越し
		EnemyGenerator.feverflag = feflag;
		EnemyGeneratorSe.feverflagtwo = feflag;
		//スコア表示
		scoreText.text = score.ToString ();
		//スコア持ち越し
		ScoreScript.Point = score;
		//時間制限
		if (flag == true) {
			timer += Time.deltaTime;
		}
			if (timer >= 5) {
				flag = false;
			}
		//フィーバータイム突入 
		if (fever >= 3) {
			Debug.Log ("fever");
			feflag = (true);
			fever = 0;
			floaillust.SetActive (false);
		}
		if (feflag == true) {
			fevertimer += Time.deltaTime;
		}
		//フィーバー時間制限
		if (fevertimer >= 15) {
			fevertimer = 0;
			feflag = (false);
			floaillust.SetActive (true);
		}
		//体力表示
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
			if (flag == false) {
				hp = hp - 1;
				Debug.Log ("damage");
			}
		}
		if (other.gameObject.tag == "hppuls") {
			score = score + 30;
			hp = hp + 1;
			Debug.Log ("plus");
		}
		if (other.gameObject.tag == "hpminas") {
			if (flag == false) {
				hp = hp - 2;
				Debug.Log ("damage2");
			}
		}
		if (other.gameObject.tag == "smallpoint") {
			score = score + 10;
			Debug.Log ("score10");
		}
		if (other.gameObject.tag == "bigpoint") {
			score = score + 100;
			Debug.Log ("score100");
		}
		if (other.gameObject.tag == "muteki") {
			fever = fever + 1;
			flag = true;
			timer = 0.0f;
			score = score + 50;
			Debug.Log ("muteki");
		}
	}
}