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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKRULEPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKRULEPOLICYREQUEST_H_

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
                * OperateRiskRulePolicy request structure.
                */
                class OperateRiskRulePolicyRequest : public AbstractModel
                {
                public:
                    OperateRiskRulePolicyRequest();
                    ~OperateRiskRulePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enable or disable
                     * @return OperateType Enable or disable
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置Enable or disable
                     * @param _operateType Enable or disable
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取Risk rule ID collection
                     * @return RuleIDs Risk rule ID collection
                     * 
                     */
                    std::vector<std::string> GetRuleIDs() const;

                    /**
                     * 设置Risk rule ID collection
                     * @param _ruleIDs Risk rule ID collection
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
                     * 获取Select all
                     * @return CheckAll Select all
                     * 
                     */
                    bool GetCheckAll() const;

                    /**
                     * 设置Select all
                     * @param _checkAll Select all
                     * 
                     */
                    void SetCheckAll(const bool& _checkAll);

                    /**
                     * 判断参数 CheckAll 是否已赋值
                     * @return CheckAll 是否已赋值
                     * 
                     */
                    bool CheckAllHasBeenSet() const;

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
                     * 获取User AppID
                     * @return UserAppID User AppID
                     * 
                     */
                    uint64_t GetUserAppID() const;

                    /**
                     * 设置User AppID
                     * @param _userAppID User AppID
                     * 
                     */
                    void SetUserAppID(const uint64_t& _userAppID);

                    /**
                     * 判断参数 UserAppID 是否已赋值
                     * @return UserAppID 是否已赋值
                     * 
                     */
                    bool UserAppIDHasBeenSet() const;

                private:

                    /**
                     * Enable or disable
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * Risk rule ID collection
                     */
                    std::vector<std::string> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * Select all
                     */
                    bool m_checkAll;
                    bool m_checkAllHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * User AppID
                     */
                    uint64_t m_userAppID;
                    bool m_userAppIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKRULEPOLICYREQUEST_H_
