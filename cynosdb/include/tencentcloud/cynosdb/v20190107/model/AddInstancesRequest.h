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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddInstances request structure.
                */
                class AddInstancesRequest : public AbstractModel
                {
                public:
                    AddInstancesRequest();
                    ~AddInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return Cpu Number of CPU cores
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param Cpu Number of CPU cores
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory in GB
                     * @return Memory Memory in GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory in GB
                     * @param Memory Memory in GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Number of added read-only instances. Value range: (0,16].
                     * @return ReadOnlyCount Number of added read-only instances. Value range: (0,16].
                     */
                    int64_t GetReadOnlyCount() const;

                    /**
                     * 设置Number of added read-only instances. Value range: (0,16].
                     * @param ReadOnlyCount Number of added read-only instances. Value range: (0,16].
                     */
                    void SetReadOnlyCount(const int64_t& _readOnlyCount);

                    /**
                     * 判断参数 ReadOnlyCount 是否已赋值
                     * @return ReadOnlyCount 是否已赋值
                     */
                    bool ReadOnlyCountHasBeenSet() const;

                    /**
                     * 获取Instance group ID, which is used when you add an instance to an existing RO group. If this parameter is left empty, an RO group will be created. We recommend you not pass in this value on the current version.
                     * @return InstanceGrpId Instance group ID, which is used when you add an instance to an existing RO group. If this parameter is left empty, an RO group will be created. We recommend you not pass in this value on the current version.
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置Instance group ID, which is used when you add an instance to an existing RO group. If this parameter is left empty, an RO group will be created. We recommend you not pass in this value on the current version.
                     * @param InstanceGrpId Instance group ID, which is used when you add an instance to an existing RO group. If this parameter is left empty, an RO group will be created. We recommend you not pass in this value on the current version.
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取VPC ID. This parameter has been disused.
                     * @return VpcId VPC ID. This parameter has been disused.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. This parameter has been disused.
                     * @param VpcId VPC ID. This parameter has been disused.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID. If `VpcId` is set, `SubnetId` is required. This parameter has been disused.
                     * @return SubnetId Subnet ID. If `VpcId` is set, `SubnetId` is required. This parameter has been disused.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. If `VpcId` is set, `SubnetId` is required. This parameter has been disused.
                     * @param SubnetId Subnet ID. If `VpcId` is set, `SubnetId` is required. This parameter has been disused.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The port used when adding an RO group. Value range: [0,65535).
                     * @return Port The port used when adding an RO group. Value range: [0,65535).
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置The port used when adding an RO group. Value range: [0,65535).
                     * @param Port The port used when adding an RO group. Value range: [0,65535).
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Instance name. String length range: [0,64).
                     * @return InstanceName Instance name. String length range: [0,64).
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name. String length range: [0,64).
                     * @param InstanceName Instance name. String length range: [0,64).
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     * @return AutoVoucher Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     * @param AutoVoucher Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Database type. Valid values: 
<li> MYSQL </li>
                     * @return DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database type. Valid values: 
<li> MYSQL </li>
                     * @param DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Order source. String length range: [0,64).
                     * @return OrderSource Order source. String length range: [0,64).
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置Order source. String length range: [0,64).
                     * @param OrderSource Order source. String length range: [0,64).
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     * @return DealMode Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     * @param DealMode Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     */
                    bool DealModeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of added read-only instances. Value range: (0,16].
                     */
                    int64_t m_readOnlyCount;
                    bool m_readOnlyCountHasBeenSet;

                    /**
                     * Instance group ID, which is used when you add an instance to an existing RO group. If this parameter is left empty, an RO group will be created. We recommend you not pass in this value on the current version.
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * VPC ID. This parameter has been disused.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. If `VpcId` is set, `SubnetId` is required. This parameter has been disused.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The port used when adding an RO group. Value range: [0,65535).
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance name. String length range: [0,64).
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Order source. String length range: [0,64).
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
