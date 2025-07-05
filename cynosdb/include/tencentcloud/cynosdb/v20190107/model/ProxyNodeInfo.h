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
                * Node in the database proxy group
                */
                class ProxyNodeInfo : public AbstractModel
                {
                public:
                    ProxyNodeInfo();
                    ~ProxyNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database proxy node ID
                     * @return ProxyNodeId Database proxy node ID
                     * 
                     */
                    std::string GetProxyNodeId() const;

                    /**
                     * 设置Database proxy node ID
                     * @param _proxyNodeId Database proxy node ID
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
                     * 获取Current node connections, which is not returned by the `DescribeProxyNodes` API.
                     * @return ProxyNodeConnections Current node connections, which is not returned by the `DescribeProxyNodes` API.
                     * 
                     */
                    int64_t GetProxyNodeConnections() const;

                    /**
                     * 设置Current node connections, which is not returned by the `DescribeProxyNodes` API.
                     * @param _proxyNodeConnections Current node connections, which is not returned by the `DescribeProxyNodes` API.
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
                     * 获取CPU of the database proxy node
                     * @return Cpu CPU of the database proxy node
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU of the database proxy node
                     * @param _cpu CPU of the database proxy node
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
                     * 获取Memory of the database proxy node
                     * @return Mem Memory of the database proxy node
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置Memory of the database proxy node
                     * @param _mem Memory of the database proxy node
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
                     * 获取Status of the database proxy node
                     * @return Status Status of the database proxy node
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the database proxy node
                     * @param _status Status of the database proxy node
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
                     * 获取Database proxy group ID
                     * @return ProxyGroupId Database proxy group ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy group ID
                     * @param _proxyGroupId Database proxy group ID
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
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取User AppID
                     * @return AppId User AppID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User AppID
                     * @param _appId User AppID
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
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取
                     * @return OssProxyNodeName 
                     * 
                     */
                    std::string GetOssProxyNodeName() const;

                    /**
                     * 设置
                     * @param _ossProxyNodeName 
                     * 
                     */
                    void SetOssProxyNodeName(const std::string& _ossProxyNodeName);

                    /**
                     * 判断参数 OssProxyNodeName 是否已赋值
                     * @return OssProxyNodeName 是否已赋值
                     * 
                     */
                    bool OssProxyNodeNameHasBeenSet() const;

                private:

                    /**
                     * Database proxy node ID
                     */
                    std::string m_proxyNodeId;
                    bool m_proxyNodeIdHasBeenSet;

                    /**
                     * Current node connections, which is not returned by the `DescribeProxyNodes` API.
                     */
                    int64_t m_proxyNodeConnections;
                    bool m_proxyNodeConnectionsHasBeenSet;

                    /**
                     * CPU of the database proxy node
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory of the database proxy node
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * Status of the database proxy node
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Database proxy group ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * User AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ossProxyNodeName;
                    bool m_ossProxyNodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_
