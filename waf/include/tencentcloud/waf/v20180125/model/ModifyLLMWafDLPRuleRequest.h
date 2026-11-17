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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFDLPRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFDLPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMWafDLPRule request structure.
                */
                class ModifyLLMWafDLPRuleRequest : public AbstractModel
                {
                public:
                    ModifyLLMWafDLPRuleRequest();
                    ~ModifyLLMWafDLPRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Service ID.</p>
                     * @return ServiceId <p>Service ID.</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>Service ID.</p>
                     * @param _serviceId <p>Service ID.</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>List of rule IDs to modify.</p>
                     * @return RuleIds <p>List of rule IDs to modify.</p>
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置<p>List of rule IDs to modify.</p>
                     * @param _ruleIds <p>List of rule IDs to modify.</p>
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取<p>Action.</p>
                     * @return RuleAction <p>Action.</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>Action.</p>
                     * @param _ruleAction <p>Action.</p>
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取<p>Switch.</p>
                     * @return Status <p>Switch.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Switch.</p>
                     * @param _status <p>Switch.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Detection direction: 1 indicates inbound, 2 indicates outbound, and 3 indicates both inbound and outbound.</p>
                     * @return Direction <p>Detection direction: 1 indicates inbound, 2 indicates outbound, and 3 indicates both inbound and outbound.</p>
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置<p>Detection direction: 1 indicates inbound, 2 indicates outbound, and 3 indicates both inbound and outbound.</p>
                     * @param _direction <p>Detection direction: 1 indicates inbound, 2 indicates outbound, and 3 indicates both inbound and outbound.</p>
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>Service ID.</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>List of rule IDs to modify.</p>
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * <p>Action.</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>Switch.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Detection direction: 1 indicates inbound, 2 indicates outbound, and 3 indicates both inbound and outbound.</p>
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFDLPRULEREQUEST_H_
