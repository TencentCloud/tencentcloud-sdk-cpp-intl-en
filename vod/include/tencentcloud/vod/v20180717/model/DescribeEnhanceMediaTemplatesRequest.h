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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEENHANCEMEDIATEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEENHANCEMEDIATEMPLATESREQUEST_H_

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
                * DescribeEnhanceMediaTemplates request structure.
                */
                class DescribeEnhanceMediaTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeEnhanceMediaTemplatesRequest();
                    ~DescribeEnhanceMediaTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取</b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * @return SubAppId </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置</b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * @param _subAppId </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
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
                     * 获取List of Enhance media templates. Length limit: 100.
                     * @return Definitions List of Enhance media templates. Length limit: 100.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置List of Enhance media templates. Length limit: 100.
                     * @param _definitions List of Enhance media templates. Length limit: 100.
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
                     * 获取Template type filter conditions, optional values:
<li>Preset: system preset template;</li>
<li>Custom: user-defined template. </li>
                     * @return Type Template type filter conditions, optional values:
<li>Preset: system preset template;</li>
<li>Custom: user-defined template. </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type filter conditions, optional values:
<li>Preset: system preset template;</li>
<li>Custom: user-defined template. </li>
                     * @param _type Template type filter conditions, optional values:
<li>Preset: system preset template;</li>
<li>Custom: user-defined template. </li>
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
                     * </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * List of Enhance media templates. Length limit: 100.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Template type filter conditions, optional values:
<li>Preset: system preset template;</li>
<li>Custom: user-defined template. </li>
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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEENHANCEMEDIATEMPLATESREQUEST_H_