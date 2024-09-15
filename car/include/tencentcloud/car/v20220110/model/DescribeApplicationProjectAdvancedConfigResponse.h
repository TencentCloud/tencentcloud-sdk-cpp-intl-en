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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTADVANCEDCONFIGRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTADVANCEDCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/VideoEncodeConfig.h>
#include <tencentcloud/car/v20220110/model/BackgroundImage.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeApplicationProjectAdvancedConfig response structure.
                */
                class DescribeApplicationProjectAdvancedConfigResponse : public AbstractModel
                {
                public:
                    DescribeApplicationProjectAdvancedConfigResponse();
                    ~DescribeApplicationProjectAdvancedConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationParams Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationParams() const;

                    /**
                     * 判断参数 ApplicationParams 是否已赋值
                     * @return ApplicationParams 是否已赋值
                     * 
                     */
                    bool ApplicationParamsHasBeenSet() const;

                    /**
                     * 获取Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resolution Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Frame rate. Valid values: 0, 30, 60.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FPS Frame rate. Valid values: 0, 30, 60.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFPS() const;

                    /**
                     * 判断参数 FPS 是否已赋值
                     * @return FPS 是否已赋值
                     * 
                     */
                    bool FPSHasBeenSet() const;

                    /**
                     * 获取Minimum bitrate, in Mbps.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinBitrate Minimum bitrate, in Mbps.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinBitrate() const;

                    /**
                     * 判断参数 MinBitrate 是否已赋值
                     * @return MinBitrate 是否已赋值
                     * 
                     */
                    bool MinBitrateHasBeenSet() const;

                    /**
                     * 获取Maximum bitrate, in Mbps.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxBitrate Maximum bitrate, in Mbps.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxBitrate() const;

                    /**
                     * 判断参数 MaxBitrate 是否已赋值
                     * @return MaxBitrate 是否已赋值
                     * 
                     */
                    bool MaxBitrateHasBeenSet() const;

                    /**
                     * 获取Waiting time for application pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PreloadDuration Waiting time for application pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPreloadDuration() const;

                    /**
                     * 判断参数 PreloadDuration 是否已赋值
                     * @return PreloadDuration 是否已赋值
                     * 
                     */
                    bool PreloadDurationHasBeenSet() const;

                    /**
                     * 获取Waiting time for reconnection.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReconnectTimeout Waiting time for reconnection.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReconnectTimeout() const;

                    /**
                     * 判断参数 ReconnectTimeout 是否已赋值
                     * @return ReconnectTimeout 是否已赋值
                     * 
                     */
                    bool ReconnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamAudioOption Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpstreamAudioOption() const;

                    /**
                     * 判断参数 UpstreamAudioOption 是否已赋值
                     * @return UpstreamAudioOption 是否已赋值
                     * 
                     */
                    bool UpstreamAudioOptionHasBeenSet() const;

                    /**
                     * 获取Video encoding configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoEncodeConfig Video encoding configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoEncodeConfig GetVideoEncodeConfig() const;

                    /**
                     * 判断参数 VideoEncodeConfig 是否已赋值
                     * @return VideoEncodeConfig 是否已赋值
                     * 
                     */
                    bool VideoEncodeConfigHasBeenSet() const;

                    /**
                     * 获取Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return XRMaxWidth Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetXRMaxWidth() const;

                    /**
                     * 判断参数 XRMaxWidth 是否已赋值
                     * @return XRMaxWidth 是否已赋值
                     * 
                     */
                    bool XRMaxWidthHasBeenSet() const;

                    /**
                     * 获取Background image information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackgroundImage Background image information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BackgroundImage GetBackgroundImage() const;

                    /**
                     * 判断参数 BackgroundImage 是否已赋值
                     * @return BackgroundImage 是否已赋值
                     * 
                     */
                    bool BackgroundImageHasBeenSet() const;

                    /**
                     * 获取Disabled code list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisableVideoCodecs Disabled code list.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDisableVideoCodecs() const;

                    /**
                     * 判断参数 DisableVideoCodecs 是否已赋值
                     * @return DisableVideoCodecs 是否已赋值
                     * 
                     */
                    bool DisableVideoCodecsHasBeenSet() const;

                private:

                    /**
                     * Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationParams;
                    bool m_applicationParamsHasBeenSet;

                    /**
                     * Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Frame rate. Valid values: 0, 30, 60.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fPS;
                    bool m_fPSHasBeenSet;

                    /**
                     * Minimum bitrate, in Mbps.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minBitrate;
                    bool m_minBitrateHasBeenSet;

                    /**
                     * Maximum bitrate, in Mbps.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxBitrate;
                    bool m_maxBitrateHasBeenSet;

                    /**
                     * Waiting time for application pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_preloadDuration;
                    bool m_preloadDurationHasBeenSet;

                    /**
                     * Waiting time for reconnection.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reconnectTimeout;
                    bool m_reconnectTimeoutHasBeenSet;

                    /**
                     * Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_upstreamAudioOption;
                    bool m_upstreamAudioOptionHasBeenSet;

                    /**
                     * Video encoding configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoEncodeConfig m_videoEncodeConfig;
                    bool m_videoEncodeConfigHasBeenSet;

                    /**
                     * Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_xRMaxWidth;
                    bool m_xRMaxWidthHasBeenSet;

                    /**
                     * Background image information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BackgroundImage m_backgroundImage;
                    bool m_backgroundImageHasBeenSet;

                    /**
                     * Disabled code list.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_disableVideoCodecs;
                    bool m_disableVideoCodecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTADVANCEDCONFIGRESPONSE_H_
