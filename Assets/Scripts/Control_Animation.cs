using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Control_Animation : Photon.MonoBehaviour {

	Animator animator;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator>();
		animator.SetBool("Climb", true);
	}
	// called by InputToEvent.
	// we use a short timeout to detect double clicks.
	// on double click, the networked object gets destroyed (on all clients).
	public void Update()
	{
		//		if (!this.photonView.isMine)
		//		{
		//			// this networkView (provided by Photon.MonoBehaviour) says the object is not ours.
		//			// so this client can't destroy it.
		//			return;
		//		}

		if (Input.GetKeyDown ("d")) {

			print ("d was pressed");
			animator.speed = 1f;
			transform.localScale += new Vector3 (0.001F, 0.001F, 0.001F);


		} else if (Input.GetKeyDown ("a")) {

			print ("d was pressed");
			animator.speed = -10f;
			transform.localScale -= new Vector3 (0.001F, 0.001F, 0.001F);

		} else {
			animator.speed = 0f;
		
		}


		//		if (Time.time - this.timeOfLastClick < ClickDeltaForDoubleclick)
		//		{
		//			// double click => destory in network
		//			PhotonNetwork.Destroy(gameObject);
		//		}
		//		else
		//		{
		//			this.timeOfLastClick = Time.time;
		//		}
	}
}
