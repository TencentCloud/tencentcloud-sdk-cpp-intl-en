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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDLIBRADBINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDLIBRADBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Objects.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddLibraDBInstances request structure.
                */
                class AddLibraDBInstancesRequest : public AbstractModel
                {
                public:
                    AddLibraDBInstancesRequest();
                    ~AddLibraDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
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
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取CPU cores
                     * @return Cpu CPU cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU cores
                     * @param _cpu CPU cores
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory in GB
                     * @return Mem Memory in GB
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Memory in GB
                     * @param _mem Memory in GB
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取Disk size.
                     * @return StorageSize Disk size.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Disk size.
                     * @param _storageSize Disk size.
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取Payment mode
                     * @return PayMode Payment mode
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _payMode Payment mode
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
                     * 获取Sync object list
                     * @return Objects Sync object list
                     * 
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置Sync object list
                     * @param _objects Sync object list
                     * 
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Port used when adding new RO groups, value range [0,65535)
                     * @return Port Port used when adding new RO groups, value range [0,65535)
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port used when adding new RO groups, value range [0,65535)
                     * @param _port Port used when adding new RO groups, value range [0,65535)
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Number of newly-added read-only instances, value range (0,15]
                     * @return GoodsNum Number of newly-added read-only instances, value range (0,15]
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of newly-added read-only instances, value range (0,15]
                     * @param _goodsNum Number of newly-added read-only instances, value range (0,15]
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Instance name, string length range [0,64), value range uppercase and lowercase letters, digits 0-9, '_', '-', '.'
                     * @return InstanceName Instance name, string length range [0,64), value range uppercase and lowercase letters, digits 0-9, '_', '-', '.'
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, string length range [0,64), value range uppercase and lowercase letters, digits 0-9, '_', '-', '.'
                     * @param _instanceName Instance name, string length range [0,64), value range uppercase and lowercase letters, digits 0-9, '_', '-', '.'
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
                     * 获取Number of replicas
                     * @return ReplicasNum Number of replicas
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 设置Number of replicas
                     * @param _replicasNum Number of replicas
                     * 
                     */
                    void SetReplicasNum(const int64_t& _replicasNum);

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                    /**
                     * 获取Value is 'Exclusive' when ReplicasNum>1 or ReplicasNum=1 and Cpu>=32 cores, and 'Common' in other scenarios.
                     * @return InstanceType Value is 'Exclusive' when ReplicasNum>1 or ReplicasNum=1 and Cpu>=32 cores, and 'Common' in other scenarios.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Value is 'Exclusive' when ReplicasNum>1 or ReplicasNum=1 and Cpu>=32 cores, and 'Common' in other scenarios.
                     * @param _instanceType Value is 'Exclusive' when ReplicasNum>1 or ReplicasNum=1 and Cpu>=32 cores, and 'Common' in other scenarios.
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
                     * 获取Disk type.
                     * @return StorageType Disk type.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Disk type.
                     * @param _storageType Disk type.
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
                     * 获取Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.
                     * @return AutoVoucher Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.
                     * @param _autoVoucher Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Order source, string length range [0,64)
                     * @return OrderSource Order source, string length range [0,64)
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置Order source, string length range [0,64)
                     * @param _orderSource Order source, string length range [0,64)
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取Transaction mode 0-Place order and pay 1-Place order
                     * @return DealMode Transaction mode 0-Place order and pay 1-Place order
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置Transaction mode 0-Place order and pay 1-Place order
                     * @param _dealMode Transaction mode 0-Place order and pay 1-Place order
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取ID of the associated VPC network.
                     * @return VpcId ID of the associated VPC network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the associated VPC network.
                     * @param _vpcId ID of the associated VPC network.
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
                     * 获取Subnet ID. If VpcId is set up, SubnetId is required.
                     * @return SubnetId Subnet ID. If VpcId is set up, SubnetId is required.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. If VpcId is set up, SubnetId is required.
                     * @param _subnetId Subnet ID. If VpcId is set up, SubnetId is required.
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
                     * 获取Security group ID. You can specify security groups when creating a read-only instance.
                     * @return SecurityGroupIds Security group ID. You can specify security groups when creating a read-only instance.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group ID. You can specify security groups when creating a read-only instance.
                     * @param _securityGroupIds Security group ID. You can specify security groups when creating a read-only instance.
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
                     * 获取Analysis engine version
                     * @return LibraDBVersion Analysis engine version
                     * 
                     */
                    std::string GetLibraDBVersion() const;

                    /**
                     * 设置Analysis engine version
                     * @param _libraDBVersion Analysis engine version
                     * 
                     */
                    void SetLibraDBVersion(const std::string& _libraDBVersion);

                    /**
                     * 判断参数 LibraDBVersion 是否已赋值
                     * @return LibraDBVersion 是否已赋值
                     * 
                     */
                    bool LibraDBVersionHasBeenSet() const;

                    /**
                     * 获取Purchase period, combined with TimeUnit for the changes to take effect
                     * @return TimeSpan Purchase period, combined with TimeUnit for the changes to take effect
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase period, combined with TimeUnit for the changes to take effect
                     * @param _timeSpan Purchase period, combined with TimeUnit for the changes to take effect
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
                     * 获取Duration unit, takes effect when combined with TimeSpan. Options: day:d, month:m
                     * @return TimeUnit Duration unit, takes effect when combined with TimeSpan. Options: day:d, month:m
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Duration unit, takes effect when combined with TimeSpan. Options: day:d, month:m
                     * @param _timeUnit Duration unit, takes effect when combined with TimeSpan. Options: day:d, month:m
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
                     * 获取Source instance id
                     * @return SrcInstanceId Source instance id
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance id
                     * @param _srcInstanceId Source instance id
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory in GB
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Disk size.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Payment mode
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Sync object list
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Port used when adding new RO groups, value range [0,65535)
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Number of newly-added read-only instances, value range (0,15]
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Instance name, string length range [0,64), value range uppercase and lowercase letters, digits 0-9, '_', '-', '.'
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * Value is 'Exclusive' when ReplicasNum>1 or ReplicasNum=1 and Cpu>=32 cores, and 'Common' in other scenarios.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Disk type.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Order source, string length range [0,64)
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * Transaction mode 0-Place order and pay 1-Place order
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * ID of the associated VPC network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. If VpcId is set up, SubnetId is required.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Security group ID. You can specify security groups when creating a read-only instance.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Analysis engine version
                     */
                    std::string m_libraDBVersion;
                    bool m_libraDBVersionHasBeenSet;

                    /**
                     * Purchase period, combined with TimeUnit for the changes to take effect
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Duration unit, takes effect when combined with TimeSpan. Options: day:d, month:m
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Source instance id
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDLIBRADBINSTANCESREQUEST_H_
