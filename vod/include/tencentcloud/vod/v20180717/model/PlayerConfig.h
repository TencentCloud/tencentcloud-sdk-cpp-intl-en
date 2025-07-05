/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PLAYERCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PLAYERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DrmStreamingsInfo.h>
#include <tencentcloud/vod/v20180717/model/ResolutionNameInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Player configuration details
                */
                class PlayerConfig : public AbstractModel
                {
                public:
                    PlayerConfig();
                    ~PlayerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Player configuration name.
                     * @return Name Player configuration name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Player configuration name.
                     * @param _name Player configuration name.
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
                     * 获取Player configuration type. Valid values:
<li>Preset: preset configuration;</li>
<li>Custom: custom configuration.</li>
                     * @return Type Player configuration type. Valid values:
<li>Preset: preset configuration;</li>
<li>Custom: custom configuration.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Player configuration type. Valid values:
<li>Preset: preset configuration;</li>
<li>Custom: custom configuration.</li>
                     * @param _type Player configuration type. Valid values:
<li>Preset: preset configuration;</li>
<li>Custom: custom configuration.</li>
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
                     * 获取The type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming: Adaptive bitrate stream</li>
<li>Transcode: Transcoded stream</li>
<li>Original: The original stream</li>
                     * @return AudioVideoType The type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming: Adaptive bitrate stream</li>
<li>Transcode: Transcoded stream</li>
<li>Original: The original stream</li>
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置The type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming: Adaptive bitrate stream</li>
<li>Transcode: Transcoded stream</li>
<li>Original: The original stream</li>
                     * @param _audioVideoType The type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming: Adaptive bitrate stream</li>
<li>Transcode: Transcoded stream</li>
<li>Original: The original stream</li>
                     * 
                     */
                    void SetAudioVideoType(const std::string& _audioVideoType);

                    /**
                     * 判断参数 AudioVideoType 是否已赋值
                     * @return AudioVideoType 是否已赋值
                     * 
                     */
                    bool AudioVideoTypeHasBeenSet() const;

                    /**
                     * 获取Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
                     * @return DrmSwitch Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
                     * 
                     */
                    std::string GetDrmSwitch() const;

                    /**
                     * 设置Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
                     * @param _drmSwitch Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
                     * 
                     */
                    void SetDrmSwitch(const std::string& _drmSwitch);

                    /**
                     * 判断参数 DrmSwitch 是否已赋值
                     * @return DrmSwitch 是否已赋值
                     * 
                     */
                    bool DrmSwitchHasBeenSet() const;

                    /**
                     * 获取ID of the unencrypted adaptive bitrate streaming template that allows output.
                     * @return AdaptiveDynamicStreamingDefinition ID of the unencrypted adaptive bitrate streaming template that allows output.
                     * 
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置ID of the unencrypted adaptive bitrate streaming template that allows output.
                     * @param _adaptiveDynamicStreamingDefinition ID of the unencrypted adaptive bitrate streaming template that allows output.
                     * 
                     */
                    void SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingDefinition 是否已赋值
                     * @return AdaptiveDynamicStreamingDefinition 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingDefinitionHasBeenSet() const;

                    /**
                     * 获取Content of the DRM-protected adaptive bitrate streaming template that allows output.
                     * @return DrmStreamingsInfo Content of the DRM-protected adaptive bitrate streaming template that allows output.
                     * 
                     */
                    DrmStreamingsInfo GetDrmStreamingsInfo() const;

                    /**
                     * 设置Content of the DRM-protected adaptive bitrate streaming template that allows output.
                     * @param _drmStreamingsInfo Content of the DRM-protected adaptive bitrate streaming template that allows output.
                     * 
                     */
                    void SetDrmStreamingsInfo(const DrmStreamingsInfo& _drmStreamingsInfo);

                    /**
                     * 判断参数 DrmStreamingsInfo 是否已赋值
                     * @return DrmStreamingsInfo 是否已赋值
                     * 
                     */
                    bool DrmStreamingsInfoHasBeenSet() const;

                    /**
                     * 获取The ID of the transcoding template allowed.
                     * @return TranscodeDefinition The ID of the transcoding template allowed.
                     * 
                     */
                    uint64_t GetTranscodeDefinition() const;

                    /**
                     * 设置The ID of the transcoding template allowed.
                     * @param _transcodeDefinition The ID of the transcoding template allowed.
                     * 
                     */
                    void SetTranscodeDefinition(const uint64_t& _transcodeDefinition);

                    /**
                     * 判断参数 TranscodeDefinition 是否已赋值
                     * @return TranscodeDefinition 是否已赋值
                     * 
                     */
                    bool TranscodeDefinitionHasBeenSet() const;

                    /**
                     * 获取ID of the image sprite generating template that allows output.
                     * @return ImageSpriteDefinition ID of the image sprite generating template that allows output.
                     * 
                     */
                    uint64_t GetImageSpriteDefinition() const;

                    /**
                     * 设置ID of the image sprite generating template that allows output.
                     * @param _imageSpriteDefinition ID of the image sprite generating template that allows output.
                     * 
                     */
                    void SetImageSpriteDefinition(const uint64_t& _imageSpriteDefinition);

                    /**
                     * 判断参数 ImageSpriteDefinition 是否已赋值
                     * @return ImageSpriteDefinition 是否已赋值
                     * 
                     */
                    bool ImageSpriteDefinitionHasBeenSet() const;

                    /**
                     * 获取Display name of player for substreams with different resolutions.
                     * @return ResolutionNameSet Display name of player for substreams with different resolutions.
                     * 
                     */
                    std::vector<ResolutionNameInfo> GetResolutionNameSet() const;

                    /**
                     * 设置Display name of player for substreams with different resolutions.
                     * @param _resolutionNameSet Display name of player for substreams with different resolutions.
                     * 
                     */
                    void SetResolutionNameSet(const std::vector<ResolutionNameInfo>& _resolutionNameSet);

                    /**
                     * 判断参数 ResolutionNameSet 是否已赋值
                     * @return ResolutionNameSet 是否已赋值
                     * 
                     */
                    bool ResolutionNameSetHasBeenSet() const;

                    /**
                     * 获取Creation time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return CreateTime Creation time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _createTime Creation time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return UpdateTime Last modified time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _updateTime Last modified time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Domain name used for playback. If its value is `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     * @return Domain Domain name used for playback. If its value is `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name used for playback. If its value is `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     * @param _domain Domain name used for playback. If its value is `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Scheme used for playback. Valid values:
<li>Default: the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used;</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     * @return Scheme Scheme used for playback. Valid values:
<li>Default: the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used;</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Scheme used for playback. Valid values:
<li>Default: the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used;</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     * @param _scheme Scheme used for playback. Valid values:
<li>Default: the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used;</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Template description.
                     * @return Comment Template description.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description.
                     * @param _comment Template description.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Player configuration name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Player configuration type. Valid values:
<li>Preset: preset configuration;</li>
<li>Custom: custom configuration.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming: Adaptive bitrate stream</li>
<li>Transcode: Transcoded stream</li>
<li>Original: The original stream</li>
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
                     */
                    std::string m_drmSwitch;
                    bool m_drmSwitchHasBeenSet;

                    /**
                     * ID of the unencrypted adaptive bitrate streaming template that allows output.
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * Content of the DRM-protected adaptive bitrate streaming template that allows output.
                     */
                    DrmStreamingsInfo m_drmStreamingsInfo;
                    bool m_drmStreamingsInfoHasBeenSet;

                    /**
                     * The ID of the transcoding template allowed.
                     */
                    uint64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * ID of the image sprite generating template that allows output.
                     */
                    uint64_t m_imageSpriteDefinition;
                    bool m_imageSpriteDefinitionHasBeenSet;

                    /**
                     * Display name of player for substreams with different resolutions.
                     */
                    std::vector<ResolutionNameInfo> m_resolutionNameSet;
                    bool m_resolutionNameSetHasBeenSet;

                    /**
                     * Creation time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of player configuration in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Domain name used for playback. If its value is `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Scheme used for playback. Valid values:
<li>Default: the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used;</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Template description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PLAYERCONFIG_H_
