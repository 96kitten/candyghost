using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Buttonkey : MonoBehaviour {

    const string CHAP_NUM_KEY = "CHAP";

    public void Change(){
        SceneManager.LoadScene("StoryTest");
    }

    public void Chap1(){
        PlayerPrefs.SetInt(CHAP_NUM_KEY,1);
        PlayerPrefs.Save();
        Change();
    }
    public void Chap2()
    {
        PlayerPrefs.SetInt(CHAP_NUM_KEY, 2);
        PlayerPrefs.Save();
        Change();
    }
	public void Chap3()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 3);
		PlayerPrefs.Save();
		Change();
	}
	public void Chap4()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 4);
		PlayerPrefs.Save();
		Change();
	}
	public void Chap5()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 5);
		PlayerPrefs.Save();
		Change();
	}
	public void Chap6()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 6);
		PlayerPrefs.Save();
		Change();
	}
	public void Chap7()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 7);
		PlayerPrefs.Save();
		Change();
	}
	public void Chap8()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 8);
		PlayerPrefs.Save();
		Change();
	}
	public void Chap9()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 9);
		PlayerPrefs.Save();
		Change();
	}
	public void Chap10()
	{
		PlayerPrefs.SetInt(CHAP_NUM_KEY, 10);
		PlayerPrefs.Save();
		Change();
	}
}
