//
//  ViewController.swift
//  dajia
//
//  Created by Rong Huang on 9/27/17.
//  Copyright © 2017 Rong Huang. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var person_name :String?
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        if let person_name = person_name {
            print ("+++++++++++++++++++++++person_name+++++++++++++++++++++")
            print(person_name)
            
        }
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

