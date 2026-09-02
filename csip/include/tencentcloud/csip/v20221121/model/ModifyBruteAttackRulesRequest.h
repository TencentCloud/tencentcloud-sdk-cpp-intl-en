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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBRUTEATTACKRULESREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBRUTEATTACKRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BruteAttackRule.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>Brute force cracking judgment rule</p>
                     * @return Rules <p>Brute force cracking judgment rule</p>
                     * 
                     */
                    std::vector<BruteAttackRule> GetRules() const;

                    /**
                     * 设置<p>Brute force cracking judgment rule</p>
                     * @param _rules <p>Brute force cracking judgment rule</p>
                     * 
                     */
                    void SetRules(const std::vector<BruteAttackRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Brute force cracking judgment rule</p>
                     */
                    std::vector<BruteAttackRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBRUTEATTACKRULESREQUEST_H_
