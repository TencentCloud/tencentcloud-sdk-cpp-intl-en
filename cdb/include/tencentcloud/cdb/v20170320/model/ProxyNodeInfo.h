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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODEINFO_H_

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
                * Node information of the proxy
                */
                class ProxyNodeInfo : public AbstractModel
                {
                public:
                    ProxyNodeInfo();
                    ~ProxyNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Proxy node ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyNodeId Proxy node ID
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetProxyNodeId() const;

                    /**
                     * 设置Proxy node ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ProxyNodeId Proxy node ID
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProxyNodeId(const std::string& _proxyNodeId);

                    /**
                     * 判断参数 ProxyNodeId 是否已赋值
                     * @return ProxyNodeId 是否已赋值
                     */
                    bool ProxyNodeIdHasBeenSet() const;

                    /**
                     * 获取Current number of connections to the node
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyNodeConnections Current number of connections to the node
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t GetProxyNodeConnections() const;

                    /**
                     * 设置Current number of connections to the node
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ProxyNodeConnections Current number of connections to the node
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProxyNodeConnections(const uint64_t& _proxyNodeConnections);

                    /**
                     * 判断参数 ProxyNodeConnections 是否已赋值
                     * @return ProxyNodeConnections 是否已赋值
                     */
                    bool ProxyNodeConnectionsHasBeenSet() const;

                    /**
                     * 获取CPU
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyNodeCpu CPU
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t GetProxyNodeCpu() const;

                    /**
                     * 设置CPU
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ProxyNodeCpu CPU
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProxyNodeCpu(const uint64_t& _proxyNodeCpu);

                    /**
                     * 判断参数 ProxyNodeCpu 是否已赋值
                     * @return ProxyNodeCpu 是否已赋值
                     */
                    bool ProxyNodeCpuHasBeenSet() const;

                    /**
                     * 获取Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyNodeMem Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t GetProxyNodeMem() const;

                    /**
                     * 设置Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ProxyNodeMem Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProxyNodeMem(const uint64_t& _proxyNodeMem);

                    /**
                     * 判断参数 ProxyNodeMem 是否已赋值
                     * @return ProxyNodeMem 是否已赋值
                     */
                    bool ProxyNodeMemHasBeenSet() const;

                    /**
                     * 获取Node status:
init (applying)
online (active)
offline (inactive)
destroy (destroyed)
recovering (recovering from fault)
error (failed)
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyStatus Node status:
init (applying)
online (active)
offline (inactive)
destroy (destroyed)
recovering (recovering from fault)
error (failed)
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetProxyStatus() const;

                    /**
                     * 设置Node status:
init (applying)
online (active)
offline (inactive)
destroy (destroyed)
recovering (recovering from fault)
error (failed)
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ProxyStatus Node status:
init (applying)
online (active)
offline (inactive)
destroy (destroyed)
recovering (recovering from fault)
error (failed)
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetProxyStatus(const std::string& _proxyStatus);

                    /**
                     * 判断参数 ProxyStatus 是否已赋值
                     * @return ProxyStatus 是否已赋值
                     */
                    bool ProxyStatusHasBeenSet() const;

                private:

                    /**
                     * Proxy node ID
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_proxyNodeId;
                    bool m_proxyNodeIdHasBeenSet;

                    /**
                     * Current number of connections to the node
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_proxyNodeConnections;
                    bool m_proxyNodeConnectionsHasBeenSet;

                    /**
                     * CPU
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_proxyNodeCpu;
                    bool m_proxyNodeCpuHasBeenSet;

                    /**
                     * Memory
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_proxyNodeMem;
                    bool m_proxyNodeMemHasBeenSet;

                    /**
                     * Node status:
init (applying)
online (active)
offline (inactive)
destroy (destroyed)
recovering (recovering from fault)
error (failed)
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_proxyStatus;
                    bool m_proxyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODEINFO_H_
