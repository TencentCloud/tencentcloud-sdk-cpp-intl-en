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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUPERPLAYERCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUPERPLAYERCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSuperPlayerConfig request structure.
                */
                class CreateSuperPlayerConfigRequest : public AbstractModel
                {
                public:
                    CreateSuperPlayerConfigRequest();
                    ~CreateSuperPlayerConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Player configuration name, which can contain up to 64 letters, digits, underscores, and hyphens (such as test_ABC-123) and must be unique under a user.
                     * @return Name Player configuration name, which can contain up to 64 letters, digits, underscores, and hyphens (such as test_ABC-123) and must be unique under a user.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Player configuration name, which can contain up to 64 letters, digits, underscores, and hyphens (such as test_ABC-123) and must be unique under a user.
                     * @param Name Player configuration name, which can contain up to 64 letters, digits, underscores, and hyphens (such as test_ABC-123) and must be unique under a user.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
Default value: `AdaptiveDynamicStream`
                     * @return AudioVideoType Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
Default value: `AdaptiveDynamicStream`
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
Default value: `AdaptiveDynamicStream`
                     * @param AudioVideoType Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
Default value: `AdaptiveDynamicStream`
                     */
                    void SetAudioVideoType(const std::string& _audioVideoType);

                    /**
                     * 判断参数 AudioVideoType 是否已赋值
                     * @return AudioVideoType 是否已赋值
                     */
                    bool AudioVideoTypeHasBeenSet() const;

                    /**
                     * 获取Whether to allow only adaptive bitrate streaming playback protected by DRM. Valid values:
<li>`ON`: allow only adaptive bitrate streaming playback protected by DRM</li>
<li>`OFF`: allow adaptive bitrate streaming playback not protected by DRM</li>
Default value: `OFF`
This parameter is valid when `AudioVideoType` is `AdaptiveDynamicStream`.
                     * @return DrmSwitch Whether to allow only adaptive bitrate streaming playback protected by DRM. Valid values:
<li>`ON`: allow only adaptive bitrate streaming playback protected by DRM</li>
<li>`OFF`: allow adaptive bitrate streaming playback not protected by DRM</li>
Default value: `OFF`
This parameter is valid when `AudioVideoType` is `AdaptiveDynamicStream`.
                     */
                    std::string GetDrmSwitch() const;

                    /**
                     * 设置Whether to allow only adaptive bitrate streaming playback protected by DRM. Valid values:
<li>`ON`: allow only adaptive bitrate streaming playback protected by DRM</li>
<li>`OFF`: allow adaptive bitrate streaming playback not protected by DRM</li>
Default value: `OFF`
This parameter is valid when `AudioVideoType` is `AdaptiveDynamicStream`.
                     * @param DrmSwitch Whether to allow only adaptive bitrate streaming playback protected by DRM. Valid values:
<li>`ON`: allow only adaptive bitrate streaming playback protected by DRM</li>
<li>`OFF`: allow adaptive bitrate streaming playback not protected by DRM</li>
Default value: `OFF`
This parameter is valid when `AudioVideoType` is `AdaptiveDynamicStream`.
                     */
                    void SetDrmSwitch(const std::string& _drmSwitch);

                    /**
                     * 判断参数 DrmSwitch 是否已赋值
                     * @return DrmSwitch 是否已赋值
                     */
                    bool DrmSwitchHasBeenSet() const;

                    /**
                     * 获取ID of the adaptive bitrate streaming template allowed for playback not protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `OFF`.
                     * @return AdaptiveDynamicStreamingDefinition ID of the adaptive bitrate streaming template allowed for playback not protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `OFF`.
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置ID of the adaptive bitrate streaming template allowed for playback not protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `OFF`.
                     * @param AdaptiveDynamicStreamingDefinition ID of the adaptive bitrate streaming template allowed for playback not protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `OFF`.
                     */
                    void SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingDefinition 是否已赋值
                     * @return AdaptiveDynamicStreamingDefinition 是否已赋值
                     */
                    bool AdaptiveDynamicStreamingDefinitionHasBeenSet() const;

                    /**
                     * 获取Content of the adaptive bitrate streaming template allowed for playback protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `ON`.
                     * @return DrmStreamingsInfo Content of the adaptive bitrate streaming template allowed for playback protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `ON`.
                     */
                    DrmStreamingsInfo GetDrmStreamingsInfo() const;

                    /**
                     * 设置Content of the adaptive bitrate streaming template allowed for playback protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `ON`.
                     * @param DrmStreamingsInfo Content of the adaptive bitrate streaming template allowed for playback protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `ON`.
                     */
                    void SetDrmStreamingsInfo(const DrmStreamingsInfo& _drmStreamingsInfo);

                    /**
                     * 判断参数 DrmStreamingsInfo 是否已赋值
                     * @return DrmStreamingsInfo 是否已赋值
                     */
                    bool DrmStreamingsInfoHasBeenSet() const;

                    /**
                     * 获取ID of the transcoding template allowed for playback

This parameter is required if `AudioVideoType` is `Transcode`.
                     * @return TranscodeDefinition ID of the transcoding template allowed for playback

This parameter is required if `AudioVideoType` is `Transcode`.
                     */
                    uint64_t GetTranscodeDefinition() const;

                    /**
                     * 设置ID of the transcoding template allowed for playback

This parameter is required if `AudioVideoType` is `Transcode`.
                     * @param TranscodeDefinition ID of the transcoding template allowed for playback

This parameter is required if `AudioVideoType` is `Transcode`.
                     */
                    void SetTranscodeDefinition(const uint64_t& _transcodeDefinition);

                    /**
                     * 判断参数 TranscodeDefinition 是否已赋值
                     * @return TranscodeDefinition 是否已赋值
                     */
                    bool TranscodeDefinitionHasBeenSet() const;

                    /**
                     * 获取ID of the image sprite generating template that allows output.
                     * @return ImageSpriteDefinition ID of the image sprite generating template that allows output.
                     */
                    uint64_t GetImageSpriteDefinition() const;

                    /**
                     * 设置ID of the image sprite generating template that allows output.
                     * @param ImageSpriteDefinition ID of the image sprite generating template that allows output.
                     */
                    void SetImageSpriteDefinition(const uint64_t& _imageSpriteDefinition);

                    /**
                     * 判断参数 ImageSpriteDefinition 是否已赋值
                     * @return ImageSpriteDefinition 是否已赋值
                     */
                    bool ImageSpriteDefinitionHasBeenSet() const;

                    /**
                     * 获取Display name of player for substreams with different resolutions. If this parameter is left empty or an empty array, the default configuration will be used:
<li>MinEdgeLength: 240, Name: LD;</li>
<li>MinEdgeLength: 480, Name: SD;</li>
<li>MinEdgeLength: 720, Name: HD;</li>
<li>MinEdgeLength: 1080, Name: FHD;</li>
<li>MinEdgeLength: 1440, Name: 2K;</li>
<li>MinEdgeLength: 2160, Name: 4K;</li>
<li>MinEdgeLength: 4320, Name: 8K.</li>
                     * @return ResolutionNames Display name of player for substreams with different resolutions. If this parameter is left empty or an empty array, the default configuration will be used:
<li>MinEdgeLength: 240, Name: LD;</li>
<li>MinEdgeLength: 480, Name: SD;</li>
<li>MinEdgeLength: 720, Name: HD;</li>
<li>MinEdgeLength: 1080, Name: FHD;</li>
<li>MinEdgeLength: 1440, Name: 2K;</li>
<li>MinEdgeLength: 2160, Name: 4K;</li>
<li>MinEdgeLength: 4320, Name: 8K.</li>
                     */
                    std::vector<ResolutionNameInfo> GetResolutionNames() const;

                    /**
                     * 设置Display name of player for substreams with different resolutions. If this parameter is left empty or an empty array, the default configuration will be used:
<li>MinEdgeLength: 240, Name: LD;</li>
<li>MinEdgeLength: 480, Name: SD;</li>
<li>MinEdgeLength: 720, Name: HD;</li>
<li>MinEdgeLength: 1080, Name: FHD;</li>
<li>MinEdgeLength: 1440, Name: 2K;</li>
<li>MinEdgeLength: 2160, Name: 4K;</li>
<li>MinEdgeLength: 4320, Name: 8K.</li>
                     * @param ResolutionNames Display name of player for substreams with different resolutions. If this parameter is left empty or an empty array, the default configuration will be used:
<li>MinEdgeLength: 240, Name: LD;</li>
<li>MinEdgeLength: 480, Name: SD;</li>
<li>MinEdgeLength: 720, Name: HD;</li>
<li>MinEdgeLength: 1080, Name: FHD;</li>
<li>MinEdgeLength: 1440, Name: 2K;</li>
<li>MinEdgeLength: 2160, Name: 4K;</li>
<li>MinEdgeLength: 4320, Name: 8K.</li>
                     */
                    void SetResolutionNames(const std::vector<ResolutionNameInfo>& _resolutionNames);

                    /**
                     * 判断参数 ResolutionNames 是否已赋值
                     * @return ResolutionNames 是否已赋值
                     */
                    bool ResolutionNamesHasBeenSet() const;

                    /**
                     * 获取Domain name used for playback. If it is left empty or set to `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     * @return Domain Domain name used for playback. If it is left empty or set to `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name used for playback. If it is left empty or set to `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     * @param Domain Domain name used for playback. If it is left empty or set to `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Scheme used for playback. If it is left empty or set to `Default`, the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used. Other valid values:
<li>HTTP;</li>
<li>HTTPS.</li>
                     * @return Scheme Scheme used for playback. If it is left empty or set to `Default`, the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used. Other valid values:
<li>HTTP;</li>
<li>HTTPS.</li>
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Scheme used for playback. If it is left empty or set to `Default`, the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used. Other valid values:
<li>HTTP;</li>
<li>HTTPS.</li>
                     * @param Scheme Scheme used for playback. If it is left empty or set to `Default`, the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used. Other valid values:
<li>HTTP;</li>
<li>HTTPS.</li>
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param Comment Template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Player configuration name, which can contain up to 64 letters, digits, underscores, and hyphens (such as test_ABC-123) and must be unique under a user.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type of audio/video played. Valid values:
<li>AdaptiveDynamicStreaming</li>
<li>Transcode</li>
<li>Original</li>
Default value: `AdaptiveDynamicStream`
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * Whether to allow only adaptive bitrate streaming playback protected by DRM. Valid values:
<li>`ON`: allow only adaptive bitrate streaming playback protected by DRM</li>
<li>`OFF`: allow adaptive bitrate streaming playback not protected by DRM</li>
Default value: `OFF`
This parameter is valid when `AudioVideoType` is `AdaptiveDynamicStream`.
                     */
                    std::string m_drmSwitch;
                    bool m_drmSwitchHasBeenSet;

                    /**
                     * ID of the adaptive bitrate streaming template allowed for playback not protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `OFF`.
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * Content of the adaptive bitrate streaming template allowed for playback protected by DRM.

This parameter is required if `AudioVideoType` is `AdaptiveDynamicStream` and `DrmSwitch` is `ON`.
                     */
                    DrmStreamingsInfo m_drmStreamingsInfo;
                    bool m_drmStreamingsInfoHasBeenSet;

                    /**
                     * ID of the transcoding template allowed for playback

This parameter is required if `AudioVideoType` is `Transcode`.
                     */
                    uint64_t m_transcodeDefinition;
                    bool m_transcodeDefinitionHasBeenSet;

                    /**
                     * ID of the image sprite generating template that allows output.
                     */
                    uint64_t m_imageSpriteDefinition;
                    bool m_imageSpriteDefinitionHasBeenSet;

                    /**
                     * Display name of player for substreams with different resolutions. If this parameter is left empty or an empty array, the default configuration will be used:
<li>MinEdgeLength: 240, Name: LD;</li>
<li>MinEdgeLength: 480, Name: SD;</li>
<li>MinEdgeLength: 720, Name: HD;</li>
<li>MinEdgeLength: 1080, Name: FHD;</li>
<li>MinEdgeLength: 1440, Name: 2K;</li>
<li>MinEdgeLength: 2160, Name: 4K;</li>
<li>MinEdgeLength: 4320, Name: 8K.</li>
                     */
                    std::vector<ResolutionNameInfo> m_resolutionNames;
                    bool m_resolutionNamesHasBeenSet;

                    /**
                     * Domain name used for playback. If it is left empty or set to `Default`, the domain name configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Scheme used for playback. If it is left empty or set to `Default`, the scheme configured in [Default Distribution Configuration](https://intl.cloud.tencent.com/document/product/266/33373?from_cn_redirect=1) will be used. Other valid values:
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

                    /**
                     * [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUPERPLAYERCONFIGREQUEST_H_
