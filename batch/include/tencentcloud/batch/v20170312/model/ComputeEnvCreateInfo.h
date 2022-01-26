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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVCREATEINFO_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EnvData.h>
#include <tencentcloud/batch/v20170312/model/MountDataDisk.h>
#include <tencentcloud/batch/v20170312/model/InputMapping.h>
#include <tencentcloud/batch/v20170312/model/Authentication.h>
#include <tencentcloud/batch/v20170312/model/Notification.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Compute environment creation information
                */
                class ComputeEnvCreateInfo : public AbstractModel
                {
                public:
                    ComputeEnvCreateInfo();
                    ~ComputeEnvCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compute environment ID
                     * @return EnvId Compute environment ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Compute environment ID
                     * @param EnvId Compute environment ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Compute environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnvName Compute environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置Compute environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnvName Compute environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取Compute environment description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnvDescription Compute environment description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvDescription() const;

                    /**
                     * 设置Compute environment description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnvDescription Compute environment description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnvDescription(const std::string& _envDescription);

                    /**
                     * 判断参数 EnvDescription 是否已赋值
                     * @return EnvDescription 是否已赋值
                     */
                    bool EnvDescriptionHasBeenSet() const;

                    /**
                     * 获取Compute environment type. Only "MANAGED" type is supported
                     * @return EnvType Compute environment type. Only "MANAGED" type is supported
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Compute environment type. Only "MANAGED" type is supported
                     * @param EnvType Compute environment type. Only "MANAGED" type is supported
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取Compute environment parameter
                     * @return EnvData Compute environment parameter
                     */
                    EnvData GetEnvData() const;

                    /**
                     * 设置Compute environment parameter
                     * @param EnvData Compute environment parameter
                     */
                    void SetEnvData(const EnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     */
                    bool EnvDataHasBeenSet() const;

                    /**
                     * 获取Data disk mounting option
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MountDataDisks Data disk mounting option
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MountDataDisk> GetMountDataDisks() const;

                    /**
                     * 设置Data disk mounting option
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MountDataDisks Data disk mounting option
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMountDataDisks(const std::vector<MountDataDisk>& _mountDataDisks);

                    /**
                     * 判断参数 MountDataDisks 是否已赋值
                     * @return MountDataDisks 是否已赋值
                     */
                    bool MountDataDisksHasBeenSet() const;

                    /**
                     * 获取Input mapping
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputMappings Input mapping
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InputMapping> GetInputMappings() const;

                    /**
                     * 设置Input mapping
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InputMappings Input mapping
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInputMappings(const std::vector<InputMapping>& _inputMappings);

                    /**
                     * 判断参数 InputMappings 是否已赋值
                     * @return InputMappings 是否已赋值
                     */
                    bool InputMappingsHasBeenSet() const;

                    /**
                     * 获取Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Authentications Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Authentication> GetAuthentications() const;

                    /**
                     * 设置Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Authentications Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthentications(const std::vector<Authentication>& _authentications);

                    /**
                     * 判断参数 Authentications 是否已赋值
                     * @return Authentications 是否已赋值
                     */
                    bool AuthenticationsHasBeenSet() const;

                    /**
                     * 获取Notification information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Notifications Notification information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Notification> GetNotifications() const;

                    /**
                     * 设置Notification information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Notifications Notification information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNotifications(const std::vector<Notification>& _notifications);

                    /**
                     * 判断参数 Notifications 是否已赋值
                     * @return Notifications 是否已赋值
                     */
                    bool NotificationsHasBeenSet() const;

                    /**
                     * 获取Number of desired compute nodes
                     * @return DesiredComputeNodeCount Number of desired compute nodes
                     */
                    uint64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置Number of desired compute nodes
                     * @param DesiredComputeNodeCount Number of desired compute nodes
                     */
                    void SetDesiredComputeNodeCount(const uint64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取Tag list of the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag list of the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list of the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Tags Tag list of the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Compute environment ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Compute environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * Compute environment description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_envDescription;
                    bool m_envDescriptionHasBeenSet;

                    /**
                     * Compute environment type. Only "MANAGED" type is supported
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Compute environment parameter
                     */
                    EnvData m_envData;
                    bool m_envDataHasBeenSet;

                    /**
                     * Data disk mounting option
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MountDataDisk> m_mountDataDisks;
                    bool m_mountDataDisksHasBeenSet;

                    /**
                     * Input mapping
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InputMapping> m_inputMappings;
                    bool m_inputMappingsHasBeenSet;

                    /**
                     * Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Authentication> m_authentications;
                    bool m_authenticationsHasBeenSet;

                    /**
                     * Notification information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Notification> m_notifications;
                    bool m_notificationsHasBeenSet;

                    /**
                     * Number of desired compute nodes
                     */
                    uint64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                    /**
                     * Tag list of the compute environment.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVCREATEINFO_H_
