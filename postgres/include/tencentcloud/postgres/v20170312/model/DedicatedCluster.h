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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DEDICATEDCLUSTER_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DEDICATEDCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Exclusive cluster-related information, used for querying the user's exclusive cluster list.
                */
                class DedicatedCluster : public AbstractModel
                {
                public:
                    DedicatedCluster();
                    ~DedicatedCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDC ID.
                     * @return DedicatedClusterId CDC ID.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC ID.
                     * @param _dedicatedClusterId CDC ID.
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster name.
                     * @return Name Dedicated cluster name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dedicated cluster name.
                     * @param _name Dedicated cluster name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Specifies the AZ of the exclusive cluster.
                     * @return Zone Specifies the AZ of the exclusive cluster.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Specifies the AZ of the exclusive cluster.
                     * @param _zone Specifies the AZ of the exclusive cluster.
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
                     * 获取Disaster recovery cluster.
                     * @return StandbyDedicatedClusterSet Disaster recovery cluster.
                     * 
                     */
                    std::vector<std::string> GetStandbyDedicatedClusterSet() const;

                    /**
                     * 设置Disaster recovery cluster.
                     * @param _standbyDedicatedClusterSet Disaster recovery cluster.
                     * 
                     */
                    void SetStandbyDedicatedClusterSet(const std::vector<std::string>& _standbyDedicatedClusterSet);

                    /**
                     * 判断参数 StandbyDedicatedClusterSet 是否已赋值
                     * @return StandbyDedicatedClusterSet 是否已赋值
                     * 
                     */
                    bool StandbyDedicatedClusterSetHasBeenSet() const;

                    /**
                     * 获取Specifies the instance count.
                     * @return InstanceCount Specifies the instance count.
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Specifies the instance count.
                     * @param _instanceCount Specifies the instance count.
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Total number of cpus.
                     * @return CpuTotal Total number of cpus.
                     * 
                     */
                    int64_t GetCpuTotal() const;

                    /**
                     * 设置Total number of cpus.
                     * @param _cpuTotal Total number of cpus.
                     * 
                     */
                    void SetCpuTotal(const int64_t& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     * 
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取Specifies the available amount of Cpu.
                     * @return CpuAvailable Specifies the available amount of Cpu.
                     * 
                     */
                    int64_t GetCpuAvailable() const;

                    /**
                     * 设置Specifies the available amount of Cpu.
                     * @param _cpuAvailable Specifies the available amount of Cpu.
                     * 
                     */
                    void SetCpuAvailable(const int64_t& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     * 
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取Total memory capacity in GB.
                     * @return MemTotal Total memory capacity in GB.
                     * 
                     */
                    int64_t GetMemTotal() const;

                    /**
                     * 设置Total memory capacity in GB.
                     * @param _memTotal Total memory capacity in GB.
                     * 
                     */
                    void SetMemTotal(const int64_t& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     * 
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取Available memory in GB.
                     * @return MemAvailable Available memory in GB.
                     * 
                     */
                    int64_t GetMemAvailable() const;

                    /**
                     * 设置Available memory in GB.
                     * @param _memAvailable Available memory in GB.
                     * 
                     */
                    void SetMemAvailable(const int64_t& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     * 
                     */
                    bool MemAvailableHasBeenSet() const;

                    /**
                     * 获取Total disk capacity (unit: GB).
                     * @return DiskTotal Total disk capacity (unit: GB).
                     * 
                     */
                    int64_t GetDiskTotal() const;

                    /**
                     * 设置Total disk capacity (unit: GB).
                     * @param _diskTotal Total disk capacity (unit: GB).
                     * 
                     */
                    void SetDiskTotal(const int64_t& _diskTotal);

                    /**
                     * 判断参数 DiskTotal 是否已赋值
                     * @return DiskTotal 是否已赋值
                     * 
                     */
                    bool DiskTotalHasBeenSet() const;

                    /**
                     * 获取Disk availability (unit: GB).
                     * @return DiskAvailable Disk availability (unit: GB).
                     * 
                     */
                    int64_t GetDiskAvailable() const;

                    /**
                     * 设置Disk availability (unit: GB).
                     * @param _diskAvailable Disk availability (unit: GB).
                     * 
                     */
                    void SetDiskAvailable(const int64_t& _diskAvailable);

                    /**
                     * 判断参数 DiskAvailable 是否已赋值
                     * @return DiskAvailable 是否已赋值
                     * 
                     */
                    bool DiskAvailableHasBeenSet() const;

                private:

                    /**
                     * CDC ID.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Dedicated cluster name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the AZ of the exclusive cluster.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Disaster recovery cluster.
                     */
                    std::vector<std::string> m_standbyDedicatedClusterSet;
                    bool m_standbyDedicatedClusterSetHasBeenSet;

                    /**
                     * Specifies the instance count.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Total number of cpus.
                     */
                    int64_t m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * Specifies the available amount of Cpu.
                     */
                    int64_t m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * Total memory capacity in GB.
                     */
                    int64_t m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * Available memory in GB.
                     */
                    int64_t m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                    /**
                     * Total disk capacity (unit: GB).
                     */
                    int64_t m_diskTotal;
                    bool m_diskTotalHasBeenSet;

                    /**
                     * Disk availability (unit: GB).
                     */
                    int64_t m_diskAvailable;
                    bool m_diskAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DEDICATEDCLUSTER_H_
