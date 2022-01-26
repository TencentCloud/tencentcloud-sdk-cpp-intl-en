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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SELLCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SELLCONFIG_H_

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
                * Purchasable configuration details
                */
                class SellConfig : public AbstractModel
                {
                public:
                    SellConfig();
                    ~SellConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取(Disused) Device type
                     * @return Device (Disused) Device type
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置(Disused) Device type
                     * @param Device (Disused) Device type
                     */
                    void SetDevice(const std::string& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取(Disused) Purchasable specification description 
                     * @return Type (Disused) Purchasable specification description 
                     */
                    std::string GetType() const;

                    /**
                     * 设置(Disused) Purchasable specification description 
                     * @param Type (Disused) Purchasable specification description 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取(Disused) Instance type 
                     * @return CdbType (Disused) Instance type 
                     */
                    std::string GetCdbType() const;

                    /**
                     * 设置(Disused) Instance type 
                     * @param CdbType (Disused) Instance type 
                     */
                    void SetCdbType(const std::string& _cdbType);

                    /**
                     * 判断参数 CdbType 是否已赋值
                     * @return CdbType 是否已赋值
                     */
                    bool CdbTypeHasBeenSet() const;

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
                     * 获取Disk increment in GB
                     * @return VolumeStep Disk increment in GB
                     */
                    int64_t GetVolumeStep() const;

                    /**
                     * 设置Disk increment in GB
                     * @param VolumeStep Disk increment in GB
                     */
                    void SetVolumeStep(const int64_t& _volumeStep);

                    /**
                     * 判断参数 VolumeStep 是否已赋值
                     * @return VolumeStep 是否已赋值
                     */
                    bool VolumeStepHasBeenSet() const;

                    /**
                     * 获取Number of connections
                     * @return Connection Number of connections
                     */
                    int64_t GetConnection() const;

                    /**
                     * 设置Number of connections
                     * @param Connection Number of connections
                     */
                    void SetConnection(const int64_t& _connection);

                    /**
                     * 判断参数 Connection 是否已赋值
                     * @return Connection 是否已赋值
                     */
                    bool ConnectionHasBeenSet() const;

                    /**
                     * 获取Queries per second
                     * @return Qps Queries per second
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置Queries per second
                     * @param Qps Queries per second
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取IOs per second
                     * @return Iops IOs per second
                     */
                    int64_t GetIops() const;

                    /**
                     * 设置IOs per second
                     * @param Iops IOs per second
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
                     * 获取Status. Value `0` indicates that this specification is purchasable.
                     * @return Status Status. Value `0` indicates that this specification is purchasable.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. Value `0` indicates that this specification is purchasable.
                     * @param Status Status. Value `0` indicates that this specification is purchasable.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取(Disused) Tag value
                     * @return Tag (Disused) Tag value
                     */
                    int64_t GetTag() const;

                    /**
                     * 设置(Disused) Tag value
                     * @param Tag (Disused) Tag value
                     */
                    void SetTag(const int64_t& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return DeviceType Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param DeviceType Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return DeviceTypeName Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetDeviceTypeName() const;

                    /**
                     * 设置Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param DeviceTypeName Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetDeviceTypeName(const std::string& _deviceTypeName);

                    /**
                     * 判断参数 DeviceTypeName 是否已赋值
                     * @return DeviceTypeName 是否已赋值
                     */
                    bool DeviceTypeNameHasBeenSet() const;

                private:

                    /**
                     * (Disused) Device type
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * (Disused) Purchasable specification description 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * (Disused) Instance type 
                     */
                    std::string m_cdbType;
                    bool m_cdbTypeHasBeenSet;

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
                     * Disk increment in GB
                     */
                    int64_t m_volumeStep;
                    bool m_volumeStepHasBeenSet;

                    /**
                     * Number of connections
                     */
                    int64_t m_connection;
                    bool m_connectionHasBeenSet;

                    /**
                     * Queries per second
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * IOs per second
                     */
                    int64_t m_iops;
                    bool m_iopsHasBeenSet;

                    /**
                     * Application scenario description
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Status. Value `0` indicates that this specification is purchasable.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * (Disused) Tag value
                     */
                    int64_t m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Instance resource isolation type. Valid values: `UNIVERSAL` (general instance), `EXCLUSIVE` (dedicated instance), `BASIC` (basic instance).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_deviceTypeName;
                    bool m_deviceTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SELLCONFIG_H_
