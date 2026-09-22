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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
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
                     * 获取Filtering condition for the unique identifier of the transcoding template. The array length cannot exceed 100.
                     * @return Definitions Filtering condition for the unique identifier of the transcoding template. The array length cannot exceed 100.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Filtering condition for the unique identifier of the transcoding template. The array length cannot exceed 100.
                     * @param _definitions Filtering condition for the unique identifier of the transcoding template. The array length cannot exceed 100.
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
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     * @return Type Condition for filtering templates by type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Condition for filtering templates by type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     * @param _type Condition for filtering templates by type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
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
                     * 获取Muxing format filter criteria. Available values:
<li>Video: Video format. A container format that can contain both video and audio streams.</li>
<li>PureAudio: Pure audio format, a container format that can only contain audio streams.</li>
                     * @return ContainerType Muxing format filter criteria. Available values:
<li>Video: Video format. A container format that can contain both video and audio streams.</li>
<li>PureAudio: Pure audio format, a container format that can only contain audio streams.</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置Muxing format filter criteria. Available values:
<li>Video: Video format. A container format that can contain both video and audio streams.</li>
<li>PureAudio: Pure audio format, a container format that can only contain audio streams.</li>
                     * @param _containerType Muxing format filter criteria. Available values:
<li>Video: Video format. A container format that can contain both video and audio streams.</li>
<li>PureAudio: Pure audio format, a container format that can only contain audio streams.</li>
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
                     * 获取TSC filter criteria for filtering standard or TSC transcoding templates. Available values:
<li>Common: standard transcoding template;</li>
<li>TEHD: Ultra-HD template.</li>
                     * @return TEHDType TSC filter criteria for filtering standard or TSC transcoding templates. Available values:
<li>Common: standard transcoding template;</li>
<li>TEHD: Ultra-HD template.</li>
                     * 
                     */
                    std::string GetTEHDType() const;

                    /**
                     * 设置TSC filter criteria for filtering standard or TSC transcoding templates. Available values:
<li>Common: standard transcoding template;</li>
<li>TEHD: Ultra-HD template.</li>
                     * @param _tEHDType TSC filter criteria for filtering standard or TSC transcoding templates. Available values:
<li>Common: standard transcoding template;</li>
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
<li>AudioVideoEnhance: audio and video enhancement.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, and audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     * @return EnhanceType Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, and audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     * 
                     */
                    std::string GetEnhanceType() const;

                    /**
                     * 设置Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, and audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     * @param _enhanceType Enhancement type. Valid values:
<li>VideoEnhance: video enhancement only.</li>
<li>AudioEnhance (audio enhancement only).</li>
<li>AudioVideoEnhance: audio and video enhancement.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, and audio and video enhancement)</li>
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
                     * 获取Enhancement scenario configuration. Available values: <li>common: general enhancement parameters, basic optimization parameters suitable for various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li> <li>short_play: enhance face and subtitle details, highlight facial expression details and subtitle clarity to improve the viewing experience.</li> <li>short_video: optimize complex and diverse image quality issues, optimize video quality for complex short video scenarios and address multiple visual issues.</li> <li>game: repair motion blur and enhance details, focusing on improving the clarity of game details, restoring motion blur areas, and making game screen content clearer and richer.</li> <li>HD_movie_series: obtain ultra-high-definition smooth effects, generate 4K 60fps HDR ultra-high-definition standard videos for UHD video demands in broadcasting and OTT. Support broadcasting scenario format standards.</li> <li>LQ_material: overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature caused by older shooting conditions.</li> <li>lecture: beautify and enhance face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain content, such as live shows, e-commerce, conferences, and lectures.</li>
                     * @return EnhanceScenarioType Enhancement scenario configuration. Available values: <li>common: general enhancement parameters, basic optimization parameters suitable for various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li> <li>short_play: enhance face and subtitle details, highlight facial expression details and subtitle clarity to improve the viewing experience.</li> <li>short_video: optimize complex and diverse image quality issues, optimize video quality for complex short video scenarios and address multiple visual issues.</li> <li>game: repair motion blur and enhance details, focusing on improving the clarity of game details, restoring motion blur areas, and making game screen content clearer and richer.</li> <li>HD_movie_series: obtain ultra-high-definition smooth effects, generate 4K 60fps HDR ultra-high-definition standard videos for UHD video demands in broadcasting and OTT. Support broadcasting scenario format standards.</li> <li>LQ_material: overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature caused by older shooting conditions.</li> <li>lecture: beautify and enhance face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain content, such as live shows, e-commerce, conferences, and lectures.</li>
                     * 
                     */
                    std::string GetEnhanceScenarioType() const;

                    /**
                     * 设置Enhancement scenario configuration. Available values: <li>common: general enhancement parameters, basic optimization parameters suitable for various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li> <li>short_play: enhance face and subtitle details, highlight facial expression details and subtitle clarity to improve the viewing experience.</li> <li>short_video: optimize complex and diverse image quality issues, optimize video quality for complex short video scenarios and address multiple visual issues.</li> <li>game: repair motion blur and enhance details, focusing on improving the clarity of game details, restoring motion blur areas, and making game screen content clearer and richer.</li> <li>HD_movie_series: obtain ultra-high-definition smooth effects, generate 4K 60fps HDR ultra-high-definition standard videos for UHD video demands in broadcasting and OTT. Support broadcasting scenario format standards.</li> <li>LQ_material: overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature caused by older shooting conditions.</li> <li>lecture: beautify and enhance face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain content, such as live shows, e-commerce, conferences, and lectures.</li>
                     * @param _enhanceScenarioType Enhancement scenario configuration. Available values: <li>common: general enhancement parameters, basic optimization parameters suitable for various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li> <li>short_play: enhance face and subtitle details, highlight facial expression details and subtitle clarity to improve the viewing experience.</li> <li>short_video: optimize complex and diverse image quality issues, optimize video quality for complex short video scenarios and address multiple visual issues.</li> <li>game: repair motion blur and enhance details, focusing on improving the clarity of game details, restoring motion blur areas, and making game screen content clearer and richer.</li> <li>HD_movie_series: obtain ultra-high-definition smooth effects, generate 4K 60fps HDR ultra-high-definition standard videos for UHD video demands in broadcasting and OTT. Support broadcasting scenario format standards.</li> <li>LQ_material: overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature caused by older shooting conditions.</li> <li>lecture: beautify and enhance face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain content, such as live shows, e-commerce, conferences, and lectures.</li>
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Filtering condition for the unique identifier of the transcoding template. The array length cannot exceed 100.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Condition for filtering templates by type. Valid values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Muxing format filter criteria. Available values:
<li>Video: Video format. A container format that can contain both video and audio streams.</li>
<li>PureAudio: Pure audio format, a container format that can only contain audio streams.</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * TSC filter criteria for filtering standard or TSC transcoding templates. Available values:
<li>Common: standard transcoding template;</li>
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
<li>AudioVideoEnhance: audio and video enhancement.</li>
<li>AnyEnhance (including video enhancement only, audio enhancement only, and audio and video enhancement)</li>
<li>None (non-enhanced)</li>
                     */
                    std::string m_enhanceType;
                    bool m_enhanceTypeHasBeenSet;

                    /**
                     * Enhancement scenario configuration. Available values: <li>common: general enhancement parameters, basic optimization parameters suitable for various video types to improve overall video quality.</li> <li>AIGC: overall resolution enhancement, using AI technology to improve the overall video resolution and enhance image clarity.</li> <li>short_play: enhance face and subtitle details, highlight facial expression details and subtitle clarity to improve the viewing experience.</li> <li>short_video: optimize complex and diverse image quality issues, optimize video quality for complex short video scenarios and address multiple visual issues.</li> <li>game: repair motion blur and enhance details, focusing on improving the clarity of game details, restoring motion blur areas, and making game screen content clearer and richer.</li> <li>HD_movie_series: obtain ultra-high-definition smooth effects, generate 4K 60fps HDR ultra-high-definition standard videos for UHD video demands in broadcasting and OTT. Support broadcasting scenario format standards.</li> <li>LQ_material: overall resolution enhancement, specially optimized for issues in old videos such as insufficient resolution, blur distortion, scratch damage, and color temperature caused by older shooting conditions.</li> <li>lecture: beautify and enhance face effects, specially optimized for face region, noise reduction, and burr processing in scenarios where people explain content, such as live shows, e-commerce, conferences, and lectures.</li>
                     */
                    std::string m_enhanceScenarioType;
                    bool m_enhanceScenarioTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_
