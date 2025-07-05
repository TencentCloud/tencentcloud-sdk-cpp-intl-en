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
                     * 获取AZ
                     * @return Zone AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param _zone AZ
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
                     * 获取Number of compute node to purchase
                     * @return GoodsNum Number of compute node to purchase
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of compute node to purchase
                     * @param _goodsNum Number of compute node to purchase
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
                     * 获取Instance type for purchase. Valid values: `PREPAID`, `POSTPAID`, `SERVERLESS`.
                     * @return InstancePayMode Instance type for purchase. Valid values: `PREPAID`, `POSTPAID`, `SERVERLESS`.
                     * 
                     */
                    std::string GetInstancePayMode() const;

                    /**
                     * 设置Instance type for purchase. Valid values: `PREPAID`, `POSTPAID`, `SERVERLESS`.
                     * @param _instancePayMode Instance type for purchase. Valid values: `PREPAID`, `POSTPAID`, `SERVERLESS`.
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
                     * 获取Storage type for purchase. Valid values: `PREPAID`, `POSTPAID`.
                     * @return StoragePayMode Storage type for purchase. Valid values: `PREPAID`, `POSTPAID`.
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置Storage type for purchase. Valid values: `PREPAID`, `POSTPAID`.
                     * @param _storagePayMode Storage type for purchase. Valid values: `PREPAID`, `POSTPAID`.
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
                     * 获取device type:common, exclusive
                     * @return DeviceType device type:common, exclusive
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置device type:common, exclusive
                     * @param _deviceType device type:common, exclusive
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
                     * 获取Number of CPU cores, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     * @return Cpu Number of CPU cores, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     * @param _cpu Number of CPU cores, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
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
                     * 获取Memory size in GB, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     * @return Memory Memory size in GB, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     * @param _memory Memory size in GB, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
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
                     * 获取CCU size, which is required when `InstancePayMode` is `SERVERLESS`.
                     * @return Ccu CCU size, which is required when `InstancePayMode` is `SERVERLESS`.
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置CCU size, which is required when `InstancePayMode` is `SERVERLESS`.
                     * @param _ccu CCU size, which is required when `InstancePayMode` is `SERVERLESS`.
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
                     * 获取Storage size, which is required when `StoragePayMode` is `PREPAID`.
                     * @return StorageLimit Storage size, which is required when `StoragePayMode` is `PREPAID`.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Storage size, which is required when `StoragePayMode` is `PREPAID`.
                     * @param _storageLimit Storage size, which is required when `StoragePayMode` is `PREPAID`.
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
                     * 获取Validity period, which is required when `InstancePayMode` is `PREPAID`.
                     * @return TimeSpan Validity period, which is required when `InstancePayMode` is `PREPAID`.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Validity period, which is required when `InstancePayMode` is `PREPAID`.
                     * @param _timeSpan Validity period, which is required when `InstancePayMode` is `PREPAID`.
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
                     * 获取Duration unit, which is required when `InstancePayMode` is `PREPAID`. Valid values: `m` (month), `d` (day).
                     * @return TimeUnit Duration unit, which is required when `InstancePayMode` is `PREPAID`. Valid values: `m` (month), `d` (day).
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Duration unit, which is required when `InstancePayMode` is `PREPAID`. Valid values: `m` (month), `d` (day).
                     * @param _timeUnit Duration unit, which is required when `InstancePayMode` is `PREPAID`. Valid values: `m` (month), `d` (day).
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                private:

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of compute node to purchase
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Instance type for purchase. Valid values: `PREPAID`, `POSTPAID`, `SERVERLESS`.
                     */
                    std::string m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * Storage type for purchase. Valid values: `PREPAID`, `POSTPAID`.
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * device type:common, exclusive
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Number of CPU cores, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size in GB, which is required when `InstancePayMode` is `PREPAID` or `POSTPAID`.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CCU size, which is required when `InstancePayMode` is `SERVERLESS`.
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                    /**
                     * Storage size, which is required when `StoragePayMode` is `PREPAID`.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Validity period, which is required when `InstancePayMode` is `PREPAID`.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Duration unit, which is required when `InstancePayMode` is `PREPAID`. Valid values: `m` (month), `d` (day).
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_
