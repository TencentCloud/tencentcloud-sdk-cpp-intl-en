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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYAUTHORIZATIONPOLICYREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYAUTHORIZATIONPOLICYREQUEST_H_

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
                * ModifyAuthorizationPolicy request structure.
                */
                class ModifyAuthorizationPolicyRequest : public AbstractModel
                {
                public:
                    ModifyAuthorizationPolicyRequest();
                    ~ModifyAuthorizationPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the authorization policy ID, which can be obtained from the query authorization policy API (https://www.tencentcloud.com/document/product/1778/111074?from_cn_redirect=1).
                     * @return Id Specifies the authorization policy ID, which can be obtained from the query authorization policy API (https://www.tencentcloud.com/document/product/1778/111074?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Specifies the authorization policy ID, which can be obtained from the query authorization policy API (https://www.tencentcloud.com/document/product/1778/111074?from_cn_redirect=1).
                     * @param _id Specifies the authorization policy ID, which can be obtained from the query authorization policy API (https://www.tencentcloud.com/document/product/1778/111074?from_cn_redirect=1).
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
                     * 获取Policy name, which cannot be empty, contains 3 to 64 characters, and supports chinese, letters, digits, "-", and "_".
                     * @return PolicyName Policy name, which cannot be empty, contains 3 to 64 characters, and supports chinese, letters, digits, "-", and "_".
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name, which cannot be empty, contains 3 to 64 characters, and supports chinese, letters, digits, "-", and "_".
                     * @param _policyName Policy name, which cannot be empty, contains 3 to 64 characters, and supports chinese, letters, digits, "-", and "_".
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy version, defaults to 1. currently only support 1.
                     * @return PolicyVersion Policy version, defaults to 1. currently only support 1.
                     * 
                     */
                    int64_t GetPolicyVersion() const;

                    /**
                     * 设置Policy version, defaults to 1. currently only support 1.
                     * @param _policyVersion Policy version, defaults to 1. currently only support 1.
                     * 
                     */
                    void SetPolicyVersion(const int64_t& _policyVersion);

                    /**
                     * 判断参数 PolicyVersion 是否已赋值
                     * @return PolicyVersion 是否已赋值
                     * 
                     */
                    bool PolicyVersionHasBeenSet() const;

                    /**
                     * 获取Policy priority. a smaller value indicates a higher priority. must be unique.
                     * @return Priority Policy priority. a smaller value indicates a higher priority. must be unique.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Policy priority. a smaller value indicates a higher priority. must be unique.
                     * @param _priority Policy priority. a smaller value indicates a higher priority. must be unique.
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
                     * 获取Specifies the decision.
allow. specifies the permission.
Denies.
                     * @return Effect Specifies the decision.
allow. specifies the permission.
Denies.
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置Specifies the decision.
allow. specifies the permission.
Denies.
                     * @param _effect Specifies the decision.
allow. specifies the permission.
Denies.
                     * 
                     */
                    void SetEffect(const std::string& _effect);

                    /**
                     * 判断参数 Effect 是否已赋值
                     * @return Effect 是否已赋值
                     * 
                     */
                    bool EffectHasBeenSet() const;

                    /**
                     * 获取Operation, supports multiple selections separated by commas. see the data plane policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).
Specifies the connection.
Specifies the publish action.
Sub. specifies the subscription.
                     * @return Actions Operation, supports multiple selections separated by commas. see the data plane policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).
Specifies the connection.
Specifies the publish action.
Sub. specifies the subscription.
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置Operation, supports multiple selections separated by commas. see the data plane policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).
Specifies the connection.
Specifies the publish action.
Sub. specifies the subscription.
                     * @param _actions Operation, supports multiple selections separated by commas. see the data plane policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).
Specifies the connection.
Specifies the publish action.
Sub. specifies the subscription.
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
                     * 获取Specifies the resource and subscription to match. supports configuration of multiple match rules, separated by commas. see the data plane authorization policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).

                     * @return Resources Specifies the resource and subscription to match. supports configuration of multiple match rules, separated by commas. see the data plane authorization policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).

                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置Specifies the resource and subscription to match. supports configuration of multiple match rules, separated by commas. see the data plane authorization policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).

                     * @param _resources Specifies the resource and subscription to match. supports configuration of multiple match rules, separated by commas. see the data plane authorization policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).

                     * 
                     */
                    void SetResources(const std::string& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Specifies the condition-username.
                     * @return Username Specifies the condition-username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Specifies the condition-username.
                     * @param _username Specifies the condition-username.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Condition - message retention.
Matches message retention.
Matches non-retention messages.
3. match retained and non-retained messages.
                     * @return Retain Condition - message retention.
Matches message retention.
Matches non-retention messages.
3. match retained and non-retained messages.
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置Condition - message retention.
Matches message retention.
Matches non-retention messages.
3. match retained and non-retained messages.
                     * @param _retain Condition - message retention.
Matches message retention.
Matches non-retention messages.
3. match retained and non-retained messages.
                     * 
                     */
                    void SetRetain(const int64_t& _retain);

                    /**
                     * 判断参数 Retain 是否已赋值
                     * @return Retain 是否已赋值
                     * 
                     */
                    bool RetainHasBeenSet() const;

                    /**
                     * 获取Client ID. supports regular expressions.
                     * @return ClientId Client ID. supports regular expressions.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID. supports regular expressions.
                     * @param _clientId Client ID. supports regular expressions.
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Condition: client IP address. supports IP or CIDR.
                     * @return Ip Condition: client IP address. supports IP or CIDR.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Condition: client IP address. supports IP or CIDR.
                     * @param _ip Condition: client IP address. supports IP or CIDR.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Condition: specifies the service quality.
0: at most once.
Minimum once.
2: exactly once.
                     * @return Qos Condition: specifies the service quality.
0: at most once.
Minimum once.
2: exactly once.
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置Condition: specifies the service quality.
0: at most once.
Minimum once.
2: exactly once.
                     * @param _qos Condition: specifies the service quality.
0: at most once.
Minimum once.
2: exactly once.
                     * 
                     */
                    void SetQos(const std::string& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取Specifies the remark information with a maximum length of 128 characters.
                     * @return Remark Specifies the remark information with a maximum length of 128 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark information with a maximum length of 128 characters.
                     * @param _remark Specifies the remark information with a maximum length of 128 characters.
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
                     * Specifies the authorization policy ID, which can be obtained from the query authorization policy API (https://www.tencentcloud.com/document/product/1778/111074?from_cn_redirect=1).
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Policy name, which cannot be empty, contains 3 to 64 characters, and supports chinese, letters, digits, "-", and "_".
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy version, defaults to 1. currently only support 1.
                     */
                    int64_t m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                    /**
                     * Policy priority. a smaller value indicates a higher priority. must be unique.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Specifies the decision.
allow. specifies the permission.
Denies.
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * Operation, supports multiple selections separated by commas. see the data plane policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).
Specifies the connection.
Specifies the publish action.
Sub. specifies the subscription.
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * Specifies the resource and subscription to match. supports configuration of multiple match rules, separated by commas. see the data plane authorization policy description (https://www.tencentcloud.com/document/product/1778/109715?from_cn_redirect=1).

                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Specifies the condition-username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Condition - message retention.
Matches message retention.
Matches non-retention messages.
3. match retained and non-retained messages.
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * Client ID. supports regular expressions.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Condition: client IP address. supports IP or CIDR.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Condition: specifies the service quality.
0: at most once.
Minimum once.
2: exactly once.
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * Specifies the remark information with a maximum length of 128 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYAUTHORIZATIONPOLICYREQUEST_H_
