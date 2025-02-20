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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyL7AccRule request structure.
                */
                class ModifyL7AccRuleRequest : public AbstractModel
                {
                public:
                    ModifyL7AccRuleRequest();
                    ~ModifyL7AccRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone id.
                     * @return ZoneId Zone id.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id.
                     * @param _zoneId Zone id.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Rules to be modified. you can first obtain the ruleid of the rule to be modified through the describel7accrules api, then pass in the modified rule content. the original rule content will be updated in an overriding manner.
                     * @return Rule Rules to be modified. you can first obtain the ruleid of the rule to be modified through the describel7accrules api, then pass in the modified rule content. the original rule content will be updated in an overriding manner.
                     * 
                     */
                    RuleEngineItem GetRule() const;

                    /**
                     * 设置Rules to be modified. you can first obtain the ruleid of the rule to be modified through the describel7accrules api, then pass in the modified rule content. the original rule content will be updated in an overriding manner.
                     * @param _rule Rules to be modified. you can first obtain the ruleid of the rule to be modified through the describel7accrules api, then pass in the modified rule content. the original rule content will be updated in an overriding manner.
                     * 
                     */
                    void SetRule(const RuleEngineItem& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * Zone id.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Rules to be modified. you can first obtain the ruleid of the rule to be modified through the describel7accrules api, then pass in the modified rule content. the original rule content will be updated in an overriding manner.
                     */
                    RuleEngineItem m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_
