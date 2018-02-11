using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Button : MonoBehaviour {

    const string CHAP_NUM_KEY = "CHAP";

    public void Change(){
        SceneManager.LoadScene("StoryTest");
    }

    public void Chap1(){
        //ここで変更
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
}
