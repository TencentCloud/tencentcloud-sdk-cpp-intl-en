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
                     * 获取<p>Instance type<br>BASIC Basic version<br>PRO Professional Edition<br>PLATINUM Platinum version</p>
                     * @return InstanceType <p>Instance type<br>BASIC Basic version<br>PRO Professional Edition<br>PLATINUM Platinum version</p>
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
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
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
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
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
                     * 获取<p>Number of topics</p>
                     * @return TopicNum <p>Number of topics</p>
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
                     * 获取<p>Maximum number of topics per instance</p>
                     * @return TopicNumLimit <p>Maximum number of topics per instance</p>
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
                     * 获取<p>TPS throttle value</p>
                     * @return TpsLimit <p>TPS throttle value</p>
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
                     * 获取<p>createTime, in seconds</p>
                     * @return CreatedTime <p>createTime, in seconds</p>
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
                     * 获取<p>Remarks</p>
                     * @return Remark <p>Remarks</p>
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
                     * 获取<p>Instance status, RUNNING, running MAINTAINING, maintaining ABNORMAL, abnormal OVERDUE, arrears DESTROYED, deleted CREATING, creating MODIFYING, modifying CREATE_FAILURE, creation failure MODIFY_FAILURE, configuration change failed DELETING, deleting</p>
                     * @return InstanceStatus <p>Instance status, RUNNING, running MAINTAINING, maintaining ABNORMAL, abnormal OVERDUE, arrears DESTROYED, deleted CREATING, creating MODIFYING, modifying CREATE_FAILURE, creation failure MODIFY_FAILURE, configuration change failed DELETING, deleting</p>
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
                     * 获取<p>Instance specification</p>
                     * @return SkuCode <p>Instance specification</p>
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
                     * 获取<p>Maximum number of subscriptions for a single client</p>
                     * @return MaxSubscriptionPerClient <p>Maximum number of subscriptions for a single client</p>
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
                     * 获取<p>Number of authorization rule entries</p>
                     * @return AuthorizationPolicyLimit <p>Number of authorization rule entries</p>
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
                     * 获取<p>Number of clients cap</p>
                     * @return ClientNumLimit <p>Number of clients cap</p>
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
                     * 获取<p>Client certificate registration method:<br>JITP: Automatic sign-up<br>API: Manually register through API</p>
                     * @return DeviceCertificateProvisionType <p>Client certificate registration method:<br>JITP: Automatic sign-up<br>API: Manually register through API</p>
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
                     * 获取<p>Whether to automatically activate when automatically registering a device certificate</p>
                     * @return AutomaticActivation <p>Whether to automatically activate when automatically registering a device certificate</p>
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
                     * 获取<p>Whether it is automatically renewed. Only applicable to monthly subscription clusters. 1: Automatic renewal 0: Non-automatic renewal</p>
                     * @return RenewFlag <p>Whether it is automatically renewed. Only applicable to monthly subscription clusters. 1: Automatic renewal 0: Non-automatic renewal</p>
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
                     * 获取<p>Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription</p>
                     * @return PayMode <p>Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription</p>
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
                     * 获取<p>Expiry time, millisecond-level timestamp</p>
                     * @return ExpiryTime <p>Expiry time, millisecond-level timestamp</p>
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
                     * 获取<p>Predestruction time, millisecond-level timestamp</p>
                     * @return DestroyTime <p>Predestruction time, millisecond-level timestamp</p>
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
                     * 获取<p>TLS, one-way authentication    mTLS, mutual authentication    BYOC; one certificate per device</p>
                     * @return X509Mode <p>TLS, one-way authentication    mTLS, mutual authentication    BYOC; one certificate per device</p>
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
                     * 获取<p>Maximum Ca quota</p>
                     * @return MaxCaNum <p>Maximum Ca quota</p>
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
                     * 获取<p>FPS Cert Registration Code</p>
                     * @return RegistrationCode <p>FPS Cert Registration Code</p>
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
                     * 获取<p>Maximum number of subscriptions for a cluster</p>
                     * @return MaxSubscription <p>Maximum number of subscriptions for a cluster</p>
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
                     * 获取<p>Authorization policy switch</p>
                     * @return AuthorizationPolicy <p>Authorization policy switch</p>
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
                     * 获取<p>Maximum limit of shared subscription groups</p>
                     * @return SharedSubscriptionGroupLimit <p>Maximum limit of shared subscription groups</p>
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
                     * 获取<p>Number limit of TopicFilter in one shared subscription group</p>
                     * @return MaxTopicFilterPerSharedSubscriptionGroup <p>Number limit of TopicFilter in one shared subscription group</p>
                     * @deprecated
                     */
                    int64_t GetMaxTopicFilterPerSharedSubscriptionGroup() const;

                    /**
                     * 判断参数 MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * @return MaxTopicFilterPerSharedSubscriptionGroup 是否已赋值
                     * @deprecated
                     */
                    bool MaxTopicFilterPerSharedSubscriptionGroupHasBeenSet() const;

                    /**
                     * 获取<p>Limit on number of auto subscription rules</p>
                     * @return AutoSubscriptionPolicyLimit <p>Limit on number of auto subscription rules</p>
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
                     * 获取<p>Number limit of TopicFilter in a single auto subscription rule</p>
                     * @return MaxTopicFilterPerAutoSubscriptionPolicy <p>Number limit of TopicFilter in a single auto subscription rule</p>
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
                     * 获取<p>Whether to use the default server certificate</p>
                     * @return UseDefaultServerCert <p>Whether to use the default server certificate</p>
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
                     * 获取<p>Maximum number of server CAs</p>
                     * @return TrustedCaLimit <p>Maximum number of server CAs</p>
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
                     * 获取<p>Maximum number of server certificates</p>
                     * @return ServerCertLimit <p>Maximum number of server certificates</p>
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
                     * 获取<p>Max level of topic prefix</p>
                     * @return TopicPrefixSlashLimit <p>Max level of topic prefix</p>
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
                     * 获取<p>Single client send message rate limiting, unit messages/second</p>
                     * @return MessageRate <p>Single client send message rate limiting, unit messages/second</p>
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
                     * 获取<p>Server-side tls supported protocols, separated by ",". Example: TLSv1.3,TLSv1.2,TLSv1.1,TLSv1</p>
                     * @return TransportLayerSecurity <p>Server-side tls supported protocols, separated by ",". Example: TLSv1.3,TLSv1.2,TLSv1.1,TLSv1</p>
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
                     * 获取<p>Message property enhancement rule quota</p>
                     * @return MessageEnrichmentRuleLimit <p>Message property enhancement rule quota</p>
                     * 
                     */
                    int64_t GetMessageEnrichmentRuleLimit() const;

                    /**
                     * 判断参数 MessageEnrichmentRuleLimit 是否已赋值
                     * @return MessageEnrichmentRuleLimit 是否已赋值
                     * 
                     */
                    bool MessageEnrichmentRuleLimitHasBeenSet() const;

                    /**
                     * 获取<p>Maximum allowed number of blocking rules</p>
                     * @return BlockRuleLimit <p>Maximum allowed number of blocking rules</p>
                     * 
                     */
                    int64_t GetBlockRuleLimit() const;

                    /**
                     * 判断参数 BlockRuleLimit 是否已赋值
                     * @return BlockRuleLimit 是否已赋值
                     * 
                     */
                    bool BlockRuleLimitHasBeenSet() const;

                private:

                    /**
                     * <p>Instance type<br>BASIC Basic version<br>PRO Professional Edition<br>PLATINUM Platinum version</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Number of topics</p>
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * <p>Maximum number of topics per instance</p>
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * <p>TPS throttle value</p>
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * <p>createTime, in seconds</p>
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Remarks</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Instance status, RUNNING, running MAINTAINING, maintaining ABNORMAL, abnormal OVERDUE, arrears DESTROYED, deleted CREATING, creating MODIFYING, modifying CREATE_FAILURE, creation failure MODIFY_FAILURE, configuration change failed DELETING, deleting</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Instance specification</p>
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * <p>Maximum number of subscriptions for a single client</p>
                     */
                    int64_t m_maxSubscriptionPerClient;
                    bool m_maxSubscriptionPerClientHasBeenSet;

                    /**
                     * <p>Number of authorization rule entries</p>
                     */
                    int64_t m_authorizationPolicyLimit;
                    bool m_authorizationPolicyLimitHasBeenSet;

                    /**
                     * <p>Number of clients cap</p>
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * <p>Client certificate registration method:<br>JITP: Automatic sign-up<br>API: Manually register through API</p>
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * <p>Whether to automatically activate when automatically registering a device certificate</p>
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                    /**
                     * <p>Whether it is automatically renewed. Only applicable to monthly subscription clusters. 1: Automatic renewal 0: Non-automatic renewal</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Billing mode, POSTPAID, pay-as-you-go PREPAID, annual/monthly subscription</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Expiry time, millisecond-level timestamp</p>
                     */
                    int64_t m_expiryTime;
                    bool m_expiryTimeHasBeenSet;

                    /**
                     * <p>Predestruction time, millisecond-level timestamp</p>
                     */
                    int64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * <p>TLS, one-way authentication    mTLS, mutual authentication    BYOC; one certificate per device</p>
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * <p>Maximum Ca quota</p>
                     */
                    int64_t m_maxCaNum;
                    bool m_maxCaNumHasBeenSet;

                    /**
                     * <p>FPS Cert Registration Code</p>
                     */
                    std::string m_registrationCode;
                    bool m_registrationCodeHasBeenSet;

                    /**
                     * <p>Maximum number of subscriptions for a cluster</p>
                     */
                    int64_t m_maxSubscription;
                    bool m_maxSubscriptionHasBeenSet;

                    /**
                     * <p>Authorization policy switch</p>
                     */
                    bool m_authorizationPolicy;
                    bool m_authorizationPolicyHasBeenSet;

                    /**
                     * <p>Maximum limit of shared subscription groups</p>
                     */
                    int64_t m_sharedSubscriptionGroupLimit;
                    bool m_sharedSubscriptionGroupLimitHasBeenSet;

                    /**
                     * <p>Number limit of TopicFilter in one shared subscription group</p>
                     */
                    int64_t m_maxTopicFilterPerSharedSubscriptionGroup;
                    bool m_maxTopicFilterPerSharedSubscriptionGroupHasBeenSet;

                    /**
                     * <p>Limit on number of auto subscription rules</p>
                     */
                    int64_t m_autoSubscriptionPolicyLimit;
                    bool m_autoSubscriptionPolicyLimitHasBeenSet;

                    /**
                     * <p>Number limit of TopicFilter in a single auto subscription rule</p>
                     */
                    int64_t m_maxTopicFilterPerAutoSubscriptionPolicy;
                    bool m_maxTopicFilterPerAutoSubscriptionPolicyHasBeenSet;

                    /**
                     * <p>Whether to use the default server certificate</p>
                     */
                    bool m_useDefaultServerCert;
                    bool m_useDefaultServerCertHasBeenSet;

                    /**
                     * <p>Maximum number of server CAs</p>
                     */
                    int64_t m_trustedCaLimit;
                    bool m_trustedCaLimitHasBeenSet;

                    /**
                     * <p>Maximum number of server certificates</p>
                     */
                    int64_t m_serverCertLimit;
                    bool m_serverCertLimitHasBeenSet;

                    /**
                     * <p>Max level of topic prefix</p>
                     */
                    int64_t m_topicPrefixSlashLimit;
                    bool m_topicPrefixSlashLimitHasBeenSet;

                    /**
                     * <p>Single client send message rate limiting, unit messages/second</p>
                     */
                    int64_t m_messageRate;
                    bool m_messageRateHasBeenSet;

                    /**
                     * <p>Server-side tls supported protocols, separated by ",". Example: TLSv1.3,TLSv1.2,TLSv1.1,TLSv1</p>
                     */
                    std::string m_transportLayerSecurity;
                    bool m_transportLayerSecurityHasBeenSet;

                    /**
                     * <p>Message property enhancement rule quota</p>
                     */
                    int64_t m_messageEnrichmentRuleLimit;
                    bool m_messageEnrichmentRuleLimitHasBeenSet;

                    /**
                     * <p>Maximum allowed number of blocking rules</p>
                     */
                    int64_t m_blockRuleLimit;
                    bool m_blockRuleLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSTANCERESPONSE_H_
