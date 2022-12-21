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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * The details of purchasable configuration
                */
                class CdbSellConfig : public AbstractModel
                {
                public:
                    CdbSellConfig();
                    ~CdbSellConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Memory size in MB
                     * @return Memory Memory size in MB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size in MB
                     * @param Memory Memory size in MB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取CPU core count
                     * @return Cpu CPU core count
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU core count
                     * @param Cpu CPU core count
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Minimum disk size in GB
                     * @return VolumeMin Minimum disk size in GB
                     */
                    int64_t GetVolumeMin() const;

                    /**
                     * 设置Minimum disk size in GB
                     * @param VolumeMin Minimum disk size in GB
                     */
                    void SetVolumeMin(const int64_t& _volumeMin);

                    /**
                     * 判断参数 VolumeMin 是否已赋值
                     * @return VolumeMin 是否已赋值
                     */
                    bool VolumeMinHasBeenSet() const;

                    /**
                     * 获取Maximum disk size in GB
                     * @return VolumeMax Maximum disk size in GB
                     */
                    int64_t GetVolumeMax() const;

                    /**
                     * 设置Maximum disk size in GB
                     * @param VolumeMax Maximum disk size in GB
                     */
                    void SetVolumeMax(const int64_t& _volumeMax);

                    /**
                     * 判断参数 VolumeMax 是否已赋值
                     * @return VolumeMax 是否已赋值
                     */
                    bool VolumeMaxHasBeenSet() const;

                    /**
                     * 获取Disk capacity increment in GB
                     * @return VolumeStep Disk capacity increment in GB
                     */
                    int64_t GetVolumeStep() const;

                    /**
                     * 设置Disk capacity increment in GB
                     * @param VolumeStep Disk capacity increment in GB
                     */
                    void SetVolumeStep(const int64_t& _volumeStep);

                    /**
                     * 判断参数 VolumeStep 是否已赋值
                     * @return VolumeStep 是否已赋值
                     */
                    bool VolumeStepHasBeenSet() const;

                    /**
                     * 获取IO operations per second
                     * @return Iops IO operations per second
                     */
                    int64_t GetIops() const;

                    /**
                     * 设置IO operations per second
                     * @param Iops IO operations per second
                     */
                    void SetIops(const int64_t& _iops);

                    /**
                     * 判断参数 Iops 是否已赋值
                     * @return Iops 是否已赋值
                     */
                    bool IopsHasBeenSet() const;

                    /**
                     * 获取Application scenario description
                     * @return Info Application scenario description
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Application scenario description
                     * @param Info Application scenario description
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Status. The value `0` indicates that this specification is available.
                     * @return Status Status. The value `0` indicates that this specification is available.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. The value `0` indicates that this specification is available.
                     * @param Status Status. The value `0` indicates that this specification is available.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance), `BASIC_V2` (basic v2 instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeviceType Instance type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance), `BASIC_V2` (basic v2 instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance), `BASIC_V2` (basic v2 instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DeviceType Instance type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance), `BASIC_V2` (basic v2 instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Engine type description. Valid values: `Innodb`, `RocksDB`.
                     * @return EngineType Engine type description. Valid values: `Innodb`, `RocksDB`.
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Engine type description. Valid values: `Innodb`, `RocksDB`.
                     * @param EngineType Engine type description. Valid values: `Innodb`, `RocksDB`.
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Purchasable specifications ID
                     * @return Id Purchasable specifications ID
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Purchasable specifications ID
                     * @param Id Purchasable specifications ID
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Memory size in MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU core count
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Minimum disk size in GB
                     */
                    int64_t m_volumeMin;
                    bool m_volumeMinHasBeenSet;

                    /**
                     * Maximum disk size in GB
                     */
                    int64_t m_volumeMax;
                    bool m_volumeMaxHasBeenSet;

                    /**
                     * Disk capacity increment in GB
                     */
                    int64_t m_volumeStep;
                    bool m_volumeStepHasBeenSet;

                    /**
                     * IO operations per second
                     */
                    int64_t m_iops;
                    bool m_iopsHasBeenSet;

                    /**
                     * Application scenario description
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Status. The value `0` indicates that this specification is available.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance), `BASIC_V2` (basic v2 instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Engine type description. Valid values: `Innodb`, `RocksDB`.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Purchasable specifications ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLCONFIG_H_
