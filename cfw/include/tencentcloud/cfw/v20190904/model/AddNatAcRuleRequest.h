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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDNATACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDNATACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatRuleItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AddNatAcRule request structure.
                */
                class AddNatAcRuleRequest : public AbstractModel
                {
                public:
                    AddNatAcRuleRequest();
                    ~AddNatAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT access control rules to be added.
                     * @return Rules NAT access control rules to be added.
                     * 
                     */
                    std::vector<CreateNatRuleItem> GetRules() const;

                    /**
                     * 设置NAT access control rules to be added.
                     * @param _rules NAT access control rules to be added.
                     * 
                     */
                    void SetRules(const std::vector<CreateNatRuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Source of the rules to be added. Generally, this parameter is not used. The value insert_rule indicates that rules in the specified location are inserted, and the value batch_import indicates that rules are imported in batches. If the parameter is left empty, rules defined in the API request are added.
                     * @return From Source of the rules to be added. Generally, this parameter is not used. The value insert_rule indicates that rules in the specified location are inserted, and the value batch_import indicates that rules are imported in batches. If the parameter is left empty, rules defined in the API request are added.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Source of the rules to be added. Generally, this parameter is not used. The value insert_rule indicates that rules in the specified location are inserted, and the value batch_import indicates that rules are imported in batches. If the parameter is left empty, rules defined in the API request are added.
                     * @param _from Source of the rules to be added. Generally, this parameter is not used. The value insert_rule indicates that rules in the specified location are inserted, and the value batch_import indicates that rules are imported in batches. If the parameter is left empty, rules defined in the API request are added.
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * NAT access control rules to be added.
                     */
                    std::vector<CreateNatRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Source of the rules to be added. Generally, this parameter is not used. The value insert_rule indicates that rules in the specified location are inserted, and the value batch_import indicates that rules are imported in batches. If the parameter is left empty, rules defined in the API request are added.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDNATACRULEREQUEST_H_
