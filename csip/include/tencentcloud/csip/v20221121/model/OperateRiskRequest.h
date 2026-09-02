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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKREQUEST_H_

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
                * OperateRisk request structure.
                */
                class OperateRiskRequest : public AbstractModel
                {
                public:
                    OperateRiskRequest();
                    ~OperateRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Risk rule ID</p>
                     * @return RiskRuleId <p>Risk rule ID</p>
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 设置<p>Risk rule ID</p>
                     * @param _riskRuleId <p>Risk rule ID</p>
                     * 
                     */
                    void SetRiskRuleId(const std::string& _riskRuleId);

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Risk ID set</p>
                     * @return RiskIdList <p>Risk ID set</p>
                     * 
                     */
                    std::vector<uint64_t> GetRiskIdList() const;

                    /**
                     * 设置<p>Risk ID set</p>
                     * @param _riskIdList <p>Risk ID set</p>
                     * 
                     */
                    void SetRiskIdList(const std::vector<uint64_t>& _riskIdList);

                    /**
                     * 判断参数 RiskIdList 是否已赋值
                     * @return RiskIdList 是否已赋值
                     * 
                     */
                    bool RiskIdListHasBeenSet() const;

                    /**
                     * 获取<p>Operation type</p>
                     * @return OperationType <p>Operation type</p>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置<p>Operation type</p>
                     * @param _operationType <p>Operation type</p>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

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
                     * 获取<p>Reason for ignoring the risk</p>
                     * @return Reason <p>Reason for ignoring the risk</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>Reason for ignoring the risk</p>
                     * @param _reason <p>Reason for ignoring the risk</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>Risk rule ID</p>
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * <p>Risk ID set</p>
                     */
                    std::vector<uint64_t> m_riskIdList;
                    bool m_riskIdListHasBeenSet;

                    /**
                     * <p>Operation type</p>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Reason for ignoring the risk</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_OPERATERISKREQUEST_H_
