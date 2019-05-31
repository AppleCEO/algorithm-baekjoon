//
//  main.swift
//  algorithm
//
//  Created by joon-ho kil on 5/24/19.
//  Copyright © 2019 길준호. All rights reserved.
//

import Foundation

enum InputError: Error {
    case isNotInt
}

func main() throws {
    let input:String = readLine() ?? ""
    let inputs = input.split(separator: " ")
    guard let A = Int(inputs[0]), let B = Int(inputs[1]) else {
        throw InputError.isNotInt
    }
    print(A-B)
}

try main()
