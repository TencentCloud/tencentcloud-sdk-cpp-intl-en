/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDVIDEOINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDVIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RepairInfo.h>
#include <tencentcloud/vod/v20180717/model/VideoFrameInterpolationInfo.h>
#include <tencentcloud/vod/v20180717/model/SuperResolutionInfo.h>
#include <tencentcloud/vod/v20180717/model/HDRInfo.h>
#include <tencentcloud/vod/v20180717/model/VideoDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/ColorEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/SharpEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/LowLightEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/ScratchRepairInfo.h>
#include <tencentcloud/vod/v20180717/model/ArtifactRepairInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The video remaster parameters.
                */
                class RebuildVideoInfo : public AbstractModel
                {
                public:
                    RebuildVideoInfo();
                    ~RebuildVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The image restoration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RepairInfo The image restoration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RepairInfo GetRepairInfo() const;

                    /**
                     * 设置The image restoration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _repairInfo The image restoration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRepairInfo(const RepairInfo& _repairInfo);

                    /**
                     * 判断参数 RepairInfo 是否已赋值
                     * @return RepairInfo 是否已赋值
                     * 
                     */
                    bool RepairInfoHasBeenSet() const;

                    /**
                     * 获取The smart frame interpolation parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoFrameInterpolationInfo The smart frame interpolation parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoFrameInterpolationInfo GetVideoFrameInterpolationInfo() const;

                    /**
                     * 设置The smart frame interpolation parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _videoFrameInterpolationInfo The smart frame interpolation parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVideoFrameInterpolationInfo(const VideoFrameInterpolationInfo& _videoFrameInterpolationInfo);

                    /**
                     * 判断参数 VideoFrameInterpolationInfo 是否已赋值
                     * @return VideoFrameInterpolationInfo 是否已赋值
                     * 
                     */
                    bool VideoFrameInterpolationInfoHasBeenSet() const;

                    /**
                     * 获取The super resolution parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuperResolutionInfo The super resolution parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SuperResolutionInfo GetSuperResolutionInfo() const;

                    /**
                     * 设置The super resolution parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _superResolutionInfo The super resolution parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuperResolutionInfo(const SuperResolutionInfo& _superResolutionInfo);

                    /**
                     * 判断参数 SuperResolutionInfo 是否已赋值
                     * @return SuperResolutionInfo 是否已赋值
                     * 
                     */
                    bool SuperResolutionInfoHasBeenSet() const;

                    /**
                     * 获取The high dynamic range (HDR) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HDRInfo The high dynamic range (HDR) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HDRInfo GetHDRInfo() const;

                    /**
                     * 设置The high dynamic range (HDR) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hDRInfo The high dynamic range (HDR) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHDRInfo(const HDRInfo& _hDRInfo);

                    /**
                     * 判断参数 HDRInfo 是否已赋值
                     * @return HDRInfo 是否已赋值
                     * 
                     */
                    bool HDRInfoHasBeenSet() const;

                    /**
                     * 获取The image noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoDenoiseInfo The image noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoDenoiseInfo GetVideoDenoiseInfo() const;

                    /**
                     * 设置The image noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _videoDenoiseInfo The image noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVideoDenoiseInfo(const VideoDenoiseInfo& _videoDenoiseInfo);

                    /**
                     * 判断参数 VideoDenoiseInfo 是否已赋值
                     * @return VideoDenoiseInfo 是否已赋值
                     * 
                     */
                    bool VideoDenoiseInfoHasBeenSet() const;

                    /**
                     * 获取The color enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ColorInfo The color enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ColorEnhanceInfo GetColorInfo() const;

                    /**
                     * 设置The color enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _colorInfo The color enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColorInfo(const ColorEnhanceInfo& _colorInfo);

                    /**
                     * 判断参数 ColorInfo 是否已赋值
                     * @return ColorInfo 是否已赋值
                     * 
                     */
                    bool ColorInfoHasBeenSet() const;

                    /**
                     * 获取The detail enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SharpInfo The detail enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SharpEnhanceInfo GetSharpInfo() const;

                    /**
                     * 设置The detail enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sharpInfo The detail enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSharpInfo(const SharpEnhanceInfo& _sharpInfo);

                    /**
                     * 判断参数 SharpInfo 是否已赋值
                     * @return SharpInfo 是否已赋值
                     * 
                     */
                    bool SharpInfoHasBeenSet() const;

                    /**
                     * 获取The face enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FaceInfo The face enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FaceEnhanceInfo GetFaceInfo() const;

                    /**
                     * 设置The face enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _faceInfo The face enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFaceInfo(const FaceEnhanceInfo& _faceInfo);

                    /**
                     * 判断参数 FaceInfo 是否已赋值
                     * @return FaceInfo 是否已赋值
                     * 
                     */
                    bool FaceInfoHasBeenSet() const;

                    /**
                     * 获取The low-light enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LowLightInfo The low-light enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LowLightEnhanceInfo GetLowLightInfo() const;

                    /**
                     * 设置The low-light enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lowLightInfo The low-light enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLowLightInfo(const LowLightEnhanceInfo& _lowLightInfo);

                    /**
                     * 判断参数 LowLightInfo 是否已赋值
                     * @return LowLightInfo 是否已赋值
                     * 
                     */
                    bool LowLightInfoHasBeenSet() const;

                    /**
                     * 获取The banding removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScratchRepairInfo The banding removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScratchRepairInfo GetScratchRepairInfo() const;

                    /**
                     * 设置The banding removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scratchRepairInfo The banding removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScratchRepairInfo(const ScratchRepairInfo& _scratchRepairInfo);

                    /**
                     * 判断参数 ScratchRepairInfo 是否已赋值
                     * @return ScratchRepairInfo 是否已赋值
                     * 
                     */
                    bool ScratchRepairInfoHasBeenSet() const;

                    /**
                     * 获取The artifact removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ArtifactRepairInfo The artifact removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ArtifactRepairInfo GetArtifactRepairInfo() const;

                    /**
                     * 设置The artifact removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _artifactRepairInfo The artifact removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArtifactRepairInfo(const ArtifactRepairInfo& _artifactRepairInfo);

                    /**
                     * 判断参数 ArtifactRepairInfo 是否已赋值
                     * @return ArtifactRepairInfo 是否已赋值
                     * 
                     */
                    bool ArtifactRepairInfoHasBeenSet() const;

                private:

                    /**
                     * The image restoration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RepairInfo m_repairInfo;
                    bool m_repairInfoHasBeenSet;

                    /**
                     * The smart frame interpolation parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoFrameInterpolationInfo m_videoFrameInterpolationInfo;
                    bool m_videoFrameInterpolationInfoHasBeenSet;

                    /**
                     * The super resolution parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SuperResolutionInfo m_superResolutionInfo;
                    bool m_superResolutionInfoHasBeenSet;

                    /**
                     * The high dynamic range (HDR) configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HDRInfo m_hDRInfo;
                    bool m_hDRInfoHasBeenSet;

                    /**
                     * The image noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoDenoiseInfo m_videoDenoiseInfo;
                    bool m_videoDenoiseInfoHasBeenSet;

                    /**
                     * The color enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ColorEnhanceInfo m_colorInfo;
                    bool m_colorInfoHasBeenSet;

                    /**
                     * The detail enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SharpEnhanceInfo m_sharpInfo;
                    bool m_sharpInfoHasBeenSet;

                    /**
                     * The face enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FaceEnhanceInfo m_faceInfo;
                    bool m_faceInfoHasBeenSet;

                    /**
                     * The low-light enhancement parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LowLightEnhanceInfo m_lowLightInfo;
                    bool m_lowLightInfoHasBeenSet;

                    /**
                     * The banding removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScratchRepairInfo m_scratchRepairInfo;
                    bool m_scratchRepairInfoHasBeenSet;

                    /**
                     * The artifact removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ArtifactRepairInfo m_artifactRepairInfo;
                    bool m_artifactRepairInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDVIDEOINFO_H_
