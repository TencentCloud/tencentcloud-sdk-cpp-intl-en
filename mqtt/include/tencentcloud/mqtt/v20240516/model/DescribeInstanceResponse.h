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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_

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
                * DescribeInstance response structure.
                */
                class DescribeInstanceResponse : public AbstractModel
                {
                public:
                    DescribeInstanceResponse();
                    ~DescribeInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance type
BASIC: basic edition.
PRO edition.
PLATINUM edition.
                     * @return InstanceType Instance type
BASIC: basic edition.
PRO edition.
PLATINUM edition.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Number of topics
                     * @return TopicNum Number of topics
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of topics per instance
                     * @return TopicNumLimit Maximum number of topics per instance
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取TPS throttle value
                     * @return TpsLimit TPS throttle value
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取Creation time, in seconds
                     * @return CreatedTime Creation time, in seconds
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Instance status. RUNNING: running; MAINTAINING: maintaining; ABNORMAL: abnormal; OVERDUE: in arrears; DESTROYED: deleted; CREATING: creating; MODIFYING: adjusting the configuration; CREATE_FAILURE: creation failed; MODIFY_FAILURE: configuration adjustment failed; DELETING: deleting.
                     * @return InstanceStatus Instance status. RUNNING: running; MAINTAINING: maintaining; ABNORMAL: abnormal; OVERDUE: in arrears; DESTROYED: deleted; CREATING: creating; MODIFYING: adjusting the configuration; CREATE_FAILURE: creation failed; MODIFY_FAILURE: configuration adjustment failed; DELETING: deleting.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Specifies the instance specification.
                     * @return SkuCode Specifies the instance specification.
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取Maximum number of subscriptions for a single client.
                     * @return MaxSubscriptionPerClient Maximum number of subscriptions for a single client.
                     * 
                     */
                    int64_t GetMaxSubscriptionPerClient() const;

                    /**
                     * 判断参数 MaxSubscriptionPerClient 是否已赋值
                     * @return MaxSubscriptionPerClient 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionPerClientHasBeenSet() const;

                    /**
                     * 获取Number of authorization rules.
                     * @return AuthorizationPolicyLimit Number of authorization rules.
                     * 
                     */
                    int64_t GetAuthorizationPolicyLimit() const;

                    /**
                     * 判断参数 AuthorizationPolicyLimit 是否已赋值
                     * @return AuthorizationPolicyLimit 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of clients.
                     * @return ClientNumLimit Maximum number of clients.
                     * 
                     */
                    int64_t GetClientNumLimit() const;

                    /**
                     * 判断参数 ClientNumLimit 是否已赋值
                     * @return ClientNumLimit 是否已赋值
                     * 
                     */
                    bool ClientNumLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     * @return DeviceCertificateProvisionType Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     * 
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 判断参数 DeviceCertificateProvisionType 是否已赋值
                     * @return DeviceCertificateProvisionType 是否已赋值
                     * 
                     */
                    bool DeviceCertificateProvisionTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to automatically activate the device certificate during automatic registration.
                     * @return AutomaticActivation Specifies whether to automatically activate the device certificate during automatic registration.
                     * 
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 判断参数 AutomaticActivation 是否已赋值
                     * @return AutomaticActivation 是否已赋值
                     * 
                     */
                    bool AutomaticActivationHasBeenSet() const;

                    /**
                     * 获取Whether the instance is automatically renewed. this parameter is valid only for monthly subscription clusters. valid values: 1 (auto-renewal), 0 (non-automatic renewal).
                     * @return RenewFlag Whether the instance is automatically renewed. this parameter is valid only for monthly subscription clusters. valid values: 1 (auto-renewal), 0 (non-automatic renewal).
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Billing mode. POSTPAID: pay-as-you-go billing. PREPAID: monthly subscription.
                     * @return PayMode Billing mode. POSTPAID: pay-as-you-go billing. PREPAID: monthly subscription.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Expiry time. millisecond-level timestamp.
                     * @return ExpiryTime Expiry time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetExpiryTime() const;

                    /**
                     * 判断参数 ExpiryTime 是否已赋值
                     * @return ExpiryTime 是否已赋值
                     * 
                     */
                    bool ExpiryTimeHasBeenSet() const;

                    /**
                     * 获取Scheduled destruction time. millisecond-level timestamp.
                     * @return DestroyTime Scheduled destruction time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetDestroyTime() const;

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取TLS, one-way authentication. mTLS, mutual authentication. BYOC, one certificate per device.
                     * @return X509Mode TLS, one-way authentication. mTLS, mutual authentication. BYOC, one certificate per device.
                     * 
                     */
                    std::string GetX509Mode() const;

                    /**
                     * 判断参数 X509Mode 是否已赋值
                     * @return X509Mode 是否已赋值
                     * 
                     */
                    bool X509ModeHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum Ca quota.
                     * @return MaxCaNum Specifies the maximum Ca quota.
                     * 
                     */
                    int64_t GetMaxCaNum() const;

                    /**
                     * 判断参数 MaxCaNum 是否已赋值
                     * @return MaxCaNum 是否已赋值
                     * 
                     */
                    bool MaxCaNumHasBeenSet() const;

                    /**
                     * 获取FPS cert registration code.
                     * @return RegistrationCode FPS cert registration code.
                     * 
                     */
                    std::string GetRegistrationCode() const;

                    /**
                     * 判断参数 RegistrationCode 是否已赋值
                     * @return RegistrationCode 是否已赋值
                     * 
                     */
                    bool RegistrationCodeHasBeenSet() const;

                    /**
                     * 获取Maximum number of subscriptions for a cluster.
                     * @return MaxSubscription Maximum number of subscriptions for a cluster.
                     * 
                     */
                    int64_t GetMaxSubscription() const;

                    /**
                     * 判断参数 MaxSubscription 是否已赋值
                     * @return MaxSubscription 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionHasBeenSet() const;

                    /**
                     * 获取Authorization policy switch.
                     * @return AuthorizationPolicy Authorization policy switch.
                     * 
                     */
                    bool GetAuthorizationPolicy() const;

                    /**
                     * 判断参数 AuthorizationPolicy 是否已赋值
                     * @return AuthorizationPolicy 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyHasBeenSet() const;

                    /**
                     * 获取Maximum limit of shared subscription groups.
                     * @return SharedSubscriptionGroupLimit Maximum limit of shared subscription groups.
                     * 
                     */
                    int64_t GetSharedSubscriptionGroupLimit() const;

                    /**
                     * 判断参数 SharedSubscriptionGroupLimit 是否已赋值
                     * @return SharedSubscriptionGroupLimit 是否已赋值
                     * 
                     */
                    bool SharedSubscriptionGroupLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the topic filter number limit for each shared subscription group.
                     * @return MaxTopicFilterPerSharedSubscriptionGroup Specifies the topic filter number limit for each shared subscription group.
                     * 
                     */
                    int64_t GetMaxTopicFilterPerSharedSubscriptionGroup() const;

                    /**
                     * 判断参数 MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * @return MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * 
                     */
                    bool MaxTopicFilterPerSharedSubscriptionGroupHasBeenSet() const;

                    /**
                     * 获取Specifies the limit on number of auto-subscription rules.
                     * @return AutoSubscriptionPolicyLimit Specifies the limit on number of auto-subscription rules.
                     * 
                     */
                    int64_t GetAutoSubscriptionPolicyLimit() const;

                    /**
                     * 判断参数 AutoSubscriptionPolicyLimit 是否已赋值
                     * @return AutoSubscriptionPolicyLimit 是否已赋值
                     * 
                     */
                    bool AutoSubscriptionPolicyLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the number limit of TopicFilter in a single auto-subscription rule.
                     * @return MaxTopicFilterPerAutoSubscriptionPolicy Specifies the number limit of TopicFilter in a single auto-subscription rule.
                     * 
                     */
                    int64_t GetMaxTopicFilterPerAutoSubscriptionPolicy() const;

                    /**
                     * 判断参数 MaxTopicFilterPerAutoSubscriptionPolicy 是否已赋值
                     * @return MaxTopicFilterPerAutoSubscriptionPolicy 是否已赋值
                     * 
                     */
                    bool MaxTopicFilterPerAutoSubscriptionPolicyHasBeenSet() const;

                    /**
                     * 获取Specifies whether to use the default server certificate.
                     * @return UseDefaultServerCert Specifies whether to use the default server certificate.
                     * 
                     */
                    bool GetUseDefaultServerCert() const;

                    /**
                     * 判断参数 UseDefaultServerCert 是否已赋值
                     * @return UseDefaultServerCert 是否已赋值
                     * 
                     */
                    bool UseDefaultServerCertHasBeenSet() const;

                    /**
                     * 获取Maximum allowed number of server cas.
                     * @return TrustedCaLimit Maximum allowed number of server cas.
                     * 
                     */
                    int64_t GetTrustedCaLimit() const;

                    /**
                     * 判断参数 TrustedCaLimit 是否已赋值
                     * @return TrustedCaLimit 是否已赋值
                     * 
                     */
                    bool TrustedCaLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum allowed number of server certificates.
                     * @return ServerCertLimit Specifies the maximum allowed number of server certificates.
                     * 
                     */
                    int64_t GetServerCertLimit() const;

                    /**
                     * 判断参数 ServerCertLimit 是否已赋值
                     * @return ServerCertLimit 是否已赋值
                     * 
                     */
                    bool ServerCertLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the max level of the topic prefix.
                     * @return TopicPrefixSlashLimit Specifies the max level of the topic prefix.
                     * 
                     */
                    int64_t GetTopicPrefixSlashLimit() const;

                    /**
                     * 判断参数 TopicPrefixSlashLimit 是否已赋值
                     * @return TopicPrefixSlashLimit 是否已赋值
                     * 
                     */
                    bool TopicPrefixSlashLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the speed limit for sending messages by a single client in messages per second.
                     * @return MessageRate Specifies the speed limit for sending messages by a single client in messages per second.
                     * 
                     */
                    int64_t GetMessageRate() const;

                    /**
                     * 判断参数 MessageRate 是否已赋值
                     * @return MessageRate 是否已赋值
                     * 
                     */
                    bool MessageRateHasBeenSet() const;

                    /**
                     * 获取Specifies the protocols supported by the server tls, separated by ",". example: TLSv1.3,TLSv1.2,TLSv1.1,TLSv1.
                     * @return TransportLayerSecurity Specifies the protocols supported by the server tls, separated by ",". example: TLSv1.3,TLSv1.2,TLSv1.1,TLSv1.
                     * 
                     */
                    std::string GetTransportLayerSecurity() const;

                    /**
                     * 判断参数 TransportLayerSecurity 是否已赋值
                     * @return TransportLayerSecurity 是否已赋值
                     * 
                     */
                    bool TransportLayerSecurityHasBeenSet() const;

                    /**
                     * 获取Specifies the message property enrichment rule quota.
                     * @return MessageEnrichmentRuleLimit Specifies the message property enrichment rule quota.
                     * 
                     */
                    int64_t GetMessageEnrichmentRuleLimit() const;

                    /**
                     * 判断参数 MessageEnrichmentRuleLimit 是否已赋值
                     * @return MessageEnrichmentRuleLimit 是否已赋值
                     * 
                     */
                    bool MessageEnrichmentRuleLimitHasBeenSet() const;

                private:

                    /**
                     * Instance type
BASIC: basic edition.
PRO edition.
PLATINUM edition.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Number of topics
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Maximum number of topics per instance
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * TPS throttle value
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * Creation time, in seconds
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Instance status. RUNNING: running; MAINTAINING: maintaining; ABNORMAL: abnormal; OVERDUE: in arrears; DESTROYED: deleted; CREATING: creating; MODIFYING: adjusting the configuration; CREATE_FAILURE: creation failed; MODIFY_FAILURE: configuration adjustment failed; DELETING: deleting.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Specifies the instance specification.
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * Maximum number of subscriptions for a single client.
                     */
                    int64_t m_maxSubscriptionPerClient;
                    bool m_maxSubscriptionPerClientHasBeenSet;

                    /**
                     * Number of authorization rules.
                     */
                    int64_t m_authorizationPolicyLimit;
                    bool m_authorizationPolicyLimitHasBeenSet;

                    /**
                     * Maximum number of clients.
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * Specifies whether to automatically activate the device certificate during automatic registration.
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                    /**
                     * Whether the instance is automatically renewed. this parameter is valid only for monthly subscription clusters. valid values: 1 (auto-renewal), 0 (non-automatic renewal).
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Billing mode. POSTPAID: pay-as-you-go billing. PREPAID: monthly subscription.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Expiry time. millisecond-level timestamp.
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * Scheduled destruction time. millisecond-level timestamp.
                     */
                    int64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * TLS, one-way authentication. mTLS, mutual authentication. BYOC, one certificate per device.
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * Specifies the maximum Ca quota.
                     */
                    int64_t m_maxCaNum;
                    bool m_maxCaNumHasBeenSet;

                    /**
                     * FPS cert registration code.
                     */
                    std::string m_registrationCode;
                    bool m_registrationCodeHasBeenSet;

                    /**
                     * Maximum number of subscriptions for a cluster.
                     */
                    int64_t m_maxSubscription;
                    bool m_maxSubscriptionHasBeenSet;

                    /**
                     * Authorization policy switch.
                     */
                    bool m_authorizationPolicy;
                    bool m_authorizationPolicyHasBeenSet;

                    /**
                     * Maximum limit of shared subscription groups.
                     */
                    int64_t m_sharedSubscriptionGroupLimit;
                    bool m_sharedSubscriptionGroupLimitHasBeenSet;

                    /**
                     * Specifies the topic filter number limit for each shared subscription group.
                     */
                    int64_t m_maxTopicFilterPerSharedSubscriptionGroup;
                    bool m_maxTopicFilterPerSharedSubscriptionGroupHasBeenSet;

                    /**
                     * Specifies the limit on number of auto-subscription rules.
                     */
                    int64_t m_autoSubscriptionPolicyLimit;
                    bool m_autoSubscriptionPolicyLimitHasBeenSet;

                    /**
                     * Specifies the number limit of TopicFilter in a single auto-subscription rule.
                     */
                    int64_t m_maxTopicFilterPerAutoSubscriptionPolicy;
                    bool m_maxTopicFilterPerAutoSubscriptionPolicyHasBeenSet;

                    /**
                     * Specifies whether to use the default server certificate.
                     */
                    bool m_useDefaultServerCert;
                    bool m_useDefaultServerCertHasBeenSet;

                    /**
                     * Maximum allowed number of server cas.
                     */
                    int64_t m_trustedCaLimit;
                    bool m_trustedCaLimitHasBeenSet;

                    /**
                     * Specifies the maximum allowed number of server certificates.
                     */
                    int64_t m_serverCertLimit;
                    bool m_serverCertLimitHasBeenSet;

                    /**
                     * Specifies the max level of the topic prefix.
                     */
                    int64_t m_topicPrefixSlashLimit;
                    bool m_topicPrefixSlashLimitHasBeenSet;

                    /**
                     * Specifies the speed limit for sending messages by a single client in messages per second.
                     */
                    int64_t m_messageRate;
                    bool m_messageRateHasBeenSet;

                    /**
                     * Specifies the protocols supported by the server tls, separated by ",". example: TLSv1.3,TLSv1.2,TLSv1.1,TLSv1.
                     */
                    std::string m_transportLayerSecurity;
                    bool m_transportLayerSecurityHasBeenSet;

                    /**
                     * Specifies the message property enrichment rule quota.
                     */
                    int64_t m_messageEnrichmentRuleLimit;
                    bool m_messageEnrichmentRuleLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_
