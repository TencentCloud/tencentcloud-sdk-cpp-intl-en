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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ClearLaunchConfigurationAttributes request structure.
                */
                class ClearLaunchConfigurationAttributesRequest : public AbstractModel
                {
                public:
                    ClearLaunchConfigurationAttributesRequest();
                    ~ClearLaunchConfigurationAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Launch configuration ID. obtain in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Get the launch configuration ID by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
                     * @return LaunchConfigurationId Launch configuration ID. obtain in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Get the launch configuration ID by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID. obtain in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Get the launch configuration ID by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
                     * @param _launchConfigurationId Launch configuration ID. obtain in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Get the launch configuration ID by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Whether to clear data disk information. This parameter is optional and the default value is `false`.
Setting it to `true` will clear data disks, which means that CVM newly created on this launch configuration will have no data disk.
                     * @return ClearDataDisks Whether to clear data disk information. This parameter is optional and the default value is `false`.
Setting it to `true` will clear data disks, which means that CVM newly created on this launch configuration will have no data disk.
                     * 
                     */
                    bool GetClearDataDisks() const;

                    /**
                     * 设置Whether to clear data disk information. This parameter is optional and the default value is `false`.
Setting it to `true` will clear data disks, which means that CVM newly created on this launch configuration will have no data disk.
                     * @param _clearDataDisks Whether to clear data disk information. This parameter is optional and the default value is `false`.
Setting it to `true` will clear data disks, which means that CVM newly created on this launch configuration will have no data disk.
                     * 
                     */
                    void SetClearDataDisks(const bool& _clearDataDisks);

                    /**
                     * 判断参数 ClearDataDisks 是否已赋值
                     * @return ClearDataDisks 是否已赋值
                     * 
                     */
                    bool ClearDataDisksHasBeenSet() const;

                    /**
                     * 获取Whether to clear the CVM hostname settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the hostname settings, which means that CVM newly created on this launch configuration will have no hostname.
                     * @return ClearHostNameSettings Whether to clear the CVM hostname settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the hostname settings, which means that CVM newly created on this launch configuration will have no hostname.
                     * 
                     */
                    bool GetClearHostNameSettings() const;

                    /**
                     * 设置Whether to clear the CVM hostname settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the hostname settings, which means that CVM newly created on this launch configuration will have no hostname.
                     * @param _clearHostNameSettings Whether to clear the CVM hostname settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the hostname settings, which means that CVM newly created on this launch configuration will have no hostname.
                     * 
                     */
                    void SetClearHostNameSettings(const bool& _clearHostNameSettings);

                    /**
                     * 判断参数 ClearHostNameSettings 是否已赋值
                     * @return ClearHostNameSettings 是否已赋值
                     * 
                     */
                    bool ClearHostNameSettingsHasBeenSet() const;

                    /**
                     * 获取Whether to clear the CVM instance name settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the instance name settings, which means that CVM newly created on this launch configuration will be named in the as-{{AutoScalingGroupName}} format.
                     * @return ClearInstanceNameSettings Whether to clear the CVM instance name settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the instance name settings, which means that CVM newly created on this launch configuration will be named in the as-{{AutoScalingGroupName}} format.
                     * 
                     */
                    bool GetClearInstanceNameSettings() const;

                    /**
                     * 设置Whether to clear the CVM instance name settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the instance name settings, which means that CVM newly created on this launch configuration will be named in the as-{{AutoScalingGroupName}} format.
                     * @param _clearInstanceNameSettings Whether to clear the CVM instance name settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the instance name settings, which means that CVM newly created on this launch configuration will be named in the as-{{AutoScalingGroupName}} format.
                     * 
                     */
                    void SetClearInstanceNameSettings(const bool& _clearInstanceNameSettings);

                    /**
                     * 判断参数 ClearInstanceNameSettings 是否已赋值
                     * @return ClearInstanceNameSettings 是否已赋值
                     * 
                     */
                    bool ClearInstanceNameSettingsHasBeenSet() const;

                    /**
                     * 获取Whether to clear placement group information. This parameter is optional. Default value: `false`.
`True` means clearing placement group information. After that, no placement groups are specified for CVMs created based on the information.
                     * @return ClearDisasterRecoverGroupIds Whether to clear placement group information. This parameter is optional. Default value: `false`.
`True` means clearing placement group information. After that, no placement groups are specified for CVMs created based on the information.
                     * 
                     */
                    bool GetClearDisasterRecoverGroupIds() const;

                    /**
                     * 设置Whether to clear placement group information. This parameter is optional. Default value: `false`.
`True` means clearing placement group information. After that, no placement groups are specified for CVMs created based on the information.
                     * @param _clearDisasterRecoverGroupIds Whether to clear placement group information. This parameter is optional. Default value: `false`.
`True` means clearing placement group information. After that, no placement groups are specified for CVMs created based on the information.
                     * 
                     */
                    void SetClearDisasterRecoverGroupIds(const bool& _clearDisasterRecoverGroupIds);

                    /**
                     * 判断参数 ClearDisasterRecoverGroupIds 是否已赋值
                     * @return ClearDisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool ClearDisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取Whether to clear the instance tag list. This parameter is optional, and its default value is false.
If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.
                     * @return ClearInstanceTags Whether to clear the instance tag list. This parameter is optional, and its default value is false.
If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.
                     * 
                     */
                    bool GetClearInstanceTags() const;

                    /**
                     * 设置Whether to clear the instance tag list. This parameter is optional, and its default value is false.
If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.
                     * @param _clearInstanceTags Whether to clear the instance tag list. This parameter is optional, and its default value is false.
If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.
                     * 
                     */
                    void SetClearInstanceTags(const bool& _clearInstanceTags);

                    /**
                     * 判断参数 ClearInstanceTags 是否已赋值
                     * @return ClearInstanceTags 是否已赋值
                     * 
                     */
                    bool ClearInstanceTagsHasBeenSet() const;

                    /**
                     * 获取Whether to clear metadata, optional, defaults to false. Setting it to true will clear metadata, the CVMs created based on this will not be associated with custom metadata.
                     * @return ClearMetadata Whether to clear metadata, optional, defaults to false. Setting it to true will clear metadata, the CVMs created based on this will not be associated with custom metadata.
                     * 
                     */
                    bool GetClearMetadata() const;

                    /**
                     * 设置Whether to clear metadata, optional, defaults to false. Setting it to true will clear metadata, the CVMs created based on this will not be associated with custom metadata.
                     * @param _clearMetadata Whether to clear metadata, optional, defaults to false. Setting it to true will clear metadata, the CVMs created based on this will not be associated with custom metadata.
                     * 
                     */
                    void SetClearMetadata(const bool& _clearMetadata);

                    /**
                     * 判断参数 ClearMetadata 是否已赋值
                     * @return ClearMetadata 是否已赋值
                     * 
                     */
                    bool ClearMetadataHasBeenSet() const;

                private:

                    /**
                     * Launch configuration ID. obtain in the following ways:.
<li>Queries the launch configuration ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/config).</li>.
<li>Get the launch configuration ID by calling the api [DescribeLaunchConfigurations](https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * Whether to clear data disk information. This parameter is optional and the default value is `false`.
Setting it to `true` will clear data disks, which means that CVM newly created on this launch configuration will have no data disk.
                     */
                    bool m_clearDataDisks;
                    bool m_clearDataDisksHasBeenSet;

                    /**
                     * Whether to clear the CVM hostname settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the hostname settings, which means that CVM newly created on this launch configuration will have no hostname.
                     */
                    bool m_clearHostNameSettings;
                    bool m_clearHostNameSettingsHasBeenSet;

                    /**
                     * Whether to clear the CVM instance name settings. This parameter is optional and the default value is `false`.
Setting it to `true` will clear the instance name settings, which means that CVM newly created on this launch configuration will be named in the as-{{AutoScalingGroupName}} format.
                     */
                    bool m_clearInstanceNameSettings;
                    bool m_clearInstanceNameSettingsHasBeenSet;

                    /**
                     * Whether to clear placement group information. This parameter is optional. Default value: `false`.
`True` means clearing placement group information. After that, no placement groups are specified for CVMs created based on the information.
                     */
                    bool m_clearDisasterRecoverGroupIds;
                    bool m_clearDisasterRecoverGroupIdsHasBeenSet;

                    /**
                     * Whether to clear the instance tag list. This parameter is optional, and its default value is false.
If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.
                     */
                    bool m_clearInstanceTags;
                    bool m_clearInstanceTagsHasBeenSet;

                    /**
                     * Whether to clear metadata, optional, defaults to false. Setting it to true will clear metadata, the CVMs created based on this will not be associated with custom metadata.
                     */
                    bool m_clearMetadata;
                    bool m_clearMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
