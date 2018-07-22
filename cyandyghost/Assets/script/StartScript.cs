using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void toGameScene()
	{
		SceneManager.LoadScene("gamescene");
	}
	public void toTitle()
	{
		SceneManager.LoadScene("Title");
	}
	public void play()
	{
		SceneManager.LoadScene("Howtoplay");
	}
	public void Nextpage()
	{
		SceneManager.LoadScene("Pagetwo");
	}
	public void Paget(){
		SceneManager.LoadScene ("Pagethree");
	}
	public void Storysel()
	{
		SceneManager.LoadScene("Storyselect");
	}
	public void Storycha()
	{
		SceneManager.LoadScene("Storytest");
	}
	public void Mission()
	{
		SceneManager.LoadScene("Missionscene");
	}
}
