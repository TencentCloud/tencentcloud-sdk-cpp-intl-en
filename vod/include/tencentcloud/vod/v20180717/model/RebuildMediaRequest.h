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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RepairInfo.h>
#include <tencentcloud/vod/v20180717/model/VideoFrameInterpolationInfo.h>
#include <tencentcloud/vod/v20180717/model/SuperResolutionInfo.h>
#include <tencentcloud/vod/v20180717/model/HDRInfo.h>
#include <tencentcloud/vod/v20180717/model/VideoDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioDenoiseInfo.h>
#include <tencentcloud/vod/v20180717/model/ColorEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/SharpEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/FaceEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/LowLightEnhanceInfo.h>
#include <tencentcloud/vod/v20180717/model/ScratchRepairInfo.h>
#include <tencentcloud/vod/v20180717/model/ArtifactRepairInfo.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTargetInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * RebuildMedia request structure.
                */
                class RebuildMediaRequest : public AbstractModel
                {
                public:
                    RebuildMediaRequest();
                    ~RebuildMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The file ID.
                     * @return FileId The file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The file ID.
                     * @param _fileId The file ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     * @return StartTimeOffset The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     * @param _startTimeOffset The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     * @return EndTimeOffset The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     * @param _endTimeOffset The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取The video quality remastering parameters.
                     * @return RepairInfo The video quality remastering parameters.
                     * 
                     */
                    RepairInfo GetRepairInfo() const;

                    /**
                     * 设置The video quality remastering parameters.
                     * @param _repairInfo The video quality remastering parameters.
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
                     * @return VideoFrameInterpolationInfo The smart frame interpolation parameters.
                     * 
                     */
                    VideoFrameInterpolationInfo GetVideoFrameInterpolationInfo() const;

                    /**
                     * 设置The smart frame interpolation parameters.
                     * @param _videoFrameInterpolationInfo The smart frame interpolation parameters.
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
                     * @return SuperResolutionInfo The super resolution parameters.
                     * 
                     */
                    SuperResolutionInfo GetSuperResolutionInfo() const;

                    /**
                     * 设置The super resolution parameters.
                     * @param _superResolutionInfo The super resolution parameters.
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
                     * 获取The high dynamic range (HDR) parameters.
                     * @return HDRInfo The high dynamic range (HDR) parameters.
                     * 
                     */
                    HDRInfo GetHDRInfo() const;

                    /**
                     * 设置The high dynamic range (HDR) parameters.
                     * @param _hDRInfo The high dynamic range (HDR) parameters.
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
                     * @return VideoDenoiseInfo The image noise removal parameters.
                     * 
                     */
                    VideoDenoiseInfo GetVideoDenoiseInfo() const;

                    /**
                     * 设置The image noise removal parameters.
                     * @param _videoDenoiseInfo The image noise removal parameters.
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
                     * 获取The noise removal parameters.
                     * @return AudioDenoiseInfo The noise removal parameters.
                     * 
                     */
                    AudioDenoiseInfo GetAudioDenoiseInfo() const;

                    /**
                     * 设置The noise removal parameters.
                     * @param _audioDenoiseInfo The noise removal parameters.
                     * 
                     */
                    void SetAudioDenoiseInfo(const AudioDenoiseInfo& _audioDenoiseInfo);

                    /**
                     * 判断参数 AudioDenoiseInfo 是否已赋值
                     * @return AudioDenoiseInfo 是否已赋值
                     * 
                     */
                    bool AudioDenoiseInfoHasBeenSet() const;

                    /**
                     * 获取The color enhancement parameters.
                     * @return ColorInfo The color enhancement parameters.
                     * 
                     */
                    ColorEnhanceInfo GetColorInfo() const;

                    /**
                     * 设置The color enhancement parameters.
                     * @param _colorInfo The color enhancement parameters.
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
                     * @return SharpInfo The detail enhancement parameters.
                     * 
                     */
                    SharpEnhanceInfo GetSharpInfo() const;

                    /**
                     * 设置The detail enhancement parameters.
                     * @param _sharpInfo The detail enhancement parameters.
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
                     * @return FaceInfo The face enhancement parameters.
                     * 
                     */
                    FaceEnhanceInfo GetFaceInfo() const;

                    /**
                     * 设置The face enhancement parameters.
                     * @param _faceInfo The face enhancement parameters.
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
                     * @return LowLightInfo The low-light enhancement parameters.
                     * 
                     */
                    LowLightEnhanceInfo GetLowLightInfo() const;

                    /**
                     * 设置The low-light enhancement parameters.
                     * @param _lowLightInfo The low-light enhancement parameters.
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
                     * @return ScratchRepairInfo The banding removal parameters.
                     * 
                     */
                    ScratchRepairInfo GetScratchRepairInfo() const;

                    /**
                     * 设置The banding removal parameters.
                     * @param _scratchRepairInfo The banding removal parameters.
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
                     * 获取The artifact removal (smoothing) parameters.
                     * @return ArtifactRepairInfo The artifact removal (smoothing) parameters.
                     * 
                     */
                    ArtifactRepairInfo GetArtifactRepairInfo() const;

                    /**
                     * 设置The artifact removal (smoothing) parameters.
                     * @param _artifactRepairInfo The artifact removal (smoothing) parameters.
                     * 
                     */
                    void SetArtifactRepairInfo(const ArtifactRepairInfo& _artifactRepairInfo);

                    /**
                     * 判断参数 ArtifactRepairInfo 是否已赋值
                     * @return ArtifactRepairInfo 是否已赋值
                     * 
                     */
                    bool ArtifactRepairInfoHasBeenSet() const;

                    /**
                     * 获取The output parameters of the file.
                     * @return TargetInfo The output parameters of the file.
                     * 
                     */
                    RebuildMediaTargetInfo GetTargetInfo() const;

                    /**
                     * 设置The output parameters of the file.
                     * @param _targetInfo The output parameters of the file.
                     * 
                     */
                    void SetTargetInfo(const RebuildMediaTargetInfo& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                    /**
                     * 获取The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @return SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @param _sessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @return SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @param _sessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     * @return TasksPriority The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     * @param _tasksPriority The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取A reserved parameter.
                     * @return ExtInfo A reserved parameter.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置A reserved parameter.
                     * @param _extInfo A reserved parameter.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * The file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * The video quality remastering parameters.
                     */
                    RepairInfo m_repairInfo;
                    bool m_repairInfoHasBeenSet;

                    /**
                     * The smart frame interpolation parameters.
                     */
                    VideoFrameInterpolationInfo m_videoFrameInterpolationInfo;
                    bool m_videoFrameInterpolationInfoHasBeenSet;

                    /**
                     * The super resolution parameters.
                     */
                    SuperResolutionInfo m_superResolutionInfo;
                    bool m_superResolutionInfoHasBeenSet;

                    /**
                     * The high dynamic range (HDR) parameters.
                     */
                    HDRInfo m_hDRInfo;
                    bool m_hDRInfoHasBeenSet;

                    /**
                     * The image noise removal parameters.
                     */
                    VideoDenoiseInfo m_videoDenoiseInfo;
                    bool m_videoDenoiseInfoHasBeenSet;

                    /**
                     * The noise removal parameters.
                     */
                    AudioDenoiseInfo m_audioDenoiseInfo;
                    bool m_audioDenoiseInfoHasBeenSet;

                    /**
                     * The color enhancement parameters.
                     */
                    ColorEnhanceInfo m_colorInfo;
                    bool m_colorInfoHasBeenSet;

                    /**
                     * The detail enhancement parameters.
                     */
                    SharpEnhanceInfo m_sharpInfo;
                    bool m_sharpInfoHasBeenSet;

                    /**
                     * The face enhancement parameters.
                     */
                    FaceEnhanceInfo m_faceInfo;
                    bool m_faceInfoHasBeenSet;

                    /**
                     * The low-light enhancement parameters.
                     */
                    LowLightEnhanceInfo m_lowLightInfo;
                    bool m_lowLightInfoHasBeenSet;

                    /**
                     * The banding removal parameters.
                     */
                    ScratchRepairInfo m_scratchRepairInfo;
                    bool m_scratchRepairInfoHasBeenSet;

                    /**
                     * The artifact removal (smoothing) parameters.
                     */
                    ArtifactRepairInfo m_artifactRepairInfo;
                    bool m_artifactRepairInfoHasBeenSet;

                    /**
                     * The output parameters of the file.
                     */
                    RebuildMediaTargetInfo m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                    /**
                     * The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * A reserved parameter.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIAREQUEST_H_
