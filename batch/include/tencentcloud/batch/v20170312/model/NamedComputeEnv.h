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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_NAMEDCOMPUTEENV_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_NAMEDCOMPUTEENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EnvData.h>
#include <tencentcloud/batch/v20170312/model/MountDataDisk.h>
#include <tencentcloud/batch/v20170312/model/Authentication.h>
#include <tencentcloud/batch/v20170312/model/InputMapping.h>
#include <tencentcloud/batch/v20170312/model/AgentRunningMode.h>
#include <tencentcloud/batch/v20170312/model/Notification.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compute environment
                */
                class NamedComputeEnv : public AbstractModel
                {
                public:
                    NamedComputeEnv();
                    ~NamedComputeEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compute environment name
                     * @return EnvName Compute environment name
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置Compute environment name
                     * @param EnvName Compute environment name
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取Number of desired compute nodes
                     * @return DesiredComputeNodeCount Number of desired compute nodes
                     */
                    int64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置Number of desired compute nodes
                     * @param DesiredComputeNodeCount Number of desired compute nodes
                     */
                    void SetDesiredComputeNodeCount(const int64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取Compute environment description
                     * @return EnvDescription Compute environment description
                     */
                    std::string GetEnvDescription() const;

                    /**
                     * 设置Compute environment description
                     * @param EnvDescription Compute environment description
                     */
                    void SetEnvDescription(const std::string& _envDescription);

                    /**
                     * 判断参数 EnvDescription 是否已赋值
                     * @return EnvDescription 是否已赋值
                     */
                    bool EnvDescriptionHasBeenSet() const;

                    /**
                     * 获取Compute environment management type
                     * @return EnvType Compute environment management type
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Compute environment management type
                     * @param EnvType Compute environment management type
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取Compute environment's specific parameters
                     * @return EnvData Compute environment's specific parameters
                     */
                    EnvData GetEnvData() const;

                    /**
                     * 设置Compute environment's specific parameters
                     * @param EnvData Compute environment's specific parameters
                     */
                    void SetEnvData(const EnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     */
                    bool EnvDataHasBeenSet() const;

                    /**
                     * 获取Data disk mounting option
                     * @return MountDataDisks Data disk mounting option
                     */
                    std::vector<MountDataDisk> GetMountDataDisks() const;

                    /**
                     * 设置Data disk mounting option
                     * @param MountDataDisks Data disk mounting option
                     */
                    void SetMountDataDisks(const std::vector<MountDataDisk>& _mountDataDisks);

                    /**
                     * 判断参数 MountDataDisks 是否已赋值
                     * @return MountDataDisks 是否已赋值
                     */
                    bool MountDataDisksHasBeenSet() const;

                    /**
                     * 获取Authorization information
                     * @return Authentications Authorization information
                     */
                    std::vector<Authentication> GetAuthentications() const;

                    /**
                     * 设置Authorization information
                     * @param Authentications Authorization information
                     */
                    void SetAuthentications(const std::vector<Authentication>& _authentications);

                    /**
                     * 判断参数 Authentications 是否已赋值
                     * @return Authentications 是否已赋值
                     */
                    bool AuthenticationsHasBeenSet() const;

                    /**
                     * 获取Input mapping information
                     * @return InputMappings Input mapping information
                     */
                    std::vector<InputMapping> GetInputMappings() const;

                    /**
                     * 设置Input mapping information
                     * @param InputMappings Input mapping information
                     */
                    void SetInputMappings(const std::vector<InputMapping>& _inputMappings);

                    /**
                     * 判断参数 InputMappings 是否已赋值
                     * @return InputMappings 是否已赋值
                     */
                    bool InputMappingsHasBeenSet() const;

                    /**
                     * 获取Agent running mode; applicable for Windows
                     * @return AgentRunningMode Agent running mode; applicable for Windows
                     */
                    AgentRunningMode GetAgentRunningMode() const;

                    /**
                     * 设置Agent running mode; applicable for Windows
                     * @param AgentRunningMode Agent running mode; applicable for Windows
                     */
                    void SetAgentRunningMode(const AgentRunningMode& _agentRunningMode);

                    /**
                     * 判断参数 AgentRunningMode 是否已赋值
                     * @return AgentRunningMode 是否已赋值
                     */
                    bool AgentRunningModeHasBeenSet() const;

                    /**
                     * 获取Notification information
                     * @return Notifications Notification information
                     */
                    Notification GetNotifications() const;

                    /**
                     * 设置Notification information
                     * @param Notifications Notification information
                     */
                    void SetNotifications(const Notification& _notifications);

                    /**
                     * 判断参数 Notifications 是否已赋值
                     * @return Notifications 是否已赋值
                     */
                    bool NotificationsHasBeenSet() const;

                    /**
                     * 获取Inactive node processing policy. Default value: RECREATE, which means that instance resources will be re-created periodically for compute nodes where instance creation fails or is abnormally returned.
                     * @return ActionIfComputeNodeInactive Inactive node processing policy. Default value: RECREATE, which means that instance resources will be re-created periodically for compute nodes where instance creation fails or is abnormally returned.
                     */
                    std::string GetActionIfComputeNodeInactive() const;

                    /**
                     * 设置Inactive node processing policy. Default value: RECREATE, which means that instance resources will be re-created periodically for compute nodes where instance creation fails or is abnormally returned.
                     * @param ActionIfComputeNodeInactive Inactive node processing policy. Default value: RECREATE, which means that instance resources will be re-created periodically for compute nodes where instance creation fails or is abnormally returned.
                     */
                    void SetActionIfComputeNodeInactive(const std::string& _actionIfComputeNodeInactive);

                    /**
                     * 判断参数 ActionIfComputeNodeInactive 是否已赋值
                     * @return ActionIfComputeNodeInactive 是否已赋值
                     */
                    bool ActionIfComputeNodeInactiveHasBeenSet() const;

                    /**
                     * 获取When the instances are failed to be created or returned because of exceptions, the related compute node will retry to create instances periodically. This parameter specifies the maximum retry attempts. The max value is 11 and the default value is 7.
                     * @return ResourceMaxRetryCount When the instances are failed to be created or returned because of exceptions, the related compute node will retry to create instances periodically. This parameter specifies the maximum retry attempts. The max value is 11 and the default value is 7.
                     */
                    int64_t GetResourceMaxRetryCount() const;

                    /**
                     * 设置When the instances are failed to be created or returned because of exceptions, the related compute node will retry to create instances periodically. This parameter specifies the maximum retry attempts. The max value is 11 and the default value is 7.
                     * @param ResourceMaxRetryCount When the instances are failed to be created or returned because of exceptions, the related compute node will retry to create instances periodically. This parameter specifies the maximum retry attempts. The max value is 11 and the default value is 7.
                     */
                    void SetResourceMaxRetryCount(const int64_t& _resourceMaxRetryCount);

                    /**
                     * 判断参数 ResourceMaxRetryCount 是否已赋值
                     * @return ResourceMaxRetryCount 是否已赋值
                     */
                    bool ResourceMaxRetryCountHasBeenSet() const;

                private:

                    /**
                     * Compute environment name
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * Number of desired compute nodes
                     */
                    int64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                    /**
                     * Compute environment description
                     */
                    std::string m_envDescription;
                    bool m_envDescriptionHasBeenSet;

                    /**
                     * Compute environment management type
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Compute environment's specific parameters
                     */
                    EnvData m_envData;
                    bool m_envDataHasBeenSet;

                    /**
                     * Data disk mounting option
                     */
                    std::vector<MountDataDisk> m_mountDataDisks;
                    bool m_mountDataDisksHasBeenSet;

                    /**
                     * Authorization information
                     */
                    std::vector<Authentication> m_authentications;
                    bool m_authenticationsHasBeenSet;

                    /**
                     * Input mapping information
                     */
                    std::vector<InputMapping> m_inputMappings;
                    bool m_inputMappingsHasBeenSet;

                    /**
                     * Agent running mode; applicable for Windows
                     */
                    AgentRunningMode m_agentRunningMode;
                    bool m_agentRunningModeHasBeenSet;

                    /**
                     * Notification information
                     */
                    Notification m_notifications;
                    bool m_notificationsHasBeenSet;

                    /**
                     * Inactive node processing policy. Default value: RECREATE, which means that instance resources will be re-created periodically for compute nodes where instance creation fails or is abnormally returned.
                     */
                    std::string m_actionIfComputeNodeInactive;
                    bool m_actionIfComputeNodeInactiveHasBeenSet;

                    /**
                     * When the instances are failed to be created or returned because of exceptions, the related compute node will retry to create instances periodically. This parameter specifies the maximum retry attempts. The max value is 11 and the default value is 7.
                     */
                    int64_t m_resourceMaxRetryCount;
                    bool m_resourceMaxRetryCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_NAMEDCOMPUTEENV_H_
