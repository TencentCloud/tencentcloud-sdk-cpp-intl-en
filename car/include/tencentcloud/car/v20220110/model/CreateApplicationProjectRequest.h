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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONPROJECTREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/VideoEncodeConfig.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * CreateApplicationProject request structure.
                */
                class CreateApplicationProjectRequest : public AbstractModel
                {
                public:
                    CreateApplicationProjectRequest();
                    ~CreateApplicationProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project name, which is user-defined.
                     * @return Name Project name, which is user-defined.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Project name, which is user-defined.
                     * @param _name Project name, which is user-defined.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Bound application ID.
                     * @return ApplicationId Bound application ID.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Bound application ID.
                     * @param _applicationId Bound application ID.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).
                     * @return Type Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).
                     * @param _type Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable warm-up. The default value is false.
                     * @return IsPreload Whether to enable warm-up. The default value is false.
                     * 
                     */
                    bool GetIsPreload() const;

                    /**
                     * 设置Whether to enable warm-up. The default value is false.
                     * @param _isPreload Whether to enable warm-up. The default value is false.
                     * 
                     */
                    void SetIsPreload(const bool& _isPreload);

                    /**
                     * 判断参数 IsPreload 是否已赋值
                     * @return IsPreload 是否已赋值
                     * 
                     */
                    bool IsPreloadHasBeenSet() const;

                    /**
                     * 获取Application startup parameters.
                     * @return ApplicationParams Application startup parameters.
                     * 
                     */
                    std::string GetApplicationParams() const;

                    /**
                     * 设置Application startup parameters.
                     * @param _applicationParams Application startup parameters.
                     * 
                     */
                    void SetApplicationParams(const std::string& _applicationParams);

                    /**
                     * 判断参数 ApplicationParams 是否已赋值
                     * @return ApplicationParams 是否已赋值
                     * 
                     */
                    bool ApplicationParamsHasBeenSet() const;

                    /**
                     * 获取Resolution, in the format of widthxheight, such as 1920x1080.
                     * @return Resolution Resolution, in the format of widthxheight, such as 1920x1080.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution, in the format of widthxheight, such as 1920x1080.
                     * @param _resolution Resolution, in the format of widthxheight, such as 1920x1080.
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.
                     * @return ProjectType Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.
                     * 
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.
                     * @param _projectType Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.
                     * 
                     */
                    void SetProjectType(const std::string& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     * 
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取Frame rate.
                     * @return FPS Frame rate.
                     * 
                     */
                    int64_t GetFPS() const;

                    /**
                     * 设置Frame rate.
                     * @param _fPS Frame rate.
                     * 
                     */
                    void SetFPS(const int64_t& _fPS);

                    /**
                     * 判断参数 FPS 是否已赋值
                     * @return FPS 是否已赋值
                     * 
                     */
                    bool FPSHasBeenSet() const;

                    /**
                     * 获取Waiting time for application pre-launch.
                     * @return PreloadDuration Waiting time for application pre-launch.
                     * 
                     */
                    std::string GetPreloadDuration() const;

                    /**
                     * 设置Waiting time for application pre-launch.
                     * @param _preloadDuration Waiting time for application pre-launch.
                     * 
                     */
                    void SetPreloadDuration(const std::string& _preloadDuration);

                    /**
                     * 判断参数 PreloadDuration 是否已赋值
                     * @return PreloadDuration 是否已赋值
                     * 
                     */
                    bool PreloadDurationHasBeenSet() const;

                    /**
                     * 获取Waiting time for reconnection.
                     * @return ReconnectTimeout Waiting time for reconnection.
                     * 
                     */
                    std::string GetReconnectTimeout() const;

                    /**
                     * 设置Waiting time for reconnection.
                     * @param _reconnectTimeout Waiting time for reconnection.
                     * 
                     */
                    void SetReconnectTimeout(const std::string& _reconnectTimeout);

                    /**
                     * 判断参数 ReconnectTimeout 是否已赋值
                     * @return ReconnectTimeout 是否已赋值
                     * 
                     */
                    bool ReconnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Minimum bitrate, in Mbps.
                     * @return MinBitrate Minimum bitrate, in Mbps.
                     * 
                     */
                    int64_t GetMinBitrate() const;

                    /**
                     * 设置Minimum bitrate, in Mbps.
                     * @param _minBitrate Minimum bitrate, in Mbps.
                     * 
                     */
                    void SetMinBitrate(const int64_t& _minBitrate);

                    /**
                     * 判断参数 MinBitrate 是否已赋值
                     * @return MinBitrate 是否已赋值
                     * 
                     */
                    bool MinBitrateHasBeenSet() const;

                    /**
                     * 获取Maximum bitrate, in Mbps.
                     * @return MaxBitrate Maximum bitrate, in Mbps.
                     * 
                     */
                    int64_t GetMaxBitrate() const;

                    /**
                     * 设置Maximum bitrate, in Mbps.
                     * @param _maxBitrate Maximum bitrate, in Mbps.
                     * 
                     */
                    void SetMaxBitrate(const int64_t& _maxBitrate);

                    /**
                     * 判断参数 MaxBitrate 是否已赋值
                     * @return MaxBitrate 是否已赋值
                     * 
                     */
                    bool MaxBitrateHasBeenSet() const;

                    /**
                     * 获取Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.
                     * @return UpstreamAudioOption Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.
                     * 
                     */
                    std::string GetUpstreamAudioOption() const;

                    /**
                     * 设置Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.
                     * @param _upstreamAudioOption Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.
                     * 
                     */
                    void SetUpstreamAudioOption(const std::string& _upstreamAudioOption);

                    /**
                     * 判断参数 UpstreamAudioOption 是否已赋值
                     * @return UpstreamAudioOption 是否已赋值
                     * 
                     */
                    bool UpstreamAudioOptionHasBeenSet() const;

                    /**
                     * 获取Video encoding configuration.
                     * @return VideoEncodeConfig Video encoding configuration.
                     * 
                     */
                    VideoEncodeConfig GetVideoEncodeConfig() const;

                    /**
                     * 设置Video encoding configuration.
                     * @param _videoEncodeConfig Video encoding configuration.
                     * 
                     */
                    void SetVideoEncodeConfig(const VideoEncodeConfig& _videoEncodeConfig);

                    /**
                     * 判断参数 VideoEncodeConfig 是否已赋值
                     * @return VideoEncodeConfig 是否已赋值
                     * 
                     */
                    bool VideoEncodeConfigHasBeenSet() const;

                    /**
                     * 获取Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.
                     * @return XRMaxWidth Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.
                     * 
                     */
                    uint64_t GetXRMaxWidth() const;

                    /**
                     * 设置Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.
                     * @param _xRMaxWidth Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.
                     * 
                     */
                    void SetXRMaxWidth(const uint64_t& _xRMaxWidth);

                    /**
                     * 判断参数 XRMaxWidth 是否已赋值
                     * @return XRMaxWidth 是否已赋值
                     * 
                     */
                    bool XRMaxWidthHasBeenSet() const;

                    /**
                     * 获取ID of the background image COS file.
                     * @return BackgroundImageCOSFileId ID of the background image COS file.
                     * 
                     */
                    std::string GetBackgroundImageCOSFileId() const;

                    /**
                     * 设置ID of the background image COS file.
                     * @param _backgroundImageCOSFileId ID of the background image COS file.
                     * 
                     */
                    void SetBackgroundImageCOSFileId(const std::string& _backgroundImageCOSFileId);

                    /**
                     * 判断参数 BackgroundImageCOSFileId 是否已赋值
                     * @return BackgroundImageCOSFileId 是否已赋值
                     * 
                     */
                    bool BackgroundImageCOSFileIdHasBeenSet() const;

                    /**
                     * 获取Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * @return ProjectCategory Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * 
                     */
                    std::string GetProjectCategory() const;

                    /**
                     * 设置Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * @param _projectCategory Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * 
                     */
                    void SetProjectCategory(const std::string& _projectCategory);

                    /**
                     * 判断参数 ProjectCategory 是否已赋值
                     * @return ProjectCategory 是否已赋值
                     * 
                     */
                    bool ProjectCategoryHasBeenSet() const;

                    /**
                     * 获取Disabled code list.
                     * @return DisableVideoCodecs Disabled code list.
                     * 
                     */
                    std::vector<std::string> GetDisableVideoCodecs() const;

                    /**
                     * 设置Disabled code list.
                     * @param _disableVideoCodecs Disabled code list.
                     * 
                     */
                    void SetDisableVideoCodecs(const std::vector<std::string>& _disableVideoCodecs);

                    /**
                     * 判断参数 DisableVideoCodecs 是否已赋值
                     * @return DisableVideoCodecs 是否已赋值
                     * 
                     */
                    bool DisableVideoCodecsHasBeenSet() const;

                private:

                    /**
                     * Project name, which is user-defined.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Bound application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to enable warm-up. The default value is false.
                     */
                    bool m_isPreload;
                    bool m_isPreloadHasBeenSet;

                    /**
                     * Application startup parameters.
                     */
                    std::string m_applicationParams;
                    bool m_applicationParamsHasBeenSet;

                    /**
                     * Resolution, in the format of widthxheight, such as 1920x1080.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * Frame rate.
                     */
                    int64_t m_fPS;
                    bool m_fPSHasBeenSet;

                    /**
                     * Waiting time for application pre-launch.
                     */
                    std::string m_preloadDuration;
                    bool m_preloadDurationHasBeenSet;

                    /**
                     * Waiting time for reconnection.
                     */
                    std::string m_reconnectTimeout;
                    bool m_reconnectTimeoutHasBeenSet;

                    /**
                     * Minimum bitrate, in Mbps.
                     */
                    int64_t m_minBitrate;
                    bool m_minBitrateHasBeenSet;

                    /**
                     * Maximum bitrate, in Mbps.
                     */
                    int64_t m_maxBitrate;
                    bool m_maxBitrateHasBeenSet;

                    /**
                     * Upstream audio options.DisableMixIntoStreamPush: not mixing upstream audio in streaming.
                     */
                    std::string m_upstreamAudioOption;
                    bool m_upstreamAudioOptionHasBeenSet;

                    /**
                     * Video encoding configuration.
                     */
                    VideoEncodeConfig m_videoEncodeConfig;
                    bool m_videoEncodeConfigHasBeenSet;

                    /**
                     * Upper limit of the XR application resolution.If the project concurrency type is L or L2, the upper limit is 5000; if the project concurrency type is XL2, the upper limit is 6000.
                     */
                    uint64_t m_xRMaxWidth;
                    bool m_xRMaxWidthHasBeenSet;

                    /**
                     * ID of the background image COS file.
                     */
                    std::string m_backgroundImageCOSFileId;
                    bool m_backgroundImageCOSFileIdHasBeenSet;

                    /**
                     * Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     */
                    std::string m_projectCategory;
                    bool m_projectCategoryHasBeenSet;

                    /**
                     * Disabled code list.
                     */
                    std::vector<std::string> m_disableVideoCodecs;
                    bool m_disableVideoCodecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONPROJECTREQUEST_H_
