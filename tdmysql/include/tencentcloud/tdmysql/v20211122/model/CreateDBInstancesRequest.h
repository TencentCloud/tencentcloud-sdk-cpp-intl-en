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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceParam.h>
#include <tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateDBInstances request structure.
                */
                class CreateDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateDBInstancesRequest();
                    ~CreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>Instance count. Maximum is 10.</p>
                     * @return InstanceCount <p>Instance count. Maximum is 10.</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Instance count. Maximum is 10.</p>
                     * @param _instanceCount <p>Instance count. Maximum is 10.</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

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
                     * 获取<p>Create an instance version, using the current latest version by default</p>
                     * @return CreateVersion <p>Create an instance version, using the current latest version by default</p>
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 设置<p>Create an instance version, using the current latest version by default</p>
                     * @param _createVersion <p>Create an instance version, using the current latest version by default</p>
                     * 
                     */
                    void SetCreateVersion(const std::string& _createVersion);

                    /**
                     * 判断参数 CreateVersion 是否已赋值
                     * @return CreateVersion 是否已赋值
                     * 
                     */
                    bool CreateVersionHasBeenSet() const;

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
                     * 获取<p>Initialize instance parameters. For example:<br>character_set_server (character set, defaults to utf8),<br>lower_case_table_names (table name case sensitivity, 0 - sensitive; 1 - insensitive, default is 0)</p>
                     * @return InitParams <p>Initialize instance parameters. For example:<br>character_set_server (character set, defaults to utf8),<br>lower_case_table_names (table name case sensitivity, 0 - sensitive; 1 - insensitive, default is 0)</p>
                     * 
                     */
                    std::vector<InstanceParam> GetInitParams() const;

                    /**
                     * 设置<p>Initialize instance parameters. For example:<br>character_set_server (character set, defaults to utf8),<br>lower_case_table_names (table name case sensitivity, 0 - sensitive; 1 - insensitive, default is 0)</p>
                     * @param _initParams <p>Initialize instance parameters. For example:<br>character_set_server (character set, defaults to utf8),<br>lower_case_table_names (table name case sensitivity, 0 - sensitive; 1 - insensitive, default is 0)</p>
                     * 
                     */
                    void SetInitParams(const std::vector<InstanceParam>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取<p>Time unit, m: month</p>
                     * @return TimeUnit <p>Time unit, m: month</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Time unit, m: month</p>
                     * @param _timeUnit <p>Time unit, m: month</p>
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
                     * 获取<p>Number of control nodes</p>
                     * @return MCNum <p>Number of control nodes</p>
                     * 
                     */
                    int64_t GetMCNum() const;

                    /**
                     * 设置<p>Number of control nodes</p>
                     * @param _mCNum <p>Number of control nodes</p>
                     * 
                     */
                    void SetMCNum(const int64_t& _mCNum);

                    /**
                     * 判断参数 MCNum 是否已赋值
                     * @return MCNum 是否已赋值
                     * 
                     */
                    bool MCNumHasBeenSet() const;

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
                     * 获取<p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     * @return InstanceType <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     * @param _instanceType <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
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
                     * 获取<p>AZ mode. 1: Single AZ, 2: Multi-AZ non-primary AZ, 3: Multi-AZ primary AZ</p>
                     * @return AZMode <p>AZ mode. 1: Single AZ, 2: Multi-AZ non-primary AZ, 3: Multi-AZ primary AZ</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>AZ mode. 1: Single AZ, 2: Multi-AZ non-primary AZ, 3: Multi-AZ primary AZ</p>
                     * @param _aZMode <p>AZ mode. 1: Single AZ, 2: Multi-AZ non-primary AZ, 3: Multi-AZ primary AZ</p>
                     * 
                     */
                    void SetAZMode(const int64_t& _aZMode);

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance mode</p>
                     * @return InstanceMode <p>Instance mode</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 设置<p>Instance mode</p>
                     * @param _instanceMode <p>Instance mode</p>
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
                     * 获取<p>Parameter template id</p>
                     * @return TemplateId <p>Parameter template id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Parameter template id</p>
                     * @param _templateId <p>Parameter template id</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Compatible mode, enum:MySQL,HBase</p>
                     * @return SQLMode <p>Compatible mode, enum:MySQL,HBase</p>
                     * 
                     */
                    std::string GetSQLMode() const;

                    /**
                     * 设置<p>Compatible mode, enum:MySQL,HBase</p>
                     * @param _sQLMode <p>Compatible mode, enum:MySQL,HBase</p>
                     * 
                     */
                    void SetSQLMode(const std::string& _sQLMode);

                    /**
                     * 判断参数 SQLMode 是否已赋值
                     * @return SQLMode 是否已赋值
                     * 
                     */
                    bool SQLModeHasBeenSet() const;

                    /**
                     * 获取<p>ccu configuration of the svls instance</p>
                     * @return AutoScaleConfig <p>ccu configuration of the svls instance</p>
                     * 
                     */
                    AutoScalingConfig GetAutoScaleConfig() const;

                    /**
                     * 设置<p>ccu configuration of the svls instance</p>
                     * @param _autoScaleConfig <p>ccu configuration of the svls instance</p>
                     * 
                     */
                    void SetAutoScaleConfig(const AutoScalingConfig& _autoScaleConfig);

                    /**
                     * 判断参数 AutoScaleConfig 是否已赋值
                     * @return AutoScaleConfig 是否已赋值
                     * 
                     */
                    bool AutoScaleConfigHasBeenSet() const;

                private:

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
                     * <p>Instance count. Maximum is 10.</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>Number of replicas</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>Create an instance version, using the current latest version by default</p>
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>Instance name. The required length is 1-60. It can contain Chinese characters, English case, digits, hyphens (-), and underscores (_).</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Tag key-value pair array</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Initialize instance parameters. For example:<br>character_set_server (character set, defaults to utf8),<br>lower_case_table_names (table name case sensitivity, 0 - sensitive; 1 - insensitive, default is 0)</p>
                     */
                    std::vector<InstanceParam> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * <p>Time unit, m: month</p>
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
                     * <p>Number of control nodes</p>
                     */
                    int64_t m_mCNum;
                    bool m_mCNumHasBeenSet;

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
                     * <p>Instance Architecture Type, separate: decoupled architecture; hybrid: peer-to-peer architecture</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Disk Type, CLOUD_HSSD enhanced SSD, CLOUD_TCS local SSD disk</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>AZ mode. 1: Single AZ, 2: Multi-AZ non-primary AZ, 3: Multi-AZ primary AZ</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>Instance mode</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>Parameter template id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Compatible mode, enum:MySQL,HBase</p>
                     */
                    std::string m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>ccu configuration of the svls instance</p>
                     */
                    AutoScalingConfig m_autoScaleConfig;
                    bool m_autoScaleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBINSTANCESREQUEST_H_
