using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MIssionstarScript : MonoBehaviour {
	public int mission1;
	public int mission2;
	public int mission3;
	public int mission4;
	public int mission5;
	public int mission6;
	public int mission7;
	float alpha = 1;
	public static int star;
	public int M1count;
	public int M2count;
	public int M3count;
	public int M4count;
	public int M5count;
	public int M6count;
	public int M7count;

	public Image M1star1;
	public Image M1star2;
	public Image M1star3;
	public Image M2star4;
	public Image M2star5;
	public Image M2star6;
	public Image M3star7;
	public Image M3star8;
	public Image M3star9;
	public Image M4star10;
	public Image M4star11;
	public Image M4star12;
	public Image M5star13;
	public Image M5star14;
	public Image M5star15;
	public Image M6star16;
	public Image M6star17;
	public Image M6star18;
	public Image M6star19;
	public Image M6star20;
	public Image M6star21;
	public Image M6star22;
	public Image M6star23;
	public Image M6star24;
	public Image M6star25;
	public Image M7star26;
	public Image M7star27;
	public Image M7star28;
	public Image M7star29;
	public Image M7star30;

	const string STAR_KEY = "starnumber";

	//PlayerPrfsに保存するメソッド
	void SaveStarnunber(int score){
		PlayerPrefs.SetInt (STAR_KEY, score);
		PlayerPrefs.Save();
	}

	//PlayerPrfsをよび出すするメソッド
	public static int LoadStarnumber(){
		return PlayerPrefs.GetInt (STAR_KEY, -1);
	}


	// Use this for initialization
	void Start () {
		mission1 = Countscript.candy;
		mission2 = Countscript.bigcandy;
		mission3 = Countscript.heart;
		mission4 = Countscript.brakeheart;
		mission5 = Countscript.blueheart;
		mission6 = Playercont.score;
		mission7 = PlayTimeScript.counttime;

		star = LoadStarnumber();

	}
	
	// Update is called once per frame
	void Update () {

		//mission1
		if (M1count <= 2) {
			if (M1count <= 1) {
				if (M1count <= 0){
					if(mission1 >= 100){
						M1count = 1;
						M1star1.color = new Color (1, 1, 1, alpha);
						star += 1;

						SaveStarnunber (star);

					}
				}
				if (mission1 >= 500) {
					M1count = 2;
					M1star2.color = new Color (1, 1, 1, alpha);
					star += 1;
					SaveStarnunber (star);

				}
			}
			if (mission1 >= 1000) {
				M1count = 3;
				M1star3.color = new Color (1, 1, 1, alpha);
				star += 1;
				SaveStarnunber (star);
			}
		}

		//mission2
		if (M2count <= 2) {
			if (M2count <= 1) {
				if (M2count <= 0) {
					if (mission2 >= 50) {
						M2count = 1;
						M2star4.color = new Color (1, 1, 1, alpha);
						star += 1;
						SaveStarnunber (star);
					}
				}
				if (mission2 >= 100) {
					M2count = 2;
					M2star5.color = new Color (1, 1, 1, alpha);
					star += 1;
					SaveStarnunber (star);
				}
			}
			if (mission2 >= 500) {
				M2count = 3;
				M2star6.color = new Color (1, 1, 1, alpha);
				star += 1;
				SaveStarnunber (star);
			}
		}

		//mission3
		if (M3count <= 2) {
			if (M3count <= 1) {
				if (M3count <= 0) {
					if (mission3 >= 50) {
						M3count = 1;
						M3star7.color = new Color (1, 1, 1, alpha);
						star += 1;
						SaveStarnunber (star);
					}
				}
				if (mission3 >= 100) {
					M3count = 2;
					M3star8.color = new Color (1, 1, 1, alpha);
					star += 1;
					SaveStarnunber (star);
				}
			}
			if (mission3 >= 500) {
				M3count = 3;
				M3star9.color = new Color (1, 1, 1, alpha);
				star += 1;
				SaveStarnunber (star);
			}
		}

		//mission4
		if (M4count <= 2) {
			if (M4count <= 1) {
				if (M4count <= 0) {
					if (mission4 >= 50) {
						M4count = 1;
						M4star10.color = new Color (1, 1, 1, alpha);
						star += 1;
						SaveStarnunber (star);
					}
				}
				if (mission4 >= 100) {
					M4count = 2;
					M4star11.color = new Color (1, 1, 1, alpha);
					star += 1;
					SaveStarnunber (star);
				}
			}
			if (mission4 >= 500) {
				M4count = 3;
				M4star12.color = new Color (1, 1, 1, alpha);
				star += 1;
				SaveStarnunber (star);
			}
		}

		//mission5
		if (M5count <= 2) {
			if (M5count <= 1) {
				if (M5count <= 0) {
					if (mission5 >= 50) {
						M5count = 1;
						M5star13.color = new Color (1, 1, 1, alpha);
						star += 1;
						SaveStarnunber (star);
					}
				}
				if (mission5 >= 100) {
					M5count = 2;
					M5star14.color = new Color (1, 1, 1, alpha);
					star += 1;
					SaveStarnunber (star);
				}
			}
			if (mission5 >= 500) {
				M5count = 3;
				M5star15.color = new Color (1, 1, 1, alpha);
				star += 1;
				SaveStarnunber (star);
			}
		}


		//mission6
		if (M6count <= 9) {
			if (M6count <= 8) {
				if (M6count <= 7) {
					if (M6count <= 6) {
						if (M6count <= 5) {
							if (M6count <= 4) {
								if (M6count <= 3) {
									if (M6count <= 2) {
										if (M6count <= 1) {
											if (M6count <= 0){
												if (mission6 >= 500) {
													M6count = 1;
													M6star16.color = new Color (1, 1, 1, alpha);
													star += 1;
													SaveStarnunber (star);
												}
											}
											if (mission6 >= 1000) {
												M6count = 2;
												M6star17.color = new Color (1, 1, 1, alpha);
												star += 1;
												SaveStarnunber (star);
											}
										}
										if (mission6 >= 2500) {
											M6count = 3;
											M6star18.color = new Color (1, 1, 1, alpha);
											star += 1;
											SaveStarnunber (star);
										}
									}
									if (mission6 >= 5000) {
										M6count = 4;
										M6star19.color = new Color (1, 1, 1, alpha);
										star += 1;
										SaveStarnunber (star);
									}
								}
								if (mission6 >= 7500) {
									M6count = 5;
									M6star20.color = new Color (1, 1, 1, alpha);
									star += 1;
									SaveStarnunber (star);
								}
							}
							if (mission6 >= 10000) {
								M6count = 6;
								M6star21.color = new Color (1, 1, 1, alpha);
								star += 1;
								SaveStarnunber (star);
							}
						}
						if (mission6 >= 12500) {
							M6count = 7;
							M6star22.color = new Color (1, 1, 1, alpha);
							star += 1;
							SaveStarnunber (star);
						}
					}
					if (mission6 >= 15000) {
						M6count += 8;
						M6star23.color = new Color (1, 1, 1, alpha);
						star += 1;
						SaveStarnunber (star);
					}
				if (mission6 >= 17500) {
					M6count = 9;
					M6star24.color = new Color (1, 1, 1, alpha);
					star += 1;
						SaveStarnunber (star);
				}
			if (mission6 >= 20000) {
				M6count = 10;
				M6star25.color = new Color (1, 1, 1, alpha);
				star += 1;
						SaveStarnunber (star);
			}
		}
	}
}
		//mission7
		if (M7count <= 4) {
			if (M7count <= 3) {
				if (M7count <= 2) {
				    if (M7count <= 1) {
						if (M7count <= 0) {
							if (mission7 >= 5) {
								M7count = 1;
								M7star26.color = new Color (1, 1, 1, alpha);
								star += 1;
								SaveStarnunber (star);
							}
						}
						if (mission7 >= 10) {
							M7count = 2;
							M7star27.color = new Color (1, 1, 1, alpha);
							star += 1;
							SaveStarnunber (star);
						}
					}
					if (mission7 >= 15) {
						M7count = 3;
						M7star28.color = new Color (1, 1, 1, alpha);
						star += 1;
						SaveStarnunber (star);
					}
				}
				if (mission7 >= 20) {
					M7count = 4;
					M7star29.color = new Color (1, 1, 1, alpha);
					star += 1;
					SaveStarnunber (star);
				}
			}
			if (mission7 >= 25) {
				M7count = 5;
				M7star30.color = new Color (1, 1, 1, alpha);
				star += 1;
				SaveStarnunber (star);
			}
		}


}
}