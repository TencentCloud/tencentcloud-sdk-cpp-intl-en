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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYCKAFKACONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYCKAFKACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Log shipping information configuration.
                */
                class LogDeliveryCkafkaConfig : public AbstractModel
                {
                public:
                    LogDeliveryCkafkaConfig();
                    ~LogDeliveryCkafkaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Access type</p>
                     * @return VipType <p>Access type</p>
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<p>Access type</p>
                     * @param _vipType <p>Access type</p>
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Virtual IP VipType is 7, valid</p>
                     * @return Vip <p>Virtual IP VipType is 7, valid</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Virtual IP VipType is 7, valid</p>
                     * @param _vip <p>Virtual IP VipType is 7, valid</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>The virtual port VipType is 7 valid</p>
                     * @return Vport <p>The virtual port VipType is 7 valid</p>
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置<p>The virtual port VipType is 7 valid</p>
                     * @param _vport <p>The virtual port VipType is 7 valid</p>
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>The domain name is valid when VipType is 1.</p>
                     * @return Domain <p>The domain name is valid when VipType is 1.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>The domain name is valid when VipType is 1.</p>
                     * @param _domain <p>The domain name is valid when VipType is 1.</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Domain port VipType is 1 and valid</p>
                     * @return DomainPort <p>Domain port VipType is 1 and valid</p>
                     * 
                     */
                    std::string GetDomainPort() const;

                    /**
                     * 设置<p>Domain port VipType is 1 and valid</p>
                     * @param _domainPort <p>Domain port VipType is 1 and valid</p>
                     * 
                     */
                    void SetDomainPort(const std::string& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取<p>Region</p>
                     * @return RegionId <p>Region</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>Region</p>
                     * @param _regionId <p>Region</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance vpc</p>
                     * @return VpcId <p>Instance vpc</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Instance vpc</p>
                     * @param _vpcId <p>Instance vpc</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance subnet</p>
                     * @return SubnetId <p>Instance subnet</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Instance subnet</p>
                     * @param _subnetId <p>Instance subnet</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance health status. 1: healthy, 2: warning, 3: abnormal, 4: instance does not exist</p>
                     * @return Healthy <p>Instance health status. 1: healthy, 2: warning, 3: abnormal, 4: instance does not exist</p>
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置<p>Instance health status. 1: healthy, 2: warning, 3: abnormal, 4: instance does not exist</p>
                     * @param _healthy <p>Instance health status. 1: healthy, 2: warning, 3: abnormal, 4: instance does not exist</p>
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取<p>Log type.</p>
                     * @return LogType <p>Log type.</p>
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置<p>Log type.</p>
                     * @param _logType <p>Log type.</p>
                     * 
                     */
                    void SetLogType(const int64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Delivered Topic ID</p>
                     * @return TopicId <p>Delivered Topic ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Delivered Topic ID</p>
                     * @param _topicId <p>Delivered Topic ID</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Delivered topicname</p>
                     * @return TopicName <p>Delivered topicname</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Delivered topicname</p>
                     * @param _topicName <p>Delivered topicname</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>Delivery status</p>
                     * @return Status <p>Delivery status</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Delivery status</p>
                     * @param _status <p>Delivery status</p>
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
                     * 获取<p>Status information</p>
                     * @return StatusMessages <p>Status information</p>
                     * 
                     */
                    std::string GetStatusMessages() const;

                    /**
                     * 设置<p>Status information</p>
                     * @param _statusMessages <p>Status information</p>
                     * 
                     */
                    void SetStatusMessages(const std::string& _statusMessages);

                    /**
                     * 判断参数 StatusMessages 是否已赋值
                     * @return StatusMessages 是否已赋值
                     * 
                     */
                    bool StatusMessagesHasBeenSet() const;

                    /**
                     * 获取<p>Enable or disable. Delivery status: 1 for enabled and 0 for disabled. It is enabled by default, but disabled if there is no topic.</p>
                     * @return IsOpen <p>Enable or disable. Delivery status: 1 for enabled and 0 for disabled. It is enabled by default, but disabled if there is no topic.</p>
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置<p>Enable or disable. Delivery status: 1 for enabled and 0 for disabled. It is enabled by default, but disabled if there is no topic.</p>
                     * @param _isOpen <p>Enable or disable. Delivery status: 1 for enabled and 0 for disabled. It is enabled by default, but disabled if there is no topic.</p>
                     * 
                     */
                    void SetIsOpen(const int64_t& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                private:

                    /**
                     * <p>Access type</p>
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Virtual IP VipType is 7, valid</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>The virtual port VipType is 7 valid</p>
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>The domain name is valid when VipType is 1.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Domain port VipType is 1 and valid</p>
                     */
                    std::string m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * <p>Region</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>Instance vpc</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Instance subnet</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Instance health status. 1: healthy, 2: warning, 3: abnormal, 4: instance does not exist</p>
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * <p>Log type.</p>
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Delivered Topic ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Delivered topicname</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Delivery status</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status information</p>
                     */
                    std::string m_statusMessages;
                    bool m_statusMessagesHasBeenSet;

                    /**
                     * <p>Enable or disable. Delivery status: 1 for enabled and 0 for disabled. It is enabled by default, but disabled if there is no topic.</p>
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYCKAFKACONFIG_H_
