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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_

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
                * InquirePriceCreate request structure.
                */
                class InquirePriceCreateRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateRequest();
                    ~InquirePriceCreateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Availability zone, each region provision best practice</p>
                     * @return Zone <p>Availability zone, each region provision best practice</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone, each region provision best practice</p>
                     * @param _zone <p>Availability zone, each region provision best practice</p>
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
                     * 获取<p>Number of compute nodes to purchase</p>
                     * @return GoodsNum <p>Number of compute nodes to purchase</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>Number of compute nodes to purchase</p>
                     * @param _goodsNum <p>Number of compute nodes to purchase</p>
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
                     * 获取<p>Instance purchase type, optional values: PREPAID, POSTPAID, SERVERLESS</p>
                     * @return InstancePayMode <p>Instance purchase type, optional values: PREPAID, POSTPAID, SERVERLESS</p>
                     * 
                     */
                    std::string GetInstancePayMode() const;

                    /**
                     * 设置<p>Instance purchase type, optional values: PREPAID, POSTPAID, SERVERLESS</p>
                     * @param _instancePayMode <p>Instance purchase type, optional values: PREPAID, POSTPAID, SERVERLESS</p>
                     * 
                     */
                    void SetInstancePayMode(const std::string& _instancePayMode);

                    /**
                     * 判断参数 InstancePayMode 是否已赋值
                     * @return InstancePayMode 是否已赋值
                     * 
                     */
                    bool InstancePayModeHasBeenSet() const;

                    /**
                     * 获取<p>Storage purchase type, optional values: PREPAID, POSTPAID</p>
                     * @return StoragePayMode <p>Storage purchase type, optional values: PREPAID, POSTPAID</p>
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置<p>Storage purchase type, optional values: PREPAID, POSTPAID</p>
                     * @param _storagePayMode <p>Storage purchase type, optional values: PREPAID, POSTPAID</p>
                     * 
                     */
                    void SetStoragePayMode(const std::string& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取<p>Instance device type. Supported values are as follows:</p><ul><li>common: refers to universal type</li><li>exclusive: refers to dedicated type</li></ul>
                     * @return DeviceType <p>Instance device type. Supported values are as follows:</p><ul><li>common: refers to universal type</li><li>exclusive: refers to dedicated type</li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance device type. Supported values are as follows:</p><ul><li>common: refers to universal type</li><li>exclusive: refers to dedicated type</li></ul>
                     * @param _deviceType <p>Instance device type. Supported values are as follows:</p><ul><li>common: refers to universal type</li><li>exclusive: refers to dedicated type</li></ul>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of CPU cores. Required for PREPAID and POSTPAID instance types.</p>
                     * @return Cpu <p>Number of CPU cores. Required for PREPAID and POSTPAID instance types.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Number of CPU cores. Required for PREPAID and POSTPAID instance types.</p>
                     * @param _cpu <p>Number of CPU cores. Required for PREPAID and POSTPAID instance types.</p>
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
                     * 获取<p>Memory size in GB. Required for PREPAID and POSTPAID instance types.</p>
                     * @return Memory <p>Memory size in GB. Required for PREPAID and POSTPAID instance types.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Memory size in GB. Required for PREPAID and POSTPAID instance types.</p>
                     * @param _memory <p>Memory size in GB. Required for PREPAID and POSTPAID instance types.</p>
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
                     * 获取<p>Ccu size. Required for the serverless type.</p>
                     * @return Ccu <p>Ccu size. Required for the serverless type.</p>
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置<p>Ccu size. Required for the serverless type.</p>
                     * @param _ccu <p>Ccu size. Required for the serverless type.</p>
                     * 
                     */
                    void SetCcu(const double& _ccu);

                    /**
                     * 判断参数 Ccu 是否已赋值
                     * @return Ccu 是否已赋值
                     * 
                     */
                    bool CcuHasBeenSet() const;

                    /**
                     * 获取<p>Storage size. Required for PREPAID storage type</p>
                     * @return StorageLimit <p>Storage size. Required for PREPAID storage type</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>Storage size. Required for PREPAID storage type</p>
                     * @param _storageLimit <p>Storage size. Required for PREPAID storage type</p>
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取<p>Purchase period, required for PREPAID purchase type</p>
                     * @return TimeSpan <p>Purchase period, required for PREPAID purchase type</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Purchase period, required for PREPAID purchase type</p>
                     * @param _timeSpan <p>Purchase period, required for PREPAID purchase type</p>
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
                     * 获取<p>Duration unit. Optional values: m, d. Required for PREPAID purchase type.</p>
                     * @return TimeUnit <p>Duration unit. Optional values: m, d. Required for PREPAID purchase type.</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Duration unit. Optional values: m, d. Required for PREPAID purchase type.</p>
                     * @param _timeUnit <p>Duration unit. Optional values: m, d. Required for PREPAID purchase type.</p>
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
                     * 获取<p>Storage architecture type. Enumeration value: 1.0/2.0 Default value: 1.0</p>
                     * @return StorageVersion <p>Storage architecture type. Enumeration value: 1.0/2.0 Default value: 1.0</p>
                     * 
                     */
                    std::string GetStorageVersion() const;

                    /**
                     * 设置<p>Storage architecture type. Enumeration value: 1.0/2.0 Default value: 1.0</p>
                     * @param _storageVersion <p>Storage architecture type. Enumeration value: 1.0/2.0 Default value: 1.0</p>
                     * 
                     */
                    void SetStorageVersion(const std::string& _storageVersion);

                    /**
                     * 判断参数 StorageVersion 是否已赋值
                     * @return StorageVersion 是否已赋值
                     * 
                     */
                    bool StorageVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether storage spans AZs. Valid for storage architecture 2.0</p>
                     * @return IsMultiAz <p>Whether storage spans AZs. Valid for storage architecture 2.0</p>
                     * 
                     */
                    bool GetIsMultiAz() const;

                    /**
                     * 设置<p>Whether storage spans AZs. Valid for storage architecture 2.0</p>
                     * @param _isMultiAz <p>Whether storage spans AZs. Valid for storage architecture 2.0</p>
                     * 
                     */
                    void SetIsMultiAz(const bool& _isMultiAz);

                    /**
                     * 判断参数 IsMultiAz 是否已赋值
                     * @return IsMultiAz 是否已赋值
                     * 
                     */
                    bool IsMultiAzHasBeenSet() const;

                private:

                    /**
                     * <p>Availability zone, each region provision best practice</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Number of compute nodes to purchase</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>Instance purchase type, optional values: PREPAID, POSTPAID, SERVERLESS</p>
                     */
                    std::string m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * <p>Storage purchase type, optional values: PREPAID, POSTPAID</p>
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>Instance device type. Supported values are as follows:</p><ul><li>common: refers to universal type</li><li>exclusive: refers to dedicated type</li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Number of CPU cores. Required for PREPAID and POSTPAID instance types.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Memory size in GB. Required for PREPAID and POSTPAID instance types.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Ccu size. Required for the serverless type.</p>
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                    /**
                     * <p>Storage size. Required for PREPAID storage type</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * <p>Purchase period, required for PREPAID purchase type</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Duration unit. Optional values: m, d. Required for PREPAID purchase type.</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Storage architecture type. Enumeration value: 1.0/2.0 Default value: 1.0</p>
                     */
                    std::string m_storageVersion;
                    bool m_storageVersionHasBeenSet;

                    /**
                     * <p>Whether storage spans AZs. Valid for storage architecture 2.0</p>
                     */
                    bool m_isMultiAz;
                    bool m_isMultiAzHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_
