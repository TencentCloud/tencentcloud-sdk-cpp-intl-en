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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/NodeDistribution.h>
#include <tencentcloud/cdb/v20170320/model/ClusterTopology.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeInstanceUpgradeType request structure.
                */
                class DescribeInstanceUpgradeTypeRequest : public AbstractModel
                {
                public:
                    DescribeInstanceUpgradeTypeRequest();
                    ~DescribeInstanceUpgradeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @return InstanceId <p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @param _instanceId <p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
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
                     * 获取<p>The number of CPU cores of the target instance. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable CPU range of the instance.</p>
                     * @return DstCpu <p>The number of CPU cores of the target instance. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable CPU range of the instance.</p>
                     * 
                     */
                    double GetDstCpu() const;

                    /**
                     * 设置<p>The number of CPU cores of the target instance. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable CPU range of the instance.</p>
                     * @param _dstCpu <p>The number of CPU cores of the target instance. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable CPU range of the instance.</p>
                     * 
                     */
                    void SetDstCpu(const double& _dstCpu);

                    /**
                     * 判断参数 DstCpu 是否已赋值
                     * @return DstCpu 是否已赋值
                     * 
                     */
                    bool DstCpuHasBeenSet() const;

                    /**
                     * 获取<p>Target instance memory size, measurement unit: MB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable memory size range of the instance.</p>
                     * @return DstMemory <p>Target instance memory size, measurement unit: MB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable memory size range of the instance.</p>
                     * 
                     */
                    uint64_t GetDstMemory() const;

                    /**
                     * 设置<p>Target instance memory size, measurement unit: MB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable memory size range of the instance.</p>
                     * @param _dstMemory <p>Target instance memory size, measurement unit: MB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable memory size range of the instance.</p>
                     * 
                     */
                    void SetDstMemory(const uint64_t& _dstMemory);

                    /**
                     * 判断参数 DstMemory 是否已赋值
                     * @return DstMemory 是否已赋值
                     * 
                     */
                    bool DstMemoryHasBeenSet() const;

                    /**
                     * 获取<p>Target instance disk size, unit: GB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable disk size range of the instance.</p>
                     * @return DstDisk <p>Target instance disk size, unit: GB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable disk size range of the instance.</p>
                     * 
                     */
                    uint64_t GetDstDisk() const;

                    /**
                     * 设置<p>Target instance disk size, unit: GB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable disk size range of the instance.</p>
                     * @param _dstDisk <p>Target instance disk size, unit: GB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable disk size range of the instance.</p>
                     * 
                     */
                    void SetDstDisk(const uint64_t& _dstDisk);

                    /**
                     * 判断参数 DstDisk 是否已赋值
                     * @return DstDisk 是否已赋值
                     * 
                     */
                    bool DstDiskHasBeenSet() const;

                    /**
                     * 获取<p>Target instance database version. Available values: 5.6, 5.7, 8.0.</p>
                     * @return DstVersion <p>Target instance database version. Available values: 5.6, 5.7, 8.0.</p>
                     * 
                     */
                    std::string GetDstVersion() const;

                    /**
                     * 设置<p>Target instance database version. Available values: 5.6, 5.7, 8.0.</p>
                     * @param _dstVersion <p>Target instance database version. Available values: 5.6, 5.7, 8.0.</p>
                     * 
                     */
                    void SetDstVersion(const std::string& _dstVersion);

                    /**
                     * 判断参数 DstVersion 是否已赋值
                     * @return DstVersion 是否已赋值
                     * 
                     */
                    bool DstVersionHasBeenSet() const;

                    /**
                     * 获取<p>Deployment model of the target instance. Defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     * @return DstDeployMode <p>Deployment model of the target instance. Defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     * 
                     */
                    int64_t GetDstDeployMode() const;

                    /**
                     * 设置<p>Deployment model of the target instance. Defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     * @param _dstDeployMode <p>Deployment model of the target instance. Defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     * 
                     */
                    void SetDstDeployMode(const int64_t& _dstDeployMode);

                    /**
                     * 判断参数 DstDeployMode 是否已赋值
                     * @return DstDeployMode 是否已赋值
                     * 
                     */
                    bool DstDeployModeHasBeenSet() const;

                    /**
                     * 获取<p>Replication type of the target instance. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * @return DstProtectMode <p>Replication type of the target instance. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * 
                     */
                    int64_t GetDstProtectMode() const;

                    /**
                     * 设置<p>Replication type of the target instance. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * @param _dstProtectMode <p>Replication type of the target instance. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     * 
                     */
                    void SetDstProtectMode(const int64_t& _dstProtectMode);

                    /**
                     * 判断参数 DstProtectMode 是否已赋值
                     * @return DstProtectMode 是否已赋值
                     * 
                     */
                    bool DstProtectModeHasBeenSet() const;

                    /**
                     * 获取<p>AZ ID of the standby instance 1 of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * @return DstSlaveZone <p>AZ ID of the standby instance 1 of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * 
                     */
                    int64_t GetDstSlaveZone() const;

                    /**
                     * 设置<p>AZ ID of the standby instance 1 of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * @param _dstSlaveZone <p>AZ ID of the standby instance 1 of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * 
                     */
                    void SetDstSlaveZone(const int64_t& _dstSlaveZone);

                    /**
                     * 判断参数 DstSlaveZone 是否已赋值
                     * @return DstSlaveZone 是否已赋值
                     * 
                     */
                    bool DstSlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>AZ ID of the standby instance 2. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * @return DstBackupZone <p>AZ ID of the standby instance 2. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * 
                     */
                    int64_t GetDstBackupZone() const;

                    /**
                     * 设置<p>AZ ID of the standby instance 2. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * @param _dstBackupZone <p>AZ ID of the standby instance 2. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * 
                     */
                    void SetDstBackupZone(const int64_t& _dstBackupZone);

                    /**
                     * 判断参数 DstBackupZone 是否已赋值
                     * @return DstBackupZone 是否已赋值
                     * 
                     */
                    bool DstBackupZoneHasBeenSet() const;

                    /**
                     * 获取<p>Target instance type. Supported values include: "CUSTOM" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "ONTKE" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk.</p>
                     * @return DstCdbType <p>Target instance type. Supported values include: "CUSTOM" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "ONTKE" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk.</p>
                     * 
                     */
                    std::string GetDstCdbType() const;

                    /**
                     * 设置<p>Target instance type. Supported values include: "CUSTOM" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "ONTKE" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk.</p>
                     * @param _dstCdbType <p>Target instance type. Supported values include: "CUSTOM" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "ONTKE" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk.</p>
                     * 
                     */
                    void SetDstCdbType(const std::string& _dstCdbType);

                    /**
                     * 判断参数 DstCdbType 是否已赋值
                     * @return DstCdbType 是否已赋值
                     * 
                     */
                    bool DstCdbTypeHasBeenSet() const;

                    /**
                     * 获取<p>Primary availability zone ID of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * @return DstZoneId <p>Primary availability zone ID of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * 
                     */
                    int64_t GetDstZoneId() const;

                    /**
                     * 设置<p>Primary availability zone ID of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * @param _dstZoneId <p>Primary availability zone ID of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     * 
                     */
                    void SetDstZoneId(const int64_t& _dstZoneId);

                    /**
                     * 判断参数 DstZoneId 是否已赋值
                     * @return DstZoneId 是否已赋值
                     * 
                     */
                    bool DstZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Node distribution of CDB instances in the dedicated cluster.</p>
                     * @return NodeDistribution <p>Node distribution of CDB instances in the dedicated cluster.</p>
                     * 
                     */
                    NodeDistribution GetNodeDistribution() const;

                    /**
                     * 设置<p>Node distribution of CDB instances in the dedicated cluster.</p>
                     * @param _nodeDistribution <p>Node distribution of CDB instances in the dedicated cluster.</p>
                     * 
                     */
                    void SetNodeDistribution(const NodeDistribution& _nodeDistribution);

                    /**
                     * 判断参数 NodeDistribution 是否已赋值
                     * @return NodeDistribution 是否已赋值
                     * 
                     */
                    bool NodeDistributionHasBeenSet() const;

                    /**
                     * 获取<p>Topology configuration for cloud disk edition nodes. Nodeld information can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/105116?from_cn_redirect=1">DescribeClusterInfo</a> API.</p>
                     * @return ClusterTopology <p>Topology configuration for cloud disk edition nodes. Nodeld information can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/105116?from_cn_redirect=1">DescribeClusterInfo</a> API.</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>Topology configuration for cloud disk edition nodes. Nodeld information can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/105116?from_cn_redirect=1">DescribeClusterInfo</a> API.</p>
                     * @param _clusterTopology <p>Topology configuration for cloud disk edition nodes. Nodeld information can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/105116?from_cn_redirect=1">DescribeClusterInfo</a> API.</p>
                     * 
                     */
                    void SetClusterTopology(const ClusterTopology& _clusterTopology);

                    /**
                     * 判断参数 ClusterTopology 是否已赋值
                     * @return ClusterTopology 是否已赋值
                     * 
                     */
                    bool ClusterTopologyHasBeenSet() const;

                    /**
                     * 获取<p>AZ ID of the standby instance 3 in the target instance. Use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * @return DstFourthZone <p>AZ ID of the standby instance 3 in the target instance. Use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * 
                     */
                    int64_t GetDstFourthZone() const;

                    /**
                     * 设置<p>AZ ID of the standby instance 3 in the target instance. Use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * @param _dstFourthZone <p>AZ ID of the standby instance 3 in the target instance. Use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     * 
                     */
                    void SetDstFourthZone(const int64_t& _dstFourthZone);

                    /**
                     * 判断参数 DstFourthZone 是否已赋值
                     * @return DstFourthZone 是否已赋值
                     * 
                     */
                    bool DstFourthZoneHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>The number of CPU cores of the target instance. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable CPU range of the instance.</p>
                     */
                    double m_dstCpu;
                    bool m_dstCpuHasBeenSet;

                    /**
                     * <p>Target instance memory size, measurement unit: MB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable memory size range of the instance.</p>
                     */
                    uint64_t m_dstMemory;
                    bool m_dstMemoryHasBeenSet;

                    /**
                     * <p>Target instance disk size, unit: GB. To ensure the input value is valid, please use <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> to get the saleable disk size range of the instance.</p>
                     */
                    uint64_t m_dstDisk;
                    bool m_dstDiskHasBeenSet;

                    /**
                     * <p>Target instance database version. Available values: 5.6, 5.7, 8.0.</p>
                     */
                    std::string m_dstVersion;
                    bool m_dstVersionHasBeenSet;

                    /**
                     * <p>Deployment model of the target instance. Defaults to 0. Supported values include: 0 - means single availability zone, 1 - means multi-availability zone.</p>
                     */
                    int64_t m_dstDeployMode;
                    bool m_dstDeployModeHasBeenSet;

                    /**
                     * <p>Replication type of the target instance. Supported values include: 0 - means async replication, 1 - means semi-sync replication, 2 - means strong sync replication.</p>
                     */
                    int64_t m_dstProtectMode;
                    bool m_dstProtectModeHasBeenSet;

                    /**
                     * <p>AZ ID of the standby instance 1 of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     */
                    int64_t m_dstSlaveZone;
                    bool m_dstSlaveZoneHasBeenSet;

                    /**
                     * <p>AZ ID of the standby instance 2. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     */
                    int64_t m_dstBackupZone;
                    bool m_dstBackupZoneHasBeenSet;

                    /**
                     * <p>Target instance type. Supported values include: "CUSTOM" - general-purpose instance, "EXCLUSIVE" - dedicated instance, "ONTKE" - ONTKE single-node instance, "CLOUD_NATIVE_CLUSTER" - standard type for CLOUD disk, "CLOUD_NATIVE_CLUSTER_EXCLUSIVE" - enhanced type for CLOUD disk.</p>
                     */
                    std::string m_dstCdbType;
                    bool m_dstCdbTypeHasBeenSet;

                    /**
                     * <p>Primary availability zone ID of the target instance. You can use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the AZ ID.</p>
                     */
                    int64_t m_dstZoneId;
                    bool m_dstZoneIdHasBeenSet;

                    /**
                     * <p>Node distribution of CDB instances in the dedicated cluster.</p>
                     */
                    NodeDistribution m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * <p>Topology configuration for cloud disk edition nodes. Nodeld information can be obtained through the <a href="https://www.tencentcloud.com/document/api/236/105116?from_cn_redirect=1">DescribeClusterInfo</a> API.</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * <p>AZ ID of the standby instance 3 in the target instance. Use the <a href="https://www.tencentcloud.com/document/product/236/80281?from_cn_redirect=1">DescribeCdbZoneConfig</a> API to obtain the availability zone ID.</p>
                     */
                    int64_t m_dstFourthZone;
                    bool m_dstFourthZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPEREQUEST_H_
