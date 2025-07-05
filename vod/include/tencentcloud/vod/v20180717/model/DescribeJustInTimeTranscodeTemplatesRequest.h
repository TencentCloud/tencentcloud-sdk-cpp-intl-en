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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_

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
                * DescribeJustInTimeTranscodeTemplates request structure.
                */
                class DescribeJustInTimeTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeJustInTimeTranscodeTemplatesRequest();
                    ~DescribeJustInTimeTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name filter condition, array length limit: 100.
                     * @return Names Template name filter condition, array length limit: 100.
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Template name filter condition, array length limit: 100.
                     * @param _names Template name filter condition, array length limit: 100.
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    void SetSubAppId(const int64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Template type filter conditions, optional values:
<li>Preset: system preset task flow template;</li>
<li>Custom: user-defined task flow template. </li>
                     * @return Type Template type filter conditions, optional values:
<li>Preset: system preset task flow template;</li>
<li>Custom: user-defined task flow template. </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type filter conditions, optional values:
<li>Preset: system preset task flow template;</li>
<li>Custom: user-defined task flow template. </li>
                     * @param _type Template type filter conditions, optional values:
<li>Preset: system preset task flow template;</li>
<li>Custom: user-defined task flow template. </li>
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
                     * 获取Paging offset, default value: 0.
                     * @return Offset Paging offset, default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paging offset, default value: 0.
                     * @param _offset Paging offset, default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Returns the number of records, default value: 10, maximum value: 100.
                     * @return Limit Returns the number of records, default value: 10, maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Returns the number of records, default value: 10, maximum value: 100.
                     * @param _limit Returns the number of records, default value: 10, maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Template name filter condition, array length limit: 100.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template type filter conditions, optional values:
<li>Preset: system preset task flow template;</li>
<li>Custom: user-defined task flow template. </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Paging offset, default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Returns the number of records, default value: 10, maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
