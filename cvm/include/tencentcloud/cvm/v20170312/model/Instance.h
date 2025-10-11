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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_

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
#include <tencentcloud/cvm/v20170312/model/Tag.h>
#include <tencentcloud/cvm/v20170312/model/GPUInfo.h>
#include <tencentcloud/cvm/v20170312/model/Metadata.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes information on an instance
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Location of the instance
                     * @return Placement Location of the instance
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance
                     * @param _placement Location of the instance
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Instance `ID`
                     * @return InstanceId Instance `ID`
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance `ID`
                     * @param _instanceId Instance `ID`
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance model
                     * @return InstanceType Instance model
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model
                     * @param _instanceType Instance model
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
                     * 获取Number of CPU cores of the instance; unit: core
                     * @return CPU Number of CPU cores of the instance; unit: core
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores of the instance; unit: core
                     * @param _cPU Number of CPU cores of the instance; unit: core
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Instance memory capacity. unit: GiB.
                     * @return Memory Instance memory capacity. unit: GiB.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory capacity. unit: GiB.
                     * @param _memory Instance memory capacity. unit: GiB.
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance business status. valid values:<br><li>NORMAL: indicates an instance in the NORMAL state</li><li>EXPIRED: indicates an EXPIRED instance</li><li>PROTECTIVELY_ISOLATED: PROTECTIVELY ISOLATED instance</li>.
                     * @return RestrictState Instance business status. valid values:<br><li>NORMAL: indicates an instance in the NORMAL state</li><li>EXPIRED: indicates an EXPIRED instance</li><li>PROTECTIVELY_ISOLATED: PROTECTIVELY ISOLATED instance</li>.
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置Instance business status. valid values:<br><li>NORMAL: indicates an instance in the NORMAL state</li><li>EXPIRED: indicates an EXPIRED instance</li><li>PROTECTIVELY_ISOLATED: PROTECTIVELY ISOLATED instance</li>.
                     * @param _restrictState Instance business status. valid values:<br><li>NORMAL: indicates an instance in the NORMAL state</li><li>EXPIRED: indicates an EXPIRED instance</li><li>PROTECTIVELY_ISOLATED: PROTECTIVELY ISOLATED instance</li>.
                     * 
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     * 
                     */
                    bool RestrictStateHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Instance billing plan. Valid values:<br><li>`POSTPAID_BY_HOUR`: pay after use. You are billed by the hour, by traffic.<br><li>`CDHPAID`: `CDH` billing plan. Applicable to `CDH` only, not the instances on the host.<br>
                     * @return InstanceChargeType Instance billing plan. Valid values:<br><li>`POSTPAID_BY_HOUR`: pay after use. You are billed by the hour, by traffic.<br><li>`CDHPAID`: `CDH` billing plan. Applicable to `CDH` only, not the instances on the host.<br>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing plan. Valid values:<br><li>`POSTPAID_BY_HOUR`: pay after use. You are billed by the hour, by traffic.<br><li>`CDHPAID`: `CDH` billing plan. Applicable to `CDH` only, not the instances on the host.<br>
                     * @param _instanceChargeType Instance billing plan. Valid values:<br><li>`POSTPAID_BY_HOUR`: pay after use. You are billed by the hour, by traffic.<br><li>`CDHPAID`: `CDH` billing plan. Applicable to `CDH` only, not the instances on the host.<br>
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
                     * 获取Information on the system disk of the instance
                     * @return SystemDisk Information on the system disk of the instance
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Information on the system disk of the instance
                     * @param _systemDisk Information on the system disk of the instance
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
                     * 获取Information of the instance data disks.
                     * @return DataDisks Information of the instance data disks.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Information of the instance data disks.
                     * @param _dataDisks Information of the instance data disks.
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
                     * 获取List of private IPs of the instance's primary ENI.
                     * @return PrivateIpAddresses List of private IPs of the instance's primary ENI.
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置List of private IPs of the instance's primary ENI.
                     * @param _privateIpAddresses List of private IPs of the instance's primary ENI.
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取List of public IPs of the instance's primary ENI.
Note: This field may return null, indicating that no valid value is found.
                     * @return PublicIpAddresses List of public IPs of the instance's primary ENI.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置List of public IPs of the instance's primary ENI.
Note: This field may return null, indicating that no valid value is found.
                     * @param _publicIpAddresses List of public IPs of the instance's primary ENI.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Information on instance bandwidth.
                     * @return InternetAccessible Information on instance bandwidth.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Information on instance bandwidth.
                     * @param _internetAccessible Information on instance bandwidth.
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
                     * 获取Information on the VPC where the instance resides.
                     * @return VirtualPrivateCloud Information on the VPC where the instance resides.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置Information on the VPC where the instance resides.
                     * @param _virtualPrivateCloud Information on the VPC where the instance resides.
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取`ID` of the image used to create the instance.
                     * @return ImageId `ID` of the image used to create the instance.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置`ID` of the image used to create the instance.
                     * @param _imageId `ID` of the image used to create the instance.
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
                     * 获取AUTO-Renewal flag. valid values:<br><li>`NOTIFY_AND_MANUAL_RENEW`: indicates that a notification of impending expiration is made but AUTO-renewal is not performed</li><li>`NOTIFY_AND_AUTO_RENEW`: indicates that a notification of impending expiration is made AND AUTO-renewal is performed</li><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`: indicates that notification that it is about to expire is not made AND AUTO-renewal is not performed.
Note: this field is null in postpaid mode.
                     * @return RenewFlag AUTO-Renewal flag. valid values:<br><li>`NOTIFY_AND_MANUAL_RENEW`: indicates that a notification of impending expiration is made but AUTO-renewal is not performed</li><li>`NOTIFY_AND_AUTO_RENEW`: indicates that a notification of impending expiration is made AND AUTO-renewal is performed</li><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`: indicates that notification that it is about to expire is not made AND AUTO-renewal is not performed.
Note: this field is null in postpaid mode.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置AUTO-Renewal flag. valid values:<br><li>`NOTIFY_AND_MANUAL_RENEW`: indicates that a notification of impending expiration is made but AUTO-renewal is not performed</li><li>`NOTIFY_AND_AUTO_RENEW`: indicates that a notification of impending expiration is made AND AUTO-renewal is performed</li><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`: indicates that notification that it is about to expire is not made AND AUTO-renewal is not performed.
Note: this field is null in postpaid mode.
                     * @param _renewFlag AUTO-Renewal flag. valid values:<br><li>`NOTIFY_AND_MANUAL_RENEW`: indicates that a notification of impending expiration is made but AUTO-renewal is not performed</li><li>`NOTIFY_AND_AUTO_RENEW`: indicates that a notification of impending expiration is made AND AUTO-renewal is performed</li><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`: indicates that notification that it is about to expire is not made AND AUTO-renewal is not performed.
Note: this field is null in postpaid mode.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Creation time following the `ISO8601` standard and using `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @return CreatedTime Creation time following the `ISO8601` standard and using `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time following the `ISO8601` standard and using `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @param _createdTime Creation time following the `ISO8601` standard and using `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
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
                     * 获取Expiration time in UTC format following the `ISO8601` standard: `YYYY-MM-DDThh:mm:ssZ`. Note: this parameter is `null` for postpaid instances.
                     * @return ExpiredTime Expiration time in UTC format following the `ISO8601` standard: `YYYY-MM-DDThh:mm:ssZ`. Note: this parameter is `null` for postpaid instances.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time in UTC format following the `ISO8601` standard: `YYYY-MM-DDThh:mm:ssZ`. Note: this parameter is `null` for postpaid instances.
                     * @param _expiredTime Expiration time in UTC format following the `ISO8601` standard: `YYYY-MM-DDThh:mm:ssZ`. Note: this parameter is `null` for postpaid instances.
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Operating system name.
                     * @return OsName Operating system name.
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system name.
                     * @param _osName Operating system name.
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
                     * @return SecurityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
                     * @param _securityGroupIds Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
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
                     * 获取Login settings of the instance. Currently only the key associated with the instance is returned.
                     * @return LoginSettings Login settings of the instance. Currently only the key associated with the instance is returned.
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Login settings of the instance. Currently only the key associated with the instance is returned.
                     * @param _loginSettings Login settings of the instance. Currently only the key associated with the instance is returned.
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取Instance status. for specific status types, see the instance status table (https://www.tencentcloud.comom/document/api/213/15753?from_cn_redirect=1#InstanceStatus).
                     * @return InstanceState Instance status. for specific status types, see the instance status table (https://www.tencentcloud.comom/document/api/213/15753?from_cn_redirect=1#InstanceStatus).
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status. for specific status types, see the instance status table (https://www.tencentcloud.comom/document/api/213/15753?from_cn_redirect=1#InstanceStatus).
                     * @param _instanceState Instance status. for specific status types, see the instance status table (https://www.tencentcloud.comom/document/api/213/15753?from_cn_redirect=1#InstanceStatus).
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取List of tags associated with the instance.
                     * @return Tags List of tags associated with the instance.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags associated with the instance.
                     * @param _tags List of tags associated with the instance.
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
                     * 获取Shutdown billing mode of an instance.

Valid values: <br><li>KEEP_CHARGING: billing continues after shutdown</li><li>STOP_CHARGING: billing stops after shutdown</li><li>NOT_APPLICABLE: the instance is NOT shut down or stopping billing after shutdown is NOT APPLICABLE to the instance</li>.
                     * @return StopChargingMode Shutdown billing mode of an instance.

Valid values: <br><li>KEEP_CHARGING: billing continues after shutdown</li><li>STOP_CHARGING: billing stops after shutdown</li><li>NOT_APPLICABLE: the instance is NOT shut down or stopping billing after shutdown is NOT APPLICABLE to the instance</li>.
                     * 
                     */
                    std::string GetStopChargingMode() const;

                    /**
                     * 设置Shutdown billing mode of an instance.

Valid values: <br><li>KEEP_CHARGING: billing continues after shutdown</li><li>STOP_CHARGING: billing stops after shutdown</li><li>NOT_APPLICABLE: the instance is NOT shut down or stopping billing after shutdown is NOT APPLICABLE to the instance</li>.
                     * @param _stopChargingMode Shutdown billing mode of an instance.

Valid values: <br><li>KEEP_CHARGING: billing continues after shutdown</li><li>STOP_CHARGING: billing stops after shutdown</li><li>NOT_APPLICABLE: the instance is NOT shut down or stopping billing after shutdown is NOT APPLICABLE to the instance</li>.
                     * 
                     */
                    void SetStopChargingMode(const std::string& _stopChargingMode);

                    /**
                     * 判断参数 StopChargingMode 是否已赋值
                     * @return StopChargingMode 是否已赋值
                     * 
                     */
                    bool StopChargingModeHasBeenSet() const;

                    /**
                     * 获取Globally unique ID of the instance.
                     * @return Uuid Globally unique ID of the instance.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Globally unique ID of the instance.
                     * @param _uuid Globally unique ID of the instance.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Last operation of the instance, such as StopInstances or ResetInstance.
                     * @return LatestOperation Last operation of the instance, such as StopInstances or ResetInstance.
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置Last operation of the instance, such as StopInstances or ResetInstance.
                     * @param _latestOperation Last operation of the instance, such as StopInstances or ResetInstance.
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取The latest operation status of the instance. valid values:<br><li>SUCCESS: indicates that the operation succeeded</li><li>OPERATING: indicates that the operation is in progress</li><li>FAILED: indicates that the operation FAILED</li>.
Note: This field may return null, indicating that no valid value is found.
                     * @return LatestOperationState The latest operation status of the instance. valid values:<br><li>SUCCESS: indicates that the operation succeeded</li><li>OPERATING: indicates that the operation is in progress</li><li>FAILED: indicates that the operation FAILED</li>.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置The latest operation status of the instance. valid values:<br><li>SUCCESS: indicates that the operation succeeded</li><li>OPERATING: indicates that the operation is in progress</li><li>FAILED: indicates that the operation FAILED</li>.
Note: This field may return null, indicating that no valid value is found.
                     * @param _latestOperationState The latest operation status of the instance. valid values:<br><li>SUCCESS: indicates that the operation succeeded</li><li>OPERATING: indicates that the operation is in progress</li><li>FAILED: indicates that the operation FAILED</li>.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取Unique request ID for the last operation of the instance.
                     * @return LatestOperationRequestId Unique request ID for the last operation of the instance.
                     * 
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置Unique request ID for the last operation of the instance.
                     * @param _latestOperationRequestId Unique request ID for the last operation of the instance.
                     * 
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     * 
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取Spread placement group ID.
                     * @return DisasterRecoverGroupId Spread placement group ID.
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置Spread placement group ID.
                     * @param _disasterRecoverGroupId Spread placement group ID.
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取IPv6 address of the instance.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return IPv6Addresses IPv6 address of the instance.
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<std::string> GetIPv6Addresses() const;

                    /**
                     * 设置IPv6 address of the instance.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param _iPv6Addresses IPv6 address of the instance.
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetIPv6Addresses(const std::vector<std::string>& _iPv6Addresses);

                    /**
                     * 判断参数 IPv6Addresses 是否已赋值
                     * @return IPv6Addresses 是否已赋值
                     * 
                     */
                    bool IPv6AddressesHasBeenSet() const;

                    /**
                     * 获取CAM role name.
Note: this field may return null, indicating that no valid value is obtained.
                     * @return CamRoleName CAM role name.
Note: this field may return null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM role name.
Note: this field may return null, indicating that no valid value is obtained.
                     * @param _camRoleName CAM role name.
Note: this field may return null, indicating that no valid value is obtained.
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
                     * 获取High-performance computing cluster ID.
                     * @return HpcClusterId High-performance computing cluster ID.
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置High-performance computing cluster ID.
                     * @param _hpcClusterId High-performance computing cluster ID.
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
                     * 获取IP list of HPC cluster.
Note: this field may return null, indicating that no valid value was found.
                     * @return RdmaIpAddresses IP list of HPC cluster.
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetRdmaIpAddresses() const;

                    /**
                     * 设置IP list of HPC cluster.
Note: this field may return null, indicating that no valid value was found.
                     * @param _rdmaIpAddresses IP list of HPC cluster.
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetRdmaIpAddresses(const std::vector<std::string>& _rdmaIpAddresses);

                    /**
                     * 判断参数 RdmaIpAddresses 是否已赋值
                     * @return RdmaIpAddresses 是否已赋值
                     * 
                     */
                    bool RdmaIpAddressesHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster ID where the instance is located.
                     * @return DedicatedClusterId Dedicated cluster ID where the instance is located.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置Dedicated cluster ID where the instance is located.
                     * @param _dedicatedClusterId Dedicated cluster ID where the instance is located.
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
                     * 获取Instance isolation type. valid values:<br><li>ARREAR: indicates arrears isolation<br></li><li>EXPIRE: indicates isolation upon expiration<br></li><li>MANMADE: indicates voluntarily refunded isolation<br></li><li>NOTISOLATED: indicates unisolated<br></li>.
                     * @return IsolatedSource Instance isolation type. valid values:<br><li>ARREAR: indicates arrears isolation<br></li><li>EXPIRE: indicates isolation upon expiration<br></li><li>MANMADE: indicates voluntarily refunded isolation<br></li><li>NOTISOLATED: indicates unisolated<br></li>.
                     * 
                     */
                    std::string GetIsolatedSource() const;

                    /**
                     * 设置Instance isolation type. valid values:<br><li>ARREAR: indicates arrears isolation<br></li><li>EXPIRE: indicates isolation upon expiration<br></li><li>MANMADE: indicates voluntarily refunded isolation<br></li><li>NOTISOLATED: indicates unisolated<br></li>.
                     * @param _isolatedSource Instance isolation type. valid values:<br><li>ARREAR: indicates arrears isolation<br></li><li>EXPIRE: indicates isolation upon expiration<br></li><li>MANMADE: indicates voluntarily refunded isolation<br></li><li>NOTISOLATED: indicates unisolated<br></li>.
                     * 
                     */
                    void SetIsolatedSource(const std::string& _isolatedSource);

                    /**
                     * 判断参数 IsolatedSource 是否已赋值
                     * @return IsolatedSource 是否已赋值
                     * 
                     */
                    bool IsolatedSourceHasBeenSet() const;

                    /**
                     * 获取GPU information. if it is a gpu type instance, this value will be returned. for other type instances, it does not return.
                     * @return GPUInfo GPU information. if it is a gpu type instance, this value will be returned. for other type instances, it does not return.
                     * 
                     */
                    GPUInfo GetGPUInfo() const;

                    /**
                     * 设置GPU information. if it is a gpu type instance, this value will be returned. for other type instances, it does not return.
                     * @param _gPUInfo GPU information. if it is a gpu type instance, this value will be returned. for other type instances, it does not return.
                     * 
                     */
                    void SetGPUInfo(const GPUInfo& _gPUInfo);

                    /**
                     * 判断参数 GPUInfo 是否已赋值
                     * @return GPUInfo 是否已赋值
                     * 
                     */
                    bool GPUInfoHasBeenSet() const;

                    /**
                     * 获取Instance OS license type. Default value: `TencentCloud`
                     * @return LicenseType Instance OS license type. Default value: `TencentCloud`
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置Instance OS license type. Default value: `TencentCloud`
                     * @param _licenseType Instance OS license type. Default value: `TencentCloud`
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取Instance destruction protection flag indicates whether an instance is allowed to be deleted through an api. value ranges from:<br><li>true: indicates that instance protection is enabled, deletion through apis is not allowed</li><li>false: indicates that instance protection is disabled, allow passage</li><br>default value: false.
                     * @return DisableApiTermination Instance destruction protection flag indicates whether an instance is allowed to be deleted through an api. value ranges from:<br><li>true: indicates that instance protection is enabled, deletion through apis is not allowed</li><li>false: indicates that instance protection is disabled, allow passage</li><br>default value: false.
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置Instance destruction protection flag indicates whether an instance is allowed to be deleted through an api. value ranges from:<br><li>true: indicates that instance protection is enabled, deletion through apis is not allowed</li><li>false: indicates that instance protection is disabled, allow passage</li><br>default value: false.
                     * @param _disableApiTermination Instance destruction protection flag indicates whether an instance is allowed to be deleted through an api. value ranges from:<br><li>true: indicates that instance protection is enabled, deletion through apis is not allowed</li><li>false: indicates that instance protection is disabled, allow passage</li><br>default value: false.
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取Default login user
                     * @return DefaultLoginUser Default login user
                     * 
                     */
                    std::string GetDefaultLoginUser() const;

                    /**
                     * 设置Default login user
                     * @param _defaultLoginUser Default login user
                     * 
                     */
                    void SetDefaultLoginUser(const std::string& _defaultLoginUser);

                    /**
                     * 判断参数 DefaultLoginUser 是否已赋值
                     * @return DefaultLoginUser 是否已赋值
                     * 
                     */
                    bool DefaultLoginUserHasBeenSet() const;

                    /**
                     * 获取Default login port
                     * @return DefaultLoginPort Default login port
                     * 
                     */
                    int64_t GetDefaultLoginPort() const;

                    /**
                     * 设置Default login port
                     * @param _defaultLoginPort Default login port
                     * 
                     */
                    void SetDefaultLoginPort(const int64_t& _defaultLoginPort);

                    /**
                     * 判断参数 DefaultLoginPort 是否已赋值
                     * @return DefaultLoginPort 是否已赋值
                     * 
                     */
                    bool DefaultLoginPortHasBeenSet() const;

                    /**
                     * 获取Latest operation errors of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LatestOperationErrorMsg Latest operation errors of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestOperationErrorMsg() const;

                    /**
                     * 设置Latest operation errors of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _latestOperationErrorMsg Latest operation errors of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLatestOperationErrorMsg(const std::string& _latestOperationErrorMsg);

                    /**
                     * 判断参数 LatestOperationErrorMsg 是否已赋值
                     * @return LatestOperationErrorMsg 是否已赋值
                     * 
                     */
                    bool LatestOperationErrorMsgHasBeenSet() const;

                    /**
                     * 获取Custom metadata. this parameter corresponds to the metadata information specified when creating a CVM. **note: in beta test**.
                     * @return Metadata Custom metadata. this parameter corresponds to the metadata information specified when creating a CVM. **note: in beta test**.
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置Custom metadata. this parameter corresponds to the metadata information specified when creating a CVM. **note: in beta test**.
                     * @param _metadata Custom metadata. this parameter corresponds to the metadata information specified when creating a CVM. **note: in beta test**.
                     * 
                     */
                    void SetMetadata(const Metadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取Specifies the public IPv6 address bound to the instance.
                     * @return PublicIPv6Addresses Specifies the public IPv6 address bound to the instance.
                     * 
                     */
                    std::vector<std::string> GetPublicIPv6Addresses() const;

                    /**
                     * 设置Specifies the public IPv6 address bound to the instance.
                     * @param _publicIPv6Addresses Specifies the public IPv6 address bound to the instance.
                     * 
                     */
                    void SetPublicIPv6Addresses(const std::vector<std::string>& _publicIPv6Addresses);

                    /**
                     * 判断参数 PublicIPv6Addresses 是否已赋值
                     * @return PublicIPv6Addresses 是否已赋值
                     * 
                     */
                    bool PublicIPv6AddressesHasBeenSet() const;

                private:

                    /**
                     * Location of the instance
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Instance `ID`
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance model
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of CPU cores of the instance; unit: core
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Instance memory capacity. unit: GiB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance business status. valid values:<br><li>NORMAL: indicates an instance in the NORMAL state</li><li>EXPIRED: indicates an EXPIRED instance</li><li>PROTECTIVELY_ISOLATED: PROTECTIVELY ISOLATED instance</li>.
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing plan. Valid values:<br><li>`POSTPAID_BY_HOUR`: pay after use. You are billed by the hour, by traffic.<br><li>`CDHPAID`: `CDH` billing plan. Applicable to `CDH` only, not the instances on the host.<br>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Information on the system disk of the instance
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Information of the instance data disks.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * List of private IPs of the instance's primary ENI.
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * List of public IPs of the instance's primary ENI.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Information on instance bandwidth.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Information on the VPC where the instance resides.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * `ID` of the image used to create the instance.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * AUTO-Renewal flag. valid values:<br><li>`NOTIFY_AND_MANUAL_RENEW`: indicates that a notification of impending expiration is made but AUTO-renewal is not performed</li><li>`NOTIFY_AND_AUTO_RENEW`: indicates that a notification of impending expiration is made AND AUTO-renewal is performed</li><li>`DISABLE_NOTIFY_AND_MANUAL_RENEW`: indicates that notification that it is about to expire is not made AND AUTO-renewal is not performed.
Note: this field is null in postpaid mode.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Creation time following the `ISO8601` standard and using `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Expiration time in UTC format following the `ISO8601` standard: `YYYY-MM-DDThh:mm:ssZ`. Note: this parameter is `null` for postpaid instances.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Operating system name.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Security groups to which the instance belongs. To obtain the security group IDs, you can call [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/api/215/15808) and look for the `sgld` fields in the response.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Login settings of the instance. Currently only the key associated with the instance is returned.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Instance status. for specific status types, see the instance status table (https://www.tencentcloud.comom/document/api/213/15753?from_cn_redirect=1#InstanceStatus).
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * List of tags associated with the instance.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Shutdown billing mode of an instance.

Valid values: <br><li>KEEP_CHARGING: billing continues after shutdown</li><li>STOP_CHARGING: billing stops after shutdown</li><li>NOT_APPLICABLE: the instance is NOT shut down or stopping billing after shutdown is NOT APPLICABLE to the instance</li>.
                     */
                    std::string m_stopChargingMode;
                    bool m_stopChargingModeHasBeenSet;

                    /**
                     * Globally unique ID of the instance.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Last operation of the instance, such as StopInstances or ResetInstance.
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * The latest operation status of the instance. valid values:<br><li>SUCCESS: indicates that the operation succeeded</li><li>OPERATING: indicates that the operation is in progress</li><li>FAILED: indicates that the operation FAILED</li>.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * Unique request ID for the last operation of the instance.
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * Spread placement group ID.
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * IPv6 address of the instance.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> m_iPv6Addresses;
                    bool m_iPv6AddressesHasBeenSet;

                    /**
                     * CAM role name.
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * High-performance computing cluster ID.
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * IP list of HPC cluster.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_rdmaIpAddresses;
                    bool m_rdmaIpAddressesHasBeenSet;

                    /**
                     * Dedicated cluster ID where the instance is located.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Instance isolation type. valid values:<br><li>ARREAR: indicates arrears isolation<br></li><li>EXPIRE: indicates isolation upon expiration<br></li><li>MANMADE: indicates voluntarily refunded isolation<br></li><li>NOTISOLATED: indicates unisolated<br></li>.
                     */
                    std::string m_isolatedSource;
                    bool m_isolatedSourceHasBeenSet;

                    /**
                     * GPU information. if it is a gpu type instance, this value will be returned. for other type instances, it does not return.
                     */
                    GPUInfo m_gPUInfo;
                    bool m_gPUInfoHasBeenSet;

                    /**
                     * Instance OS license type. Default value: `TencentCloud`
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Instance destruction protection flag indicates whether an instance is allowed to be deleted through an api. value ranges from:<br><li>true: indicates that instance protection is enabled, deletion through apis is not allowed</li><li>false: indicates that instance protection is disabled, allow passage</li><br>default value: false.
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * Default login user
                     */
                    std::string m_defaultLoginUser;
                    bool m_defaultLoginUserHasBeenSet;

                    /**
                     * Default login port
                     */
                    int64_t m_defaultLoginPort;
                    bool m_defaultLoginPortHasBeenSet;

                    /**
                     * Latest operation errors of the instance.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_latestOperationErrorMsg;
                    bool m_latestOperationErrorMsgHasBeenSet;

                    /**
                     * Custom metadata. this parameter corresponds to the metadata information specified when creating a CVM. **note: in beta test**.
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * Specifies the public IPv6 address bound to the instance.
                     */
                    std::vector<std::string> m_publicIPv6Addresses;
                    bool m_publicIPv6AddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCE_H_
