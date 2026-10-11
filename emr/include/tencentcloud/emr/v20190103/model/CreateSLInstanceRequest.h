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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/PrePaySetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateSLInstance request structure.
                */
                class CreateSLInstanceRequest : public AbstractModel
                {
                public:
                    CreateSLInstanceRequest();
                    ~CreateSLInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取Instance billing mode. Valid values: 0 (postpaid, that is, pay-as-you-go) and 1 (prepaid, that is, yearly/monthly subscription).
                     * @return PayMode Instance billing mode. Valid values: 0 (postpaid, that is, pay-as-you-go) and 1 (prepaid, that is, yearly/monthly subscription).
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Valid values: 0 (postpaid, that is, pay-as-you-go) and 1 (prepaid, that is, yearly/monthly subscription).
                     * @param _payMode Instance billing mode. Valid values: 0 (postpaid, that is, pay-as-you-go) and 1 (prepaid, that is, yearly/monthly subscription).
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Instance storage type. Valid values: CLOUD_HSSD (Enhanced SSD) and CLOUD_BSSD (Balanced SSD).
                     * @return DiskType Instance storage type. Valid values: CLOUD_HSSD (Enhanced SSD) and CLOUD_BSSD (Balanced SSD).
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Instance storage type. Valid values: CLOUD_HSSD (Enhanced SSD) and CLOUD_BSSD (Balanced SSD).
                     * @param _diskType Instance storage type. Valid values: CLOUD_HSSD (Enhanced SSD) and CLOUD_BSSD (Balanced SSD).
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Disk capacity of a single node of the instance (GB). The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     * @return DiskSize Disk capacity of a single node of the instance (GB). The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk capacity of a single node of the instance (GB). The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     * @param _diskSize Disk capacity of a single node of the instance (GB). The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Instance node specifications. Valid values: 4C16G, 8C32G, 16C64G, and 32C128G. The value is case-insensitive.
                     * @return NodeType Instance node specifications. Valid values: 4C16G, 8C32G, 16C64G, and 32C128G. The value is case-insensitive.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Instance node specifications. Valid values: 4C16G, 8C32G, 16C64G, and 32C128G. The value is case-insensitive.
                     * @param _nodeType Instance node specifications. Valid values: 4C16G, 8C32G, 16C64G, and 32C128G. The value is case-insensitive.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Detailed configuration of the instance AZ, including the region name, VPC information, and number of nodes. Currently, multiple AZs are supported. The number of AZs must be 1 or 3, and the total number of nodes across all AZs must be greater than or equal to 3 and less than or equal to 50.
                     * @return ZoneSettings Detailed configuration of the instance AZ, including the region name, VPC information, and number of nodes. Currently, multiple AZs are supported. The number of AZs must be 1 or 3, and the total number of nodes across all AZs must be greater than or equal to 3 and less than or equal to 50.
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 设置Detailed configuration of the instance AZ, including the region name, VPC information, and number of nodes. Currently, multiple AZs are supported. The number of AZs must be 1 or 3, and the total number of nodes across all AZs must be greater than or equal to 3 and less than or equal to 50.
                     * @param _zoneSettings Detailed configuration of the instance AZ, including the region name, VPC information, and number of nodes. Currently, multiple AZs are supported. The number of AZs must be 1 or 3, and the total number of nodes across all AZs must be greater than or equal to 3 and less than or equal to 50.
                     * 
                     */
                    void SetZoneSettings(const std::vector<ZoneSetting>& _zoneSettings);

                    /**
                     * 判断参数 ZoneSettings 是否已赋值
                     * @return ZoneSettings 是否已赋值
                     * 
                     */
                    bool ZoneSettingsHasBeenSet() const;

                    /**
                     * 获取List of tags to be bound to the instance.
                     * @return Tags List of tags to be bound to the instance.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be bound to the instance.
                     * @param _tags List of tags to be bound to the instance.
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
                     * 获取Prepaid parameter.
                     * @return PrePaySetting Prepaid parameter.
                     * 
                     */
                    PrePaySetting GetPrePaySetting() const;

                    /**
                     * 设置Prepaid parameter.
                     * @param _prePaySetting Prepaid parameter.
                     * 
                     */
                    void SetPrePaySetting(const PrePaySetting& _prePaySetting);

                    /**
                     * 判断参数 PrePaySetting 是否已赋值
                     * @return PrePaySetting 是否已赋值
                     * 
                     */
                    bool PrePaySettingHasBeenSet() const;

                    /**
                     * 获取Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-****-****-****-fae360632808.
                     * @return ClientToken Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-****-****-****-fae360632808.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-****-****-****-fae360632808.
                     * @param _clientToken Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-****-****-****-fae360632808.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Deployment mode.
                     * @return DeploymentMode Deployment mode.
                     * 
                     */
                    std::string GetDeploymentMode() const;

                    /**
                     * 设置Deployment mode.
                     * @param _deploymentMode Deployment mode.
                     * 
                     */
                    void SetDeploymentMode(const std::string& _deploymentMode);

                    /**
                     * 判断参数 DeploymentMode 是否已赋值
                     * @return DeploymentMode 是否已赋值
                     * 
                     */
                    bool DeploymentModeHasBeenSet() const;

                    /**
                     * 获取Service username, which is optional for services without the need to set usernames. The value can contain 8 to 16 characters, including uppercase letters, lowercase letters, and digits.
                     * @return UserName Service username, which is optional for services without the need to set usernames. The value can contain 8 to 16 characters, including uppercase letters, lowercase letters, and digits.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Service username, which is optional for services without the need to set usernames. The value can contain 8 to 16 characters, including uppercase letters, lowercase letters, and digits.
                     * @param _userName Service username, which is optional for services without the need to set usernames. The value can contain 8 to 16 characters, including uppercase letters, lowercase letters, and digits.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing mode. Valid values: 0 (postpaid, that is, pay-as-you-go) and 1 (prepaid, that is, yearly/monthly subscription).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance storage type. Valid values: CLOUD_HSSD (Enhanced SSD) and CLOUD_BSSD (Balanced SSD).
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk capacity of a single node of the instance (GB). The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Instance node specifications. Valid values: 4C16G, 8C32G, 16C64G, and 32C128G. The value is case-insensitive.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Detailed configuration of the instance AZ, including the region name, VPC information, and number of nodes. Currently, multiple AZs are supported. The number of AZs must be 1 or 3, and the total number of nodes across all AZs must be greater than or equal to 3 and less than or equal to 50.
                     */
                    std::vector<ZoneSetting> m_zoneSettings;
                    bool m_zoneSettingsHasBeenSet;

                    /**
                     * List of tags to be bound to the instance.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Prepaid parameter.
                     */
                    PrePaySetting m_prePaySetting;
                    bool m_prePaySettingHasBeenSet;

                    /**
                     * Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-****-****-****-fae360632808.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Deployment mode.
                     */
                    std::string m_deploymentMode;
                    bool m_deploymentModeHasBeenSet;

                    /**
                     * Service username, which is optional for services without the need to set usernames. The value can contain 8 to 16 characters, including uppercase letters, lowercase letters, and digits.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_
