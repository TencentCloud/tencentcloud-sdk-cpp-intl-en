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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MESSAGEENRICHMENTRULEITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MESSAGEENRICHMENTRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MessageEnrichmentRuleItem
                */
                class MessageEnrichmentRuleItem : public AbstractModel
                {
                public:
                    MessageEnrichmentRuleItem();
                    ~MessageEnrichmentRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID.
                     * @return Id Rule ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Rule ID.
                     * @param _id Rule ID.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取MQTT cluster ID.
                     * @return InstanceId MQTT cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置MQTT cluster ID.
                     * @param _instanceId MQTT cluster ID.
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
                     * 获取Specifies the rule name.
                     * @return RuleName Specifies the rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Specifies the rule name.
                     * @param _ruleName Specifies the rule name.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule matching conditions, in JSON format, must be Base64-encoded. 
Specifies the client id, username, and topic. example: {"clientId":"client-1","username":"client-1","topic":"home/room1"}.
Specifies the Base64-encoded string "eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9".
                     * @return Condition Rule matching conditions, in JSON format, must be Base64-encoded. 
Specifies the client id, username, and topic. example: {"clientId":"client-1","username":"client-1","topic":"home/room1"}.
Specifies the Base64-encoded string "eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9".
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Rule matching conditions, in JSON format, must be Base64-encoded. 
Specifies the client id, username, and topic. example: {"clientId":"client-1","username":"client-1","topic":"home/room1"}.
Specifies the Base64-encoded string "eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9".
                     * @param _condition Rule matching conditions, in JSON format, must be Base64-encoded. 
Specifies the client id, username, and topic. example: {"clientId":"client-1","username":"client-1","topic":"home/room1"}.
Specifies the Base64-encoded string "eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9".
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Specifies the action of rule execution in JSON format, which must be Base64 encoded.
 Creating a Billing Resource Order
{"messageExpiryInterval":360,"response Topic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"},{"key":"data-source","value":"rule-engine"}]}
Specifies the BASE64-encoded string "eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2UgVG9waWMiOiJyZXBsaWVzL2RldmljZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9LHsia2V5IjoiZGF0YS1zb3VyY2UiLCJ2YWx1ZSI6InJ1bGUtZW5naW5lIn1dfQ==".
                     * @return Actions Specifies the action of rule execution in JSON format, which must be Base64 encoded.
 Creating a Billing Resource Order
{"messageExpiryInterval":360,"response Topic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"},{"key":"data-source","value":"rule-engine"}]}
Specifies the BASE64-encoded string "eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2UgVG9waWMiOiJyZXBsaWVzL2RldmljZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9LHsia2V5IjoiZGF0YS1zb3VyY2UiLCJ2YWx1ZSI6InJ1bGUtZW5naW5lIn1dfQ==".
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置Specifies the action of rule execution in JSON format, which must be Base64 encoded.
 Creating a Billing Resource Order
{"messageExpiryInterval":360,"response Topic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"},{"key":"data-source","value":"rule-engine"}]}
Specifies the BASE64-encoded string "eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2UgVG9waWMiOiJyZXBsaWVzL2RldmljZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9LHsia2V5IjoiZGF0YS1zb3VyY2UiLCJ2YWx1ZSI6InJ1bGUtZW5naW5lIn1dfQ==".
                     * @param _actions Specifies the action of rule execution in JSON format, which must be Base64 encoded.
 Creating a Billing Resource Order
{"messageExpiryInterval":360,"response Topic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"},{"key":"data-source","value":"rule-engine"}]}
Specifies the BASE64-encoded string "eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2UgVG9waWMiOiJyZXBsaWVzL2RldmljZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9LHsia2V5IjoiZGF0YS1zb3VyY2UiLCJ2YWx1ZSI6InJ1bGUtZW5naW5lIn1dfQ==".
                     * 
                     */
                    void SetActions(const std::string& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取Rule priority. a smaller number indicates a higher priority. high priority overrides low priority. the UserProperty field will be merged.
                     * @return Priority Rule priority. a smaller number indicates a higher priority. high priority overrides low priority. the UserProperty field will be merged.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Rule priority. a smaller number indicates a higher priority. high priority overrides low priority. the UserProperty field will be merged.
                     * @param _priority Rule priority. a smaller number indicates a higher priority. high priority overrides low priority. the UserProperty field will be merged.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Rule status. valid values: 0 (undefined), 1 (activate), 2 (deactivate). default: deactivate.
                     * @return Status Rule status. valid values: 0 (undefined), 1 (activate), 2 (deactivate). default: deactivate.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Rule status. valid values: 0 (undefined), 1 (activate), 2 (deactivate). default: deactivate.
                     * @param _status Rule status. valid values: 0 (undefined), 1 (activate), 2 (deactivate). default: deactivate.
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Creation time. millisecond-level timestamp.
                     * @return CreatedTime Creation time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置Creation time. millisecond-level timestamp.
                     * @param _createdTime Creation time. millisecond-level timestamp.
                     * 
                     */
                    void SetCreatedTime(const int64_t& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Update time. millisecond-level timestamp.
                     * @return UpdateTime Update time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time. millisecond-level timestamp.
                     * @param _updateTime Update time. millisecond-level timestamp.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Rule ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * MQTT cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule matching conditions, in JSON format, must be Base64-encoded. 
Specifies the client id, username, and topic. example: {"clientId":"client-1","username":"client-1","topic":"home/room1"}.
Specifies the Base64-encoded string "eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9".
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Specifies the action of rule execution in JSON format, which must be Base64 encoded.
 Creating a Billing Resource Order
{"messageExpiryInterval":360,"response Topic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"},{"key":"data-source","value":"rule-engine"}]}
Specifies the BASE64-encoded string "eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2UgVG9waWMiOiJyZXBsaWVzL2RldmljZXMvJHtjbGllbnRpZH0iLCJjb3JyZWxhdGlvbkRhdGEiOiIke3RyYWNlaWR9IiwidXNlclByb3BlcnR5IjpbeyJrZXkiOiJ0cmFjZS1pZCIsInZhbHVlIjoiJHt0cmFjZWlkfSJ9LHsia2V5IjoiZGF0YS1zb3VyY2UiLCJ2YWx1ZSI6InJ1bGUtZW5naW5lIn1dfQ==".
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * Rule priority. a smaller number indicates a higher priority. high priority overrides low priority. the UserProperty field will be merged.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Rule status. valid values: 0 (undefined), 1 (activate), 2 (deactivate). default: deactivate.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time. millisecond-level timestamp.
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Update time. millisecond-level timestamp.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MESSAGEENRICHMENTRULEITEM_H_
