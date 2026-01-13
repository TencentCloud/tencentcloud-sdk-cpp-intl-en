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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEMESSAGEENRICHMENTRULEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEMESSAGEENRICHMENTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateMessageEnrichmentRule request structure.
                */
                class CreateMessageEnrichmentRuleRequest : public AbstractModel
                {
                public:
                    CreateMessageEnrichmentRuleRequest();
                    ~CreateMessageEnrichmentRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
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
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
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
                     * 获取Rule matching conditions in JSON format, Base64 encoding is required.
Creating a Billing Resource Order
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Specifies the Base64-encoded content.
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     * @return Condition Rule matching conditions in JSON format, Base64 encoding is required.
Creating a Billing Resource Order
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Specifies the Base64-encoded content.
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Rule matching conditions in JSON format, Base64 encoding is required.
Creating a Billing Resource Order
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Specifies the Base64-encoded content.
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     * @param _condition Rule matching conditions in JSON format, Base64 encoding is required.
Creating a Billing Resource Order
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Specifies the Base64-encoded content.
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
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
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
Specifies the BASE64-encoded value.
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     * @return Actions Specifies the action of rule execution in JSON format, which must be Base64 encoded.
Creating a Billing Resource Order
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
Specifies the BASE64-encoded value.
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置Specifies the action of rule execution in JSON format, which must be Base64 encoded.
Creating a Billing Resource Order
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
Specifies the BASE64-encoded value.
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     * @param _actions Specifies the action of rule execution in JSON format, which must be Base64 encoded.
Creating a Billing Resource Order
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
Specifies the BASE64-encoded value.
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
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
                     * 获取Rule priority. a smaller number indicates a higher priority. high priority overwrites low-priority. the userproperty field will be merged.
                     * @return Priority Rule priority. a smaller number indicates a higher priority. high priority overwrites low-priority. the userproperty field will be merged.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Rule priority. a smaller number indicates a higher priority. high priority overwrites low-priority. the userproperty field will be merged.
                     * @param _priority Rule priority. a smaller number indicates a higher priority. high priority overwrites low-priority. the userproperty field will be merged.
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
                     * 获取Specifies the remark with length not exceeding 128 characters.
                     * @return Remark Specifies the remark with length not exceeding 128 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark with length not exceeding 128 characters.
                     * @param _remark Specifies the remark with length not exceeding 128 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule matching conditions in JSON format, Base64 encoding is required.
Creating a Billing Resource Order
{"clientId":"client-1","username":"client-1","topic":"home/room1"}
Specifies the Base64-encoded content.
eyJjbGllbnRJZCI6ImNsaWVudC0xIiwidXNlcm5hbWUiOiJjbGllbnQtMSIsInRvcGljIjoiaG9tZS9yb29tMSJ9
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Specifies the action of rule execution in JSON format, which must be Base64 encoded.
Creating a Billing Resource Order
{"messageExpiryInterval":360,"responseTopic":"replies/devices/${clientid}","correlationData":"${traceid}","userProperty":[{"key":"trace-id","value":"${traceid}"}]}
Specifies the BASE64-encoded value.
eyJtZXNzYWdlRXhwaXJ5SW50ZXJ2YWwiOjM2MCwicmVzcG9uc2VUb3BpYyI6InJlcGxpZXMvZGV2aWNlcy8ke2NsaWVudGlkfSIsImNvcnJlbGF0aW9uRGF0YSI6IiR7dHJhY2VpZH0iLCJ1c2VyUHJvcGVydHkiOlt7ImtleSI6InRyYWNlLWlkIiwidmFsdWUiOiIke3RyYWNlaWR9In1dfQ==
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * Rule priority. a smaller number indicates a higher priority. high priority overwrites low-priority. the userproperty field will be merged.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Rule status. valid values: 0 (undefined), 1 (activate), 2 (deactivate). default: deactivate.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies the remark with length not exceeding 128 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEMESSAGEENRICHMENTRULEREQUEST_H_
