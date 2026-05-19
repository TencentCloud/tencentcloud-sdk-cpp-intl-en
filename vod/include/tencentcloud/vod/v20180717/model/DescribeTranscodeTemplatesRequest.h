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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeTranscodeTemplates request structure.
                */
                class DescribeTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeTranscodeTemplatesRequest();
                    ~DescribeTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Filter condition for the unique identifier of the transcoding template. The array can contain up to 100 unique identifiers.
                     * @return Definitions Filter condition for the unique identifier of the transcoding template. The array can contain up to 100 unique identifiers.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Filter condition for the unique identifier of the transcoding template. The array can contain up to 100 unique identifiers.
                     * @param _definitions Filter condition for the unique identifier of the transcoding template. The array can contain up to 100 unique identifiers.
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取Condition for filtering templates by type. Valid values:
<li>Preset: system preset template;</li>
<li>Custom: User-defined template.</li>
                     * @return Type Condition for filtering templates by type. Valid values:
<li>Preset: system preset template;</li>
<li>Custom: User-defined template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Condition for filtering templates by type. Valid values:
<li>Preset: system preset template;</li>
<li>Custom: User-defined template.</li>
                     * @param _type Condition for filtering templates by type. Valid values:
<li>Preset: system preset template;</li>
<li>Custom: User-defined template.</li>
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
                     * 获取Muxing format filter condition. Available values:
<li>Video: Video format that contains both video stream and audio stream in a muxing format.</li>
<li>PureAudio: Pure audio format, a muxing format that can only contain audio streams.</li>
                     * @return ContainerType Muxing format filter condition. Available values:
<li>Video: Video format that contains both video stream and audio stream in a muxing format.</li>
<li>PureAudio: Pure audio format, a muxing format that can only contain audio streams.</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置Muxing format filter condition. Available values:
<li>Video: Video format that contains both video stream and audio stream in a muxing format.</li>
<li>PureAudio: Pure audio format, a muxing format that can only contain audio streams.</li>
                     * @param _containerType Muxing format filter condition. Available values:
<li>Video: Video format that contains both video stream and audio stream in a muxing format.</li>
<li>PureAudio: Pure audio format, a muxing format that can only contain audio streams.</li>
                     * 
                     */
                    void SetContainerType(const std::string& _containerType);

                    /**
                     * 判断参数 ContainerType 是否已赋值
                     * @return ContainerType 是否已赋值
                     * 
                     */
                    bool ContainerTypeHasBeenSet() const;

                    /**
                     * 获取Top Speed Codec filter conditions for filtering standard transcoding or TSC transcoding templates. Available values:
<li>Common: standard transcoding template.</li>
<li>TEHD: Ultra-HD template.</li>
                     * @return TEHDType Top Speed Codec filter conditions for filtering standard transcoding or TSC transcoding templates. Available values:
<li>Common: standard transcoding template.</li>
<li>TEHD: Ultra-HD template.</li>
                     * 
                     */
                    std::string GetTEHDType() const;

                    /**
                     * 设置Top Speed Codec filter conditions for filtering standard transcoding or TSC transcoding templates. Available values:
<li>Common: standard transcoding template.</li>
<li>TEHD: Ultra-HD template.</li>
                     * @param _tEHDType Top Speed Codec filter conditions for filtering standard transcoding or TSC transcoding templates. Available values:
<li>Common: standard transcoding template.</li>
<li>TEHD: Ultra-HD template.</li>
                     * 
                     */
                    void SetTEHDType(const std::string& _tEHDType);

                    /**
                     * 判断参数 TEHDType 是否已赋值
                     * @return TEHDType 是否已赋值
                     * 
                     */
                    bool TEHDTypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param _offset Pagination offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement included.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     * @return EnhanceType Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement included.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     * 
                     */
                    std::string GetEnhanceType() const;

                    /**
                     * 设置Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement included.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     * @param _enhanceType Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement included.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     * 
                     */
                    void SetEnhanceType(const std::string& _enhanceType);

                    /**
                     * 判断参数 EnhanceType 是否已赋值
                     * @return EnhanceType 是否已赋值
                     * 
                     */
                    bool EnhanceTypeHasBeenSet() const;

                    /**
                     * 获取Enhance scenario configuration. Available values: <li>common (general): general enhancement parameter, suitable for basic optimization parameters of various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li> <li>short_play (mini-drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity to improve viewing experience.</li> <li>short_video (short video): optimizes complex and diverse image quality issues, targets complex scenarios in short videos, improves video quality, and addresses multiple visual problems.</li> <li>game (gaming video): restores motion blur, enhances details, focuses on improving game detail clarity, restores motion blur areas, and makes the game screen content clearer and more vivid.</li> <li>HD_movie_series (UHD TV shows and movies): achieves ultra-high-definition smooth effects, targets the demand for UHD videos in broadcasting and OTT scenarios, and generates UHD standard videos in 4K 60fps HDR. Supports broadcasting scenario format standards.</li> <li>LQ_material (low-quality material/classic film restoration): improves overall resolution, specifically optimizes issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li> <li>lecture (showroom/e-commerce/conference/lecture): beautifies and enhances face effects, specifically optimizes face regions, noise reduction, and burr processing for scenarios where figures are explained in showrooms, e-commerce, conferences, or lectures.</li>
                     * @return EnhanceScenarioType Enhance scenario configuration. Available values: <li>common (general): general enhancement parameter, suitable for basic optimization parameters of various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li> <li>short_play (mini-drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity to improve viewing experience.</li> <li>short_video (short video): optimizes complex and diverse image quality issues, targets complex scenarios in short videos, improves video quality, and addresses multiple visual problems.</li> <li>game (gaming video): restores motion blur, enhances details, focuses on improving game detail clarity, restores motion blur areas, and makes the game screen content clearer and more vivid.</li> <li>HD_movie_series (UHD TV shows and movies): achieves ultra-high-definition smooth effects, targets the demand for UHD videos in broadcasting and OTT scenarios, and generates UHD standard videos in 4K 60fps HDR. Supports broadcasting scenario format standards.</li> <li>LQ_material (low-quality material/classic film restoration): improves overall resolution, specifically optimizes issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li> <li>lecture (showroom/e-commerce/conference/lecture): beautifies and enhances face effects, specifically optimizes face regions, noise reduction, and burr processing for scenarios where figures are explained in showrooms, e-commerce, conferences, or lectures.</li>
                     * 
                     */
                    std::string GetEnhanceScenarioType() const;

                    /**
                     * 设置Enhance scenario configuration. Available values: <li>common (general): general enhancement parameter, suitable for basic optimization parameters of various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li> <li>short_play (mini-drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity to improve viewing experience.</li> <li>short_video (short video): optimizes complex and diverse image quality issues, targets complex scenarios in short videos, improves video quality, and addresses multiple visual problems.</li> <li>game (gaming video): restores motion blur, enhances details, focuses on improving game detail clarity, restores motion blur areas, and makes the game screen content clearer and more vivid.</li> <li>HD_movie_series (UHD TV shows and movies): achieves ultra-high-definition smooth effects, targets the demand for UHD videos in broadcasting and OTT scenarios, and generates UHD standard videos in 4K 60fps HDR. Supports broadcasting scenario format standards.</li> <li>LQ_material (low-quality material/classic film restoration): improves overall resolution, specifically optimizes issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li> <li>lecture (showroom/e-commerce/conference/lecture): beautifies and enhances face effects, specifically optimizes face regions, noise reduction, and burr processing for scenarios where figures are explained in showrooms, e-commerce, conferences, or lectures.</li>
                     * @param _enhanceScenarioType Enhance scenario configuration. Available values: <li>common (general): general enhancement parameter, suitable for basic optimization parameters of various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li> <li>short_play (mini-drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity to improve viewing experience.</li> <li>short_video (short video): optimizes complex and diverse image quality issues, targets complex scenarios in short videos, improves video quality, and addresses multiple visual problems.</li> <li>game (gaming video): restores motion blur, enhances details, focuses on improving game detail clarity, restores motion blur areas, and makes the game screen content clearer and more vivid.</li> <li>HD_movie_series (UHD TV shows and movies): achieves ultra-high-definition smooth effects, targets the demand for UHD videos in broadcasting and OTT scenarios, and generates UHD standard videos in 4K 60fps HDR. Supports broadcasting scenario format standards.</li> <li>LQ_material (low-quality material/classic film restoration): improves overall resolution, specifically optimizes issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li> <li>lecture (showroom/e-commerce/conference/lecture): beautifies and enhances face effects, specifically optimizes face regions, noise reduction, and burr processing for scenarios where figures are explained in showrooms, e-commerce, conferences, or lectures.</li>
                     * 
                     */
                    void SetEnhanceScenarioType(const std::string& _enhanceScenarioType);

                    /**
                     * 判断参数 EnhanceScenarioType 是否已赋值
                     * @return EnhanceScenarioType 是否已赋值
                     * 
                     */
                    bool EnhanceScenarioTypeHasBeenSet() const;

                private:

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Filter condition for the unique identifier of the transcoding template. The array can contain up to 100 unique identifiers.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Condition for filtering templates by type. Valid values:
<li>Preset: system preset template;</li>
<li>Custom: User-defined template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Muxing format filter condition. Available values:
<li>Video: Video format that contains both video stream and audio stream in a muxing format.</li>
<li>PureAudio: Pure audio format, a muxing format that can only contain audio streams.</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * Top Speed Codec filter conditions for filtering standard transcoding or TSC transcoding templates. Available values:
<li>Common: standard transcoding template.</li>
<li>TEHD: Ultra-HD template.</li>
                     */
                    std::string m_tEHDType;
                    bool m_tEHDTypeHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement included.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     */
                    std::string m_enhanceType;
                    bool m_enhanceTypeHasBeenSet;

                    /**
                     * Enhance scenario configuration. Available values: <li>common (general): general enhancement parameter, suitable for basic optimization parameters of various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement. It uses AI technology to improve the overall video resolution and image clarity.</li> <li>short_play (mini-drama): enhances face and subtitle details, highlights facial expression details and subtitle clarity to improve viewing experience.</li> <li>short_video (short video): optimizes complex and diverse image quality issues, targets complex scenarios in short videos, improves video quality, and addresses multiple visual problems.</li> <li>game (gaming video): restores motion blur, enhances details, focuses on improving game detail clarity, restores motion blur areas, and makes the game screen content clearer and more vivid.</li> <li>HD_movie_series (UHD TV shows and movies): achieves ultra-high-definition smooth effects, targets the demand for UHD videos in broadcasting and OTT scenarios, and generates UHD standard videos in 4K 60fps HDR. Supports broadcasting scenario format standards.</li> <li>LQ_material (low-quality material/classic film restoration): improves overall resolution, specifically optimizes issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature due to their age.</li> <li>lecture (showroom/e-commerce/conference/lecture): beautifies and enhances face effects, specifically optimizes face regions, noise reduction, and burr processing for scenarios where figures are explained in showrooms, e-commerce, conferences, or lectures.</li>
                     */
                    std::string m_enhanceScenarioType;
                    bool m_enhanceScenarioTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_
