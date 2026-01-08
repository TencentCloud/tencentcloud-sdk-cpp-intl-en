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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_

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
                * AuthorizationPolicyItem
                */
                class AuthorizationPolicyItem : public AbstractModel
                {
                public:
                    AuthorizationPolicyItem();
                    ~AuthorizationPolicyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy rule ID.
                     * @return Id Policy rule ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Policy rule ID.
                     * @param _id Policy rule ID.
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
                     * 获取Specifies the policy rule name.
                     * @return PolicyName Specifies the policy rule name.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Specifies the policy rule name.
                     * @param _policyName Specifies the policy rule name.
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
                     * 获取Rule syntax version. currently only support 1. defaults to 1.
                     * @return Version Rule syntax version. currently only support 1. defaults to 1.
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置Rule syntax version. currently only support 1. defaults to 1.
                     * @param _version Rule syntax version. currently only support 1. defaults to 1.
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Policy priority. a smaller priority ID indicates the policy takes effect with higher priority. see [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return Priority Policy priority. a smaller priority ID indicates the policy takes effect with higher priority. see [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Policy priority. a smaller priority ID indicates the policy takes effect with higher priority. see [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _priority Policy priority. a smaller priority ID indicates the policy takes effect with higher priority. see [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
allow specifies permission for access requests from devices that match this policy.
deny: denies access requests to the device that override the policy.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return Effect Specifies the decision.
allow specifies permission for access requests from devices that match this policy.
deny: denies access requests to the device that override the policy.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置Specifies the decision.
allow specifies permission for access requests from devices that match this policy.
deny: denies access requests to the device that override the policy.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _effect Specifies the decision.
allow specifies permission for access requests from devices that match this policy.
deny: denies access requests to the device that override the policy.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
                     * 获取Operation.
Specifies the connection.
Publishes an mqtt message.
Sub. specifies the subscription to mqtt messages.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return Actions Operation.
Specifies the connection.
Publishes an mqtt message.
Sub. specifies the subscription to mqtt messages.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置Operation.
Specifies the connection.
Publishes an mqtt message.
Sub. specifies the subscription to mqtt messages.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _actions Operation.
Specifies the connection.
Publishes an mqtt message.
Sub. specifies the subscription to mqtt messages.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
                     * 获取Resource. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return Resources Resource. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置Resource. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _resources Resource. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
                     * 获取Specifies the device ID for connection. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return ClientId Specifies the device ID for connection. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Specifies the device ID for connection. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _clientId Specifies the device ID for connection. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
                     * 获取Condition - username. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return Username Condition - username. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Condition - username. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _username Condition - username. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
                     * 获取Specifies the client IP address. see the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return Ip Specifies the client IP address. see the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Specifies the client IP address. see the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _ip Specifies the client IP address. see the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
                     * 获取Condition - service quality. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @return Qos Condition - service quality. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置Condition - service quality. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     * @param _qos Condition - service quality. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
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
                     * 获取Condition - message retention. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
Indicates the match of retain messages.
2: indicates non-retain messages.
3: indicates matching retain and non-retain messages.
                     * @return Retain Condition - message retention. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
Indicates the match of retain messages.
2: indicates non-retain messages.
3: indicates matching retain and non-retain messages.
                     * 
                     */
                    int64_t GetRetain() const;

                    /**
                     * 设置Condition - message retention. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
Indicates the match of retain messages.
2: indicates non-retain messages.
3: indicates matching retain and non-retain messages.
                     * @param _retain Condition - message retention. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
Indicates the match of retain messages.
2: indicates non-retain messages.
3: indicates matching retain and non-retain messages.
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
                     * Policy rule ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * MQTT cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the policy rule name.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Rule syntax version. currently only support 1. defaults to 1.
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Policy priority. a smaller priority ID indicates the policy takes effect with higher priority. see [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Specifies the decision.
allow specifies permission for access requests from devices that match this policy.
deny: denies access requests to the device that override the policy.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * Operation.
Specifies the connection.
Publishes an mqtt message.
Sub. specifies the subscription to mqtt messages.
Refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * Resource. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Specifies the device ID for connection. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Condition - username. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Specifies the client IP address. see the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Condition - service quality. see the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * Condition - message retention. refer to the [data plane authorization policy description](https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
Indicates the match of retain messages.
2: indicates non-retain messages.
3: indicates matching retain and non-retain messages.
                     */
                    int64_t m_retain;
                    bool m_retainHasBeenSet;

                    /**
                     * Specifies the remark with length not exceeding 128 characters.
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

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYITEM_H_
