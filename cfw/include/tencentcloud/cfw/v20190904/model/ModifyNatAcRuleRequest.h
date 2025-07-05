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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATACRULEREQUEST_H_

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
                * ModifyNatAcRule request structure.
                */
                class ModifyNatAcRuleRequest : public AbstractModel
                {
                public:
                    ModifyNatAcRuleRequest();
                    ~ModifyNatAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of rules to be modified.
                     * @return Rules Array of rules to be modified.
                     * 
                     */
                    std::vector<CreateNatRuleItem> GetRules() const;

                    /**
                     * 设置Array of rules to be modified.
                     * @param _rules Array of rules to be modified.
                     * 
                     */
                    void SetRules(const std::vector<CreateNatRuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Array of rules to be modified.
                     */
                    std::vector<CreateNatRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATACRULEREQUEST_H_
