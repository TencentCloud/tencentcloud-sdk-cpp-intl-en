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
#include <tencentcloud/as/v20180419/model/HostNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>


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
                     * 获取Project ID of the instance.
                     * @return ProjectId Project ID of the instance.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID of the instance.
                     * @param ProjectId Project ID of the instance.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Launch configuration ID.
                     * @return LaunchConfigurationId Launch configuration ID.
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID.
                     * @param LaunchConfigurationId Launch configuration ID.
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Launch configuration name.
                     * @return LaunchConfigurationName Launch configuration name.
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置Launch configuration name.
                     * @param LaunchConfigurationName Launch configuration name.
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取Instance model.
                     * @return InstanceType Instance model.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model.
                     * @param InstanceType Instance model.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Information of the instance's system disk configuration.
                     * @return SystemDisk Information of the instance's system disk configuration.
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Information of the instance's system disk configuration.
                     * @param SystemDisk Information of the instance's system disk configuration.
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Information of the instance's data disk configuration.
                     * @return DataDisks Information of the instance's data disk configuration.
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Information of the instance's data disk configuration.
                     * @param DataDisks Information of the instance's data disk configuration.
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取Instance login settings.
                     * @return LoginSettings Instance login settings.
                     */
                    LimitedLoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings.
                     * @param LoginSettings Instance login settings.
                     */
                    void SetLoginSettings(const LimitedLoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取Information of the public network bandwidth configuration.
                     * @return InternetAccessible Information of the public network bandwidth configuration.
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Information of the public network bandwidth configuration.
                     * @param InternetAccessible Information of the public network bandwidth configuration.
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Security group of the instance.
                     * @return SecurityGroupIds Security group of the instance.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group of the instance.
                     * @param SecurityGroupIds Security group of the instance.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Auto scaling group associated with the launch configuration.
                     * @return AutoScalingGroupAbstractSet Auto scaling group associated with the launch configuration.
                     */
                    std::vector<AutoScalingGroupAbstract> GetAutoScalingGroupAbstractSet() const;

                    /**
                     * 设置Auto scaling group associated with the launch configuration.
                     * @param AutoScalingGroupAbstractSet Auto scaling group associated with the launch configuration.
                     */
                    void SetAutoScalingGroupAbstractSet(const std::vector<AutoScalingGroupAbstract>& _autoScalingGroupAbstractSet);

                    /**
                     * 判断参数 AutoScalingGroupAbstractSet 是否已赋值
                     * @return AutoScalingGroupAbstractSet 是否已赋值
                     */
                    bool AutoScalingGroupAbstractSetHasBeenSet() const;

                    /**
                     * 获取Custom data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserData Custom data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置Custom data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserData Custom data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取Creation time of the launch configuration.
                     * @return CreatedTime Creation time of the launch configuration.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the launch configuration.
                     * @param CreatedTime Creation time of the launch configuration.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Conditions of enhancement services for the instance and their settings.
                     * @return EnhancedService Conditions of enhancement services for the instance and their settings.
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Conditions of enhancement services for the instance and their settings.
                     * @param EnhancedService Conditions of enhancement services for the instance and their settings.
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取Image ID.
                     * @return ImageId Image ID.
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID.
                     * @param ImageId Image ID.
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Current status of the launch configuration. Value range: <br><li>NORMAL: normal <br><li>IMAGE_ABNORMAL: Exception with the image of the launch configuration <br><li>CBS_SNAP_ABNORMAL: Exception with the data disk snapshot of the launch configuration <br><li>SECURITY_GROUP_ABNORMAL: Exception with the security group of the launch configuration<br>
                     * @return LaunchConfigurationStatus Current status of the launch configuration. Value range: <br><li>NORMAL: normal <br><li>IMAGE_ABNORMAL: Exception with the image of the launch configuration <br><li>CBS_SNAP_ABNORMAL: Exception with the data disk snapshot of the launch configuration <br><li>SECURITY_GROUP_ABNORMAL: Exception with the security group of the launch configuration<br>
                     */
                    std::string GetLaunchConfigurationStatus() const;

                    /**
                     * 设置Current status of the launch configuration. Value range: <br><li>NORMAL: normal <br><li>IMAGE_ABNORMAL: Exception with the image of the launch configuration <br><li>CBS_SNAP_ABNORMAL: Exception with the data disk snapshot of the launch configuration <br><li>SECURITY_GROUP_ABNORMAL: Exception with the security group of the launch configuration<br>
                     * @param LaunchConfigurationStatus Current status of the launch configuration. Value range: <br><li>NORMAL: normal <br><li>IMAGE_ABNORMAL: Exception with the image of the launch configuration <br><li>CBS_SNAP_ABNORMAL: Exception with the data disk snapshot of the launch configuration <br><li>SECURITY_GROUP_ABNORMAL: Exception with the security group of the launch configuration<br>
                     */
                    void SetLaunchConfigurationStatus(const std::string& _launchConfigurationStatus);

                    /**
                     * 判断参数 LaunchConfigurationStatus 是否已赋值
                     * @return LaunchConfigurationStatus 是否已赋值
                     */
                    bool LaunchConfigurationStatusHasBeenSet() const;

                    /**
                     * 获取Instance billing type. CVM instances are POSTPAID_BY_HOUR by default.
<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis
<br><li>SPOTPAID: Bidding
                     * @return InstanceChargeType Instance billing type. CVM instances are POSTPAID_BY_HOUR by default.
<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis
<br><li>SPOTPAID: Bidding
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type. CVM instances are POSTPAID_BY_HOUR by default.
<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis
<br><li>SPOTPAID: Bidding
                     * @param InstanceChargeType Instance billing type. CVM instances are POSTPAID_BY_HOUR by default.
<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis
<br><li>SPOTPAID: Bidding
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Market-related options of the instance, such as the parameters related to stop instances. If the billing method of instance is specified as bidding, this parameter must be passed in.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceMarketOptions Market-related options of the instance, such as the parameters related to stop instances. If the billing method of instance is specified as bidding, this parameter must be passed in.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置Market-related options of the instance, such as the parameters related to stop instances. If the billing method of instance is specified as bidding, this parameter must be passed in.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceMarketOptions Market-related options of the instance, such as the parameters related to stop instances. If the billing method of instance is specified as bidding, this parameter must be passed in.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取List of instance models.
                     * @return InstanceTypes List of instance models.
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置List of instance models.
                     * @param InstanceTypes List of instance models.
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取List of tags.
                     * @return InstanceTags List of tags.
                     */
                    std::vector<InstanceTag> GetInstanceTags() const;

                    /**
                     * 设置List of tags.
                     * @param InstanceTags List of tags.
                     */
                    void SetInstanceTags(const std::vector<InstanceTag>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取Version number.
                     * @return VersionNumber Version number.
                     */
                    int64_t GetVersionNumber() const;

                    /**
                     * 设置Version number.
                     * @param VersionNumber Version number.
                     */
                    void SetVersionNumber(const int64_t& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedTime Update time.
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Update time.
                     * @param UpdatedTime Update time.
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取CAM role name, which can be obtained from the roleName field in the return value of the DescribeRoleList API.
                     * @return CamRoleName CAM role name, which can be obtained from the roleName field in the return value of the DescribeRoleList API.
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM role name, which can be obtained from the roleName field in the return value of the DescribeRoleList API.
                     * @param CamRoleName CAM role name, which can be obtained from the roleName field in the return value of the DescribeRoleList API.
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取Value of InstanceTypesCheckPolicy upon the last operation.
                     * @return LastOperationInstanceTypesCheckPolicy Value of InstanceTypesCheckPolicy upon the last operation.
                     */
                    std::string GetLastOperationInstanceTypesCheckPolicy() const;

                    /**
                     * 设置Value of InstanceTypesCheckPolicy upon the last operation.
                     * @param LastOperationInstanceTypesCheckPolicy Value of InstanceTypesCheckPolicy upon the last operation.
                     */
                    void SetLastOperationInstanceTypesCheckPolicy(const std::string& _lastOperationInstanceTypesCheckPolicy);

                    /**
                     * 判断参数 LastOperationInstanceTypesCheckPolicy 是否已赋值
                     * @return LastOperationInstanceTypesCheckPolicy 是否已赋值
                     */
                    bool LastOperationInstanceTypesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取CVM HostName settings.
                     * @return HostNameSettings CVM HostName settings.
                     */
                    HostNameSettings GetHostNameSettings() const;

                    /**
                     * 设置CVM HostName settings.
                     * @param HostNameSettings CVM HostName settings.
                     */
                    void SetHostNameSettings(const HostNameSettings& _hostNameSettings);

                    /**
                     * 判断参数 HostNameSettings 是否已赋值
                     * @return HostNameSettings 是否已赋值
                     */
                    bool HostNameSettingsHasBeenSet() const;

                    /**
                     * 获取Settings of CVM instance names.
                     * @return InstanceNameSettings Settings of CVM instance names.
                     */
                    InstanceNameSettings GetInstanceNameSettings() const;

                    /**
                     * 设置Settings of CVM instance names.
                     * @param InstanceNameSettings Settings of CVM instance names.
                     */
                    void SetInstanceNameSettings(const InstanceNameSettings& _instanceNameSettings);

                    /**
                     * 判断参数 InstanceNameSettings 是否已赋值
                     * @return InstanceNameSettings 是否已赋值
                     */
                    bool InstanceNameSettingsHasBeenSet() const;

                    /**
                     * 获取Sets prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     * @return InstanceChargePrepaid Sets prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Sets prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     * @param InstanceChargePrepaid Sets prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Specifies how to select the cloud disk type. 
<br><li>ORIGINAL: uses the configured cloud disk type
<br><li>AUTOMATIC: automatically chooses an available cloud disk type in the current availability zone
                     * @return DiskTypePolicy Specifies how to select the cloud disk type. 
<br><li>ORIGINAL: uses the configured cloud disk type
<br><li>AUTOMATIC: automatically chooses an available cloud disk type in the current availability zone
                     */
                    std::string GetDiskTypePolicy() const;

                    /**
                     * 设置Specifies how to select the cloud disk type. 
<br><li>ORIGINAL: uses the configured cloud disk type
<br><li>AUTOMATIC: automatically chooses an available cloud disk type in the current availability zone
                     * @param DiskTypePolicy Specifies how to select the cloud disk type. 
<br><li>ORIGINAL: uses the configured cloud disk type
<br><li>AUTOMATIC: automatically chooses an available cloud disk type in the current availability zone
                     */
                    void SetDiskTypePolicy(const std::string& _diskTypePolicy);

                    /**
                     * 判断参数 DiskTypePolicy 是否已赋值
                     * @return DiskTypePolicy 是否已赋值
                     */
                    bool DiskTypePolicyHasBeenSet() const;

                private:

                    /**
                     * Project ID of the instance.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Launch configuration ID.
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * Launch configuration name.
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * Instance model.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Information of the instance's system disk configuration.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Information of the instance's data disk configuration.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Instance login settings.
                     */
                    LimitedLoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Information of the public network bandwidth configuration.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Security group of the instance.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Auto scaling group associated with the launch configuration.
                     */
                    std::vector<AutoScalingGroupAbstract> m_autoScalingGroupAbstractSet;
                    bool m_autoScalingGroupAbstractSetHasBeenSet;

                    /**
                     * Custom data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Creation time of the launch configuration.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Conditions of enhancement services for the instance and their settings.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * Image ID.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Current status of the launch configuration. Value range: <br><li>NORMAL: normal <br><li>IMAGE_ABNORMAL: Exception with the image of the launch configuration <br><li>CBS_SNAP_ABNORMAL: Exception with the data disk snapshot of the launch configuration <br><li>SECURITY_GROUP_ABNORMAL: Exception with the security group of the launch configuration<br>
                     */
                    std::string m_launchConfigurationStatus;
                    bool m_launchConfigurationStatusHasBeenSet;

                    /**
                     * Instance billing type. CVM instances are POSTPAID_BY_HOUR by default.
<br><li>POSTPAID_BY_HOUR: Pay-as-you-go on an hourly basis
<br><li>SPOTPAID: Bidding
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Market-related options of the instance, such as the parameters related to stop instances. If the billing method of instance is specified as bidding, this parameter must be passed in.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * List of instance models.
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * List of tags.
                     */
                    std::vector<InstanceTag> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * Version number.
                     */
                    int64_t m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * CAM role name, which can be obtained from the roleName field in the return value of the DescribeRoleList API.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * Value of InstanceTypesCheckPolicy upon the last operation.
                     */
                    std::string m_lastOperationInstanceTypesCheckPolicy;
                    bool m_lastOperationInstanceTypesCheckPolicyHasBeenSet;

                    /**
                     * CVM HostName settings.
                     */
                    HostNameSettings m_hostNameSettings;
                    bool m_hostNameSettingsHasBeenSet;

                    /**
                     * Settings of CVM instance names.
                     */
                    InstanceNameSettings m_instanceNameSettings;
                    bool m_instanceNameSettingsHasBeenSet;

                    /**
                     * Sets prepaid billing mode, also known as monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. This parameter is mandatory for prepaid instances.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Specifies how to select the cloud disk type. 
<br><li>ORIGINAL: uses the configured cloud disk type
<br><li>AUTOMATIC: automatically chooses an available cloud disk type in the current availability zone
                     */
                    std::string m_diskTypePolicy;
                    bool m_diskTypePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LAUNCHCONFIGURATION_H_
