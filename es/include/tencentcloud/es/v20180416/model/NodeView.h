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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_NODEVIEW_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_NODEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Node view data
                */
                class NodeView : public AbstractModel
                {
                public:
                    NodeView();
                    ~NodeView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node ID
                     * @return NodeId Node ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID
                     * @param _nodeId Node ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Node IP
                     * @return NodeIp Node IP
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置Node IP
                     * @param _nodeIp Node IP
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取Whether the node is visible
                     * @return Visible Whether the node is visible
                     * 
                     */
                    double GetVisible() const;

                    /**
                     * 设置Whether the node is visible
                     * @param _visible Whether the node is visible
                     * 
                     */
                    void SetVisible(const double& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     * 
                     */
                    bool VisibleHasBeenSet() const;

                    /**
                     * 获取Whether the node encounters circuit breaking
                     * @return Break Whether the node encounters circuit breaking
                     * 
                     */
                    double GetBreak() const;

                    /**
                     * 设置Whether the node encounters circuit breaking
                     * @param _break Whether the node encounters circuit breaking
                     * 
                     */
                    void SetBreak(const double& _break);

                    /**
                     * 判断参数 Break 是否已赋值
                     * @return Break 是否已赋值
                     * 
                     */
                    bool BreakHasBeenSet() const;

                    /**
                     * 获取Node disk size
                     * @return DiskSize Node disk size
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Node disk size
                     * @param _diskSize Node disk size
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Disk usage
                     * @return DiskUsage Disk usage
                     * 
                     */
                    double GetDiskUsage() const;

                    /**
                     * 设置Disk usage
                     * @param _diskUsage Disk usage
                     * 
                     */
                    void SetDiskUsage(const double& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Node memory size (in GB)
                     * @return MemSize Node memory size (in GB)
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Node memory size (in GB)
                     * @param _memSize Node memory size (in GB)
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Memory usage
                     * @return MemUsage Memory usage
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置Memory usage
                     * @param _memUsage Memory usage
                     * 
                     */
                    void SetMemUsage(const double& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取Number of node CPUs
                     * @return CpuNum Number of node CPUs
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置Number of node CPUs
                     * @param _cpuNum Number of node CPUs
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取CPU usage
                     * @return CpuUsage CPU usage
                     * 
                     */
                    double GetCpuUsage() const;

                    /**
                     * 设置CPU usage
                     * @param _cpuUsage CPU usage
                     * 
                     */
                    void SetCpuUsage(const double& _cpuUsage);

                    /**
                     * 判断参数 CpuUsage 是否已赋值
                     * @return CpuUsage 是否已赋值
                     * 
                     */
                    bool CpuUsageHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
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
                     * 获取Node role
                     * @return NodeRole Node role
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置Node role
                     * @param _nodeRole Node role
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取Node HTTP IP
                     * @return NodeHttpIp Node HTTP IP
                     * 
                     */
                    std::string GetNodeHttpIp() const;

                    /**
                     * 设置Node HTTP IP
                     * @param _nodeHttpIp Node HTTP IP
                     * 
                     */
                    void SetNodeHttpIp(const std::string& _nodeHttpIp);

                    /**
                     * 判断参数 NodeHttpIp 是否已赋值
                     * @return NodeHttpIp 是否已赋值
                     * 
                     */
                    bool NodeHttpIpHasBeenSet() const;

                    /**
                     * 获取JVM memory usage
                     * @return JvmMemUsage JVM memory usage
                     * 
                     */
                    double GetJvmMemUsage() const;

                    /**
                     * 设置JVM memory usage
                     * @param _jvmMemUsage JVM memory usage
                     * 
                     */
                    void SetJvmMemUsage(const double& _jvmMemUsage);

                    /**
                     * 判断参数 JvmMemUsage 是否已赋值
                     * @return JvmMemUsage 是否已赋值
                     * 
                     */
                    bool JvmMemUsageHasBeenSet() const;

                    /**
                     * 获取Number of node shards
                     * @return ShardNum Number of node shards
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置Number of node shards
                     * @param _shardNum Number of node shards
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取ID list of node disks
                     * @return DiskIds ID list of node disks
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置ID list of node disks
                     * @param _diskIds ID list of node disks
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Whether a hidden availability zone
                     * @return Hidden Whether a hidden availability zone
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置Whether a hidden availability zone
                     * @param _hidden Whether a hidden availability zone
                     * 
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                private:

                    /**
                     * Node ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node IP
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * Whether the node is visible
                     */
                    double m_visible;
                    bool m_visibleHasBeenSet;

                    /**
                     * Whether the node encounters circuit breaking
                     */
                    double m_break;
                    bool m_breakHasBeenSet;

                    /**
                     * Node disk size
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Disk usage
                     */
                    double m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Node memory size (in GB)
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Memory usage
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * Number of node CPUs
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * CPU usage
                     */
                    double m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Node role
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * Node HTTP IP
                     */
                    std::string m_nodeHttpIp;
                    bool m_nodeHttpIpHasBeenSet;

                    /**
                     * JVM memory usage
                     */
                    double m_jvmMemUsage;
                    bool m_jvmMemUsageHasBeenSet;

                    /**
                     * Number of node shards
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * ID list of node disks
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Whether a hidden availability zone
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NODEVIEW_H_
