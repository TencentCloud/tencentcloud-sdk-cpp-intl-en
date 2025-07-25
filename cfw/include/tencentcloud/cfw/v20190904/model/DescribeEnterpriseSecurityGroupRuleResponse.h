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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeEnterpriseSecurityGroupRule response structure.
                */
                class DescribeEnterpriseSecurityGroupRuleResponse : public AbstractModel
                {
                public:
                    DescribeEnterpriseSecurityGroupRuleResponse();
                    ~DescribeEnterpriseSecurityGroupRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number of the current page displayed for query by page number.
                     * @return PageNo Page number of the current page displayed for query by page number.
                     * 
                     */
                    std::string GetPageNo() const;

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries per page displayed for query by page number.
                     * @return PageSize Maximum number of entries per page displayed for query by page number.
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Access control rule list
                     * @return Rules Access control rule list
                     * 
                     */
                    std::vector<SecurityGroupRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Total number of access control rules
                     * @return TotalCount Total number of access control rules
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Page number of the current page displayed for query by page number.
                     */
                    std::string m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Maximum number of entries per page displayed for query by page number.
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Access control rule list
                     */
                    std::vector<SecurityGroupRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Total number of access control rules
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULERESPONSE_H_
