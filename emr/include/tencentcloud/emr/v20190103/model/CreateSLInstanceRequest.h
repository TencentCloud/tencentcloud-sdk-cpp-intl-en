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
                     * 获取Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go.
                     * @return PayMode Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go.
                     * @param _payMode Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go.
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
                     * 获取Instance storage type. Fill in CLOUD_HSSD to represent high-performance cloud storage.
                     * @return DiskType Instance storage type. Fill in CLOUD_HSSD to represent high-performance cloud storage.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Instance storage type. Fill in CLOUD_HSSD to represent high-performance cloud storage.
                     * @param _diskType Instance storage type. Fill in CLOUD_HSSD to represent high-performance cloud storage.
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
                     * 获取The disk capacity of a single node of the instance, in GB. The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     * @return DiskSize The disk capacity of a single node of the instance, in GB. The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置The disk capacity of a single node of the instance, in GB. The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     * @param _diskSize The disk capacity of a single node of the instance, in GB. The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
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
                     * 获取Instance node specification. You can fill in 4C16G, 8C32G, 16C64G, or 32C128G, which is case-insensitive.
                     * @return NodeType Instance node specification. You can fill in 4C16G, 8C32G, 16C64G, or 32C128G, which is case-insensitive.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Instance node specification. You can fill in 4C16G, 8C32G, 16C64G, or 32C128G, which is case-insensitive.
                     * @param _nodeType Instance node specification. You can fill in 4C16G, 8C32G, 16C64G, or 32C128G, which is case-insensitive.
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
                     * 获取Detailed configuration of the instance AZ. Currently, multiple availability zones are supported. The number of AZs must be 1 or 3, including the region names, VPC information, and number of nodes. The total number of nodes across all zones must be greater than or equal to 3 and less than or equal to 50.
                     * @return ZoneSettings Detailed configuration of the instance AZ. Currently, multiple availability zones are supported. The number of AZs must be 1 or 3, including the region names, VPC information, and number of nodes. The total number of nodes across all zones must be greater than or equal to 3 and less than or equal to 50.
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 设置Detailed configuration of the instance AZ. Currently, multiple availability zones are supported. The number of AZs must be 1 or 3, including the region names, VPC information, and number of nodes. The total number of nodes across all zones must be greater than or equal to 3 and less than or equal to 50.
                     * @param _zoneSettings Detailed configuration of the instance AZ. Currently, multiple availability zones are supported. The number of AZs must be 1 or 3, including the region names, VPC information, and number of nodes. The total number of nodes across all zones must be greater than or equal to 3 and less than or equal to 50.
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
                     * 获取The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * @return ClientToken The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * @param _clientToken The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance storage type. Fill in CLOUD_HSSD to represent high-performance cloud storage.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * The disk capacity of a single node of the instance, in GB. The disk capacity of a single node should be greater than or equal to 100 and less than or equal to 250 x the number of CPU cores. The capacity adjustment step is 100.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Instance node specification. You can fill in 4C16G, 8C32G, 16C64G, or 32C128G, which is case-insensitive.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Detailed configuration of the instance AZ. Currently, multiple availability zones are supported. The number of AZs must be 1 or 3, including the region names, VPC information, and number of nodes. The total number of nodes across all zones must be greater than or equal to 3 and less than or equal to 50.
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
                     * The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATESLINSTANCEREQUEST_H_
