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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     * @return MsgRetentionTime Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     * @param MsgRetentionTime Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     * @return InstanceName Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     * @param InstanceName Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance configuration
                     * @return Config Instance configuration
                     */
                    ModifyInstanceAttributesConfig GetConfig() const;

                    /**
                     * 设置Instance configuration
                     * @param Config Instance configuration
                     */
                    void SetConfig(const ModifyInstanceAttributesConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Dynamic message retention policy configuration
                     * @return DynamicRetentionConfig Dynamic message retention policy configuration
                     */
                    DynamicRetentionTime GetDynamicRetentionConfig() const;

                    /**
                     * 设置Dynamic message retention policy configuration
                     * @param DynamicRetentionConfig Dynamic message retention policy configuration
                     */
                    void SetDynamicRetentionConfig(const DynamicRetentionTime& _dynamicRetentionConfig);

                    /**
                     * 判断参数 DynamicRetentionConfig 是否已赋值
                     * @return DynamicRetentionConfig 是否已赋值
                     */
                    bool DynamicRetentionConfigHasBeenSet() const;

                    /**
                     * 获取Modification of the rebalancing time after upgrade
                     * @return RebalanceTime Modification of the rebalancing time after upgrade
                     */
                    int64_t GetRebalanceTime() const;

                    /**
                     * 设置Modification of the rebalancing time after upgrade
                     * @param RebalanceTime Modification of the rebalancing time after upgrade
                     */
                    void SetRebalanceTime(const int64_t& _rebalanceTime);

                    /**
                     * 判断参数 RebalanceTime 是否已赋值
                     * @return RebalanceTime 是否已赋值
                     */
                    bool RebalanceTimeHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth
                     * @return PublicNetwork Public network bandwidth
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth
                     * @param PublicNetwork Public network bandwidth
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取Dynamic disk expansion policy configuration.
                     * @return DynamicDiskConfig Dynamic disk expansion policy configuration.
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置Dynamic disk expansion policy configuration.
                     * @param DynamicDiskConfig Dynamic disk expansion policy configuration.
                     */
                    void SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig);

                    /**
                     * 判断参数 DynamicDiskConfig 是否已赋值
                     * @return DynamicDiskConfig 是否已赋值
                     */
                    bool DynamicDiskConfigHasBeenSet() const;

                    /**
                     * 获取The size of a single message in bytes at the instance level.
                     * @return MaxMessageByte The size of a single message in bytes at the instance level.
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置The size of a single message in bytes at the instance level.
                     * @param MaxMessageByte The size of a single message in bytes at the instance level.
                     */
                    void SetMaxMessageByte(const uint64_t& _maxMessageByte);

                    /**
                     * 判断参数 MaxMessageByte 是否已赋值
                     * @return MaxMessageByte 是否已赋值
                     */
                    bool MaxMessageByteHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
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
                     * Modification of the rebalancing time after upgrade
                     */
                    int64_t m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * Public network bandwidth
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Dynamic disk expansion policy configuration.
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * The size of a single message in bytes at the instance level.
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
