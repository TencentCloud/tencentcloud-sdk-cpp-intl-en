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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTINSTANCEITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTINSTANCEITEM_H_

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
                * MQTT instance information.
                */
                class MQTTInstanceItem : public AbstractModel
                {
                public:
                    MQTTInstanceItem();
                    ~MQTTInstanceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance version
                     * @return Version Instance version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Instance version
                     * @param _version Instance version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Instance type
BASIC, basic version
PRO, Professional Edition
PLATINUM, platinum version
                     * @return InstanceType Instance type
BASIC, basic version
PRO, Professional Edition
PLATINUM, platinum version
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
BASIC, basic version
PRO, Professional Edition
PLATINUM, platinum version
                     * @param _instanceType Instance type
BASIC, basic version
PRO, Professional Edition
PLATINUM, platinum version
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance status
RUNNING: running.
MAINTAINING
ABNORMAL
OVERDUE, arrears
CREATING
MODIFYING, Modifying configuration in progress
Creation failed
MODIFY_FAILURE, configuration change failed
DELETING: Deleting
                     * @return InstanceStatus Instance status
RUNNING: running.
MAINTAINING
ABNORMAL
OVERDUE, arrears
CREATING
MODIFYING, Modifying configuration in progress
Creation failed
MODIFY_FAILURE, configuration change failed
DELETING: Deleting
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
RUNNING: running.
MAINTAINING
ABNORMAL
OVERDUE, arrears
CREATING
MODIFYING, Modifying configuration in progress
Creation failed
MODIFY_FAILURE, configuration change failed
DELETING: Deleting
                     * @param _instanceStatus Instance status
RUNNING: running.
MAINTAINING
ABNORMAL
OVERDUE, arrears
CREATING
MODIFYING, Modifying configuration in progress
Creation failed
MODIFY_FAILURE, configuration change failed
DELETING: Deleting
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Maximum number of instance topics
                     * @return TopicNumLimit Maximum number of instance topics
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置Maximum number of instance topics
                     * @param _topicNumLimit Maximum number of instance topics
                     * 
                     */
                    void SetTopicNumLimit(const int64_t& _topicNumLimit);

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

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
                     * 获取Number of topics
                     * @return TopicNum Number of topics
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Number of topics
                     * @param _topicNum Number of topics
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Product specification
                     * @return SkuCode Product specification
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Product specification
                     * @param _skuCode Product specification
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取Elastic TPS throttle value
                     * @return TpsLimit Elastic TPS throttle value
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置Elastic TPS throttle value
                     * @param _tpsLimit Elastic TPS throttle value
                     * 
                     */
                    void SetTpsLimit(const int64_t& _tpsLimit);

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取Creation time, with a millisecond-level timestamp.
                     * @return CreateTime Creation time, with a millisecond-level timestamp.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time, with a millisecond-level timestamp.
                     * @param _createTime Creation time, with a millisecond-level timestamp.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Maximum number of subscriptions for a single client
                     * @return MaxSubscriptionPerClient Maximum number of subscriptions for a single client
                     * 
                     */
                    int64_t GetMaxSubscriptionPerClient() const;

                    /**
                     * 设置Maximum number of subscriptions for a single client
                     * @param _maxSubscriptionPerClient Maximum number of subscriptions for a single client
                     * 
                     */
                    void SetMaxSubscriptionPerClient(const int64_t& _maxSubscriptionPerClient);

                    /**
                     * 判断参数 MaxSubscriptionPerClient 是否已赋值
                     * @return MaxSubscriptionPerClient 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionPerClientHasBeenSet() const;

                    /**
                     * 获取Maximum number of client connections.
                     * @return ClientNumLimit Maximum number of client connections.
                     * 
                     */
                    int64_t GetClientNumLimit() const;

                    /**
                     * 设置Maximum number of client connections.
                     * @param _clientNumLimit Maximum number of client connections.
                     * 
                     */
                    void SetClientNumLimit(const int64_t& _clientNumLimit);

                    /**
                     * 判断参数 ClientNumLimit 是否已赋值
                     * @return ClientNumLimit 是否已赋值
                     * 
                     */
                    bool ClientNumLimitHasBeenSet() const;

                    /**
                     * 获取Whether it is automatically renewed. Only applicable to monthly subscription clusters.
1: Automatic renewal
Non-automatic renewal
                     * @return RenewFlag Whether it is automatically renewed. Only applicable to monthly subscription clusters.
1: Automatic renewal
Non-automatic renewal
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Whether it is automatically renewed. Only applicable to monthly subscription clusters.
1: Automatic renewal
Non-automatic renewal
                     * @param _renewFlag Whether it is automatically renewed. Only applicable to monthly subscription clusters.
1: Automatic renewal
Non-automatic renewal
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription
                     * @return PayMode Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription
                     * @param _payMode Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Expiry time, millisecond-level timestamp
                     * @return ExpiryTime Expiry time, millisecond-level timestamp
                     * 
                     */
                    int64_t GetExpiryTime() const;

                    /**
                     * 设置Expiry time, millisecond-level timestamp
                     * @param _expiryTime Expiry time, millisecond-level timestamp
                     * 
                     */
                    void SetExpiryTime(const int64_t& _expiryTime);

                    /**
                     * 判断参数 ExpiryTime 是否已赋值
                     * @return ExpiryTime 是否已赋值
                     * 
                     */
                    bool ExpiryTimeHasBeenSet() const;

                    /**
                     * 获取Predestruction time, millisecond-level timestamp
                     * @return DestroyTime Predestruction time, millisecond-level timestamp
                     * 
                     */
                    int64_t GetDestroyTime() const;

                    /**
                     * 设置Predestruction time, millisecond-level timestamp
                     * @param _destroyTime Predestruction time, millisecond-level timestamp
                     * 
                     */
                    void SetDestroyTime(const int64_t& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取Number of authorization rule entries limit
                     * @return AuthorizationPolicyLimit Number of authorization rule entries limit
                     * 
                     */
                    int64_t GetAuthorizationPolicyLimit() const;

                    /**
                     * 设置Number of authorization rule entries limit
                     * @param _authorizationPolicyLimit Number of authorization rule entries limit
                     * 
                     */
                    void SetAuthorizationPolicyLimit(const int64_t& _authorizationPolicyLimit);

                    /**
                     * 判断参数 AuthorizationPolicyLimit 是否已赋值
                     * @return AuthorizationPolicyLimit 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyLimitHasBeenSet() const;

                    /**
                     * 获取Maximum ca quota
                     * @return MaxCaNum Maximum ca quota
                     * 
                     */
                    int64_t GetMaxCaNum() const;

                    /**
                     * 设置Maximum ca quota
                     * @param _maxCaNum Maximum ca quota
                     * 
                     */
                    void SetMaxCaNum(const int64_t& _maxCaNum);

                    /**
                     * 判断参数 MaxCaNum 是否已赋值
                     * @return MaxCaNum 是否已赋值
                     * 
                     */
                    bool MaxCaNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of subscriptions
                     * @return MaxSubscription Maximum number of subscriptions
                     * 
                     */
                    int64_t GetMaxSubscription() const;

                    /**
                     * 设置Maximum number of subscriptions
                     * @param _maxSubscription Maximum number of subscriptions
                     * 
                     */
                    void SetMaxSubscription(const int64_t& _maxSubscription);

                    /**
                     * 判断参数 MaxSubscription 是否已赋值
                     * @return MaxSubscription 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionHasBeenSet() const;

                    /**
                     * 获取Maximum limit of shared subscription groups
                     * @return SharedSubscriptionGroupLimit Maximum limit of shared subscription groups
                     * 
                     */
                    int64_t GetSharedSubscriptionGroupLimit() const;

                    /**
                     * 设置Maximum limit of shared subscription groups
                     * @param _sharedSubscriptionGroupLimit Maximum limit of shared subscription groups
                     * 
                     */
                    void SetSharedSubscriptionGroupLimit(const int64_t& _sharedSubscriptionGroupLimit);

                    /**
                     * 判断参数 SharedSubscriptionGroupLimit 是否已赋值
                     * @return SharedSubscriptionGroupLimit 是否已赋值
                     * 
                     */
                    bool SharedSubscriptionGroupLimitHasBeenSet() const;

                    /**
                     * 获取Number limit of TopicFilter in one shared subscription group
                     * @return MaxTopicFilterPerSharedSubscriptionGroup Number limit of TopicFilter in one shared subscription group
                     * 
                     */
                    int64_t GetMaxTopicFilterPerSharedSubscriptionGroup() const;

                    /**
                     * 设置Number limit of TopicFilter in one shared subscription group
                     * @param _maxTopicFilterPerSharedSubscriptionGroup Number limit of TopicFilter in one shared subscription group
                     * 
                     */
                    void SetMaxTopicFilterPerSharedSubscriptionGroup(const int64_t& _maxTopicFilterPerSharedSubscriptionGroup);

                    /**
                     * 判断参数 MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * @return MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * 
                     */
                    bool MaxTopicFilterPerSharedSubscriptionGroupHasBeenSet() const;

                    /**
                     * 获取Limit on number of auto subscription rules
                     * @return AutoSubscriptionPolicyLimit Limit on number of auto subscription rules
                     * 
                     */
                    int64_t GetAutoSubscriptionPolicyLimit() const;

                    /**
                     * 设置Limit on number of auto subscription rules
                     * @param _autoSubscriptionPolicyLimit Limit on number of auto subscription rules
                     * 
                     */
                    void SetAutoSubscriptionPolicyLimit(const int64_t& _autoSubscriptionPolicyLimit);

                    /**
                     * 判断参数 AutoSubscriptionPolicyLimit 是否已赋值
                     * @return AutoSubscriptionPolicyLimit 是否已赋值
                     * 
                     */
                    bool AutoSubscriptionPolicyLimitHasBeenSet() const;

                    /**
                     * 获取Number limit of TopicFilter in a single auto subscription rule
                     * @return MaxTopicFilterPerAutoSubscriptionPolicy Number limit of TopicFilter in a single auto subscription rule
                     * 
                     */
                    int64_t GetMaxTopicFilterPerAutoSubscriptionPolicy() const;

                    /**
                     * 设置Number limit of TopicFilter in a single auto subscription rule
                     * @param _maxTopicFilterPerAutoSubscriptionPolicy Number limit of TopicFilter in a single auto subscription rule
                     * 
                     */
                    void SetMaxTopicFilterPerAutoSubscriptionPolicy(const int64_t& _maxTopicFilterPerAutoSubscriptionPolicy);

                    /**
                     * 判断参数 MaxTopicFilterPerAutoSubscriptionPolicy 是否已赋值
                     * @return MaxTopicFilterPerAutoSubscriptionPolicy 是否已赋值
                     * 
                     */
                    bool MaxTopicFilterPerAutoSubscriptionPolicyHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Instance type
BASIC, basic version
PRO, Professional Edition
PLATINUM, platinum version
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance status
RUNNING: running.
MAINTAINING
ABNORMAL
OVERDUE, arrears
CREATING
MODIFYING, Modifying configuration in progress
Creation failed
MODIFY_FAILURE, configuration change failed
DELETING: Deleting
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Maximum number of instance topics
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of topics
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Product specification
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * Elastic TPS throttle value
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * Creation time, with a millisecond-level timestamp.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Maximum number of subscriptions for a single client
                     */
                    int64_t m_maxSubscriptionPerClient;
                    bool m_maxSubscriptionPerClientHasBeenSet;

                    /**
                     * Maximum number of client connections.
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * Whether it is automatically renewed. Only applicable to monthly subscription clusters.
1: Automatic renewal
Non-automatic renewal
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Expiry time, millisecond-level timestamp
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * Predestruction time, millisecond-level timestamp
                     */
                    int64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * Number of authorization rule entries limit
                     */
                    int64_t m_authorizationPolicyLimit;
                    bool m_authorizationPolicyLimitHasBeenSet;

                    /**
                     * Maximum ca quota
                     */
                    int64_t m_maxCaNum;
                    bool m_maxCaNumHasBeenSet;

                    /**
                     * Maximum number of subscriptions
                     */
                    int64_t m_maxSubscription;
                    bool m_maxSubscriptionHasBeenSet;

                    /**
                     * Maximum limit of shared subscription groups
                     */
                    int64_t m_sharedSubscriptionGroupLimit;
                    bool m_sharedSubscriptionGroupLimitHasBeenSet;

                    /**
                     * Number limit of TopicFilter in one shared subscription group
                     */
                    int64_t m_maxTopicFilterPerSharedSubscriptionGroup;
                    bool m_maxTopicFilterPerSharedSubscriptionGroupHasBeenSet;

                    /**
                     * Limit on number of auto subscription rules
                     */
                    int64_t m_autoSubscriptionPolicyLimit;
                    bool m_autoSubscriptionPolicyLimitHasBeenSet;

                    /**
                     * Number limit of TopicFilter in a single auto subscription rule
                     */
                    int64_t m_maxTopicFilterPerAutoSubscriptionPolicy;
                    bool m_maxTopicFilterPerAutoSubscriptionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTINSTANCEITEM_H_
