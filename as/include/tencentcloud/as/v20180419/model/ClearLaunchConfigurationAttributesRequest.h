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
                     * 获取<p>Launch configuration ID. Obtain it in the following ways:</p><li>Log in to the [console](https://console.cloud.tencent.com/autoscaling/config) and query the launch configuration ID.</li><li>Call the API [DescribeLaunchConfigurations](https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1) and obtain the launch configuration ID from the `LaunchConfigurationId` in the returned information.</li>
                     * @return LaunchConfigurationId <p>Launch configuration ID. Obtain it in the following ways:</p><li>Log in to the [console](https://console.cloud.tencent.com/autoscaling/config) and query the launch configuration ID.</li><li>Call the API [DescribeLaunchConfigurations](https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1) and obtain the launch configuration ID from the `LaunchConfigurationId` in the returned information.</li>
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置<p>Launch configuration ID. Obtain it in the following ways:</p><li>Log in to the [console](https://console.cloud.tencent.com/autoscaling/config) and query the launch configuration ID.</li><li>Call the API [DescribeLaunchConfigurations](https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1) and obtain the launch configuration ID from the `LaunchConfigurationId` in the returned information.</li>
                     * @param _launchConfigurationId <p>Launch configuration ID. Obtain it in the following ways:</p><li>Log in to the [console](https://console.cloud.tencent.com/autoscaling/config) and query the launch configuration ID.</li><li>Call the API [DescribeLaunchConfigurations](https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1) and obtain the launch configuration ID from the `LaunchConfigurationId` in the returned information.</li>
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
                     * 获取<p>Whether to clear data disk information. This parameter is optional and defaults to false.<br>Enter true to clear "data disk" information. After clearing, newly created CVMs will not contain any data disk.</p>
                     * @return ClearDataDisks <p>Whether to clear data disk information. This parameter is optional and defaults to false.<br>Enter true to clear "data disk" information. After clearing, newly created CVMs will not contain any data disk.</p>
                     * 
                     */
                    bool GetClearDataDisks() const;

                    /**
                     * 设置<p>Whether to clear data disk information. This parameter is optional and defaults to false.<br>Enter true to clear "data disk" information. After clearing, newly created CVMs will not contain any data disk.</p>
                     * @param _clearDataDisks <p>Whether to clear data disk information. This parameter is optional and defaults to false.<br>Enter true to clear "data disk" information. After clearing, newly created CVMs will not contain any data disk.</p>
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
                     * 获取<p>Whether to clear the MachineName-related settings of the CVM. Optional. It is false by default.<br>Set to true to clear the host name settings. After clearing, newly created CVMs will not have a host name configured.</p>
                     * @return ClearHostNameSettings <p>Whether to clear the MachineName-related settings of the CVM. Optional. It is false by default.<br>Set to true to clear the host name settings. After clearing, newly created CVMs will not have a host name configured.</p>
                     * 
                     */
                    bool GetClearHostNameSettings() const;

                    /**
                     * 设置<p>Whether to clear the MachineName-related settings of the CVM. Optional. It is false by default.<br>Set to true to clear the host name settings. After clearing, newly created CVMs will not have a host name configured.</p>
                     * @param _clearHostNameSettings <p>Whether to clear the MachineName-related settings of the CVM. Optional. It is false by default.<br>Set to true to clear the host name settings. After clearing, newly created CVMs will not have a host name configured.</p>
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
                     * 获取<p>Whether to clear the CVM instance name related settings. This parameter is optional and is false by default.<br>If set to true, the host name setting information is cleared. After clearing, newly created CVMs will be configured based on "as-{{ scaling group AutoScalingGroupName }}".</p>
                     * @return ClearInstanceNameSettings <p>Whether to clear the CVM instance name related settings. This parameter is optional and is false by default.<br>If set to true, the host name setting information is cleared. After clearing, newly created CVMs will be configured based on "as-{{ scaling group AutoScalingGroupName }}".</p>
                     * 
                     */
                    bool GetClearInstanceNameSettings() const;

                    /**
                     * 设置<p>Whether to clear the CVM instance name related settings. This parameter is optional and is false by default.<br>If set to true, the host name setting information is cleared. After clearing, newly created CVMs will be configured based on "as-{{ scaling group AutoScalingGroupName }}".</p>
                     * @param _clearInstanceNameSettings <p>Whether to clear the CVM instance name related settings. This parameter is optional and is false by default.<br>If set to true, the host name setting information is cleared. After clearing, newly created CVMs will be configured based on "as-{{ scaling group AutoScalingGroupName }}".</p>
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
                     * 获取<p>Whether to clear the placement group information. This parameter is optional and defaults to false.<br>Set it to true to clear the placement group information. After clearing, newly created hosts will not be assigned to any placement group.</p>
                     * @return ClearDisasterRecoverGroupIds <p>Whether to clear the placement group information. This parameter is optional and defaults to false.<br>Set it to true to clear the placement group information. After clearing, newly created hosts will not be assigned to any placement group.</p>
                     * 
                     */
                    bool GetClearDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>Whether to clear the placement group information. This parameter is optional and defaults to false.<br>Set it to true to clear the placement group information. After clearing, newly created hosts will not be assigned to any placement group.</p>
                     * @param _clearDisasterRecoverGroupIds <p>Whether to clear the placement group information. This parameter is optional and defaults to false.<br>Set it to true to clear the placement group information. After clearing, newly created hosts will not be assigned to any placement group.</p>
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
                     * 获取<p>Whether to clear the instance tag list. This parameter is optional and is false by default.<br>If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.</p>
                     * @return ClearInstanceTags <p>Whether to clear the instance tag list. This parameter is optional and is false by default.<br>If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.</p>
                     * 
                     */
                    bool GetClearInstanceTags() const;

                    /**
                     * 设置<p>Whether to clear the instance tag list. This parameter is optional and is false by default.<br>If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.</p>
                     * @param _clearInstanceTags <p>Whether to clear the instance tag list. This parameter is optional and is false by default.<br>If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.</p>
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
                     * 获取<p>Whether to clear MetaData. This parameter is optional and defaults to false. Enter true to clear MetaData. After clearing, newly created CVMs will not associate custom Metadata.</p>
                     * @return ClearMetadata <p>Whether to clear MetaData. This parameter is optional and defaults to false. Enter true to clear MetaData. After clearing, newly created CVMs will not associate custom Metadata.</p>
                     * 
                     */
                    bool GetClearMetadata() const;

                    /**
                     * 设置<p>Whether to clear MetaData. This parameter is optional and defaults to false. Enter true to clear MetaData. After clearing, newly created CVMs will not associate custom Metadata.</p>
                     * @param _clearMetadata <p>Whether to clear MetaData. This parameter is optional and defaults to false. Enter true to clear MetaData. After clearing, newly created CVMs will not associate custom Metadata.</p>
                     * 
                     */
                    void SetClearMetadata(const bool& _clearMetadata);

                    /**
                     * 判断参数 ClearMetadata 是否已赋值
                     * @return ClearMetadata 是否已赋值
                     * 
                     */
                    bool ClearMetadataHasBeenSet() const;

                    /**
                     * 获取<p>Whether to clear the NetworkInterfaces in the launch configuration. If the value is TRUE, clear it; if not passed or FALSE, this field will not be processed.</p>
                     * @return ClearNetworkInterfaces <p>Whether to clear the NetworkInterfaces in the launch configuration. If the value is TRUE, clear it; if not passed or FALSE, this field will not be processed.</p>
                     * 
                     */
                    bool GetClearNetworkInterfaces() const;

                    /**
                     * 设置<p>Whether to clear the NetworkInterfaces in the launch configuration. If the value is TRUE, clear it; if not passed or FALSE, this field will not be processed.</p>
                     * @param _clearNetworkInterfaces <p>Whether to clear the NetworkInterfaces in the launch configuration. If the value is TRUE, clear it; if not passed or FALSE, this field will not be processed.</p>
                     * 
                     */
                    void SetClearNetworkInterfaces(const bool& _clearNetworkInterfaces);

                    /**
                     * 判断参数 ClearNetworkInterfaces 是否已赋值
                     * @return ClearNetworkInterfaces 是否已赋值
                     * 
                     */
                    bool ClearNetworkInterfacesHasBeenSet() const;

                private:

                    /**
                     * <p>Launch configuration ID. Obtain it in the following ways:</p><li>Log in to the [console](https://console.cloud.tencent.com/autoscaling/config) and query the launch configuration ID.</li><li>Call the API [DescribeLaunchConfigurations](https://www.tencentcloud.com/document/api/377/20445?from_cn_redirect=1) and obtain the launch configuration ID from the `LaunchConfigurationId` in the returned information.</li>
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <p>Whether to clear data disk information. This parameter is optional and defaults to false.<br>Enter true to clear "data disk" information. After clearing, newly created CVMs will not contain any data disk.</p>
                     */
                    bool m_clearDataDisks;
                    bool m_clearDataDisksHasBeenSet;

                    /**
                     * <p>Whether to clear the MachineName-related settings of the CVM. Optional. It is false by default.<br>Set to true to clear the host name settings. After clearing, newly created CVMs will not have a host name configured.</p>
                     */
                    bool m_clearHostNameSettings;
                    bool m_clearHostNameSettingsHasBeenSet;

                    /**
                     * <p>Whether to clear the CVM instance name related settings. This parameter is optional and is false by default.<br>If set to true, the host name setting information is cleared. After clearing, newly created CVMs will be configured based on "as-{{ scaling group AutoScalingGroupName }}".</p>
                     */
                    bool m_clearInstanceNameSettings;
                    bool m_clearInstanceNameSettingsHasBeenSet;

                    /**
                     * <p>Whether to clear the placement group information. This parameter is optional and defaults to false.<br>Set it to true to clear the placement group information. After clearing, newly created hosts will not be assigned to any placement group.</p>
                     */
                    bool m_clearDisasterRecoverGroupIds;
                    bool m_clearDisasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>Whether to clear the instance tag list. This parameter is optional and is false by default.<br>If true is filled in, it indicates that the instance tag list should be cleared. After the list is cleared, the CVMs created based on this will not be bound to the tags in the list.</p>
                     */
                    bool m_clearInstanceTags;
                    bool m_clearInstanceTagsHasBeenSet;

                    /**
                     * <p>Whether to clear MetaData. This parameter is optional and defaults to false. Enter true to clear MetaData. After clearing, newly created CVMs will not associate custom Metadata.</p>
                     */
                    bool m_clearMetadata;
                    bool m_clearMetadataHasBeenSet;

                    /**
                     * <p>Whether to clear the NetworkInterfaces in the launch configuration. If the value is TRUE, clear it; if not passed or FALSE, this field will not be processed.</p>
                     */
                    bool m_clearNetworkInterfaces;
                    bool m_clearNetworkInterfacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
