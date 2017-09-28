//
//  CtrCollection.swift
//  CView
//
//  Created by Rong Huang on 9/26/17.
//  Copyright © 2017 Rong Huang. All rights reserved.
//

import UIKit
import Foundation


private let reuseIdentifier = "Cell"


struct Restaurant {
    enum Meal: String {
        case breakfast, lunch, dinner
    }
    
    let name: String
    let location: (latitude: Double, longitude: Double)
    let meals: Set<Meal>
}


class CtrCollection: UICollectionViewController {

    enum Library {
        case Argo
        case JSONJoy
        case ObjectMapper
        case SwiftyJSON
    }
    
    let courses = [
        ["name":"Swift","pic":"linux_PNG48.png"],
        ["name":"OC","pic":"linux_PNG48.png"],
        ["name":"java","pic":"linux_PNG48"],
        ["name":"php","pic":"linux_PNG48.png"],
        ["name":"Swift","pic":"swift.png"],
        ["name":"Xcode","pic":"xcode.png"],
        ["name":"Java","pic":"java.png"],
        ["name":"PHP","pic":"php.png"],
        ["name":"JS","pic":"js.png"],
        ["name":"React","pic":"react.png"],
        ["name":"Ruby","pic":"ruby.png"],
        ["name":"HTML","pic":"html.png"],
        ["name":"C#","pic":"c#.png"]
    ]
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

        // Register cell classes
        self.collectionView!.register(UICollectionViewCell.self, forCellWithReuseIdentifier: reuseIdentifier)

        // Do any additional setup after loading the view.
        
        //let layout = UICollectionViewFlowLayout()
        //let frame = CGRect(x:0, y:20, width: view.bounds.size.width,  height:view.bounds.height-20)
        //默认背景是黑色和label一致
        self.collectionView!.backgroundColor = UIColor.white
        
        //设置collectionView的内边距
        self.collectionView!.contentInset = UIEdgeInsetsMake(0, 5, 0, 5)
        
        parseJSON()
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using [segue destinationViewController].
        // Pass the selected object to the new view controller.
    }
    */

    // MARK: UICollectionViewDataSource

    override func numberOfSections(in collectionView: UICollectionView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 1;
    }


    override func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of items
        return courses.count;
    }

    override func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        //let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "MyCollectionViewCell", for: indexPath)
    
        // Configure the cell
        // storyboard里设计的单元格
        let identify:String = "MyCollectionViewCell"
        // 获取设计的单元格，不需要再动态添加界面元素
        let cell = (collectionView.dequeueReusableCell(
            withReuseIdentifier: identify, for: indexPath)) as! MyCollectionViewCell
        // 从界面查找到控件元素并设置属性
        cell.imgHead.image =
            UIImage(named: courses[indexPath.item]["pic"]!)
        cell.lbName.text =
            courses[indexPath.item]["name"]
        
    
        return cell
    }

    // MARK: UICollectionViewDelegate

    /*
    // Uncomment this method to specify if the specified item should be highlighted during tracking
    override func collectionView(_ collectionView: UICollectionView, shouldHighlightItemAt indexPath: IndexPath) -> Bool {
        return true
    }
    */

    /*
    // Uncomment this method to specify if the specified item should be selected
    override func collectionView(_ collectionView: UICollectionView, shouldSelectItemAt indexPath: IndexPath) -> Bool {
        return true
    }
    */

    /*
    // Uncomment these methods to specify if an action menu should be displayed for the specified item, and react to actions performed on the item
    override func collectionView(_ collectionView: UICollectionView, shouldShowMenuForItemAt indexPath: IndexPath) -> Bool {
        return false
    }

    override func collectionView(_ collectionView: UICollectionView, canPerformAction action: Selector, forItemAt indexPath: IndexPath, withSender sender: Any?) -> Bool {
        return false
    }

    override func collectionView(_ collectionView: UICollectionView, performAction action: Selector, forItemAt indexPath: IndexPath, withSender sender: Any?) {
    
    }
    */
    
    

    
    func parseJSON() {
        // set up URLRequest with URL
        
       let jsonStr = "{\"usr\":\"张三\",\"info\":{\"number\":[\"188\",\"189\"],\"address\":\"51load\"}}"
       let jsonData = jsonStr.data(using:String.Encoding.utf8)
        if let json = try? JSONSerialization.jsonObject(with: jsonData!, options: [])
        {
            if let jsonArray = json as? [[String: Any]]
            {
               print( jsonArray[0])
            }
            else
            {
                print("\n0000")
            }
        }
        else
        {
            print("\nerror")
        }
        
        let urlString = "https://api.whitehouse.gov/v1/petitions.json?limit=100"
        
        if let url = URL(string: urlString) {
            if let data = try? String(contentsOf: url) {
                let json = JSON(parseJSON: data)
                
                if json["metadata"]["responseInfo"]["status"].intValue == 200 {
                    // we're OK to parse!
                }
            }
        }
  
    }
    
    
   

}
