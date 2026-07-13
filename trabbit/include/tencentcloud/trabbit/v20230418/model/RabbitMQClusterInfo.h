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
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessTag.h>


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
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
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
                     * 获取<p>Regional information</p>
                     * @return Region <p>Regional information</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Regional information</p>
                     * @param _region <p>Regional information</p>
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
                     * 获取<p>Creation time in milliseconds</p>
                     * @return CreateTime <p>Creation time in milliseconds</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time in milliseconds</p>
                     * @param _createTime <p>Creation time in milliseconds</p>
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
                     * 获取<p>Cluster description information</p>
                     * @return Remark <p>Cluster description information</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Cluster description information</p>
                     * @param _remark <p>Cluster description information</p>
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
                     * 获取<p>VPC and network info</p>
                     * @return Vpcs <p>VPC and network info</p>
                     * 
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置<p>VPC and network info</p>
                     * @param _vpcs <p>VPC and network info</p>
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
                     * 获取<p>AZ information</p>
                     * @return ZoneIds <p>AZ information</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>AZ information</p>
                     * @param _zoneIds <p>AZ information</p>
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
                     * 获取<p>Number of virtual hosts</p>
                     * @return VirtualHostNumber <p>Number of virtual hosts</p>
                     * 
                     */
                    int64_t GetVirtualHostNumber() const;

                    /**
                     * 设置<p>Number of virtual hosts</p>
                     * @param _virtualHostNumber <p>Number of virtual hosts</p>
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
                     * 获取<p>Number of queues</p>
                     * @return QueueNumber <p>Number of queues</p>
                     * 
                     */
                    int64_t GetQueueNumber() const;

                    /**
                     * 设置<p>Number of queues</p>
                     * @param _queueNumber <p>Number of queues</p>
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
                     * 获取<p>Number of messages produced per second Unit: messages/second</p>
                     * @return MessagePublishRate <p>Number of messages produced per second Unit: messages/second</p>
                     * 
                     */
                    double GetMessagePublishRate() const;

                    /**
                     * 设置<p>Number of messages produced per second Unit: messages/second</p>
                     * @param _messagePublishRate <p>Number of messages produced per second Unit: messages/second</p>
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
                     * 获取<p>Number of accumulated messages Unit: unit</p>
                     * @return MessageStackNumber <p>Number of accumulated messages Unit: unit</p>
                     * 
                     */
                    int64_t GetMessageStackNumber() const;

                    /**
                     * 设置<p>Number of accumulated messages Unit: unit</p>
                     * @param _messageStackNumber <p>Number of accumulated messages Unit: unit</p>
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
                     * 获取<p>Expiration time</p>
                     * @return ExpireTime <p>Expiration time</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>Expiration time</p>
                     * @param _expireTime <p>Expiration time</p>
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
                     * 获取<p>Number of channels</p>
                     * @return ChannelNumber <p>Number of channels</p>
                     * 
                     */
                    int64_t GetChannelNumber() const;

                    /**
                     * 设置<p>Number of channels</p>
                     * @param _channelNumber <p>Number of channels</p>
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
                     * 获取<p>Number of connections</p>
                     * @return ConnectionNumber <p>Number of connections</p>
                     * 
                     */
                    int64_t GetConnectionNumber() const;

                    /**
                     * 设置<p>Number of connections</p>
                     * @param _connectionNumber <p>Number of connections</p>
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
                     * 获取<p>Number of consumers</p>
                     * @return ConsumerNumber <p>Number of consumers</p>
                     * 
                     */
                    int64_t GetConsumerNumber() const;

                    /**
                     * 设置<p>Number of consumers</p>
                     * @param _consumerNumber <p>Number of consumers</p>
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
                     * 获取<p>Number of Exchanges</p>
                     * @return ExchangeNumber <p>Number of Exchanges</p>
                     * 
                     */
                    int64_t GetExchangeNumber() const;

                    /**
                     * 设置<p>Number of Exchanges</p>
                     * @param _exchangeNumber <p>Number of Exchanges</p>
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
                     * 获取<p>Cluster exception information</p>
                     * @return ExceptionInformation <p>Cluster exception information</p>
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置<p>Cluster exception information</p>
                     * @param _exceptionInformation <p>Cluster exception information</p>
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
                     * 获取<p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     * @return ClusterStatus <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置<p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     * @param _clusterStatus <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
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
                     * 获取<p>Automatic renewal flag. 0: default status (initial status (that is manual renewal) if no status is set by the user); 1: automatic renewal; 2: no automatic renewal (set by the user).</p>
                     * @return AutoRenewFlag <p>Automatic renewal flag. 0: default status (initial status (that is manual renewal) if no status is set by the user); 1: automatic renewal; 2: no automatic renewal (set by the user).</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Automatic renewal flag. 0: default status (initial status (that is manual renewal) if no status is set by the user); 1: automatic renewal; 2: no automatic renewal (set by the user).</p>
                     * @param _autoRenewFlag <p>Automatic renewal flag. 0: default status (initial status (that is manual renewal) if no status is set by the user); 1: automatic renewal; 2: no automatic renewal (set by the user).</p>
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
                     * 获取<p>Whether to enable the mirror queue policy. 1 means enabled, 0 means disabled.</p>
                     * @return MirrorQueuePolicyFlag <p>Whether to enable the mirror queue policy. 1 means enabled, 0 means disabled.</p>
                     * 
                     */
                    int64_t GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置<p>Whether to enable the mirror queue policy. 1 means enabled, 0 means disabled.</p>
                     * @param _mirrorQueuePolicyFlag <p>Whether to enable the mirror queue policy. 1 means enabled, 0 means disabled.</p>
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
                     * 获取<p>Number of messages consumed per second Unit: messages/second</p>
                     * @return MessageConsumeRate <p>Number of messages consumed per second Unit: messages/second</p>
                     * 
                     */
                    double GetMessageConsumeRate() const;

                    /**
                     * 设置<p>Number of messages consumed per second Unit: messages/second</p>
                     * @param _messageConsumeRate <p>Number of messages consumed per second Unit: messages/second</p>
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
                     * 获取<p>Cluster version information</p>
                     * @return ClusterVersion <p>Cluster version information</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>Cluster version information</p>
                     * @param _clusterVersion <p>Cluster version information</p>
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
                     * 获取<p>Billing mode. 0 - Postpaid, 1 - Prepaid</p>
                     * @return PayMode <p>Billing mode. 0 - Postpaid, 1 - Prepaid</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>Billing mode. 0 - Postpaid, 1 - Prepaid</p>
                     * @param _payMode <p>Billing mode. 0 - Postpaid, 1 - Prepaid</p>
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
                     * 获取<p>Cluster type.</p>
                     * @return InstanceType <p>Cluster type.</p>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>Cluster type.</p>
                     * @param _instanceType <p>Cluster type.</p>
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
                     * 获取<p>Message retention period Unit: hour</p>
                     * @return MessageRetainTime <p>Message retention period Unit: hour</p>
                     * 
                     */
                    uint64_t GetMessageRetainTime() const;

                    /**
                     * 设置<p>Message retention period Unit: hour</p>
                     * @param _messageRetainTime <p>Message retention period Unit: hour</p>
                     * 
                     */
                    void SetMessageRetainTime(const uint64_t& _messageRetainTime);

                    /**
                     * 判断参数 MessageRetainTime 是否已赋值
                     * @return MessageRetainTime 是否已赋值
                     * 
                     */
                    bool MessageRetainTimeHasBeenSet() const;

                    /**
                     * 获取<p>Traffic ratio of sending messages</p>
                     * @return SendReceiveRatio <p>Traffic ratio of sending messages</p>
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置<p>Traffic ratio of sending messages</p>
                     * @param _sendReceiveRatio <p>Traffic ratio of sending messages</p>
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                    /**
                     * 获取<p>Message trace retention time in hours</p>
                     * @return TraceTime <p>Message trace retention time in hours</p>
                     * 
                     */
                    uint64_t GetTraceTime() const;

                    /**
                     * 设置<p>Message trace retention time in hours</p>
                     * @param _traceTime <p>Message trace retention time in hours</p>
                     * 
                     */
                    void SetTraceTime(const uint64_t& _traceTime);

                    /**
                     * 判断参数 TraceTime 是否已赋值
                     * @return TraceTime 是否已赋值
                     * 
                     */
                    bool TraceTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance tag list</p>
                     * @return Tags <p>Instance tag list</p>
                     * 
                     */
                    std::vector<RabbitMQServerlessTag> GetTags() const;

                    /**
                     * 设置<p>Instance tag list</p>
                     * @param _tags <p>Instance tag list</p>
                     * 
                     */
                    void SetTags(const std::vector<RabbitMQServerlessTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Elastic scaling enabled tps</p>
                     * @return ElasticTpsFlag <p>Elastic scaling enabled tps</p>
                     * 
                     */
                    bool GetElasticTpsFlag() const;

                    /**
                     * 设置<p>Elastic scaling enabled tps</p>
                     * @param _elasticTpsFlag <p>Elastic scaling enabled tps</p>
                     * 
                     */
                    void SetElasticTpsFlag(const bool& _elasticTpsFlag);

                    /**
                     * 判断参数 ElasticTpsFlag 是否已赋值
                     * @return ElasticTpsFlag 是否已赋值
                     * 
                     */
                    bool ElasticTpsFlagHasBeenSet() const;

                    /**
                     * 获取<p>Elastic tps multiple, default is 1x</p>
                     * @return ElasticTpsRatio <p>Elastic tps multiple, default is 1x</p>
                     * 
                     */
                    double GetElasticTpsRatio() const;

                    /**
                     * 设置<p>Elastic tps multiple, default is 1x</p>
                     * @param _elasticTpsRatio <p>Elastic tps multiple, default is 1x</p>
                     * 
                     */
                    void SetElasticTpsRatio(const double& _elasticTpsRatio);

                    /**
                     * 判断参数 ElasticTpsRatio 是否已赋值
                     * @return ElasticTpsRatio 是否已赋值
                     * 
                     */
                    bool ElasticTpsRatioHasBeenSet() const;

                    /**
                     * 获取<p>Maximum retry count</p>
                     * @return MaxRedeliverCount <p>Maximum retry count</p>
                     * 
                     */
                    uint64_t GetMaxRedeliverCount() const;

                    /**
                     * 设置<p>Maximum retry count</p>
                     * @param _maxRedeliverCount <p>Maximum retry count</p>
                     * 
                     */
                    void SetMaxRedeliverCount(const uint64_t& _maxRedeliverCount);

                    /**
                     * 判断参数 MaxRedeliverCount 是否已赋值
                     * @return MaxRedeliverCount 是否已赋值
                     * 
                     */
                    bool MaxRedeliverCountHasBeenSet() const;

                    /**
                     * 获取<p>Consumption timeout period Unit: min</p>
                     * @return ConsumerTimeout <p>Consumption timeout period Unit: min</p>
                     * 
                     */
                    uint64_t GetConsumerTimeout() const;

                    /**
                     * 设置<p>Consumption timeout period Unit: min</p>
                     * @param _consumerTimeout <p>Consumption timeout period Unit: min</p>
                     * 
                     */
                    void SetConsumerTimeout(const uint64_t& _consumerTimeout);

                    /**
                     * 判断参数 ConsumerTimeout 是否已赋值
                     * @return ConsumerTimeout 是否已赋值
                     * 
                     */
                    bool ConsumerTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Regional information</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Creation time in milliseconds</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Cluster description information</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>VPC and network info</p>
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * <p>AZ information</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>Number of virtual hosts</p>
                     */
                    int64_t m_virtualHostNumber;
                    bool m_virtualHostNumberHasBeenSet;

                    /**
                     * <p>Number of queues</p>
                     */
                    int64_t m_queueNumber;
                    bool m_queueNumberHasBeenSet;

                    /**
                     * <p>Number of messages produced per second Unit: messages/second</p>
                     */
                    double m_messagePublishRate;
                    bool m_messagePublishRateHasBeenSet;

                    /**
                     * <p>Number of accumulated messages Unit: unit</p>
                     */
                    int64_t m_messageStackNumber;
                    bool m_messageStackNumberHasBeenSet;

                    /**
                     * <p>Expiration time</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Number of channels</p>
                     */
                    int64_t m_channelNumber;
                    bool m_channelNumberHasBeenSet;

                    /**
                     * <p>Number of connections</p>
                     */
                    int64_t m_connectionNumber;
                    bool m_connectionNumberHasBeenSet;

                    /**
                     * <p>Number of consumers</p>
                     */
                    int64_t m_consumerNumber;
                    bool m_consumerNumberHasBeenSet;

                    /**
                     * <p>Number of Exchanges</p>
                     */
                    int64_t m_exchangeNumber;
                    bool m_exchangeNumberHasBeenSet;

                    /**
                     * <p>Cluster exception information</p>
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>Automatic renewal flag. 0: default status (initial status (that is manual renewal) if no status is set by the user); 1: automatic renewal; 2: no automatic renewal (set by the user).</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Whether to enable the mirror queue policy. 1 means enabled, 0 means disabled.</p>
                     */
                    int64_t m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                    /**
                     * <p>Number of messages consumed per second Unit: messages/second</p>
                     */
                    double m_messageConsumeRate;
                    bool m_messageConsumeRateHasBeenSet;

                    /**
                     * <p>Cluster version information</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>Billing mode. 0 - Postpaid, 1 - Prepaid</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Cluster type.</p>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Message retention period Unit: hour</p>
                     */
                    uint64_t m_messageRetainTime;
                    bool m_messageRetainTimeHasBeenSet;

                    /**
                     * <p>Traffic ratio of sending messages</p>
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * <p>Message trace retention time in hours</p>
                     */
                    uint64_t m_traceTime;
                    bool m_traceTimeHasBeenSet;

                    /**
                     * <p>Instance tag list</p>
                     */
                    std::vector<RabbitMQServerlessTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Elastic scaling enabled tps</p>
                     */
                    bool m_elasticTpsFlag;
                    bool m_elasticTpsFlagHasBeenSet;

                    /**
                     * <p>Elastic tps multiple, default is 1x</p>
                     */
                    double m_elasticTpsRatio;
                    bool m_elasticTpsRatioHasBeenSet;

                    /**
                     * <p>Maximum retry count</p>
                     */
                    uint64_t m_maxRedeliverCount;
                    bool m_maxRedeliverCountHasBeenSet;

                    /**
                     * <p>Consumption timeout period Unit: min</p>
                     */
                    uint64_t m_consumerTimeout;
                    bool m_consumerTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERINFO_H_
