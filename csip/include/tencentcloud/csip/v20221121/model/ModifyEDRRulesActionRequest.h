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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULESACTIONREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULESACTIONREQUEST_H_

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
                * ModifyEDRRulesAction request structure.
                */
                class ModifyEDRRulesActionRequest : public AbstractModel
                {
                public:
                    ModifyEDRRulesActionRequest();
                    ~ModifyEDRRulesActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Policy ID array</p>
                     * @return RuleIDs <p>Policy ID array</p>
                     * 
                     */
                    std::vector<std::string> GetRuleIDs() const;

                    /**
                     * 设置<p>Policy ID array</p>
                     * @param _ruleIDs <p>Policy ID array</p>
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
                     * 获取<p>Target Action: 0-Alert 1-Allow 2-Alert and block</p>
                     * @return AlertAction <p>Target Action: 0-Alert 1-Allow 2-Alert and block</p>
                     * 
                     */
                    int64_t GetAlertAction() const;

                    /**
                     * 设置<p>Target Action: 0-Alert 1-Allow 2-Alert and block</p>
                     * @param _alertAction <p>Target Action: 0-Alert 1-Allow 2-Alert and block</p>
                     * 
                     */
                    void SetAlertAction(const int64_t& _alertAction);

                    /**
                     * 判断参数 AlertAction 是否已赋值
                     * @return AlertAction 是否已赋值
                     * 
                     */
                    bool AlertActionHasBeenSet() const;

                    /**
                     * 获取<p>Target account AppId list</p>
                     * @return TargetAppIDs <p>Target account AppId list</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>Target account AppId list</p>
                     * @param _targetAppIDs <p>Target account AppId list</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

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
                     * <p>Policy ID array</p>
                     */
                    std::vector<std::string> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * <p>Target Action: 0-Alert 1-Allow 2-Alert and block</p>
                     */
                    int64_t m_alertAction;
                    bool m_alertActionHasBeenSet;

                    /**
                     * <p>Target account AppId list</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULESACTIONREQUEST_H_
