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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DrZoneInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeUpgradeInstanceCheck request structure.
                */
                class DescribeUpgradeInstanceCheckRequest : public AbstractModel
                {
                public:
                    DescribeUpgradeInstanceCheckRequest();
                    ~DescribeUpgradeInstanceCheckRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database instance ID, in the format of mssql-njj2mtpl.
                     * @return InstanceId Database instance ID, in the format of mssql-njj2mtpl.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID, in the format of mssql-njj2mtpl.
                     * @param _instanceId Database instance ID, in the format of mssql-njj2mtpl.
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
                     * 获取Number of CPU cores after instance configuration adjustment. If it is left blank, no modification is required.
                     * @return Cpu Number of CPU cores after instance configuration adjustment. If it is left blank, no modification is required.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores after instance configuration adjustment. If it is left blank, no modification is required.
                     * @param _cpu Number of CPU cores after instance configuration adjustment. If it is left blank, no modification is required.
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
                     * 获取Memory size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     * @return Memory Memory size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     * @param _memory Memory size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
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
                     * 获取Disk size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     * @return Storage Disk size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Disk size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     * @param _storage Disk size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Instance version. If it is left blank, no modification is required.
                     * @return DBVersion Instance version. If it is left blank, no modification is required.
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置Instance version. If it is left blank, no modification is required.
                     * @param _dBVersion Instance version. If it is left blank, no modification is required.
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取Type after instance configuration adjustment. Valid values: CLUSTER - cluster. If it is left blank, no modification is required.
                     * @return HAType Type after instance configuration adjustment. Valid values: CLUSTER - cluster. If it is left blank, no modification is required.
                     * 
                     */
                    std::string GetHAType() const;

                    /**
                     * 设置Type after instance configuration adjustment. Valid values: CLUSTER - cluster. If it is left blank, no modification is required.
                     * @param _hAType Type after instance configuration adjustment. Valid values: CLUSTER - cluster. If it is left blank, no modification is required.
                     * 
                     */
                    void SetHAType(const std::string& _hAType);

                    /**
                     * 判断参数 HAType 是否已赋值
                     * @return HAType 是否已赋值
                     * 
                     */
                    bool HATypeHasBeenSet() const;

                    /**
                     * 获取Cross-AZ type after instance configuration adjustment. Valid values: SameZones - change to the same AZ; MultiZones - change to cross-AZ. If it is left blank, no modification is required.
                     * @return MultiZones Cross-AZ type after instance configuration adjustment. Valid values: SameZones - change to the same AZ; MultiZones - change to cross-AZ. If it is left blank, no modification is required.
                     * 
                     */
                    std::string GetMultiZones() const;

                    /**
                     * 设置Cross-AZ type after instance configuration adjustment. Valid values: SameZones - change to the same AZ; MultiZones - change to cross-AZ. If it is left blank, no modification is required.
                     * @param _multiZones Cross-AZ type after instance configuration adjustment. Valid values: SameZones - change to the same AZ; MultiZones - change to cross-AZ. If it is left blank, no modification is required.
                     * 
                     */
                    void SetMultiZones(const std::string& _multiZones);

                    /**
                     * 判断参数 MultiZones 是否已赋值
                     * @return MultiZones 是否已赋值
                     * 
                     */
                    bool MultiZonesHasBeenSet() const;

                    /**
                     * 获取Secondary node AZ of the multi-node architecture instance. The default value is null. It should be specified when modifying the AZ of the specified secondary node needs to be performed during configuration adjustment. When MultiZones = MultiZones, the AZs of the primary nodes and secondary nodes cannot all be the same. The collection of AZs of the secondary node can include 2-5 AZs.
                     * @return DrZones Secondary node AZ of the multi-node architecture instance. The default value is null. It should be specified when modifying the AZ of the specified secondary node needs to be performed during configuration adjustment. When MultiZones = MultiZones, the AZs of the primary nodes and secondary nodes cannot all be the same. The collection of AZs of the secondary node can include 2-5 AZs.
                     * 
                     */
                    std::vector<DrZoneInfo> GetDrZones() const;

                    /**
                     * 设置Secondary node AZ of the multi-node architecture instance. The default value is null. It should be specified when modifying the AZ of the specified secondary node needs to be performed during configuration adjustment. When MultiZones = MultiZones, the AZs of the primary nodes and secondary nodes cannot all be the same. The collection of AZs of the secondary node can include 2-5 AZs.
                     * @param _drZones Secondary node AZ of the multi-node architecture instance. The default value is null. It should be specified when modifying the AZ of the specified secondary node needs to be performed during configuration adjustment. When MultiZones = MultiZones, the AZs of the primary nodes and secondary nodes cannot all be the same. The collection of AZs of the secondary node can include 2-5 AZs.
                     * 
                     */
                    void SetDrZones(const std::vector<DrZoneInfo>& _drZones);

                    /**
                     * 判断参数 DrZones 是否已赋值
                     * @return DrZones 是否已赋值
                     * 
                     */
                    bool DrZonesHasBeenSet() const;

                private:

                    /**
                     * Database instance ID, in the format of mssql-njj2mtpl.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of CPU cores after instance configuration adjustment. If it is left blank, no modification is required.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk size after instance configuration adjustment, in GB. If it is left blank, no modification is required.
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Instance version. If it is left blank, no modification is required.
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * Type after instance configuration adjustment. Valid values: CLUSTER - cluster. If it is left blank, no modification is required.
                     */
                    std::string m_hAType;
                    bool m_hATypeHasBeenSet;

                    /**
                     * Cross-AZ type after instance configuration adjustment. Valid values: SameZones - change to the same AZ; MultiZones - change to cross-AZ. If it is left blank, no modification is required.
                     */
                    std::string m_multiZones;
                    bool m_multiZonesHasBeenSet;

                    /**
                     * Secondary node AZ of the multi-node architecture instance. The default value is null. It should be specified when modifying the AZ of the specified secondary node needs to be performed during configuration adjustment. When MultiZones = MultiZones, the AZs of the primary nodes and secondary nodes cannot all be the same. The collection of AZs of the secondary node can include 2-5 AZs.
                     */
                    std::vector<DrZoneInfo> m_drZones;
                    bool m_drZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKREQUEST_H_
