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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ cluster basic information.
                */
                class RabbitMQClusterInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterInfo();
                    ~RabbitMQClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClusterName 
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置
                     * @param _clusterName 
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return Region 
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置
                     * @param _region 
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Creation time in milliseconds. unix timestamp.
                     * @return CreateTime Creation time in milliseconds. unix timestamp.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in milliseconds. unix timestamp.
                     * @param _createTime Creation time in milliseconds. unix timestamp.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Cluster description information
                     * @return Remark Cluster description information
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Cluster description information
                     * @param _remark Cluster description information
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
                     * 获取
                     * @return Vpcs 
                     * 
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置
                     * @param _vpcs 
                     * 
                     */
                    void SetVpcs(const std::vector<VpcEndpointInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取AZ information
                     * @return ZoneIds AZ information
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置AZ information
                     * @param _zoneIds AZ information
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return VirtualHostNumber 
                     * 
                     */
                    int64_t GetVirtualHostNumber() const;

                    /**
                     * 设置
                     * @param _virtualHostNumber 
                     * 
                     */
                    void SetVirtualHostNumber(const int64_t& _virtualHostNumber);

                    /**
                     * 判断参数 VirtualHostNumber 是否已赋值
                     * @return VirtualHostNumber 是否已赋值
                     * 
                     */
                    bool VirtualHostNumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return QueueNumber 
                     * 
                     */
                    int64_t GetQueueNumber() const;

                    /**
                     * 设置
                     * @param _queueNumber 
                     * 
                     */
                    void SetQueueNumber(const int64_t& _queueNumber);

                    /**
                     * 判断参数 QueueNumber 是否已赋值
                     * @return QueueNumber 是否已赋值
                     * 
                     */
                    bool QueueNumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return MessagePublishRate 
                     * 
                     */
                    double GetMessagePublishRate() const;

                    /**
                     * 设置
                     * @param _messagePublishRate 
                     * 
                     */
                    void SetMessagePublishRate(const double& _messagePublishRate);

                    /**
                     * 判断参数 MessagePublishRate 是否已赋值
                     * @return MessagePublishRate 是否已赋值
                     * 
                     */
                    bool MessagePublishRateHasBeenSet() const;

                    /**
                     * 获取
                     * @return MessageStackNumber 
                     * 
                     */
                    int64_t GetMessageStackNumber() const;

                    /**
                     * 设置
                     * @param _messageStackNumber 
                     * 
                     */
                    void SetMessageStackNumber(const int64_t& _messageStackNumber);

                    /**
                     * 判断参数 MessageStackNumber 是否已赋值
                     * @return MessageStackNumber 是否已赋值
                     * 
                     */
                    bool MessageStackNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     * @return ExpireTime Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     * @param _expireTime Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ChannelNumber 
                     * 
                     */
                    int64_t GetChannelNumber() const;

                    /**
                     * 设置
                     * @param _channelNumber 
                     * 
                     */
                    void SetChannelNumber(const int64_t& _channelNumber);

                    /**
                     * 判断参数 ChannelNumber 是否已赋值
                     * @return ChannelNumber 是否已赋值
                     * 
                     */
                    bool ChannelNumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConnectionNumber 
                     * 
                     */
                    int64_t GetConnectionNumber() const;

                    /**
                     * 设置
                     * @param _connectionNumber 
                     * 
                     */
                    void SetConnectionNumber(const int64_t& _connectionNumber);

                    /**
                     * 判断参数 ConnectionNumber 是否已赋值
                     * @return ConnectionNumber 是否已赋值
                     * 
                     */
                    bool ConnectionNumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConsumerNumber 
                     * 
                     */
                    int64_t GetConsumerNumber() const;

                    /**
                     * 设置
                     * @param _consumerNumber 
                     * 
                     */
                    void SetConsumerNumber(const int64_t& _consumerNumber);

                    /**
                     * 判断参数 ConsumerNumber 是否已赋值
                     * @return ConsumerNumber 是否已赋值
                     * 
                     */
                    bool ConsumerNumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExchangeNumber 
                     * 
                     */
                    int64_t GetExchangeNumber() const;

                    /**
                     * 设置
                     * @param _exchangeNumber 
                     * 
                     */
                    void SetExchangeNumber(const int64_t& _exchangeNumber);

                    /**
                     * 判断参数 ExchangeNumber 是否已赋值
                     * @return ExchangeNumber 是否已赋值
                     * 
                     */
                    bool ExchangeNumberHasBeenSet() const;

                    /**
                     * 获取Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExceptionInformation Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exceptionInformation Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExceptionInformation(const std::string& _exceptionInformation);

                    /**
                     * 判断参数 ExceptionInformation 是否已赋值
                     * @return ExceptionInformation 是否已赋值
                     * 
                     */
                    bool ExceptionInformationHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: creating; 1: normal; 2: isolating; 3: terminated; 4: abnormal; 5: delivery failed.
                     * @return ClusterStatus Instance status. 0: creating; 1: normal; 2: isolating; 3: terminated; 4: abnormal; 5: delivery failed.
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置Instance status. 0: creating; 1: normal; 2: isolating; 3: terminated; 4: abnormal; 5: delivery failed.
                     * @param _clusterStatus Instance status. 0: creating; 1: normal; 2: isolating; 3: terminated; 4: abnormal; 5: delivery failed.
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     * @return AutoRenewFlag Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     * @param _autoRenewFlag Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Whether the image queue policy is enabled. 1: enabled; 0: disabled.
                     * @return MirrorQueuePolicyFlag Whether the image queue policy is enabled. 1: enabled; 0: disabled.
                     * 
                     */
                    int64_t GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置Whether the image queue policy is enabled. 1: enabled; 0: disabled.
                     * @param _mirrorQueuePolicyFlag Whether the image queue policy is enabled. 1: enabled; 0: disabled.
                     * 
                     */
                    void SetMirrorQueuePolicyFlag(const int64_t& _mirrorQueuePolicyFlag);

                    /**
                     * 判断参数 MirrorQueuePolicyFlag 是否已赋值
                     * @return MirrorQueuePolicyFlag 是否已赋值
                     * 
                     */
                    bool MirrorQueuePolicyFlagHasBeenSet() const;

                    /**
                     * 获取Number of messages consumed per second. Unit: messages/second.
                     * @return MessageConsumeRate Number of messages consumed per second. Unit: messages/second.
                     * 
                     */
                    double GetMessageConsumeRate() const;

                    /**
                     * 设置Number of messages consumed per second. Unit: messages/second.
                     * @param _messageConsumeRate Number of messages consumed per second. Unit: messages/second.
                     * 
                     */
                    void SetMessageConsumeRate(const double& _messageConsumeRate);

                    /**
                     * 判断参数 MessageConsumeRate 是否已赋值
                     * @return MessageConsumeRate 是否已赋值
                     * 
                     */
                    bool MessageConsumeRateHasBeenSet() const;

                    /**
                     * 获取Cluster version information.
                     * @return ClusterVersion Cluster version information.
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Cluster version information.
                     * @param _clusterVersion Cluster version information.
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Billing mode. 0: postpaid; 1: prepaid.
                     * @return PayMode Billing mode. 0: postpaid; 1: prepaid.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. 0: postpaid; 1: prepaid.
                     * @param _payMode Billing mode. 0: postpaid; 1: prepaid.
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Instance type. 0: Exclusive Edition; 1: Serverless Edition.
                     * @return InstanceType Instance type. 0: Exclusive Edition; 1: Serverless Edition.
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. 0: Exclusive Edition; 1: Serverless Edition.
                     * @param _instanceType Instance type. 0: Exclusive Edition; 1: Serverless Edition.
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the isolation time started. unix timestamp.
                     * @return IsolatedTime Specifies the isolation time started. unix timestamp.
                     * 
                     */
                    int64_t GetIsolatedTime() const;

                    /**
                     * 设置Specifies the isolation time started. unix timestamp.
                     * @param _isolatedTime Specifies the isolation time started. unix timestamp.
                     * 
                     */
                    void SetIsolatedTime(const int64_t& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is a container instance. default true.
                     * @return Container Whether it is a container instance. default true.
                     * 
                     */
                    bool GetContainer() const;

                    /**
                     * 设置Whether it is a container instance. default true.
                     * @param _container Whether it is a container instance. default true.
                     * 
                     */
                    void SetContainer(const bool& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether deletion protection is enabled.
                     * @return EnableDeletionProtection Whether deletion protection is enabled.
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置Whether deletion protection is enabled.
                     * @param _enableDeletionProtection Whether deletion protection is enabled.
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Creation time in milliseconds. unix timestamp.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Cluster description information
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * AZ information
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_virtualHostNumber;
                    bool m_virtualHostNumberHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_queueNumber;
                    bool m_queueNumberHasBeenSet;

                    /**
                     * 
                     */
                    double m_messagePublishRate;
                    bool m_messagePublishRateHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_messageStackNumber;
                    bool m_messageStackNumberHasBeenSet;

                    /**
                     * Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_channelNumber;
                    bool m_channelNumberHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_connectionNumber;
                    bool m_connectionNumberHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_consumerNumber;
                    bool m_consumerNumberHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_exchangeNumber;
                    bool m_exchangeNumberHasBeenSet;

                    /**
                     * Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * Instance status. 0: creating; 1: normal; 2: isolating; 3: terminated; 4: abnormal; 5: delivery failed.
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether the image queue policy is enabled. 1: enabled; 0: disabled.
                     */
                    int64_t m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                    /**
                     * Number of messages consumed per second. Unit: messages/second.
                     */
                    double m_messageConsumeRate;
                    bool m_messageConsumeRateHasBeenSet;

                    /**
                     * Cluster version information.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Billing mode. 0: postpaid; 1: prepaid.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance type. 0: Exclusive Edition; 1: Serverless Edition.
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Specifies the isolation time started. unix timestamp.
                     */
                    int64_t m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Whether it is a container instance. default true.
                     */
                    bool m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether deletion protection is enabled.
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_
