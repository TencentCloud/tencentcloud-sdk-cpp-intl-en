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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLTEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlTemplateList request structure.
                */
                class DescribeIntlTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeIntlTemplateListRequest();
                    ~DescribeIntlTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The offset.
                     * @return Offset The offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset.
                     * @param _offset The offset.
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
                     * 获取The maximum number of entries.
                     * @return Limit The maximum number of entries.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of entries.
                     * @param _limit The maximum number of entries.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The domain registrant keyword for exact match.
                     * @return Keyword The domain registrant keyword for exact match.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置The domain registrant keyword for exact match.
                     * @param _keyword The domain registrant keyword for exact match.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取The type. Valid values: `all` (all types), `I` (individual), `E` (organization).
                     * @return Type The type. Valid values: `all` (all types), `I` (individual), `E` (organization).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type. Valid values: `all` (all types), `I` (individual), `E` (organization).
                     * @param _type The type. Valid values: `all` (all types), `I` (individual), `E` (organization).
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
                     * The offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of entries.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The domain registrant keyword for exact match.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * The type. Valid values: `all` (all types), `I` (individual), `E` (organization).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLTEMPLATELISTREQUEST_H_
