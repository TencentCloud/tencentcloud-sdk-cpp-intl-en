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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * UpgradeDBInstance request structure.
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of mssql-j8kv137v
                     * @return InstanceId Instance ID in the format of mssql-j8kv137v
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-j8kv137v
                     * @param InstanceId Instance ID in the format of mssql-j8kv137v
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     * @return Memory Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     * @param Memory Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     * @return Storage Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     * @param Storage Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use vouchers. 0: no, 1: yes. Default value: 0
                     * @return AutoVoucher Whether to automatically use vouchers. 0: no, 1: yes. Default value: 0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers. 0: no, 1: yes. Default value: 0
                     * @param AutoVoucher Whether to automatically use vouchers. 0: no, 1: yes. Default value: 0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Voucher ID (currently, only one voucher can be used per order)
                     * @return VoucherIds Voucher ID (currently, only one voucher can be used per order)
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID (currently, only one voucher can be used per order)
                     * @param VoucherIds Voucher ID (currently, only one voucher can be used per order)
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取The number of CUP cores after the instance is upgraded.
                     * @return Cpu The number of CUP cores after the instance is upgraded.
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置The number of CUP cores after the instance is upgraded.
                     * @param Cpu The number of CUP cores after the instance is upgraded.
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Upgrade the SQL Server version. Supported versions include SQL Server 2008 Enterprise (`2008R2`), SQL Server 2012 Enterprise (`2012SP3`), etc. As the purchasable versions are region-specific, you can use the `DescribeProductConfig` API to query the information of purchasable versions in each region. Downgrading is unsupported. If this parameter is left empty, the SQL Server version will not be changed.
                     * @return DBVersion Upgrade the SQL Server version. Supported versions include SQL Server 2008 Enterprise (`2008R2`), SQL Server 2012 Enterprise (`2012SP3`), etc. As the purchasable versions are region-specific, you can use the `DescribeProductConfig` API to query the information of purchasable versions in each region. Downgrading is unsupported. If this parameter is left empty, the SQL Server version will not be changed.
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Upgrade the SQL Server version. Supported versions include SQL Server 2008 Enterprise (`2008R2`), SQL Server 2012 Enterprise (`2012SP3`), etc. As the purchasable versions are region-specific, you can use the `DescribeProductConfig` API to query the information of purchasable versions in each region. Downgrading is unsupported. If this parameter is left empty, the SQL Server version will not be changed.
                     * @param DBVersion Upgrade the SQL Server version. Supported versions include SQL Server 2008 Enterprise (`2008R2`), SQL Server 2012 Enterprise (`2012SP3`), etc. As the purchasable versions are region-specific, you can use the `DescribeProductConfig` API to query the information of purchasable versions in each region. Downgrading is unsupported. If this parameter is left empty, the SQL Server version will not be changed.
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Upgrade the high availability architecture from image-based disaster recovery to Always On cluster disaster recovery. This parameter is valid only for instances which support Always On high availability and run SQL Server 2017 or later. Neither downgrading to image-based disaster recovery nor upgrading from cluster disaster recovery to Always On disaster recovery is supported. If this parameter is left empty, the high availability architecture will not be changed.
                     * @return HAType Upgrade the high availability architecture from image-based disaster recovery to Always On cluster disaster recovery. This parameter is valid only for instances which support Always On high availability and run SQL Server 2017 or later. Neither downgrading to image-based disaster recovery nor upgrading from cluster disaster recovery to Always On disaster recovery is supported. If this parameter is left empty, the high availability architecture will not be changed.
                     */
                    std::string GetHAType() const;

                    /**
                     * 设置Upgrade the high availability architecture from image-based disaster recovery to Always On cluster disaster recovery. This parameter is valid only for instances which support Always On high availability and run SQL Server 2017 or later. Neither downgrading to image-based disaster recovery nor upgrading from cluster disaster recovery to Always On disaster recovery is supported. If this parameter is left empty, the high availability architecture will not be changed.
                     * @param HAType Upgrade the high availability architecture from image-based disaster recovery to Always On cluster disaster recovery. This parameter is valid only for instances which support Always On high availability and run SQL Server 2017 or later. Neither downgrading to image-based disaster recovery nor upgrading from cluster disaster recovery to Always On disaster recovery is supported. If this parameter is left empty, the high availability architecture will not be changed.
                     */
                    void SetHAType(const std::string& _hAType);

                    /**
                     * 判断参数 HAType 是否已赋值
                     * @return HAType 是否已赋值
                     */
                    bool HATypeHasBeenSet() const;

                    /**
                     * 获取Change the instance deployment scheme. Valid values: `SameZones` (change to single-AZ deployment, which does not support cross-AZ disaster recovery), `MultiZones` (change to multi-AZ deployment, which supports cross-AZ disaster recovery).
                     * @return MultiZones Change the instance deployment scheme. Valid values: `SameZones` (change to single-AZ deployment, which does not support cross-AZ disaster recovery), `MultiZones` (change to multi-AZ deployment, which supports cross-AZ disaster recovery).
                     */
                    std::string GetMultiZones() const;

                    /**
                     * 设置Change the instance deployment scheme. Valid values: `SameZones` (change to single-AZ deployment, which does not support cross-AZ disaster recovery), `MultiZones` (change to multi-AZ deployment, which supports cross-AZ disaster recovery).
                     * @param MultiZones Change the instance deployment scheme. Valid values: `SameZones` (change to single-AZ deployment, which does not support cross-AZ disaster recovery), `MultiZones` (change to multi-AZ deployment, which supports cross-AZ disaster recovery).
                     */
                    void SetMultiZones(const std::string& _multiZones);

                    /**
                     * 判断参数 MultiZones 是否已赋值
                     * @return MultiZones 是否已赋值
                     */
                    bool MultiZonesHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Memory size after instance upgrade in GB, which cannot be smaller than the current instance memory size
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage capacity after instance upgrade in GB, which cannot be smaller than the current instance storage capacity
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Whether to automatically use vouchers. 0: no, 1: yes. Default value: 0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID (currently, only one voucher can be used per order)
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * The number of CUP cores after the instance is upgraded.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Upgrade the SQL Server version. Supported versions include SQL Server 2008 Enterprise (`2008R2`), SQL Server 2012 Enterprise (`2012SP3`), etc. As the purchasable versions are region-specific, you can use the `DescribeProductConfig` API to query the information of purchasable versions in each region. Downgrading is unsupported. If this parameter is left empty, the SQL Server version will not be changed.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Upgrade the high availability architecture from image-based disaster recovery to Always On cluster disaster recovery. This parameter is valid only for instances which support Always On high availability and run SQL Server 2017 or later. Neither downgrading to image-based disaster recovery nor upgrading from cluster disaster recovery to Always On disaster recovery is supported. If this parameter is left empty, the high availability architecture will not be changed.
                     */
                    std::string m_hAType;
                    bool m_hATypeHasBeenSet;

                    /**
                     * Change the instance deployment scheme. Valid values: `SameZones` (change to single-AZ deployment, which does not support cross-AZ disaster recovery), `MultiZones` (change to multi-AZ deployment, which supports cross-AZ disaster recovery).
                     */
                    std::string m_multiZones;
                    bool m_multiZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_
