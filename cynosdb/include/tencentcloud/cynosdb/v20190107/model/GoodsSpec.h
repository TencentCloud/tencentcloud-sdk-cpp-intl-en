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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSSPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Product specification.
                */
                class GoodsSpec : public AbstractModel
                {
                public:
                    GoodsSpec();
                    ~GoodsSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of products
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GoodsNum Number of products
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of products
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _goodsNum Number of products
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of CPU cores. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cpu Number of CPU cores. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpu Number of CPU cores. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Memory size in gb. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Memory Memory size in gb. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in gb. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memory Memory size in gb. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Ccu size. required for serverless type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ccu Ccu size. required for serverless type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置Ccu size. required for serverless type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ccu Ccu size. required for serverless type.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Storage size. required for PREPAID storage type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageLimit Storage size. required for PREPAID storage type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Storage size. required for PREPAID storage type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageLimit Storage size. required for PREPAID storage type.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Purchase duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeSpan Purchase duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeSpan Purchase duration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Duration unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeUnit Duration unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Duration unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeUnit Duration unit.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Machine type.
                     * @return DeviceType Machine type.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Machine type.
                     * @param _deviceType Machine type.
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * Number of products
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Number of CPU cores. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size in gb. required for PREPAID and POSTPAID instance types.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Ccu size. required for serverless type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                    /**
                     * Storage size. required for PREPAID storage type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Purchase duration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Duration unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Machine type.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_GOODSSPEC_H_
