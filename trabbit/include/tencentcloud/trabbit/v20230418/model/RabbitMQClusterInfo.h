/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/VpcEndpointInfo.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
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
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
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
                     * 获取Region information
                     * @return Region Region information
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information
                     * @param _region Region information
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
                     * 获取Creation time, in milliseconds
                     * @return CreateTime Creation time, in milliseconds
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time, in milliseconds
                     * @param _createTime Creation time, in milliseconds
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
                     * 获取Cluster description remark information
                     * @return Remark Cluster description remark information
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Cluster description remark information
                     * @param _remark Cluster description remark information
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
                     * 获取VPC and network information.
                     * @return Vpcs VPC and network information.
                     * 
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置VPC and network information.
                     * @param _vpcs VPC and network information.
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
                     * 获取Availability zone information
                     * @return ZoneIds Availability zone information
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Availability zone information
                     * @param _zoneIds Availability zone information
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
                     * 获取number of virtual hosts.
                     * @return VirtualHostNumber number of virtual hosts.
                     * 
                     */
                    int64_t GetVirtualHostNumber() const;

                    /**
                     * 设置number of virtual hosts.
                     * @param _virtualHostNumber number of virtual hosts.
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
                     * 获取Number of queues
                     * @return QueueNumber Number of queues
                     * 
                     */
                    int64_t GetQueueNumber() const;

                    /**
                     * 设置Number of queues
                     * @param _queueNumber Number of queues
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
                     * 获取Number of messages produced per second (measurement unit: messages/second).
                     * @return MessagePublishRate Number of messages produced per second (measurement unit: messages/second).
                     * 
                     */
                    double GetMessagePublishRate() const;

                    /**
                     * 设置Number of messages produced per second (measurement unit: messages/second).
                     * @param _messagePublishRate Number of messages produced per second (measurement unit: messages/second).
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
                     * 获取Number of accumulated messages. valid values: pieces.
                     * @return MessageStackNumber Number of accumulated messages. valid values: pieces.
                     * 
                     */
                    int64_t GetMessageStackNumber() const;

                    /**
                     * 设置Number of accumulated messages. valid values: pieces.
                     * @param _messageStackNumber Number of accumulated messages. valid values: pieces.
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
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expireTime Expiration time
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
                     * 获取number of channels.
                     * @return ChannelNumber number of channels.
                     * 
                     */
                    int64_t GetChannelNumber() const;

                    /**
                     * 设置number of channels.
                     * @param _channelNumber number of channels.
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
                     * 获取number of connections.
                     * @return ConnectionNumber number of connections.
                     * 
                     */
                    int64_t GetConnectionNumber() const;

                    /**
                     * 设置number of connections.
                     * @param _connectionNumber number of connections.
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
                     * 获取Number of consumers.
                     * @return ConsumerNumber Number of consumers.
                     * 
                     */
                    int64_t GetConsumerNumber() const;

                    /**
                     * 设置Number of consumers.
                     * @param _consumerNumber Number of consumers.
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
                     * 获取Number of Exchanges.
                     * @return ExchangeNumber Number of Exchanges.
                     * 
                     */
                    int64_t GetExchangeNumber() const;

                    /**
                     * 设置Number of Exchanges.
                     * @param _exchangeNumber Number of Exchanges.
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
                     * @return ExceptionInformation Cluster exception information.
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置Cluster exception information.
                     * @param _exceptionInformation Cluster exception information.
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
                     * 获取Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     * @return ClusterStatus Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     * @param _clusterStatus Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
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
                     * 获取Whether the mirrored queue strategy is enabled. 1 indicates enabled, and 0 indicates not enabled.
                     * @return MirrorQueuePolicyFlag Whether the mirrored queue strategy is enabled. 1 indicates enabled, and 0 indicates not enabled.
                     * 
                     */
                    int64_t GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置Whether the mirrored queue strategy is enabled. 1 indicates enabled, and 0 indicates not enabled.
                     * @param _mirrorQueuePolicyFlag Whether the mirrored queue strategy is enabled. 1 indicates enabled, and 0 indicates not enabled.
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
                     * 获取Number of messages consumed per second (measurement unit: messages/second).
                     * @return MessageConsumeRate Number of messages consumed per second (measurement unit: messages/second).
                     * 
                     */
                    double GetMessageConsumeRate() const;

                    /**
                     * 设置Number of messages consumed per second (measurement unit: messages/second).
                     * @param _messageConsumeRate Number of messages consumed per second (measurement unit: messages/second).
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
                     * 获取Specifies the cluster version information.
                     * @return ClusterVersion Specifies the cluster version information.
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Specifies the cluster version information.
                     * @param _clusterVersion Specifies the cluster version information.
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
                     * 获取Billing mode. valid values: 0 (postpaid), 1 (prepaid).
                     * @return PayMode Billing mode. valid values: 0 (postpaid), 1 (prepaid).
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. valid values: 0 (postpaid), 1 (prepaid).
                     * @param _payMode Billing mode. valid values: 0 (postpaid), 1 (prepaid).
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
                     * 获取Specifies the cluster type.
                     * @return InstanceType Specifies the cluster type.
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Specifies the cluster type.
                     * @param _instanceType Specifies the cluster type.
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
                     * 获取Specifies the message retention time, in hours.
                     * @return MessageRetainTime Specifies the message retention time, in hours.
                     * 
                     */
                    uint64_t GetMessageRetainTime() const;

                    /**
                     * 设置Specifies the message retention time, in hours.
                     * @param _messageRetainTime Specifies the message retention time, in hours.
                     * 
                     */
                    void SetMessageRetainTime(const uint64_t& _messageRetainTime);

                    /**
                     * 判断参数 MessageRetainTime 是否已赋值
                     * @return MessageRetainTime 是否已赋值
                     * 
                     */
                    bool MessageRetainTimeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region information
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Creation time, in milliseconds
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Cluster description remark information
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * VPC and network information.
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * Availability zone information
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * number of virtual hosts.
                     */
                    int64_t m_virtualHostNumber;
                    bool m_virtualHostNumberHasBeenSet;

                    /**
                     * Number of queues
                     */
                    int64_t m_queueNumber;
                    bool m_queueNumberHasBeenSet;

                    /**
                     * Number of messages produced per second (measurement unit: messages/second).
                     */
                    double m_messagePublishRate;
                    bool m_messagePublishRateHasBeenSet;

                    /**
                     * Number of accumulated messages. valid values: pieces.
                     */
                    int64_t m_messageStackNumber;
                    bool m_messageStackNumberHasBeenSet;

                    /**
                     * Expiration time
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * number of channels.
                     */
                    int64_t m_channelNumber;
                    bool m_channelNumberHasBeenSet;

                    /**
                     * number of connections.
                     */
                    int64_t m_connectionNumber;
                    bool m_connectionNumberHasBeenSet;

                    /**
                     * Number of consumers.
                     */
                    int64_t m_consumerNumber;
                    bool m_consumerNumberHasBeenSet;

                    /**
                     * Number of Exchanges.
                     */
                    int64_t m_exchangeNumber;
                    bool m_exchangeNumberHasBeenSet;

                    /**
                     * Cluster exception information.
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Whether the mirrored queue strategy is enabled. 1 indicates enabled, and 0 indicates not enabled.
                     */
                    int64_t m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                    /**
                     * Number of messages consumed per second (measurement unit: messages/second).
                     */
                    double m_messageConsumeRate;
                    bool m_messageConsumeRateHasBeenSet;

                    /**
                     * Specifies the cluster version information.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Billing mode. valid values: 0 (postpaid), 1 (prepaid).
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Specifies the cluster type.
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Specifies the message retention time, in hours.
                     */
                    uint64_t m_messageRetainTime;
                    bool m_messageRetainTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERINFO_H_
