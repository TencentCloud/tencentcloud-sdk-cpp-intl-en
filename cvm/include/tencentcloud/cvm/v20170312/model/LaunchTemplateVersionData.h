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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONDATA_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/InternetAccessible.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>
#include <tencentcloud/cvm/v20170312/model/EnhancedService.h>
#include <tencentcloud/cvm/v20170312/model/ActionTimer.h>
#include <tencentcloud/cvm/v20170312/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of instance launch template versions
                */
                class LaunchTemplateVersionData : public AbstractModel
                {
                public:
                    LaunchTemplateVersionData();
                    ~LaunchTemplateVersionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Location of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Placement Location of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Placement Location of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Instance model.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceType Instance model.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceType Instance model.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceName Instance name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values: <br><li>`POSTPAID_BY_HOUR`: postpaid for pay-as-you-go instances <br><li>`CDHPAID`: billed for CDH instances, not the CVMs running on the CDHs.<br>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceChargeType Instance billing mode. Valid values: <br><li>`POSTPAID_BY_HOUR`: postpaid for pay-as-you-go instances <br><li>`CDHPAID`: billed for CDH instances, not the CVMs running on the CDHs.<br>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode. Valid values: <br><li>`POSTPAID_BY_HOUR`: postpaid for pay-as-you-go instances <br><li>`CDHPAID`: billed for CDH instances, not the CVMs running on the CDHs.<br>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceChargeType Instance billing mode. Valid values: <br><li>`POSTPAID_BY_HOUR`: postpaid for pay-as-you-go instances <br><li>`CDHPAID`: billed for CDH instances, not the CVMs running on the CDHs.<br>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Instance system disk information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SystemDisk Instance system disk information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Instance system disk information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SystemDisk Instance system disk information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Instance data disk information. This parameter only covers the data disks purchased together with the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DataDisks Instance data disk information. This parameter only covers the data disks purchased together with the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Instance data disk information. This parameter only covers the data disks purchased together with the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DataDisks Instance data disk information. This parameter only covers the data disks purchased together with the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取Instance bandwidth information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InternetAccessible Instance bandwidth information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Instance bandwidth information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InternetAccessible Instance bandwidth information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Information of the VPC where the instance resides.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return VirtualPrivateCloud Information of the VPC where the instance resides.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置Information of the VPC where the instance resides.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param VirtualPrivateCloud Information of the VPC where the instance resides.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取`ID` of the image used to create the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ImageId `ID` of the image used to create the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置`ID` of the image used to create the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ImageId `ID` of the image used to create the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SecurityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SecurityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Login settings of the instance. Currently, only the key associated with the instance is returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LoginSettings Login settings of the instance. Currently, only the key associated with the instance is returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Login settings of the instance. Currently, only the key associated with the instance is returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LoginSettings Login settings of the instance. Currently, only the key associated with the instance is returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取CAM role name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CamRoleName CAM role name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM role name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CamRoleName CAM role name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取HPC cluster `ID`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HpcClusterId HPC cluster `ID`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置HPC cluster `ID`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param HpcClusterId HPC cluster `ID`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取Number of instances purchased.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceCount Number of instances purchased.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances purchased.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceCount Number of instances purchased.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Enhanced service.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnhancedService Enhanced service.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced service.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EnhancedService Enhanced service.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return UserData User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param UserData User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取Placement group ID. You can only specify one.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DisasterRecoverGroupIds Placement group ID. You can only specify one.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Placement group ID. You can only specify one.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DisasterRecoverGroupIds Placement group ID. You can only specify one.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ActionTimer Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    ActionTimer GetActionTimer() const;

                    /**
                     * 设置Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ActionTimer Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetActionTimer(const ActionTimer& _actionTimer);

                    /**
                     * 判断参数 ActionTimer 是否已赋值
                     * @return ActionTimer 是否已赋值
                     */
                    bool ActionTimerHasBeenSet() const;

                    /**
                     * 获取Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceMarketOptions Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceMarketOptions Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取Hostname of a CVM.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HostName Hostname of a CVM.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Hostname of a CVM.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param HostName Hostname of a CVM.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取A string used to ensure the idempotency of the request.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClientToken A string used to ensure the idempotency of the request.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotency of the request.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ClientToken A string used to ensure the idempotency of the request.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Prepaid mode. This parameter indicates relevant parameter settings for monthly-subscribed instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceChargePrepaid Prepaid mode. This parameter indicates relevant parameter settings for monthly-subscribed instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Prepaid mode. This parameter indicates relevant parameter settings for monthly-subscribed instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param InstanceChargePrepaid Prepaid mode. This parameter indicates relevant parameter settings for monthly-subscribed instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TagSpecification List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param TagSpecification List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Whether to enable termination protection. Valid values:

TRUE: Termination protection is enabled.
FALSE: Termination protection is disabled.

Default value: `FALSE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DisableApiTermination Whether to enable termination protection. Valid values:

TRUE: Termination protection is enabled.
FALSE: Termination protection is disabled.

Default value: `FALSE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Whether to enable termination protection. Valid values:

TRUE: Termination protection is enabled.
FALSE: Termination protection is disabled.

Default value: `FALSE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DisableApiTermination Whether to enable termination protection. Valid values:

TRUE: Termination protection is enabled.
FALSE: Termination protection is disabled.

Default value: `FALSE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                private:

                    /**
                     * Location of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Instance model.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing mode. Valid values: <br><li>`POSTPAID_BY_HOUR`: postpaid for pay-as-you-go instances <br><li>`CDHPAID`: billed for CDH instances, not the CVMs running on the CDHs.<br>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Instance system disk information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Instance data disk information. This parameter only covers the data disks purchased together with the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Instance bandwidth information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Information of the VPC where the instance resides.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * `ID` of the image used to create the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Login settings of the instance. Currently, only the key associated with the instance is returned.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * CAM role name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * HPC cluster `ID`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * Number of instances purchased.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Enhanced service.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * User data provided to the instance. This parameter needs to be encoded in base64 format with the maximum size of 16KB.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Placement group ID. You can only specify one.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * Scheduled tasks. You can use this parameter to specify scheduled tasks for the instance. Only scheduled termination is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    ActionTimer m_actionTimer;
                    bool m_actionTimerHasBeenSet;

                    /**
                     * Market options of the instance, such as parameters related to spot instances. This parameter is required for spot instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * Hostname of a CVM.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * A string used to ensure the idempotency of the request.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Prepaid mode. This parameter indicates relevant parameter settings for monthly-subscribed instances.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * List of tag description. By specifying this parameter, the tag can be bound to the corresponding CVM and CBS instances at the same time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Whether to enable termination protection. Valid values:

TRUE: Termination protection is enabled.
FALSE: Termination protection is disabled.

Default value: `FALSE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONDATA_H_
