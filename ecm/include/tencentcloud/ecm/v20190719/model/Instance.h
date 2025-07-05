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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Image.h>
#include <tencentcloud/ecm/v20190719/model/SimpleModule.h>
#include <tencentcloud/ecm/v20190719/model/Position.h>
#include <tencentcloud/ecm/v20190719/model/Internet.h>
#include <tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
#include <tencentcloud/ecm/v20190719/model/DiskInfo.h>
#include <tencentcloud/ecm/v20190719/model/VirtualPrivateCloud.h>
#include <tencentcloud/ecm/v20190719/model/PhysicalPosition.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Instance information.
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Instance name, such as `ens-34241f3s`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name, such as `ens-34241f3s`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, such as `ens-34241f3s`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance name, such as `ens-34241f3s`.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance status. Valid values:
PENDING: creating
LAUNCH_FAILED: failed to create
RUNNING: running
STOPPED: shut down
STARTING: starting
STOPPING: shutting down
REBOOTING: restarting
SHUTDOWN: to be terminated
TERMINATING: terminating.
                     * @return InstanceState Instance status. Valid values:
PENDING: creating
LAUNCH_FAILED: failed to create
RUNNING: running
STOPPED: shut down
STARTING: starting
STOPPING: shutting down
REBOOTING: restarting
SHUTDOWN: to be terminated
TERMINATING: terminating.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status. Valid values:
PENDING: creating
LAUNCH_FAILED: failed to create
RUNNING: running
STOPPED: shut down
STARTING: starting
STOPPING: shutting down
REBOOTING: restarting
SHUTDOWN: to be terminated
TERMINATING: terminating.
                     * @param _instanceState Instance status. Valid values:
PENDING: creating
LAUNCH_FAILED: failed to create
RUNNING: running
STOPPED: shut down
STARTING: starting
STOPPING: shutting down
REBOOTING: restarting
SHUTDOWN: to be terminated
TERMINATING: terminating.
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
                     * 获取Information of the image currently used by the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Image Information of the image currently used by the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Image GetImage() const;

                    /**
                     * 设置Information of the image currently used by the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _image Information of the image currently used by the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImage(const Image& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Basic information of the current module of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SimpleModule Basic information of the current module of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SimpleModule GetSimpleModule() const;

                    /**
                     * 设置Basic information of the current module of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _simpleModule Basic information of the current module of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSimpleModule(const SimpleModule& _simpleModule);

                    /**
                     * 判断参数 SimpleModule 是否已赋值
                     * @return SimpleModule 是否已赋值
                     * 
                     */
                    bool SimpleModuleHasBeenSet() const;

                    /**
                     * 获取Location information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Position Location information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Position GetPosition() const;

                    /**
                     * 设置Location information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _position Location information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosition(const Position& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Internet Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Internet GetInternet() const;

                    /**
                     * 设置Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _internet Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInternet(const Internet& _internet);

                    /**
                     * 判断参数 Internet 是否已赋值
                     * @return Internet 是否已赋值
                     * 
                     */
                    bool InternetHasBeenSet() const;

                    /**
                     * 获取Configuration information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceTypeConfig Configuration information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InstanceTypeConfig GetInstanceTypeConfig() const;

                    /**
                     * 设置Configuration information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _instanceTypeConfig Configuration information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig);

                    /**
                     * 判断参数 InstanceTypeConfig 是否已赋值
                     * @return InstanceTypeConfig 是否已赋值
                     * 
                     */
                    bool InstanceTypeConfigHasBeenSet() const;

                    /**
                     * 获取Instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tagSet Instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LatestOperation Last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置Last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _latestOperation Last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Result of the last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LatestOperationState Result of the last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置Result of the last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _latestOperationState Result of the last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance business status. Valid values:
NORMAL: normal
EXPIRED: expired
PROTECTIVELY_ISOLATED: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RestrictState Instance business status. Valid values:
NORMAL: normal
EXPIRED: expired
PROTECTIVELY_ISOLATED: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置Instance business status. Valid values:
NORMAL: normal
EXPIRED: expired
PROTECTIVELY_ISOLATED: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _restrictState Instance business status. Valid values:
NORMAL: normal
EXPIRED: expired
PROTECTIVELY_ISOLATED: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取System disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SystemDiskSize System disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSystemDiskSize() const;

                    /**
                     * 设置System disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _systemDiskSize System disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemDiskSize(const int64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     * 
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Data disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataDiskSize Data disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDataDiskSize() const;

                    /**
                     * 设置Data disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dataDiskSize Data disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataDiskSize(const int64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取Instance UUID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UUID Instance UUID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置Instance UUID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _uUID Instance UUID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取Billing mode.
    0: postpaid.
    1: prepaid.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode.
    0: postpaid.
    1: prepaid.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode.
    0: postpaid.
    1: prepaid.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing mode.
    0: postpaid.
    1: prepaid.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Isolation time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsolatedTime Isolation time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置Isolation time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isolatedTime Isolation time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Auto-Renewal flag.
      0: no.
      1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Auto-Renewal flag.
      0: no.
      1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Auto-Renewal flag.
      0: no.
      1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Auto-Renewal flag.
      0: no.
      1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Expiration status.
    NORMAL: normal.
    WILL_EXPIRE: about to expire.
    EXPIRED: expired.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireState Expiration status.
    NORMAL: normal.
    WILL_EXPIRE: about to expire.
    EXPIRED: expired.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireState() const;

                    /**
                     * 设置Expiration status.
    NORMAL: normal.
    WILL_EXPIRE: about to expire.
    EXPIRED: expired.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _expireState Expiration status.
    NORMAL: normal.
    WILL_EXPIRE: about to expire.
    EXPIRED: expired.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireState(const std::string& _expireState);

                    /**
                     * 判断参数 ExpireState 是否已赋值
                     * @return ExpireState 是否已赋值
                     * 
                     */
                    bool ExpireStateHasBeenSet() const;

                    /**
                     * 获取System disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SystemDisk System disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DiskInfo GetSystemDisk() const;

                    /**
                     * 设置System disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _systemDisk System disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemDisk(const DiskInfo& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Data disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataDisks Data disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiskInfo> GetDataDisks() const;

                    /**
                     * 设置Data disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dataDisks Data disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataDisks(const std::vector<DiskInfo>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取New instance flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NewFlag New instance flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNewFlag() const;

                    /**
                     * 设置New instance flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _newFlag New instance flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNewFlag(const int64_t& _newFlag);

                    /**
                     * 判断参数 NewFlag 是否已赋值
                     * @return NewFlag 是否已赋值
                     * 
                     */
                    bool NewFlagHasBeenSet() const;

                    /**
                     * 获取Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecurityGroupIds Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _securityGroupIds Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取VPC attribute
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VirtualPrivateCloud VPC attribute
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置VPC attribute
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _virtualPrivateCloud VPC attribute
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ISP field of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ISP ISP field of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置ISP field of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _iSP ISP field of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取Physical location information. Note that this field is currently a reserved field and null.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PhysicalPosition Physical location information. Note that this field is currently a reserved field and null.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PhysicalPosition GetPhysicalPosition() const;

                    /**
                     * 设置Physical location information. Note that this field is currently a reserved field and null.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _physicalPosition Physical location information. Note that this field is currently a reserved field and null.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhysicalPosition(const PhysicalPosition& _physicalPosition);

                    /**
                     * 判断参数 PhysicalPosition 是否已赋值
                     * @return PhysicalPosition 是否已赋值
                     * 
                     */
                    bool PhysicalPositionHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name, such as `ens-34241f3s`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance status. Valid values:
PENDING: creating
LAUNCH_FAILED: failed to create
RUNNING: running
STOPPED: shut down
STARTING: starting
STOPPING: shutting down
REBOOTING: restarting
SHUTDOWN: to be terminated
TERMINATING: terminating.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Information of the image currently used by the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Basic information of the current module of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SimpleModule m_simpleModule;
                    bool m_simpleModuleHasBeenSet;

                    /**
                     * Location information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Position m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Internet m_internet;
                    bool m_internetHasBeenSet;

                    /**
                     * Configuration information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    InstanceTypeConfig m_instanceTypeConfig;
                    bool m_instanceTypeConfigHasBeenSet;

                    /**
                     * Instance creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance tag information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * Result of the last operation on the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * Instance business status. Valid values:
NORMAL: normal
EXPIRED: expired
PROTECTIVELY_ISOLATED: isolated.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * System disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * Data disk size in GB.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * Instance UUID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * Billing mode.
    0: postpaid.
    1: prepaid.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Expiration time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Isolation time in the format of `yyyy-mm-dd HH:mm:ss`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Auto-Renewal flag.
      0: no.
      1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Expiration status.
    NORMAL: normal.
    WILL_EXPIRE: about to expire.
    EXPIRED: expired.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireState;
                    bool m_expireStateHasBeenSet;

                    /**
                     * System disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DiskInfo m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiskInfo> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * New instance flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_newFlag;
                    bool m_newFlagHasBeenSet;

                    /**
                     * Security group of the instance, which can be obtained from the `sgId` field in the returned value of the `DescribeSecurityGroups` API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * VPC attribute
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * ISP field of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * Physical location information. Note that this field is currently a reserved field and null.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PhysicalPosition m_physicalPosition;
                    bool m_physicalPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCE_H_
