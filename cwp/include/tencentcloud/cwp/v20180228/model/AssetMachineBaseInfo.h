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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Basic information on the server list in asset fingerprint
                */
                class AssetMachineBaseInfo : public AbstractModel
                {
                public:
                    AssetMachineBaseInfo();
                    ~AssetMachineBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server QUUID
                     * @return Quuid Server QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Server QUUID
                     * @param _quuid Server QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Server UUID
                     * @return Uuid Server UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Server UUID
                     * @param _uuid Server UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Private IP address of server
                     * @return MachineIp Private IP address of server
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP address of server
                     * @param _machineIp Private IP address of server
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return MachineName Server name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name
                     * @param _machineName Server name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Operating system name
                     * @return OsInfo Operating system name
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置Operating system name
                     * @param _osInfo Operating system name
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取CPU information
                     * @return Cpu CPU information
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置CPU information
                     * @param _cpu CPU information
                     * 
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory capacity, in GB
                     * @return MemSize Memory capacity, in GB
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Memory capacity, in GB
                     * @param _memSize Memory capacity, in GB
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Memory utilization, in percentage
                     * @return MemLoad Memory utilization, in percentage
                     * 
                     */
                    std::string GetMemLoad() const;

                    /**
                     * 设置Memory utilization, in percentage
                     * @param _memLoad Memory utilization, in percentage
                     * 
                     */
                    void SetMemLoad(const std::string& _memLoad);

                    /**
                     * 判断参数 MemLoad 是否已赋值
                     * @return MemLoad 是否已赋值
                     * 
                     */
                    bool MemLoadHasBeenSet() const;

                    /**
                     * 获取Hard disk capacity, in GB
                     * @return DiskSize Hard disk capacity, in GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Hard disk capacity, in GB
                     * @param _diskSize Hard disk capacity, in GB
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Hard disk utilization, in percentage
                     * @return DiskLoad Hard disk utilization, in percentage
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置Hard disk utilization, in percentage
                     * @param _diskLoad Hard disk utilization, in percentage
                     * 
                     */
                    void SetDiskLoad(const std::string& _diskLoad);

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     * 
                     */
                    bool DiskLoadHasBeenSet() const;

                    /**
                     * 获取Number of partitions
                     * @return PartitionCount Number of partitions
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置Number of partitions
                     * @param _partitionCount Number of partitions
                     * 
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取Host public IP address
                     * @return MachineWanIp Host public IP address
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Host public IP address
                     * @param _machineWanIp Host public IP address
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Business group ID
                     * @return ProjectId Business group ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Business group ID
                     * @param _projectId Business group ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取CPU count
                     * @return CpuSize CPU count
                     * 
                     */
                    uint64_t GetCpuSize() const;

                    /**
                     * 设置CPU count
                     * @param _cpuSize CPU count
                     * 
                     */
                    void SetCpuSize(const uint64_t& _cpuSize);

                    /**
                     * 判断参数 CpuSize 是否已赋值
                     * @return CpuSize 是否已赋值
                     * 
                     */
                    bool CpuSizeHasBeenSet() const;

                    /**
                     * 获取CPU utilization, in percentage
                     * @return CpuLoad CPU utilization, in percentage
                     * 
                     */
                    std::string GetCpuLoad() const;

                    /**
                     * 设置CPU utilization, in percentage
                     * @param _cpuLoad CPU utilization, in percentage
                     * 
                     */
                    void SetCpuLoad(const std::string& _cpuLoad);

                    /**
                     * 判断参数 CpuLoad 是否已赋值
                     * @return CpuLoad 是否已赋值
                     * 
                     */
                    bool CpuLoadHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tag Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tag Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is newly added [0 - no;1 - yes]
                     * @return IsNew Whether it is newly added [0 - no;1 - yes]
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置Whether it is newly added [0 - no;1 - yes]
                     * @param _isNew Whether it is newly added [0 - no;1 - yes]
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取First collection time
                     * @return FirstTime First collection time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First collection time
                     * @param _firstTime First collection time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取CPU load readings (only valid for Linux systems)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuLoadNum CPU load readings (only valid for Linux systems)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCpuLoadNum() const;

                    /**
                     * 设置CPU load readings (only valid for Linux systems)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpuLoadNum CPU load readings (only valid for Linux systems)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCpuLoadNum(const std::string& _cpuLoadNum);

                    /**
                     * 判断参数 CpuLoadNum 是否已赋值
                     * @return CpuLoadNum 是否已赋值
                     * 
                     */
                    bool CpuLoadNumHasBeenSet() const;

                private:

                    /**
                     * Server QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Server UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Private IP address of server
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Operating system name
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * CPU information
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory capacity, in GB
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Memory utilization, in percentage
                     */
                    std::string m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * Hard disk capacity, in GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Hard disk utilization, in percentage
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * Number of partitions
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * Host public IP address
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Business group ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * CPU count
                     */
                    uint64_t m_cpuSize;
                    bool m_cpuSizeHasBeenSet;

                    /**
                     * CPU utilization, in percentage
                     */
                    std::string m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether it is newly added [0 - no;1 - yes]
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * First collection time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * CPU load readings (only valid for Linux systems)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cpuLoadNum;
                    bool m_cpuLoadNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETMACHINEBASEINFO_H_
