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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTSYSTEMRULESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTSYSTEMRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListSystemRules request structure.
                */
                class ListSystemRulesRequest : public AbstractModel
                {
                public:
                    ListSystemRulesRequest();
                    ~ListSystemRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity per page
                     * @return Limit Quantity per page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity per page
                     * @param _limit Quantity per page
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
                     * 获取Current Page
                     * @return Offset Current Page
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Current Page
                     * @param _offset Current Page
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
                     * 获取Search keywords. Searches by ID, name, tag, or description are supported.
                     * @return Keyword Search keywords. Searches by ID, name, tag, or description are supported.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search keywords. Searches by ID, name, tag, or description are supported.
                     * @param _keyword Search keywords. Searches by ID, name, tag, or description are supported.
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
                     * 获取Risk level
                     * @return RiskLevel Risk level
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level
                     * @param _riskLevel Risk level
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * Quantity per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Current Page
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Search keywords. Searches by ID, name, tag, or description are supported.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Risk level
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTSYSTEMRULESREQUEST_H_
