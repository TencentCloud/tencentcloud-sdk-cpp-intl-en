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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Database CPU
                     * @return Cpu Database CPU
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Database CPU
                     * @param Cpu Database CPU
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Database memory
                     * @return Memory Database memory
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Database memory
                     * @param Memory Database memory
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     * @return UpgradeType Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     * @param UpgradeType Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取Storage upper limit. 0 indicates to use the standard configuration
                     * @return StorageLimit Storage upper limit. 0 indicates to use the standard configuration
                     */
                    uint64_t GetStorageLimit() const;

                    /**
                     * 设置Storage upper limit. 0 indicates to use the standard configuration
                     * @param StorageLimit Storage upper limit. 0 indicates to use the standard configuration
                     */
                    void SetStorageLimit(const uint64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     */
                    bool StorageLimitHasBeenSet() const;

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
                     * Database memory
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Upgrade type. Valid values: upgradeImmediate, upgradeInMaintain
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * Storage upper limit. 0 indicates to use the standard configuration
                     */
                    uint64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

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
                     * Transaction mode. Valid values: `0` (place and pay for an order), `1` (place an order)
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCEREQUEST_H_
