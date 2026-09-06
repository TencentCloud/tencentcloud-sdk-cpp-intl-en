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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATESTANDBYDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATESTANDBYDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateStandbyDBInstance request structure.
                */
                class CreateStandbyDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateStandbyDBInstanceRequest();
                    ~CreateStandbyDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Primary instance id</p>
                     * @return PrimaryInstanceId <p>Primary instance id</p>
                     * 
                     */
                    std::string GetPrimaryInstanceId() const;

                    /**
                     * 设置<p>Primary instance id</p>
                     * @param _primaryInstanceId <p>Primary instance id</p>
                     * 
                     */
                    void SetPrimaryInstanceId(const std::string& _primaryInstanceId);

                    /**
                     * 判断参数 PrimaryInstanceId 是否已赋值
                     * @return PrimaryInstanceId 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Creating an Instance Region</p>
                     * @return Zone <p>Creating an Instance Region</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Creating an Instance Region</p>
                     * @param _zone <p>Creating an Instance Region</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Character type vpcid</p>
                     * @return VpcId <p>Character type vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Character type vpcid</p>
                     * @param _vpcId <p>Character type vpcid</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Character type subnetid</p>
                     * @return SubnetId <p>Character type subnetid</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Character type subnetid</p>
                     * @param _subnetId <p>Character type subnetid</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Purchase specification</p>
                     * @return SpecCode <p>Purchase specification</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>Purchase specification</p>
                     * @param _specCode <p>Purchase specification</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>Node disk capacity (unit: GB)</p>
                     * @return Disk <p>Node disk capacity (unit: GB)</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置<p>Node disk capacity (unit: GB)</p>
                     * @param _disk <p>Node disk capacity (unit: GB)</p>
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>Number of storage nodes</p>
                     * @return StorageNodeNum <p>Number of storage nodes</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 设置<p>Number of storage nodes</p>
                     * @param _storageNodeNum <p>Number of storage nodes</p>
                     * 
                     */
                    void SetStorageNodeNum(const int64_t& _storageNodeNum);

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Number of node replicas for storage, up to 5, must be an odd number</p>
                     * @return Replications <p>Number of node replicas for storage, up to 5, must be an odd number</p>
                     * 
                     */
                    int64_t GetReplications() const;

                    /**
                     * 设置<p>Number of node replicas for storage, up to 5, must be an odd number</p>
                     * @param _replications <p>Number of node replicas for storage, up to 5, must be an odd number</p>
                     * 
                     */
                    void SetReplications(const int64_t& _replications);

                    /**
                     * 判断参数 Replications 是否已赋值
                     * @return Replications 是否已赋值
                     * 
                     */
                    bool ReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>Number of replicas</p>
                     * @return FullReplications <p>Number of replicas</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>Number of replicas</p>
                     * @param _fullReplications <p>Number of replicas</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     * @return InstanceName <p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     * @param _instanceName <p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
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
                     * 获取<p>Time unit. y: year, m: month, d: day</p>
                     * @return TimeUnit <p>Time unit. y: year, m: month, d: day</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Time unit. y: year, m: month, d: day</p>
                     * @param _timeUnit <p>Time unit. y: year, m: month, d: day</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Commodity duration size</p>
                     * @return TimeSpan <p>Commodity duration size</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Commodity duration size</p>
                     * @param _timeSpan <p>Commodity duration size</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores of the storage node</p>
                     * @return StorageNodeCpu <p>CPU cores of the storage node</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>CPU cores of the storage node</p>
                     * @param _storageNodeCpu <p>CPU cores of the storage node</p>
                     * 
                     */
                    void SetStorageNodeCpu(const int64_t& _storageNodeCpu);

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>Storage node memory size</p>
                     * @return StorageNodeMem <p>Storage node memory size</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>Storage node memory size</p>
                     * @param _storageNodeMem <p>Storage node memory size</p>
                     * 
                     */
                    void SetStorageNodeMem(const int64_t& _storageNodeMem);

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode. 0 means pay-as-you-go/postpaid, 1 means prepaid.</p>
                     * @return PayMode <p>Payment mode. 0 means pay-as-you-go/postpaid, 1 means prepaid.</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>Payment mode. 0 means pay-as-you-go/postpaid, 1 means prepaid.</p>
                     * @param _payMode <p>Payment mode. 0 means pay-as-you-go/postpaid, 1 means prepaid.</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Custom port</p>
                     * @return Vport <p>Custom port</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Custom port</p>
                     * @param _vport <p>Custom port</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>Multi-AZ availability zone list</p>
                     * @return Zones <p>Multi-AZ availability zone list</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>Multi-AZ availability zone list</p>
                     * @param _zones <p>Multi-AZ availability zone list</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to use a coupon.</p>
                     * @return AutoVoucher <p>Whether to use a coupon.</p>
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置<p>Whether to use a coupon.</p>
                     * @param _autoVoucher <p>Whether to use a coupon.</p>
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>Coupon list</p>
                     * @return VoucherIds <p>Coupon list</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>Coupon list</p>
                     * @param _voucherIds <p>Coupon list</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>Instance Architecture Type. "hybrid" is supported since v19.0.0</p>
                     * @return InstanceType <p>Instance Architecture Type. "hybrid" is supported since v19.0.0</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance Architecture Type. "hybrid" is supported since v19.0.0</p>
                     * @param _instanceType <p>Instance Architecture Type. "hybrid" is supported since v19.0.0</p>
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
                     * 获取<p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     * @return StorageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     * @param _storageType <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tag key-value pair array</p>
                     * @return ResourceTags <p>Tag key-value pair array</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>Tag key-value pair array</p>
                     * @param _resourceTags <p>Tag key-value pair array</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Region of the primary instance</p>
                     * @return PrimaryInstanceRegion <p>Region of the primary instance</p>
                     * 
                     */
                    std::string GetPrimaryInstanceRegion() const;

                    /**
                     * 设置<p>Region of the primary instance</p>
                     * @param _primaryInstanceRegion <p>Region of the primary instance</p>
                     * 
                     */
                    void SetPrimaryInstanceRegion(const std::string& _primaryInstanceRegion);

                    /**
                     * 判断参数 PrimaryInstanceRegion 是否已赋值
                     * @return PrimaryInstanceRegion 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceRegionHasBeenSet() const;

                    /**
                     * 获取<p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     * @return InstanceMode <p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 设置<p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     * @param _instanceMode <p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     * 
                     */
                    void SetInstanceMode(const std::string& _instanceMode);

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>dbaadmin password</p>
                     * @return Password <p>dbaadmin password</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>dbaadmin password</p>
                     * @param _password <p>dbaadmin password</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Bind the security group id list</p>
                     * @return SecurityGroupIds <p>Bind the security group id list</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Bind the security group id list</p>
                     * @param _securityGroupIds <p>Bind the security group id list</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Primary instance id</p>
                     */
                    std::string m_primaryInstanceId;
                    bool m_primaryInstanceIdHasBeenSet;

                    /**
                     * <p>Creating an Instance Region</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Character type vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Character type subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Purchase specification</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>Node disk capacity (unit: GB)</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>Number of storage nodes</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>Number of node replicas for storage, up to 5, must be an odd number</p>
                     */
                    int64_t m_replications;
                    bool m_replicationsHasBeenSet;

                    /**
                     * <p>Number of replicas</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Time unit. y: year, m: month, d: day</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Commodity duration size</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>CPU cores of the storage node</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>Storage node memory size</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>Payment mode. 0 means pay-as-you-go/postpaid, 1 means prepaid.</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Custom port</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Multi-AZ availability zone list</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>Whether to use a coupon.</p>
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Coupon list</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>Instance Architecture Type. "hybrid" is supported since v19.0.0</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Tag key-value pair array</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Region of the primary instance</p>
                     */
                    std::string m_primaryInstanceRegion;
                    bool m_primaryInstanceRegionHasBeenSet;

                    /**
                     * <p>Instance mode, normal: standard type; enhanced: enhanced</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>dbaadmin password</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Bind the security group id list</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATESTANDBYDBINSTANCEREQUEST_H_
