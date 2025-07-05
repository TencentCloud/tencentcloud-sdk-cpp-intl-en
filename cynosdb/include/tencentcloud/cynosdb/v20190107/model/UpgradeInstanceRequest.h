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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCEREQUEST_H_

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
                * UpgradeInstance request structure.
                */
                class UpgradeInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceRequest();
                    ~UpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Database CPU
                     * @return Cpu Database CPU
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Database CPU
                     * @param _cpu Database CPU
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
                     * 获取Database memory in GB
                     * @return Memory Database memory in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Database memory in GB
                     * @param _memory Database memory in GB
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
                     * 获取Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     * @return UpgradeType Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     * @param _upgradeType Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused.
                     * @return StorageLimit This parameter has been disused.
                     * 
                     */
                    uint64_t GetStorageLimit() const;

                    /**
                     * 设置This parameter has been disused.
                     * @param _storageLimit This parameter has been disused.
                     * 
                     */
                    void SetStorageLimit(const uint64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     * @return AutoVoucher Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     * @param _autoVoucher Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
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
                     * 获取This parameter has been disused.
                     * @return DbType This parameter has been disused.
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置This parameter has been disused.
                     * @param _dbType This parameter has been disused.
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     * @return DealMode Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     * @param _dealMode Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
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
                     * 获取Valid values: `NormalUpgrade` (Normal mode), `FastUpgrade` (QuickChange). If the system detects that the configuration modification process will cause a momentary disconnection, the process will be terminated.
                     * @return UpgradeMode Valid values: `NormalUpgrade` (Normal mode), `FastUpgrade` (QuickChange). If the system detects that the configuration modification process will cause a momentary disconnection, the process will be terminated.
                     * 
                     */
                    std::string GetUpgradeMode() const;

                    /**
                     * 设置Valid values: `NormalUpgrade` (Normal mode), `FastUpgrade` (QuickChange). If the system detects that the configuration modification process will cause a momentary disconnection, the process will be terminated.
                     * @param _upgradeMode Valid values: `NormalUpgrade` (Normal mode), `FastUpgrade` (QuickChange). If the system detects that the configuration modification process will cause a momentary disconnection, the process will be terminated.
                     * 
                     */
                    void SetUpgradeMode(const std::string& _upgradeMode);

                    /**
                     * 判断参数 UpgradeMode 是否已赋值
                     * @return UpgradeMode 是否已赋值
                     * 
                     */
                    bool UpgradeModeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database CPU
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Database memory in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * This parameter has been disused.
                     */
                    uint64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Whether to automatically select a voucher. 1: yes; 0: no. Default value: 0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * This parameter has been disused.
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * Valid values: `NormalUpgrade` (Normal mode), `FastUpgrade` (QuickChange). If the system detects that the configuration modification process will cause a momentary disconnection, the process will be terminated.
                     */
                    std::string m_upgradeMode;
                    bool m_upgradeModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCEREQUEST_H_
