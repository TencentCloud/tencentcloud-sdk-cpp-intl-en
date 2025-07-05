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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULEREQUEST_H_

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
                * ModifyEnterpriseSecurityGroupRule request structure.
                */
                class ModifyEnterpriseSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    ModifyEnterpriseSecurityGroupRuleRequest();
                    ~ModifyEnterpriseSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取UUID of the rule, which can be obtained by querying the rule list
                     * @return RuleUuid UUID of the rule, which can be obtained by querying the rule list
                     * 
                     */
                    uint64_t GetRuleUuid() const;

                    /**
                     * 设置UUID of the rule, which can be obtained by querying the rule list
                     * @param _ruleUuid UUID of the rule, which can be obtained by querying the rule list
                     * 
                     */
                    void SetRuleUuid(const uint64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取Modification type. Values: `0` (Modify rule content), `1` (Toggle on/off a rule) and `2` (Toggle on/off all rules)
                     * @return ModifyType Modification type. Values: `0` (Modify rule content), `1` (Toggle on/off a rule) and `2` (Toggle on/off all rules)
                     * 
                     */
                    uint64_t GetModifyType() const;

                    /**
                     * 设置Modification type. Values: `0` (Modify rule content), `1` (Toggle on/off a rule) and `2` (Toggle on/off all rules)
                     * @param _modifyType Modification type. Values: `0` (Modify rule content), `1` (Toggle on/off a rule) and `2` (Toggle on/off all rules)
                     * 
                     */
                    void SetModifyType(const uint64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取The new rule content you want. It’s only required when you want to modify the rule content (`ModifyType=0`)
                     * @return Data The new rule content you want. It’s only required when you want to modify the rule content (`ModifyType=0`)
                     * 
                     */
                    SecurityGroupRule GetData() const;

                    /**
                     * 设置The new rule content you want. It’s only required when you want to modify the rule content (`ModifyType=0`)
                     * @param _data The new rule content you want. It’s only required when you want to modify the rule content (`ModifyType=0`)
                     * 
                     */
                    void SetData(const SecurityGroupRule& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取`0`: Do not enable; `1`: Enable
                     * @return Enable `0`: Do not enable; `1`: Enable
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置`0`: Do not enable; `1`: Enable
                     * @param _enable `0`: Do not enable; `1`: Enable
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * UUID of the rule, which can be obtained by querying the rule list
                     */
                    uint64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * Modification type. Values: `0` (Modify rule content), `1` (Toggle on/off a rule) and `2` (Toggle on/off all rules)
                     */
                    uint64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * The new rule content you want. It’s only required when you want to modify the rule content (`ModifyType=0`)
                     */
                    SecurityGroupRule m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * `0`: Do not enable; `1`: Enable
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULEREQUEST_H_
