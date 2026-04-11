import PackageDescription

let package = Package(
    name: "CityScoutShared",
    platforms: [.iOS(.v16)],
    products: [
        .library(name: "CityScoutShared", targets: ["CityScoutShared"])
    ],
    targets: [
        .binaryTarget(
            name: "CityScoutShared",
            path: "./CityScoutShared.xcframework"
        )
    ]
)