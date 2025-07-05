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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBRUTEATTACKRULESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBRUTEATTACKRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BruteAttackRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBruteAttackRules request structure.
                */
                class ModifyBruteAttackRulesRequest : public AbstractModel
                {
                public:
                    ModifyBruteAttackRulesRequest();
                    ~ModifyBruteAttackRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule of determining brute force cracking
                     * @return Rules Rule of determining brute force cracking
                     * 
                     */
                    std::vector<BruteAttackRule> GetRules() const;

                    /**
                     * 设置Rule of determining brute force cracking
                     * @param _rules Rule of determining brute force cracking
                     * 
                     */
                    void SetRules(const std::vector<BruteAttackRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Rule of determining brute force cracking
                     */
                    std::vector<BruteAttackRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBRUTEATTACKRULESREQUEST_H_
