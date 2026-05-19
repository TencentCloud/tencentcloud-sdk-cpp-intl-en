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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUPERPLAYERCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUPERPLAYERCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DrmStreamingsInfoForUpdate.h>
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
                * ModifySuperPlayerConfig request structure.
                */
                class ModifySuperPlayerConfigRequest : public AbstractModel
                {
                public:
                    ModifySuperPlayerConfigRequest();
                    ~ModifySuperPlayerConfigRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Played audio and video type. Valid values:
<li>AdaptiveDynamicStream: adaptive bitrate stream output;</li>
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
                     * @return AudioVideoType Played audio and video type. Valid values:
<li>AdaptiveDynamicStream: adaptive bitrate stream output;</li>
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置Played audio and video type. Valid values:
<li>AdaptiveDynamicStream: adaptive bitrate stream output;</li>
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
                     * @param _audioVideoType Played audio and video type. Valid values:
<li>AdaptiveDynamicStream: adaptive bitrate stream output;</li>
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
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
                     * 获取Switch for playing DRM-protected adaptive bitstream.
<li>ON: Enable, indicates only playback of protected adaptive bitrate output.</li>
<li>OFF: Disable. Indicates playback of unencrypted adaptive bitstream output.</li>
                     * @return DrmSwitch Switch for playing DRM-protected adaptive bitstream.
<li>ON: Enable, indicates only playback of protected adaptive bitrate output.</li>
<li>OFF: Disable. Indicates playback of unencrypted adaptive bitstream output.</li>
                     * 
                     */
                    std::string GetDrmSwitch() const;

                    /**
                     * 设置Switch for playing DRM-protected adaptive bitstream.
<li>ON: Enable, indicates only playback of protected adaptive bitrate output.</li>
<li>OFF: Disable. Indicates playback of unencrypted adaptive bitstream output.</li>
                     * @param _drmSwitch Switch for playing DRM-protected adaptive bitstream.
<li>ON: Enable, indicates only playback of protected adaptive bitrate output.</li>
<li>OFF: Disable. Indicates playback of unencrypted adaptive bitstream output.</li>
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
                     * 获取Allowed output of unencrypted adaptive bitstream template ID.
                     * @return AdaptiveDynamicStreamingDefinition Allowed output of unencrypted adaptive bitstream template ID.
                     * 
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置Allowed output of unencrypted adaptive bitstream template ID.
                     * @param _adaptiveDynamicStreamingDefinition Allowed output of unencrypted adaptive bitstream template ID.
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
                     * 获取Allowed output of DRM adaptive bitstream template content.
                     * @return DrmStreamingsInfo Allowed output of DRM adaptive bitstream template content.
                     * 
                     */
                    DrmStreamingsInfoForUpdate GetDrmStreamingsInfo() const;

                    /**
                     * 设置Allowed output of DRM adaptive bitstream template content.
                     * @param _drmStreamingsInfo Allowed output of DRM adaptive bitstream template content.
                     * 
                     */
                    void SetDrmStreamingsInfo(const DrmStreamingsInfoForUpdate& _drmStreamingsInfo);

                    /**
                     * 判断参数 DrmStreamingsInfo 是否已赋值
                     * @return DrmStreamingsInfo 是否已赋值
                     * 
                     */
                    bool DrmStreamingsInfoHasBeenSet() const;

                    /**
                     * 获取Allowed output transcoding template ID.
                     * @return TranscodeDefinition Allowed output transcoding template ID.
                     * 
                     */
                    uint64_t GetTranscodeDefinition() const;

                    /**
                     * 设置Allowed output transcoding template ID.
                     * @param _transcodeDefinition Allowed output transcoding template ID.
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
                     * 获取Allowed output sprite template ID.
                     * @return ImageSpriteDefinition Allowed output sprite template ID.
                     * 
                     */
                    uint64_t GetImageSpriteDefinition() const;

                    /**
                     * 设置Allowed output sprite template ID.
                     * @param _imageSpriteDefinition Allowed output sprite template ID.
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
                     * 获取Player's display name for substreams of different resolutions.
                     * @return ResolutionNames Player's display name for substreams of different resolutions.
                     * 
                     */
                    std::vector<ResolutionNameInfo> GetResolutionNames() const;

                    /**
                     * 设置Player's display name for substreams of different resolutions.
                     * @param _resolutionNames Player's display name for substreams of different resolutions.
                     * 
                     */
                    void SetResolutionNames(const std::vector<ResolutionNameInfo>& _resolutionNames);

                    /**
                     * 判断参数 ResolutionNames 是否已赋值
                     * @return ResolutionNames 是否已赋值
                     * 
                     */
                    bool ResolutionNamesHasBeenSet() const;

                    /**
                     * 获取Domain name used during playback. Enter Default to indicate usage of the domain name in the default distribution configuration (https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1).
                     * @return Domain Domain name used during playback. Enter Default to indicate usage of the domain name in the default distribution configuration (https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name used during playback. Enter Default to indicate usage of the domain name in the default distribution configuration (https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1).
                     * @param _domain Domain name used during playback. Enter Default to indicate usage of the domain name in the default distribution configuration (https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1).
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
                     * 获取Scheme used during playback. Valid values:
<li>Default: Use the Scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     * @return Scheme Scheme used during playback. Valid values:
<li>Default: Use the Scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Scheme used during playback. Valid values:
<li>Default: Use the Scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     * @param _scheme Scheme used during playback. Valid values:
<li>Default: Use the Scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li>
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
                     * 获取Template description, with a length limit of 256 characters.
                     * @return Comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters.
                     * @param _comment Template description, with a length limit of 256 characters.
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Played audio and video type. Valid values:
<li>AdaptiveDynamicStream: adaptive bitrate stream output;</li>
<li>Transcode: transcoding output;</li>
<li>Original: original audio/video.</li>
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * Switch for playing DRM-protected adaptive bitstream.
<li>ON: Enable, indicates only playback of protected adaptive bitrate output.</li>
<li>OFF: Disable. Indicates playback of unencrypted adaptive bitstream output.</li>
                     */
                    std::string m_drmSwitch;
                    bool m_drmSwitchHasBeenSet;

                    /**
                     * Allowed output of unencrypted adaptive bitstream template ID.
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * Allowed output of DRM adaptive bitstream template content.
                     */
                    DrmStreamingsInfoForUpdate m_drmStreamingsInfo;
                    bool m_drmStreamingsInfoHasBeenSet;

                    /**
                     * Allowed output transcoding template ID.
                     */
                    uint64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * Allowed output sprite template ID.
                     */
                    uint64_t m_imageSpriteDefinition;
                    bool m_imageSpriteDefinitionHasBeenSet;

                    /**
                     * Player's display name for substreams of different resolutions.
                     */
                    std::vector<ResolutionNameInfo> m_resolutionNames;
                    bool m_resolutionNamesHasBeenSet;

                    /**
                     * Domain name used during playback. Enter Default to indicate usage of the domain name in the default distribution configuration (https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1).
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Scheme used during playback. Valid values:
<li>Default: Use the Scheme in the [default distribution configuration](https://www.tencentcloud.com/document/product/266/33373?from_cn_redirect=1);</li>
<li>HTTP;</li>
<li>HTTPS.</li>
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUPERPLAYERCONFIGREQUEST_H_
