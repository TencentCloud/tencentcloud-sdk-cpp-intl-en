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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * RemoveEnterpriseSecurityGroupRule request structure.
                */
                class RemoveEnterpriseSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    RemoveEnterpriseSecurityGroupRuleRequest();
                    ~RemoveEnterpriseSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取UUID of the rule, which can be obtained by querying the rule list
                     * @return RuleUuid UUID of the rule, which can be obtained by querying the rule list
                     * 
                     */
                    int64_t GetRuleUuid() const;

                    /**
                     * 设置UUID of the rule, which can be obtained by querying the rule list
                     * @param _ruleUuid UUID of the rule, which can be obtained by querying the rule list
                     * 
                     */
                    void SetRuleUuid(const int64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取Type of deletion. 0: delete a single entry, and enter ID of the deleted rule for RuleUuid; 1: delete all, and enter 0 for RuleUuid
                     * @return RemoveType Type of deletion. 0: delete a single entry, and enter ID of the deleted rule for RuleUuid; 1: delete all, and enter 0 for RuleUuid
                     * 
                     */
                    int64_t GetRemoveType() const;

                    /**
                     * 设置Type of deletion. 0: delete a single entry, and enter ID of the deleted rule for RuleUuid; 1: delete all, and enter 0 for RuleUuid
                     * @param _removeType Type of deletion. 0: delete a single entry, and enter ID of the deleted rule for RuleUuid; 1: delete all, and enter 0 for RuleUuid
                     * 
                     */
                    void SetRemoveType(const int64_t& _removeType);

                    /**
                     * 判断参数 RemoveType 是否已赋值
                     * @return RemoveType 是否已赋值
                     * 
                     */
                    bool RemoveTypeHasBeenSet() const;

                private:

                    /**
                     * UUID of the rule, which can be obtained by querying the rule list
                     */
                    int64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * Type of deletion. 0: delete a single entry, and enter ID of the deleted rule for RuleUuid; 1: delete all, and enter 0 for RuleUuid
                     */
                    int64_t m_removeType;
                    bool m_removeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_
