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
                     * 获取ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @return InstanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @param _instanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
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
                     * 获取Maximum retention time of instance logs, in minutes, with a value range of 1min to 90 days.
                     * @return MsgRetentionTime Maximum retention time of instance logs, in minutes, with a value range of 1min to 90 days.
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置Maximum retention time of instance logs, in minutes, with a value range of 1min to 90 days.
                     * @param _msgRetentionTime Maximum retention time of instance logs, in minutes, with a value range of 1min to 90 days.
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
                     * 获取Specifies the Name of the ckafka cluster instance.
                     * @return InstanceName Specifies the Name of the ckafka cluster instance.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Specifies the Name of the ckafka cluster instance.
                     * @param _instanceName Specifies the Name of the ckafka cluster instance.
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
                     * 获取Instance configuration
                     * @return Config Instance configuration
                     * 
                     */
                    ModifyInstanceAttributesConfig GetConfig() const;

                    /**
                     * 设置Instance configuration
                     * @param _config Instance configuration
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
                     * 获取Dynamic message retention policy configuration
                     * @return DynamicRetentionConfig Dynamic message retention policy configuration
                     * 
                     */
                    DynamicRetentionTime GetDynamicRetentionConfig() const;

                    /**
                     * 设置Dynamic message retention policy configuration
                     * @param _dynamicRetentionConfig Dynamic message retention policy configuration
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
                     * 获取Specifies the execution time of a scheduled task for edition upgrade or configuration upgrade in Unix timestamp, accurate to the second.
                     * @return RebalanceTime Specifies the execution time of a scheduled task for edition upgrade or configuration upgrade in Unix timestamp, accurate to the second.
                     * 
                     */
                    int64_t GetRebalanceTime() const;

                    /**
                     * 设置Specifies the execution time of a scheduled task for edition upgrade or configuration upgrade in Unix timestamp, accurate to the second.
                     * @param _rebalanceTime Specifies the execution time of a scheduled task for edition upgrade or configuration upgrade in Unix timestamp, accurate to the second.
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
                     * 获取Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     * @return PublicNetwork Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     * @param _publicNetwork Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
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
                     * 获取Dynamic disk expansion policy configuration.
                     * @return DynamicDiskConfig Dynamic disk expansion policy configuration.
                     * @deprecated
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置Dynamic disk expansion policy configuration.
                     * @param _dynamicDiskConfig Dynamic disk expansion policy configuration.
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
                     * 获取Single message size at the instance level (unit: byte). value range: 1024 (excluding) to 12582912 (excluding).
                     * @return MaxMessageByte Single message size at the instance level (unit: byte). value range: 1024 (excluding) to 12582912 (excluding).
                     * 
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置Single message size at the instance level (unit: byte). value range: 1024 (excluding) to 12582912 (excluding).
                     * @param _maxMessageByte Single message size at the instance level (unit: byte). value range: 1024 (excluding) to 12582912 (excluding).
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
                     * 获取Whether to allow unsynchronized replicas to be elected as leader. valid values: 1 (enable), 0 (disable).
                     * @return UncleanLeaderElectionEnable Whether to allow unsynchronized replicas to be elected as leader. valid values: 1 (enable), 0 (disable).
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置Whether to allow unsynchronized replicas to be elected as leader. valid values: 1 (enable), 0 (disable).
                     * @param _uncleanLeaderElectionEnable Whether to allow unsynchronized replicas to be elected as leader. valid values: 1 (enable), 0 (disable).
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
                     * 获取Instance deletion protection switch. 1: enabled; 0: disabled.
                     * @return DeleteProtectionEnable Instance deletion protection switch. 1: enabled; 0: disabled.
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置Instance deletion protection switch. 1: enabled; 0: disabled.
                     * @param _deleteProtectionEnable Instance deletion protection switch. 1: enabled; 0: disabled.
                     * 
                     */
                    void SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable);

                    /**
                     * 判断参数 DeleteProtectionEnable 是否已赋值
                     * @return DeleteProtectionEnable 是否已赋值
                     * 
                     */
                    bool DeleteProtectionEnableHasBeenSet() const;

                private:

                    /**
                     * ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Maximum retention time of instance logs, in minutes, with a value range of 1min to 90 days.
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * Specifies the Name of the ckafka cluster instance.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance configuration
                     */
                    ModifyInstanceAttributesConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Dynamic message retention policy configuration
                     */
                    DynamicRetentionTime m_dynamicRetentionConfig;
                    bool m_dynamicRetentionConfigHasBeenSet;

                    /**
                     * Specifies the execution time of a scheduled task for edition upgrade or configuration upgrade in Unix timestamp, accurate to the second.
                     */
                    int64_t m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in.
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Dynamic disk expansion policy configuration.
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * Single message size at the instance level (unit: byte). value range: 1024 (excluding) to 12582912 (excluding).
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                    /**
                     * Whether to allow unsynchronized replicas to be elected as leader. valid values: 1 (enable), 0 (disable).
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * Instance deletion protection switch. 1: enabled; 0: disabled.
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
