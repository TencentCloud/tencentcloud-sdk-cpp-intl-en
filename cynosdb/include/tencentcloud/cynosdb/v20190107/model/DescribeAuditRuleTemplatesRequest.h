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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeAuditRuleTemplates request structure.
                */
                class DescribeAuditRuleTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAuditRuleTemplatesRequest();
                    ~DescribeAuditRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule template ID
                     * @return RuleTemplateIds Rule template ID
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置Rule template ID
                     * @param RuleTemplateIds Rule template ID
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取Rule template name
                     * @return RuleTemplateNames Rule template name
                     */
                    std::vector<std::string> GetRuleTemplateNames() const;

                    /**
                     * 设置Rule template name
                     * @param RuleTemplateNames Rule template name
                     */
                    void SetRuleTemplateNames(const std::vector<std::string>& _ruleTemplateNames);

                    /**
                     * 判断参数 RuleTemplateNames 是否已赋值
                     * @return RuleTemplateNames 是否已赋值
                     */
                    bool RuleTemplateNamesHasBeenSet() const;

                    /**
                     * 获取Number of results returned per request. Default value: `20`.
                     * @return Limit Number of results returned per request. Default value: `20`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results returned per request. Default value: `20`.
                     * @param Limit Number of results returned per request. Default value: `20`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param Offset Offset. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Rule template ID
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * Rule template name
                     */
                    std::vector<std::string> m_ruleTemplateNames;
                    bool m_ruleTemplateNamesHasBeenSet;

                    /**
                     * Number of results returned per request. Default value: `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_
