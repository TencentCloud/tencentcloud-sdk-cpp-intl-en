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
                     * 获取Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
                     * @return AudioVideoType Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
                     * @param _audioVideoType Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
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
                    DrmStreamingsInfoForUpdate GetDrmStreamingsInfo() const;

                    /**
                     * 设置Content of the DRM-protected adaptive bitrate streaming template that allows output.
                     * @param _drmStreamingsInfo Content of the DRM-protected adaptive bitrate streaming template that allows output.
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
                     * 获取ID of the transcoding template allowed for playback
                     * @return TranscodeDefinition ID of the transcoding template allowed for playback
                     * 
                     */
                    uint64_t GetTranscodeDefinition() const;

                    /**
                     * 设置ID of the transcoding template allowed for playback
                     * @param _transcodeDefinition ID of the transcoding template allowed for playback
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
                     * @return ResolutionNames Display name of player for substreams with different resolutions.
                     * 
                     */
                    std::vector<ResolutionNameInfo> GetResolutionNames() const;

                    /**
                     * 设置Display name of player for substreams with different resolutions.
                     * @param _resolutionNames Display name of player for substreams with different resolutions.
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
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param _comment Template description. Length limit: 256 characters.
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
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
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
                    DrmStreamingsInfoForUpdate m_drmStreamingsInfo;
                    bool m_drmStreamingsInfoHasBeenSet;

                    /**
                     * ID of the transcoding template allowed for playback
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
                    std::vector<ResolutionNameInfo> m_resolutionNames;
                    bool m_resolutionNamesHasBeenSet;

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
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUPERPLAYERCONFIGREQUEST_H_
