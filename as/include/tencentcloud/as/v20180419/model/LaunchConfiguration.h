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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/SystemDisk.h>
#include <tencentcloud/as/v20180419/model/DataDisk.h>
#include <tencentcloud/as/v20180419/model/LimitedLoginSettings.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/AutoScalingGroupAbstract.h>
#include <tencentcloud/as/v20180419/model/EnhancedService.h>
#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/as/v20180419/model/InstanceTag.h>
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>
#include <tencentcloud/as/v20180419/model/IPv6InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/NetworkInterface.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Information set of eligible launch configurations.
                */
                class LaunchConfiguration : public AbstractModel
                {
                public:
                    LaunchConfiguration();
                    ~LaunchConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Project ID of the instance.</p>
                     * @return ProjectId <p>Project ID of the instance.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID of the instance.</p>
                     * @param _projectId <p>Project ID of the instance.</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Launch configuration ID.</p>
                     * @return LaunchConfigurationId <p>Launch configuration ID.</p>
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置<p>Launch configuration ID.</p>
                     * @param _launchConfigurationId <p>Launch configuration ID.</p>
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
                     * 获取<p>Startup configuration name.</p>
                     * @return LaunchConfigurationName <p>Startup configuration name.</p>
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置<p>Startup configuration name.</p>
                     * @param _launchConfigurationName <p>Startup configuration name.</p>
                     * 
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance model.</p>
                     * @return InstanceType <p>Instance model.</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance model.</p>
                     * @param _instanceType <p>Instance model.</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance system disk configuration information.</p>
                     * @return SystemDisk <p>Instance system disk configuration information.</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>Instance system disk configuration information.</p>
                     * @param _systemDisk <p>Instance system disk configuration information.</p>
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>Instance data disk configuration information.</p>
                     * @return DataDisks <p>Instance data disk configuration information.</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>Instance data disk configuration information.</p>
                     * @param _dataDisks <p>Instance data disk configuration information.</p>
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取<p>Instance login settings.</p>
                     * @return LoginSettings <p>Instance login settings.</p>
                     * 
                     */
                    LimitedLoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>Instance login settings.</p>
                     * @param _loginSettings <p>Instance login settings.</p>
                     * 
                     */
                    void SetLoginSettings(const LimitedLoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Public network bandwidth-related information settings.</p>
                     * @return InternetAccessible <p>Public network bandwidth-related information settings.</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>Public network bandwidth-related information settings.</p>
                     * @param _internetAccessible <p>Public network bandwidth-related information settings.</p>
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>Security group to which an instance belongs.</p>
                     * @return SecurityGroupIds <p>Security group to which an instance belongs.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group to which an instance belongs.</p>
                     * @param _securityGroupIds <p>Security group to which an instance belongs.</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>The scaling group bound to the launch configuration.</p>
                     * @return AutoScalingGroupAbstractSet <p>The scaling group bound to the launch configuration.</p>
                     * 
                     */
                    std::vector<AutoScalingGroupAbstract> GetAutoScalingGroupAbstractSet() const;

                    /**
                     * 设置<p>The scaling group bound to the launch configuration.</p>
                     * @param _autoScalingGroupAbstractSet <p>The scaling group bound to the launch configuration.</p>
                     * 
                     */
                    void SetAutoScalingGroupAbstractSet(const std::vector<AutoScalingGroupAbstract>& _autoScalingGroupAbstractSet);

                    /**
                     * 判断参数 AutoScalingGroupAbstractSet 是否已赋值
                     * @return AutoScalingGroupAbstractSet 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupAbstractSetHasBeenSet() const;

                    /**
                     * 获取<p>Custom data.</p>
                     * @return UserData <p>Custom data.</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>Custom data.</p>
                     * @param _userData <p>Custom data.</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>Launch configuration creation time, in standard <code>UTC</code> time.</p>
                     * @return CreatedTime <p>Launch configuration creation time, in standard <code>UTC</code> time.</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>Launch configuration creation time, in standard <code>UTC</code> time.</p>
                     * @param _createdTime <p>Launch configuration creation time, in standard <code>UTC</code> time.</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Enhanced services enabling situation of the instance and its settings.</p>
                     * @return EnhancedService <p>Enhanced services enabling situation of the instance and its settings.</p>
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置<p>Enhanced services enabling situation of the instance and its settings.</p>
                     * @param _enhancedService <p>Enhanced services enabling situation of the instance and its settings.</p>
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Current status of the launch configuration. Value range: <li>NORMAL: Normal</li><li>IMAGE_ABNORMAL: The launch configuration image is exceptional</li><li>CBS_SNAP_ABNORMAL: The launch configuration data disk snapshot is exceptional</li><li>SECURITY_GROUP_ABNORMAL: The launch configuration security group is exceptional</li></p>
                     * @return LaunchConfigurationStatus <p>Current status of the launch configuration. Value range: <li>NORMAL: Normal</li><li>IMAGE_ABNORMAL: The launch configuration image is exceptional</li><li>CBS_SNAP_ABNORMAL: The launch configuration data disk snapshot is exceptional</li><li>SECURITY_GROUP_ABNORMAL: The launch configuration security group is exceptional</li></p>
                     * 
                     */
                    std::string GetLaunchConfigurationStatus() const;

                    /**
                     * 设置<p>Current status of the launch configuration. Value range: <li>NORMAL: Normal</li><li>IMAGE_ABNORMAL: The launch configuration image is exceptional</li><li>CBS_SNAP_ABNORMAL: The launch configuration data disk snapshot is exceptional</li><li>SECURITY_GROUP_ABNORMAL: The launch configuration security group is exceptional</li></p>
                     * @param _launchConfigurationStatus <p>Current status of the launch configuration. Value range: <li>NORMAL: Normal</li><li>IMAGE_ABNORMAL: The launch configuration image is exceptional</li><li>CBS_SNAP_ABNORMAL: The launch configuration data disk snapshot is exceptional</li><li>SECURITY_GROUP_ABNORMAL: The launch configuration security group is exceptional</li></p>
                     * 
                     */
                    void SetLaunchConfigurationStatus(const std::string& _launchConfigurationStatus);

                    /**
                     * 判断参数 LaunchConfigurationStatus 是否已赋值
                     * @return LaunchConfigurationStatus 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationStatusHasBeenSet() const;

                    /**
                     * 获取<p>Instance billing type. The value range is as follows:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, i.e. monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * @return InstanceChargeType <p>Instance billing type. The value range is as follows:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, i.e. monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Instance billing type. The value range is as follows:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, i.e. monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * @param _instanceChargeType <p>Instance billing type. The value range is as follows:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, i.e. monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Market-related options of the instance, such as spot instance parameters. If the payment mode of the specified instance is spot payment, this parameter is required.</p>
                     * @return InstanceMarketOptions <p>Market-related options of the instance, such as spot instance parameters. If the payment mode of the specified instance is spot payment, this parameter is required.</p>
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置<p>Market-related options of the instance, such as spot instance parameters. If the payment mode of the specified instance is spot payment, this parameter is required.</p>
                     * @param _instanceMarketOptions <p>Market-related options of the instance, such as spot instance parameters. If the payment mode of the specified instance is spot payment, this parameter is required.</p>
                     * 
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     * 
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取<p>Instance model list.</p>
                     * @return InstanceTypes <p>Instance model list.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>Instance model list.</p>
                     * @param _instanceTypes <p>Instance model list.</p>
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取<p>Instance tag list. Instances scaled out will automatically come with tags, supporting up to 10 tags.</p>
                     * @return InstanceTags <p>Instance tag list. Instances scaled out will automatically come with tags, supporting up to 10 tags.</p>
                     * 
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置<p>Instance tag list. Instances scaled out will automatically come with tags, supporting up to 10 tags.</p>
                     * @param _instanceTags <p>Instance tag list. Instances scaled out will automatically come with tags, supporting up to 10 tags.</p>
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Tag list. The tags in this parameter are only used to bind launch configurations and will not be passed to CVM instances scaled out based on the launch configuration.</p>
                     * @return Tags <p>Tag list. The tags in this parameter are only used to bind launch configurations and will not be passed to CVM instances scaled out based on the launch configuration.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag list. The tags in this parameter are only used to bind launch configurations and will not be passed to CVM instances scaled out based on the launch configuration.</p>
                     * @param _tags <p>Tag list. The tags in this parameter are only used to bind launch configurations and will not be passed to CVM instances scaled out based on the launch configuration.</p>
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
                     * 获取<p>Version number.</p>
                     * @return VersionNumber <p>Version number.</p>
                     * 
                     */
                    int64_t GetVersionNumber() const;

                    /**
                     * 设置<p>Version number.</p>
                     * @param _versionNumber <p>Version number.</p>
                     * 
                     */
                    void SetVersionNumber(const int64_t& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取<p>Update time in standard <code>UTC</code> format.</p>
                     * @return UpdatedTime <p>Update time in standard <code>UTC</code> format.</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>Update time in standard <code>UTC</code> format.</p>
                     * @param _updatedTime <p>Update time in standard <code>UTC</code> format.</p>
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * @return CamRoleName <p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置<p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * @param _camRoleName <p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取<p>The value of InstanceTypesCheckPolicy last time when operating.</p>
                     * @return LastOperationInstanceTypesCheckPolicy <p>The value of InstanceTypesCheckPolicy last time when operating.</p>
                     * 
                     */
                    std::string GetLastOperationInstanceTypesCheckPolicy() const;

                    /**
                     * 设置<p>The value of InstanceTypesCheckPolicy last time when operating.</p>
                     * @param _lastOperationInstanceTypesCheckPolicy <p>The value of InstanceTypesCheckPolicy last time when operating.</p>
                     * 
                     */
                    void SetLastOperationInstanceTypesCheckPolicy(const std::string& _lastOperationInstanceTypesCheckPolicy);

                    /**
                     * 判断参数 LastOperationInstanceTypesCheckPolicy 是否已赋值
                     * @return LastOperationInstanceTypesCheckPolicy 是否已赋值
                     * 
                     */
                    bool LastOperationInstanceTypesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Related settings for the CVM host name (HostName).</p>
                     * @return HostNameSettings <p>Related settings for the CVM host name (HostName).</p>
                     * 
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置<p>Related settings for the CVM host name (HostName).</p>
                     * @param _hostNameSettings <p>Related settings for the CVM host name (HostName).</p>
                     * 
                     */
                    void SetHostNameSettings(const HostNameSettings& _hostNameSettings);

                    /**
                     * 判断参数 HostNameSettings 是否已赋值
                     * @return HostNameSettings 是否已赋值
                     * 
                     */
                    bool HostNameSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Related settings for the cloud server instance name (InstanceName).</p>
                     * @return InstanceNameSettings <p>Related settings for the cloud server instance name (InstanceName).</p>
                     * 
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置<p>Related settings for the cloud server instance name (InstanceName).</p>
                     * @param _instanceNameSettings <p>Related settings for the cloud server instance name (InstanceName).</p>
                     * 
                     */
                    void SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings);

                    /**
                     * 判断参数 InstanceNameSettings 是否已赋值
                     * @return InstanceNameSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Prepaid mode, i.e., parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode for the specified instance is prepaid.</p>
                     * @return InstanceChargePrepaid <p>Prepaid mode, i.e., parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode for the specified instance is prepaid.</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>Prepaid mode, i.e., parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode for the specified instance is prepaid.</p>
                     * @param _instanceChargePrepaid <p>Prepaid mode, i.e., parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode for the specified instance is prepaid.</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>Cloud disk type selection policy. Parameter value range: <li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select available cloud disk types in the current AZ</li></p>
                     * @return DiskTypePolicy <p>Cloud disk type selection policy. Parameter value range: <li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select available cloud disk types in the current AZ</li></p>
                     * 
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置<p>Cloud disk type selection policy. Parameter value range: <li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select available cloud disk types in the current AZ</li></p>
                     * @param _diskTypePolicy <p>Cloud disk type selection policy. Parameter value range: <li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select available cloud disk types in the current AZ</li></p>
                     * 
                     */
                    void SetDiskTypePolicy(const std::string& _diskTypePolicy);

                    /**
                     * 判断参数 DiskTypePolicy 是否已赋值
                     * @return DiskTypePolicy 是否已赋值
                     * 
                     */
                    bool DiskTypePolicyHasBeenSet() const;

                    /**
                     * 获取<p>Hyper Computing Cluster ID.<br><br>Note: This field is empty by default.</p>
                     * @return HpcClusterId <p>Hyper Computing Cluster ID.<br><br>Note: This field is empty by default.</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>Hyper Computing Cluster ID.<br><br>Note: This field is empty by default.</p>
                     * @param _hpcClusterId <p>Hyper Computing Cluster ID.<br><br>Note: This field is empty by default.</p>
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>IPv6 public network bandwidth-related information settings.</p>
                     * @return IPv6InternetAccessible <p>IPv6 public network bandwidth-related information settings.</p>
                     * 
                     */
                    IPv6InternetAccessible GetIPv6InternetAccessible() const;

                    /**
                     * 设置<p>IPv6 public network bandwidth-related information settings.</p>
                     * @param _iPv6InternetAccessible <p>IPv6 public network bandwidth-related information settings.</p>
                     * 
                     */
                    void SetIPv6InternetAccessible(const IPv6InternetAccessible& _iPv6InternetAccessible);

                    /**
                     * 判断参数 IPv6InternetAccessible 是否已赋值
                     * @return IPv6InternetAccessible 是否已赋值
                     * 
                     */
                    bool IPv6InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>Placement Group id. Only one can be specified.</p>
                     * @return DisasterRecoverGroupIds <p>Placement Group id. Only one can be specified.</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>Placement Group id. Only one can be specified.</p>
                     * @param _disasterRecoverGroupIds <p>Placement Group id. Only one can be specified.</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>Image family name.</p>
                     * @return ImageFamily <p>Image family name.</p>
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置<p>Image family name.</p>
                     * @param _imageFamily <p>Image family name.</p>
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                    /**
                     * 获取<p>Local dedicated cluster ID.</p>
                     * @return DedicatedClusterId <p>Local dedicated cluster ID.</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>Local dedicated cluster ID.</p>
                     * @param _dedicatedClusterId <p>Local dedicated cluster ID.</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>ENI configuration of the launch configuration.</p>
                     * @return NetworkInterfaces <p>ENI configuration of the launch configuration.</p>
                     * 
                     */
                    std::vector<NetworkInterface> GetNetworkInterfaces() const;

                    /**
                     * 设置<p>ENI configuration of the launch configuration.</p>
                     * @param _networkInterfaces <p>ENI configuration of the launch configuration.</p>
                     * 
                     */
                    void SetNetworkInterfaces(const std::vector<NetworkInterface>& _networkInterfaces);

                    /**
                     * 判断参数 NetworkInterfaces 是否已赋值
                     * @return NetworkInterfaces 是否已赋值
                     * 
                     */
                    bool NetworkInterfacesHasBeenSet() const;

                private:

                    /**
                     * <p>Project ID of the instance.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Launch configuration ID.</p>
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <p>Startup configuration name.</p>
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * <p>Instance model.</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Instance system disk configuration information.</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>Instance data disk configuration information.</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>Instance login settings.</p>
                     */
                    LimitedLoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>Public network bandwidth-related information settings.</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>Security group to which an instance belongs.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>The scaling group bound to the launch configuration.</p>
                     */
                    std::vector<AutoScalingGroupAbstract> m_autoScalingGroupAbstractSet;
                    bool m_autoScalingGroupAbstractSetHasBeenSet;

                    /**
                     * <p>Custom data.</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>Launch configuration creation time, in standard <code>UTC</code> time.</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Enhanced services enabling situation of the instance and its settings.</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Current status of the launch configuration. Value range: <li>NORMAL: Normal</li><li>IMAGE_ABNORMAL: The launch configuration image is exceptional</li><li>CBS_SNAP_ABNORMAL: The launch configuration data disk snapshot is exceptional</li><li>SECURITY_GROUP_ABNORMAL: The launch configuration security group is exceptional</li></p>
                     */
                    std::string m_launchConfigurationStatus;
                    bool m_launchConfigurationStatusHasBeenSet;

                    /**
                     * <p>Instance billing type. The value range is as follows:</p><li>POSTPAID_BY_HOUR: hourly postpaid</li><li>SPOTPAID: spot payment</li><li>PREPAID: prepaid, i.e. monthly subscription</li><li>CDCPAID: dedicated cluster payment</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Market-related options of the instance, such as spot instance parameters. If the payment mode of the specified instance is spot payment, this parameter is required.</p>
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * <p>Instance model list.</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>Instance tag list. Instances scaled out will automatically come with tags, supporting up to 10 tags.</p>
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>Tag list. The tags in this parameter are only used to bind launch configurations and will not be passed to CVM instances scaled out based on the launch configuration.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Version number.</p>
                     */
                    int64_t m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>Update time in standard <code>UTC</code> format.</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>CAM role name, which can be obtained from the roleName in the return value from the <a href="https://www.tencentcloud.com/document/product/598/36223?from_cn_redirect=1">DescribeRoleList</a> API.</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>The value of InstanceTypesCheckPolicy last time when operating.</p>
                     */
                    std::string m_lastOperationInstanceTypesCheckPolicy;
                    bool m_lastOperationInstanceTypesCheckPolicyHasBeenSet;

                    /**
                     * <p>Related settings for the CVM host name (HostName).</p>
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * <p>Related settings for the cloud server instance name (InstanceName).</p>
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * <p>Prepaid mode, i.e., parameter settings related to monthly/annual subscription. By specifying this parameter, you can specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode for the specified instance is prepaid.</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>Cloud disk type selection policy. Parameter value range: <li>ORIGINAL: use the set cloud disk type</li><li>AUTOMATIC: automatically select available cloud disk types in the current AZ</li></p>
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                    /**
                     * <p>Hyper Computing Cluster ID.<br><br>Note: This field is empty by default.</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * <p>IPv6 public network bandwidth-related information settings.</p>
                     */
                    IPv6InternetAccessible m_iPv6InternetAccessible;
                    bool m_iPv6InternetAccessibleHasBeenSet;

                    /**
                     * <p>Placement Group id. Only one can be specified.</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>Image family name.</p>
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * <p>Local dedicated cluster ID.</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>ENI configuration of the launch configuration.</p>
                     */
                    std::vector<NetworkInterface> m_networkInterfaces;
                    bool m_networkInterfacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_
