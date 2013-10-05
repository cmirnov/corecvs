/**
 * \file openCVSGMParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include <vector>
#include <stddef.h>
#include "openCVSGMParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
template<>
Reflection BaseReflection<OpenCVSGMParameters>::reflection = Reflection();
template<>
int BaseReflection<OpenCVSGMParameters>::dummy = OpenCVSGMParameters::staticInit();
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN

int OpenCVSGMParameters::staticInit()
{

    ReflectionNaming &nameing = naming();
    nameing = ReflectionNaming(
        "OpenCV SGM Parameters",
        "OpenCV SGM Parameters Class",
        ""
    );
     

    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::PRE_FILTER_CAP_ID,
          offsetof(OpenCVSGMParameters, mPreFilterCap),
          10,
          "Pre Filter Cap",
          "Pre Filter Cap",
          "Pre Filter Cap"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::SAD_WINDOW_SIZE_ID,
          offsetof(OpenCVSGMParameters, mSADWindowSize),
          5,
          "SAD Window Size",
          "SAD Window Size",
          "SAD Window Size"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::P1_MULTIPLIER_ID,
          offsetof(OpenCVSGMParameters, mP1Multiplier),
          8,
          "P1 multiplier",
          "P1 multiplier",
          "P1 multiplier"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::P2_MULTIPLIER_ID,
          offsetof(OpenCVSGMParameters, mP2Multiplier),
          32,
          "P2 multiplier",
          "P2 multiplier",
          "P2 multiplier"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::MIN_DISPARITY_ID,
          offsetof(OpenCVSGMParameters, mMinDisparity),
          0,
          "Min Disparity",
          "Min Disparity",
          "Min Disparity"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::UNIQUENESS_RATIO_ID,
          offsetof(OpenCVSGMParameters, mUniquenessRatio),
          15,
          "Uniqueness Ratio",
          "Uniqueness Ratio",
          "Uniqueness Ratio"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::SPECKLE_WINDOW_SIZE_ID,
          offsetof(OpenCVSGMParameters, mSpeckleWindowSize),
          50,
          "Speckle Window Size",
          "Speckle Window Size",
          "Speckle Window Size"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::SPECKLE_RANGE_ID,
          offsetof(OpenCVSGMParameters, mSpeckleRange),
          16,
          "Speckle Range",
          "Speckle Range",
          "Speckle Range"
        )
    );
    fields().push_back(
        new IntField
        (
          OpenCVSGMParameters::DISP_12_MAX_DIFF_ID,
          offsetof(OpenCVSGMParameters, mDisp12MaxDiff),
          -1,
          "Disp 12 Max Diff",
          "Disp 12 Max Diff",
          "Disp 12 Max Diff"
        )
    );
    fields().push_back(
        new BoolField
        (
          OpenCVSGMParameters::FULL_DP_ID,
          offsetof(OpenCVSGMParameters, mFullDP),
          true,
          "Full DP",
          "Full DP",
          "Full DP"
        )
    );
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


