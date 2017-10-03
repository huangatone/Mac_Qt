//
//  CtrCollection.swift
//  CView
//
//  Created by Rong Huang on 9/26/17.
//  Copyright © 2017 Rong Huang. All rights reserved.
//

import UIKit
import Foundation
import os.log


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


    
    let courses = [
        ["name":"会计税务","pic":"linux_PNG48.png","group":"accounting"],
        ["name":"家具百货","pic":"linux_PNG48.png","group":"accounting"],
        ["name":"地产经纪","pic":"linux_PNG48","group":"accounting"],
        ["name":"电力电器","pic":"linux_PNG48.png","group":"accounting"],
        ["name":"房屋贷款","pic":"swift.png","group":"accounting"],
        ["name":"虫害防治","pic":"xcode.png","group":"accounting"],
        ["name":"保险投资","pic":"java.png","group":"accounting"],
        ["name":"搬家清洁","pic":"php.png","group":"accounting"],
        ["name":"房屋法律","pic":"js.png","group":"accounting"],
        ["name":"橱柜材料","pic":"react.png","group":"accounting"],
        ["name":"屋顶车库","pic":"ruby.png","group":"accounting"],
        ["name":"网络电话","pic":"html.png","group":"accounting"],
        ["name":"冷暖空调","pic":"html.png","group":"accounting"],
        ["name":"树木园艺","pic":"html.png","group":"accounting"],
        ["name":"其它服务","pic":"html.png","group":"accounting"],
        ["name":"网络电话","pic":"html.png","group":"accounting"],
        ["name":"翻建装修","pic":"c#.png","group":"accounting"]
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
    
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        
        super.prepare(for: segue, sender: sender)
        
        switch(segue.identifier ?? "") {
            
        case "AddItem":
            os_log("Adding a new meal.", log: OSLog.default, type: .debug)
            
        case "ShowDetail":
            guard let ctr = segue.destination as? DajiaCtrTableView else {
                fatalError("Unexpected destination: \(segue.destination)")
            }
            
            guard let selectedCell = sender as? MyCollectionViewCell else {
                fatalError("Unexpected sender: \(sender)")
            }
            
            guard let indexPath =  self.collectionView!.indexPath(for: selectedCell) else {
                fatalError("The selected cell is not being displayed by the table")
            }
            
            let group_name = courses[indexPath.item]["group"]
            ctr.group = group_name
            
        default:
            fatalError("Unexpected Segue Identifier; \(segue.identifier)")
        }
    }

    
  

}
