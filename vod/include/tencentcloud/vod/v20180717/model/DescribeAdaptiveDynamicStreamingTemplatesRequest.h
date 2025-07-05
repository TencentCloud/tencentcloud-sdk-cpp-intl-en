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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESREQUEST_H_

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
                * DescribeAdaptiveDynamicStreamingTemplates request structure.
                */
                class DescribeAdaptiveDynamicStreamingTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAdaptiveDynamicStreamingTemplatesRequest();
                    ~DescribeAdaptiveDynamicStreamingTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * @return SubAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * @param _subAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
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
                     * 获取Unique id filter of transcoding to adaptive bitrate streaming templates. array length limit: 100.
                     * @return Definitions Unique id filter of transcoding to adaptive bitrate streaming templates. array length limit: 100.
                     * 
                     */
                    std::vector<uint64_t> GetDefinitions() const;

                    /**
                     * 设置Unique id filter of transcoding to adaptive bitrate streaming templates. array length limit: 100.
                     * @param _definitions Unique id filter of transcoding to adaptive bitrate streaming templates. array length limit: 100.
                     * 
                     */
                    void SetDefinitions(const std::vector<uint64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取Pagination offset. default value: 0.
                     * @return Offset Pagination offset. default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. default value: 0.
                     * @param _offset Pagination offset. default value: 0.
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
                     * 获取Number of returned entries. default value: 10. maximum value: 100.
                     * @return Limit Number of returned entries. default value: 10. maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. default value: 10. maximum value: 100.
                     * @param _limit Number of returned entries. default value: 10. maximum value: 100.
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
                     * 获取Template type filter. valid values:.
<Li>Preset: system preset template;</li>.
<Li>Custom: user-defined template.</li>.
                     * @return Type Template type filter. valid values:.
<Li>Preset: system preset template;</li>.
<Li>Custom: user-defined template.</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type filter. valid values:.
<Li>Preset: system preset template;</li>.
<Li>Custom: user-defined template.</li>.
                     * @param _type Template type filter. valid values:.
<Li>Preset: system preset template;</li>.
<Li>Custom: user-defined template.</li>.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Unique id filter of transcoding to adaptive bitrate streaming templates. array length limit: 100.
                     */
                    std::vector<uint64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Pagination offset. default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. default value: 10. maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Template type filter. valid values:.
<Li>Preset: system preset template;</li>.
<Li>Custom: user-defined template.</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESREQUEST_H_
