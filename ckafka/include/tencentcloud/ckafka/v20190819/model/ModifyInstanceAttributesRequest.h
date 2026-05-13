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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesConfig.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicRetentionTime.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicDiskConfig.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyInstanceAttributes request structure.
                */
                class ModifyInstanceAttributesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAttributesRequest();
                    ~ModifyInstanceAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * @return InstanceId <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * @param _instanceId <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
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
                     * 获取<p>Maximum retention time of instance log, in minutes, with a maximum of 90 days and a minimum of 1 min</p>
                     * @return MsgRetentionTime <p>Maximum retention time of instance log, in minutes, with a maximum of 90 days and a minimum of 1 min</p>
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置<p>Maximum retention time of instance log, in minutes, with a maximum of 90 days and a minimum of 1 min</p>
                     * @param _msgRetentionTime <p>Maximum retention time of instance log, in minutes, with a maximum of 90 days and a minimum of 1 min</p>
                     * 
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     * 
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取<p>ckafka cluster instance Name</p>
                     * @return InstanceName <p>ckafka cluster instance Name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ckafka cluster instance Name</p>
                     * @param _instanceName <p>ckafka cluster instance Name</p>
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
                     * 获取<p>Instance configuration</p>
                     * @return Config <p>Instance configuration</p>
                     * 
                     */
                    ModifyInstanceAttributesConfig GetConfig() const;

                    /**
                     * 设置<p>Instance configuration</p>
                     * @param _config <p>Instance configuration</p>
                     * 
                     */
                    void SetConfig(const ModifyInstanceAttributesConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>Dynamic message retention policy configuration</p>
                     * @return DynamicRetentionConfig <p>Dynamic message retention policy configuration</p>
                     * 
                     */
                    DynamicRetentionTime GetDynamicRetentionConfig() const;

                    /**
                     * 设置<p>Dynamic message retention policy configuration</p>
                     * @param _dynamicRetentionConfig <p>Dynamic message retention policy configuration</p>
                     * 
                     */
                    void SetDynamicRetentionConfig(const DynamicRetentionTime& _dynamicRetentionConfig);

                    /**
                     * 判断参数 DynamicRetentionConfig 是否已赋值
                     * @return DynamicRetentionConfig 是否已赋值
                     * 
                     */
                    bool DynamicRetentionConfigHasBeenSet() const;

                    /**
                     * 获取<p>Used to modify the scheduled task execution time for edition upgrade or upgrade version, Unix timestamp, accurate to the second</p>
                     * @return RebalanceTime <p>Used to modify the scheduled task execution time for edition upgrade or upgrade version, Unix timestamp, accurate to the second</p>
                     * 
                     */
                    int64_t GetRebalanceTime() const;

                    /**
                     * 设置<p>Used to modify the scheduled task execution time for edition upgrade or upgrade version, Unix timestamp, accurate to the second</p>
                     * @param _rebalanceTime <p>Used to modify the scheduled task execution time for edition upgrade or upgrade version, Unix timestamp, accurate to the second</p>
                     * 
                     */
                    void SetRebalanceTime(const int64_t& _rebalanceTime);

                    /**
                     * 判断参数 RebalanceTime 是否已赋值
                     * @return RebalanceTime 是否已赋值
                     * 
                     */
                    bool RebalanceTimeHasBeenSet() const;

                    /**
                     * 获取<p>Public network bandwidth: minimum 3Mbps, maximum 999Mbps. Only the Pro Edition supports filling in.</p>
                     * @return PublicNetwork <p>Public network bandwidth: minimum 3Mbps, maximum 999Mbps. Only the Pro Edition supports filling in.</p>
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<p>Public network bandwidth: minimum 3Mbps, maximum 999Mbps. Only the Pro Edition supports filling in.</p>
                     * @param _publicNetwork <p>Public network bandwidth: minimum 3Mbps, maximum 999Mbps. Only the Pro Edition supports filling in.</p>
                     * 
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取<p>Configure dynamic disk expansion policy</p>
                     * @return DynamicDiskConfig <p>Configure dynamic disk expansion policy</p>
                     * @deprecated
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置<p>Configure dynamic disk expansion policy</p>
                     * @param _dynamicDiskConfig <p>Configure dynamic disk expansion policy</p>
                     * @deprecated
                     */
                    void SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig);

                    /**
                     * 判断参数 DynamicDiskConfig 是否已赋值
                     * @return DynamicDiskConfig 是否已赋值
                     * @deprecated
                     */
                    bool DynamicDiskConfigHasBeenSet() const;

                    /**
                     * 获取<p>Single message size at the instance level (unit: byte) Maximum 12582912 (excluding) Minimum 1024 (excluding)</p>
                     * @return MaxMessageByte <p>Single message size at the instance level (unit: byte) Maximum 12582912 (excluding) Minimum 1024 (excluding)</p>
                     * 
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置<p>Single message size at the instance level (unit: byte) Maximum 12582912 (excluding) Minimum 1024 (excluding)</p>
                     * @param _maxMessageByte <p>Single message size at the instance level (unit: byte) Maximum 12582912 (excluding) Minimum 1024 (excluding)</p>
                     * 
                     */
                    void SetMaxMessageByte(const uint64_t& _maxMessageByte);

                    /**
                     * 判断参数 MaxMessageByte 是否已赋值
                     * @return MaxMessageByte 是否已赋值
                     * 
                     */
                    bool MaxMessageByteHasBeenSet() const;

                    /**
                     * 获取<p>Whether to allow unsynchronized replicas to be elected as leader: 1 Enable 0 Disable</p>
                     * @return UncleanLeaderElectionEnable <p>Whether to allow unsynchronized replicas to be elected as leader: 1 Enable 0 Disable</p>
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置<p>Whether to allow unsynchronized replicas to be elected as leader: 1 Enable 0 Disable</p>
                     * @param _uncleanLeaderElectionEnable <p>Whether to allow unsynchronized replicas to be elected as leader: 1 Enable 0 Disable</p>
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取<p>Instance deletion protection switch: 1: enabled 0: disabled</p>
                     * @return DeleteProtectionEnable <p>Instance deletion protection switch: 1: enabled 0: disabled</p>
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置<p>Instance deletion protection switch: 1: enabled 0: disabled</p>
                     * @param _deleteProtectionEnable <p>Instance deletion protection switch: 1: enabled 0: disabled</p>
                     * 
                     */
                    void SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable);

                    /**
                     * 判断参数 DeleteProtectionEnable 是否已赋值
                     * @return DeleteProtectionEnable 是否已赋值
                     * 
                     */
                    bool DeleteProtectionEnableHasBeenSet() const;

                    /**
                     * 获取<p>Message retention size at the instance level</p>Measurement unit: byte<br>Default value: -1<br><p>Message retention size at the instance level</p>
                     * @return RetentionBytes <p>Message retention size at the instance level</p>Measurement unit: byte<br>Default value: -1<br><p>Message retention size at the instance level</p>
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置<p>Message retention size at the instance level</p>Measurement unit: byte<br>Default value: -1<br><p>Message retention size at the instance level</p>
                     * @param _retentionBytes <p>Message retention size at the instance level</p>Measurement unit: byte<br>Default value: -1<br><p>Message retention size at the instance level</p>
                     * 
                     */
                    void SetRetentionBytes(const int64_t& _retentionBytes);

                    /**
                     * 判断参数 RetentionBytes 是否已赋值
                     * @return RetentionBytes 是否已赋值
                     * 
                     */
                    bool RetentionBytesHasBeenSet() const;

                    /**
                     * 获取<p>Ban Status for high-risk admin interface; true to ban high-risk adminApi; no support for turning on after closing, only supported in Pro Edition; default false, no action taken for high-risk admin interface</p>
                     * @return AdminSecurity <p>Ban Status for high-risk admin interface; true to ban high-risk adminApi; no support for turning on after closing, only supported in Pro Edition; default false, no action taken for high-risk admin interface</p>
                     * 
                     */
                    bool GetAdminSecurity() const;

                    /**
                     * 设置<p>Ban Status for high-risk admin interface; true to ban high-risk adminApi; no support for turning on after closing, only supported in Pro Edition; default false, no action taken for high-risk admin interface</p>
                     * @param _adminSecurity <p>Ban Status for high-risk admin interface; true to ban high-risk adminApi; no support for turning on after closing, only supported in Pro Edition; default false, no action taken for high-risk admin interface</p>
                     * 
                     */
                    void SetAdminSecurity(const bool& _adminSecurity);

                    /**
                     * 判断参数 AdminSecurity 是否已赋值
                     * @return AdminSecurity 是否已赋值
                     * 
                     */
                    bool AdminSecurityHasBeenSet() const;

                    /**
                     * 获取<p>The maximum idle time of a transaction ID. Uncommitted transactions that time out will be marked with expiration.</p>Value ranges from 3600000 to 604800000.<br>Unit: ms
                     * @return TransactionalIdExpirationMs <p>The maximum idle time of a transaction ID. Uncommitted transactions that time out will be marked with expiration.</p>Value ranges from 3600000 to 604800000.<br>Unit: ms
                     * 
                     */
                    int64_t GetTransactionalIdExpirationMs() const;

                    /**
                     * 设置<p>The maximum idle time of a transaction ID. Uncommitted transactions that time out will be marked with expiration.</p>Value ranges from 3600000 to 604800000.<br>Unit: ms
                     * @param _transactionalIdExpirationMs <p>The maximum idle time of a transaction ID. Uncommitted transactions that time out will be marked with expiration.</p>Value ranges from 3600000 to 604800000.<br>Unit: ms
                     * 
                     */
                    void SetTransactionalIdExpirationMs(const int64_t& _transactionalIdExpirationMs);

                    /**
                     * 判断参数 TransactionalIdExpirationMs 是否已赋值
                     * @return TransactionalIdExpirationMs 是否已赋值
                     * 
                     */
                    bool TransactionalIdExpirationMsHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Maximum retention time of instance log, in minutes, with a maximum of 90 days and a minimum of 1 min</p>
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * <p>ckafka cluster instance Name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance configuration</p>
                     */
                    ModifyInstanceAttributesConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Dynamic message retention policy configuration</p>
                     */
                    DynamicRetentionTime m_dynamicRetentionConfig;
                    bool m_dynamicRetentionConfigHasBeenSet;

                    /**
                     * <p>Used to modify the scheduled task execution time for edition upgrade or upgrade version, Unix timestamp, accurate to the second</p>
                     */
                    int64_t m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * <p>Public network bandwidth: minimum 3Mbps, maximum 999Mbps. Only the Pro Edition supports filling in.</p>
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <p>Configure dynamic disk expansion policy</p>
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * <p>Single message size at the instance level (unit: byte) Maximum 12582912 (excluding) Minimum 1024 (excluding)</p>
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                    /**
                     * <p>Whether to allow unsynchronized replicas to be elected as leader: 1 Enable 0 Disable</p>
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * <p>Instance deletion protection switch: 1: enabled 0: disabled</p>
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                    /**
                     * <p>Message retention size at the instance level</p>Measurement unit: byte<br>Default value: -1<br><p>Message retention size at the instance level</p>
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * <p>Ban Status for high-risk admin interface; true to ban high-risk adminApi; no support for turning on after closing, only supported in Pro Edition; default false, no action taken for high-risk admin interface</p>
                     */
                    bool m_adminSecurity;
                    bool m_adminSecurityHasBeenSet;

                    /**
                     * <p>The maximum idle time of a transaction ID. Uncommitted transactions that time out will be marked with expiration.</p>Value ranges from 3600000 to 604800000.<br>Unit: ms
                     */
                    int64_t m_transactionalIdExpirationMs;
                    bool m_transactionalIdExpirationMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
