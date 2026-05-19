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
                     * 获取<p>Player configuration name.</p>
                     * @return Name <p>Player configuration name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Player configuration name.</p>
                     * @param _name <p>Player configuration name.</p>
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
                     * 获取<p>Player configuration type. Valid values:</p><li>Preset: system predefined configuration.</li><li>Custom: user-customized configuration.</li>
                     * @return Type <p>Player configuration type. Valid values:</p><li>Preset: system predefined configuration.</li><li>Custom: user-customized configuration.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Player configuration type. Valid values:</p><li>Preset: system predefined configuration.</li><li>Custom: user-customized configuration.</li>
                     * @param _type <p>Player configuration type. Valid values:</p><li>Preset: system predefined configuration.</li><li>Custom: user-customized configuration.</li>
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
                     * 获取<p>Played Audio and Video Type. Optional values:</p><li>AdaptiveDynamicStream: adaptive bitrate stream output;</li><li>Transcode: transcoding output;</li><li>Original: original audio/video.</li>
                     * @return AudioVideoType <p>Played Audio and Video Type. Optional values:</p><li>AdaptiveDynamicStream: adaptive bitrate stream output;</li><li>Transcode: transcoding output;</li><li>Original: original audio/video.</li>
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置<p>Played Audio and Video Type. Optional values:</p><li>AdaptiveDynamicStream: adaptive bitrate stream output;</li><li>Transcode: transcoding output;</li><li>Original: original audio/video.</li>
                     * @param _audioVideoType <p>Played Audio and Video Type. Optional values:</p><li>AdaptiveDynamicStream: adaptive bitrate stream output;</li><li>Transcode: transcoding output;</li><li>Original: original audio/video.</li>
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
                     * 获取<p>Switch for playing DRM-protected adaptive bitstream:</p><li>ON: Enable, indicates only playback of protected adaptive bitrate output;</li><li>OFF: Disable, indicates playback of unencrypted adaptive bitstream output.</li>
                     * @return DrmSwitch <p>Switch for playing DRM-protected adaptive bitstream:</p><li>ON: Enable, indicates only playback of protected adaptive bitrate output;</li><li>OFF: Disable, indicates playback of unencrypted adaptive bitstream output.</li>
                     * 
                     */
                    std::string GetDrmSwitch() const;

                    /**
                     * 设置<p>Switch for playing DRM-protected adaptive bitstream:</p><li>ON: Enable, indicates only playback of protected adaptive bitrate output;</li><li>OFF: Disable, indicates playback of unencrypted adaptive bitstream output.</li>
                     * @param _drmSwitch <p>Switch for playing DRM-protected adaptive bitstream:</p><li>ON: Enable, indicates only playback of protected adaptive bitrate output;</li><li>OFF: Disable, indicates playback of unencrypted adaptive bitstream output.</li>
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
                     * 获取<p>Allowed output of unencrypted adaptive bitstream template ID.</p>
                     * @return AdaptiveDynamicStreamingDefinition <p>Allowed output of unencrypted adaptive bitstream template ID.</p>
                     * 
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置<p>Allowed output of unencrypted adaptive bitstream template ID.</p>
                     * @param _adaptiveDynamicStreamingDefinition <p>Allowed output of unencrypted adaptive bitstream template ID.</p>
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
                     * 获取<p>Allowed output of DRM adaptive bitstream template content.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DrmStreamingsInfo <p>Allowed output of DRM adaptive bitstream template content.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DrmStreamingsInfo GetDrmStreamingsInfo() const;

                    /**
                     * 设置<p>Allowed output of DRM adaptive bitstream template content.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _drmStreamingsInfo <p>Allowed output of DRM adaptive bitstream template content.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Allowed output transcoding template ID.</p>
                     * @return TranscodeDefinition <p>Allowed output transcoding template ID.</p>
                     * 
                     */
                    uint64_t GetTranscodeDefinition() const;

                    /**
                     * 设置<p>Allowed output transcoding template ID.</p>
                     * @param _transcodeDefinition <p>Allowed output transcoding template ID.</p>
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
                     * 获取<p>Allowed output sprite template ID.</p>
                     * @return ImageSpriteDefinition <p>Allowed output sprite template ID.</p>
                     * 
                     */
                    uint64_t GetImageSpriteDefinition() const;

                    /**
                     * 设置<p>Allowed output sprite template ID.</p>
                     * @param _imageSpriteDefinition <p>Allowed output sprite template ID.</p>
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
                     * 获取<p>The player displays names for substreams of different resolution.</p>
                     * @return ResolutionNameSet <p>The player displays names for substreams of different resolution.</p>
                     * 
                     */
                    std::vector<ResolutionNameInfo> GetResolutionNameSet() const;

                    /**
                     * 设置<p>The player displays names for substreams of different resolution.</p>
                     * @param _resolutionNameSet <p>The player displays names for substreams of different resolution.</p>
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
                     * 获取<p>Player configuration creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return CreateTime <p>Player configuration creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Player configuration creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _createTime <p>Player configuration creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
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
                     * 获取<p>Last player configuration modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return UpdateTime <p>Last player configuration modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last player configuration modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _updateTime <p>Last player configuration modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
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
                     * 获取<p>Domain name used during playback. A value of Default indicates usage of the domain name in the <a href="https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1">default distribution configuration</a>.</p>
                     * @return Domain <p>Domain name used during playback. A value of Default indicates usage of the domain name in the <a href="https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1">default distribution configuration</a>.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name used during playback. A value of Default indicates usage of the domain name in the <a href="https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1">default distribution configuration</a>.</p>
                     * @param _domain <p>Domain name used during playback. A value of Default indicates usage of the domain name in the <a href="https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1">default distribution configuration</a>.</p>
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
                     * 获取<p>Scheme used during playback. Value ranges from:</p><li>Default: Use the scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li><li>HTTP;</li><li>HTTPS.</li>
                     * @return Scheme <p>Scheme used during playback. Value ranges from:</p><li>Default: Use the scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li><li>HTTP;</li><li>HTTPS.</li>
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置<p>Scheme used during playback. Value ranges from:</p><li>Default: Use the scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li><li>HTTP;</li><li>HTTPS.</li>
                     * @param _scheme <p>Scheme used during playback. Value ranges from:</p><li>Default: Use the scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li><li>HTTP;</li><li>HTTPS.</li>
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
                     * 获取<p>Template description information.</p>
                     * @return Comment <p>Template description information.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Template description information.</p>
                     * @param _comment <p>Template description information.</p>
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
                     * <p>Player configuration name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Player configuration type. Valid values:</p><li>Preset: system predefined configuration.</li><li>Custom: user-customized configuration.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Played Audio and Video Type. Optional values:</p><li>AdaptiveDynamicStream: adaptive bitrate stream output;</li><li>Transcode: transcoding output;</li><li>Original: original audio/video.</li>
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * <p>Switch for playing DRM-protected adaptive bitstream:</p><li>ON: Enable, indicates only playback of protected adaptive bitrate output;</li><li>OFF: Disable, indicates playback of unencrypted adaptive bitstream output.</li>
                     */
                    std::string m_drmSwitch;
                    bool m_drmSwitchHasBeenSet;

                    /**
                     * <p>Allowed output of unencrypted adaptive bitstream template ID.</p>
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * <p>Allowed output of DRM adaptive bitstream template content.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DrmStreamingsInfo m_drmStreamingsInfo;
                    bool m_drmStreamingsInfoHasBeenSet;

                    /**
                     * <p>Allowed output transcoding template ID.</p>
                     */
                    uint64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * <p>Allowed output sprite template ID.</p>
                     */
                    uint64_t m_imageSpriteDefinition;
                    bool m_imageSpriteDefinitionHasBeenSet;

                    /**
                     * <p>The player displays names for substreams of different resolution.</p>
                     */
                    std::vector<ResolutionNameInfo> m_resolutionNameSet;
                    bool m_resolutionNameSetHasBeenSet;

                    /**
                     * <p>Player configuration creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last player configuration modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Domain name used during playback. A value of Default indicates usage of the domain name in the <a href="https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1">default distribution configuration</a>.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Scheme used during playback. Value ranges from:</p><li>Default: Use the scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li><li>HTTP;</li><li>HTTPS.</li>
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * <p>Template description information.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PLAYERCONFIG_H_
