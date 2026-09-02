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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEEDRRULESREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEEDRRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteEDRRules request structure.
                */
                class DeleteEDRRulesRequest : public AbstractModel
                {
                public:
                    DeleteEDRRulesRequest();
                    ~DeleteEDRRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Rule ID Array (Max 100)</p>
                     * @return RuleIDs <p>Rule ID Array (Max 100)</p>
                     * 
                     */
                    std::vector<std::string> GetRuleIDs() const;

                    /**
                     * 设置<p>Rule ID Array (Max 100)</p>
                     * @param _ruleIDs <p>Rule ID Array (Max 100)</p>
                     * 
                     */
                    void SetRuleIDs(const std::vector<std::string>& _ruleIDs);

                    /**
                     * 判断参数 RuleIDs 是否已赋值
                     * @return RuleIDs 是否已赋值
                     * 
                     */
                    bool RuleIDsHasBeenSet() const;

                    /**
                     * 获取<p>Rule type. 0: system; 1: custom. Currently, only deletion of custom rules is supported</p>
                     * @return RuleType <p>Rule type. 0: system; 1: custom. Currently, only deletion of custom rules is supported</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>Rule type. 0: system; 1: custom. Currently, only deletion of custom rules is supported</p>
                     * @param _ruleType <p>Rule type. 0: system; 1: custom. Currently, only deletion of custom rules is supported</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

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

                    /**
                     * 获取<p>APPID of the deletion policy</p>
                     * @return TargetAppIDs <p>APPID of the deletion policy</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>APPID of the deletion policy</p>
                     * @param _targetAppIDs <p>APPID of the deletion policy</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Rule ID Array (Max 100)</p>
                     */
                    std::vector<std::string> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * <p>Rule type. 0: system; 1: custom. Currently, only deletion of custom rules is supported</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>APPID of the deletion policy</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEEDRRULESREQUEST_H_
