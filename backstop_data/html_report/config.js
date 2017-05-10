report({
  "testSuite": "BackstopJS",
  "tests": [
    {
      "pair": {
        "reference": "../bitmaps_reference/prod_test_Homepage_0_l-sidebar-second_0_phone.png",
        "test": "../bitmaps_test/20170510-143436/prod_test_Homepage_0_l-sidebar-second_0_phone.png",
        "selector": ".l-sidebar-second",
        "fileName": "prod_test_Homepage_0_l-sidebar-second_0_phone.png",
        "label": "Homepage",
        "misMatchThreshold": 0.1,
        "diff": {
          "isSameDimensions": false,
          "dimensionDifference": {
            "width": 0,
            "height": -32
          },
          "misMatchPercentage": "19.39",
          "analysisTime": 49,
          "getDiffImage": null
        },
        "diffImage": "../bitmaps_test/20170510-143436/failed_diff_prod_test_Homepage_0_l-sidebar-second_0_phone.png"
      },
      "status": "fail"
    },
    {
      "pair": {
        "reference": "../bitmaps_reference/prod_test_Homepage_0_l-sidebar-second_1_tablet_v.png",
        "test": "../bitmaps_test/20170510-143436/prod_test_Homepage_0_l-sidebar-second_1_tablet_v.png",
        "selector": ".l-sidebar-second",
        "fileName": "prod_test_Homepage_0_l-sidebar-second_1_tablet_v.png",
        "label": "Homepage",
        "misMatchThreshold": 0.1,
        "diff": {
          "isSameDimensions": false,
          "dimensionDifference": {
            "width": 0,
            "height": -44
          },
          "misMatchPercentage": "7.99",
          "analysisTime": 56,
          "getDiffImage": null
        },
        "diffImage": "../bitmaps_test/20170510-143436/failed_diff_prod_test_Homepage_0_l-sidebar-second_1_tablet_v.png"
      },
      "status": "fail"
    },
    {
      "pair": {
        "reference": "../bitmaps_reference/prod_test_Homepage_0_l-sidebar-second_2_tablet_h.png",
        "test": "../bitmaps_test/20170510-143436/prod_test_Homepage_0_l-sidebar-second_2_tablet_h.png",
        "selector": ".l-sidebar-second",
        "fileName": "prod_test_Homepage_0_l-sidebar-second_2_tablet_h.png",
        "label": "Homepage",
        "misMatchThreshold": 0.1,
        "diff": {
          "isSameDimensions": true,
          "dimensionDifference": {
            "width": 0,
            "height": 0
          },
          "misMatchPercentage": "15.80",
          "analysisTime": 31,
          "getDiffImage": null
        },
        "diffImage": "../bitmaps_test/20170510-143436/failed_diff_prod_test_Homepage_0_l-sidebar-second_2_tablet_h.png"
      },
      "status": "fail"
    }
  ]
});