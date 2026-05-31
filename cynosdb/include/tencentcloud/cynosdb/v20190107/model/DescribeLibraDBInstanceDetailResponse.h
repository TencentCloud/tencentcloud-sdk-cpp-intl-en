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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceNetInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/LibraDBNodeInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeAnalysisInstanceVersionInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBInstanceDetail response structure.
                */
                class DescribeLibraDBInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeLibraDBInstanceDetailResponse();
                    ~DescribeLibraDBInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>root account</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin <p>root account</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Account unique ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId <p>Account unique ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId <p>Cluster ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName <p>Cluster name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId <p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName <p>Instance name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Project ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId <p>Project ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone <p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Instance status.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status <p>Instance status.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Status description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusDesc <p>Status description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>Libra analysis engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LibraDBVersion <p>Libra analysis engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLibraDBVersion() const;

                    /**
                     * 判断参数 LibraDBVersion 是否已赋值
                     * @return LibraDBVersion 是否已赋值
                     * 
                     */
                    bool LibraDBVersionHasBeenSet() const;

                    /**
                     * 获取<p>cpu cores</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cpu <p>cpu cores</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Memory <p>Memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>Storage size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Storage <p>Storage size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>Storage type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageType <p>Storage type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType <p>Instance type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance role</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceRole <p>Instance role</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime <p>Update time.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime <p>Creation time.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Selling mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode <p>Selling mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeriodStartTime <p>Start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeriodStartTime() const;

                    /**
                     * 判断参数 PeriodStartTime 是否已赋值
                     * @return PeriodStartTime 是否已赋值
                     * 
                     */
                    bool PeriodStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time of sale</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeriodEndTime <p>End time of sale</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag <p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Network type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetType <p>Network type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId <p>VPC ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Subnet ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId <p>Subnet ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Virtual IP</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip <p>Virtual IP</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Port</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vport <p>Port</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>Instance network information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceNetInfo <p>Instance network information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InstanceNetInfo GetInstanceNetInfo() const;

                    /**
                     * 判断参数 InstanceNetInfo 是否已赋值
                     * @return InstanceNetInfo 是否已赋值
                     * 
                     */
                    bool InstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取<p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceTags <p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Instance node information</p>
                     * @return NodeInfo <p>Instance node information</p>
                     * 
                     */
                    std::vector<LibraDBNodeInfo> GetNodeInfo() const;

                    /**
                     * 判断参数 NodeInfo 是否已赋值
                     * @return NodeInfo 是否已赋值
                     * 
                     */
                    bool NodeInfoHasBeenSet() const;

                    /**
                     * 获取<p>Number of instance nodes</p>
                     * @return NodeCount <p>Number of instance nodes</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Analyze the information after instance upgrade version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisUpgradeVersionInfo <p>Analyze the information after instance upgrade version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    UpgradeAnalysisInstanceVersionInfo GetAnalysisUpgradeVersionInfo() const;

                    /**
                     * 判断参数 AnalysisUpgradeVersionInfo 是否已赋值
                     * @return AnalysisUpgradeVersionInfo 是否已赋值
                     * 
                     */
                    bool AnalysisUpgradeVersionInfoHasBeenSet() const;

                private:

                    /**
                     * <p>root account</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Account unique ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Project ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>AZ.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Instance status.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>Libra analysis engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_libraDBVersion;
                    bool m_libraDBVersionHasBeenSet;

                    /**
                     * <p>cpu cores</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Memory size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Storage size</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>Storage type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Instance type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Instance role</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>Update time.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Creation time.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Selling mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Start time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_periodStartTime;
                    bool m_periodStartTimeHasBeenSet;

                    /**
                     * <p>End time of sale</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * <p>Renewal flag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Network type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>VPC ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Virtual IP</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Port</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Instance network information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InstanceNetInfo m_instanceNetInfo;
                    bool m_instanceNetInfoHasBeenSet;

                    /**
                     * <p>Instance tag information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Instance node information</p>
                     */
                    std::vector<LibraDBNodeInfo> m_nodeInfo;
                    bool m_nodeInfoHasBeenSet;

                    /**
                     * <p>Number of instance nodes</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>Analyze the information after instance upgrade version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UpgradeAnalysisInstanceVersionInfo m_analysisUpgradeVersionInfo;
                    bool m_analysisUpgradeVersionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBINSTANCEDETAILRESPONSE_H_
