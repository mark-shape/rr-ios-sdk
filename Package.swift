// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "rr-ios-sdk",
    products: [.library(name: "RichRelevanceSDK", targets: ["RichRelevanceSDK"])],
    targets: [
        .target(
            name: "RichRelevanceSDK",
            path: "SDK",
            exclude: [
                "RichRelevanceSDK/Info.plist",
                "RichRelevanceSDKTests",
                "Pods",
                "Podfile",
                "Podfile.lock",
                "bin",
                "RichRelevanceSDK-Static-Info.plist",
                "RichRelevanceSDK/RichRelevanceSDK.h"
            ],
            sources: ["RichRelevanceSDK"],
            publicHeadersPath: "RichRelevanceSDK/Public"
        )
    ]
)
