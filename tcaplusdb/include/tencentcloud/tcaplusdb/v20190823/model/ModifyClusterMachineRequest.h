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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/MachineInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyClusterMachine request structure.
                */
                class ModifyClusterMachineRequest : public AbstractModel
                {
                public:
                    ModifyClusterMachineRequest();
                    ~ModifyClusterMachineRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Information of the machines at the storage layer (tcapsvr)
                     * @return ServerList Information of the machines at the storage layer (tcapsvr)
                     * 
                     */
                    std::vector<MachineInfo> GetServerList() const;

                    /**
                     * 设置Information of the machines at the storage layer (tcapsvr)
                     * @param _serverList Information of the machines at the storage layer (tcapsvr)
                     * 
                     */
                    void SetServerList(const std::vector<MachineInfo>& _serverList);

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取Information of the machines at the access layer (tcaproxy)
                     * @return ProxyList Information of the machines at the access layer (tcaproxy)
                     * 
                     */
                    std::vector<MachineInfo> GetProxyList() const;

                    /**
                     * 设置Information of the machines at the access layer (tcaproxy)
                     * @param _proxyList Information of the machines at the access layer (tcaproxy)
                     * 
                     */
                    void SetProxyList(const std::vector<MachineInfo>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                    /**
                     * 获取Cluster type. Valid values: `1` (standard), `2` (dedicated)
                     * @return ClusterType Cluster type. Valid values: `1` (standard), `2` (dedicated)
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置Cluster type. Valid values: `1` (standard), `2` (dedicated)
                     * @param _clusterType Cluster type. Valid values: `1` (standard), `2` (dedicated)
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Information of the machines at the storage layer (tcapsvr)
                     */
                    std::vector<MachineInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * Information of the machines at the access layer (tcaproxy)
                     */
                    std::vector<MachineInfo> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * Cluster type. Valid values: `1` (standard), `2` (dedicated)
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
