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
                     * 获取Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
Default value: OFF.
                     * @return DrmSwitch Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
Default value: OFF.
                     */
                    std::string GetDrmSwitch() const;

                    /**
                     * 设置Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
Default value: OFF.
                     * @param DrmSwitch Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
Default value: OFF.
                     */
                    void SetDrmSwitch(const std::string& _drmSwitch);

                    /**
                     * 判断参数 DrmSwitch 是否已赋值
                     * @return DrmSwitch 是否已赋值
                     */
                    bool DrmSwitchHasBeenSet() const;

                    /**
                     * 获取ID of the unencrypted adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `OFF`.
                     * @return AdaptiveDynamicStreamingDefinition ID of the unencrypted adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `OFF`.
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置ID of the unencrypted adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `OFF`.
                     * @param AdaptiveDynamicStreamingDefinition ID of the unencrypted adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `OFF`.
                     */
                    void SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingDefinition 是否已赋值
                     * @return AdaptiveDynamicStreamingDefinition 是否已赋值
                     */
                    bool AdaptiveDynamicStreamingDefinitionHasBeenSet() const;

                    /**
                     * 获取Content of the DRM-protected adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `ON`.
                     * @return DrmStreamingsInfo Content of the DRM-protected adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `ON`.
                     */
                    DrmStreamingsInfo GetDrmStreamingsInfo() const;

                    /**
                     * 设置Content of the DRM-protected adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `ON`.
                     * @param DrmStreamingsInfo Content of the DRM-protected adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `ON`.
                     */
                    void SetDrmStreamingsInfo(const DrmStreamingsInfo& _drmStreamingsInfo);

                    /**
                     * 判断参数 DrmStreamingsInfo 是否已赋值
                     * @return DrmStreamingsInfo 是否已赋值
                     */
                    bool DrmStreamingsInfoHasBeenSet() const;

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
                     * 获取
                     * @return Domain 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置
                     * @param Domain 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取
                     * @return Scheme 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置
                     * @param Scheme 
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
                     * 获取[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
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
                     * Switch of DRM-protected adaptive bitstream playback:
<li>ON: enabled, indicating to play back only output adaptive bitstreams protected by DRM;</li>
<li>OFF: disabled, indicating to play back unencrypted output adaptive bitstreams.</li>
Default value: OFF.
                     */
                    std::string m_drmSwitch;
                    bool m_drmSwitchHasBeenSet;

                    /**
                     * ID of the unencrypted adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `OFF`.
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * Content of the DRM-protected adaptive bitrate streaming template that allows output, which is required if `DrmSwitch` is `ON`.
                     */
                    DrmStreamingsInfo m_drmStreamingsInfo;
                    bool m_drmStreamingsInfoHasBeenSet;

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
                     * 
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUPERPLAYERCONFIGREQUEST_H_
