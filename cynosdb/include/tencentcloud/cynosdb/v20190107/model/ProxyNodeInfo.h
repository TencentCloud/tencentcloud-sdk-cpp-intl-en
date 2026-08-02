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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_

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
                * Node in the database proxy group.
                */
                class ProxyNodeInfo : public AbstractModel
                {
                public:
                    ProxyNodeInfo();
                    ~ProxyNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Database Proxy Node ID</p>
                     * @return ProxyNodeId <p>Database Proxy Node ID</p>
                     * 
                     */
                    std::string GetProxyNodeId() const;

                    /**
                     * 设置<p>Database Proxy Node ID</p>
                     * @param _proxyNodeId <p>Database Proxy Node ID</p>
                     * 
                     */
                    void SetProxyNodeId(const std::string& _proxyNodeId);

                    /**
                     * 判断参数 ProxyNodeId 是否已赋值
                     * @return ProxyNodeId 是否已赋值
                     * 
                     */
                    bool ProxyNodeIdHasBeenSet() const;

                    /**
                     * 获取<p>Current connection number of nodes. This field value does not return in the DescribeProxyNodes API.</p>
                     * @return ProxyNodeConnections <p>Current connection number of nodes. This field value does not return in the DescribeProxyNodes API.</p>
                     * 
                     */
                    int64_t GetProxyNodeConnections() const;

                    /**
                     * 设置<p>Current connection number of nodes. This field value does not return in the DescribeProxyNodes API.</p>
                     * @param _proxyNodeConnections <p>Current connection number of nodes. This field value does not return in the DescribeProxyNodes API.</p>
                     * 
                     */
                    void SetProxyNodeConnections(const int64_t& _proxyNodeConnections);

                    /**
                     * 判断参数 ProxyNodeConnections 是否已赋值
                     * @return ProxyNodeConnections 是否已赋值
                     * 
                     */
                    bool ProxyNodeConnectionsHasBeenSet() const;

                    /**
                     * 获取<p>Database proxy node cpu</p>
                     * @return Cpu <p>Database proxy node cpu</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Database proxy node cpu</p>
                     * @param _cpu <p>Database proxy node cpu</p>
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
                     * 获取<p>Database proxy node memory</p>
                     * @return Mem <p>Database proxy node memory</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>Database proxy node memory</p>
                     * @param _mem <p>Database proxy node memory</p>
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>Database Proxy Node Status</p>
                     * @return Status <p>Database Proxy Node Status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Database Proxy Node Status</p>
                     * @param _status <p>Database Proxy Node Status</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Database Proxy Group ID</p>
                     * @return ProxyGroupId <p>Database Proxy Group ID</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Database Proxy Group ID</p>
                     * @param _proxyGroupId <p>Database Proxy Group ID</p>
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>User AppID</p>
                     * @return AppId <p>User AppID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>User AppID</p>
                     * @param _appId <p>User AppID</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
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
                     * 获取<p>Database Proxy Node Name</p>
                     * @return OssProxyNodeName <p>Database Proxy Node Name</p>
                     * 
                     */
                    std::string GetOssProxyNodeName() const;

                    /**
                     * 设置<p>Database Proxy Node Name</p>
                     * @param _ossProxyNodeName <p>Database Proxy Node Name</p>
                     * 
                     */
                    void SetOssProxyNodeName(const std::string& _ossProxyNodeName);

                    /**
                     * 判断参数 OssProxyNodeName 是否已赋值
                     * @return OssProxyNodeName 是否已赋值
                     * 
                     */
                    bool OssProxyNodeNameHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Database Proxy Node ID</p>
                     */
                    std::string m_proxyNodeId;
                    bool m_proxyNodeIdHasBeenSet;

                    /**
                     * <p>Current connection number of nodes. This field value does not return in the DescribeProxyNodes API.</p>
                     */
                    int64_t m_proxyNodeConnections;
                    bool m_proxyNodeConnectionsHasBeenSet;

                    /**
                     * <p>Database proxy node cpu</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Database proxy node memory</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>Database Proxy Node Status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Database Proxy Group ID</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>User AppID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Database Proxy Node Name</p>
                     */
                    std::string m_ossProxyNodeName;
                    bool m_ossProxyNodeNameHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_
