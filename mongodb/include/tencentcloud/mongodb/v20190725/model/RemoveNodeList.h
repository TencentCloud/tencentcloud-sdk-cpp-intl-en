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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_REMOVENODELIST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_REMOVENODELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Node details of an instance to be modified.
                */
                class RemoveNodeList : public AbstractModel
                {
                public:
                    RemoveNodeList();
                    ~RemoveNodeList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Roles of nodes to be deleted.
 - SECONDARY: Mongod secondary node.
 - READONLY: read-only node.
 - MONGOS: Mongos node.
                     * @return Role Roles of nodes to be deleted.
 - SECONDARY: Mongod secondary node.
 - READONLY: read-only node.
 - MONGOS: Mongos node.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Roles of nodes to be deleted.
 - SECONDARY: Mongod secondary node.
 - READONLY: read-only node.
 - MONGOS: Mongos node.
                     * @param _role Roles of nodes to be deleted.
 - SECONDARY: Mongod secondary node.
 - READONLY: read-only node.
 - MONGOS: Mongos node.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取IDs of nodes to be deleted. For a sharded cluster instance, specify the IDs of nodes to be deleted on one shard. Nodes with the same IDs on other shards will also be deleted.

 - Obtaining method: Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/), go to the **Node Management** tab, and obtain the **node IDs**.
 - Note: For a sharded cluster instance, specify the IDs of nodes on shard 0. For example, cmgo-6hfk****_0-node-primary.
                     * @return NodeName IDs of nodes to be deleted. For a sharded cluster instance, specify the IDs of nodes to be deleted on one shard. Nodes with the same IDs on other shards will also be deleted.

 - Obtaining method: Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/), go to the **Node Management** tab, and obtain the **node IDs**.
 - Note: For a sharded cluster instance, specify the IDs of nodes on shard 0. For example, cmgo-6hfk****_0-node-primary.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置IDs of nodes to be deleted. For a sharded cluster instance, specify the IDs of nodes to be deleted on one shard. Nodes with the same IDs on other shards will also be deleted.

 - Obtaining method: Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/), go to the **Node Management** tab, and obtain the **node IDs**.
 - Note: For a sharded cluster instance, specify the IDs of nodes on shard 0. For example, cmgo-6hfk****_0-node-primary.
                     * @param _nodeName IDs of nodes to be deleted. For a sharded cluster instance, specify the IDs of nodes to be deleted on one shard. Nodes with the same IDs on other shards will also be deleted.

 - Obtaining method: Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/), go to the **Node Management** tab, and obtain the **node IDs**.
 - Note: For a sharded cluster instance, specify the IDs of nodes on shard 0. For example, cmgo-6hfk****_0-node-primary.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取AZs corresponding to the nodes.
 - Single AZ: All nodes are in the same AZ.
 - Multiple AZs: The current standard specification involves three AZs. The primary and secondary nodes are not in the same AZ. Note: AZs corresponding to the nodes to be deleted should be specified. After deletion, the number of nodes in any two AZs should be larger than that in the third AZ.
                     * @return Zone AZs corresponding to the nodes.
 - Single AZ: All nodes are in the same AZ.
 - Multiple AZs: The current standard specification involves three AZs. The primary and secondary nodes are not in the same AZ. Note: AZs corresponding to the nodes to be deleted should be specified. After deletion, the number of nodes in any two AZs should be larger than that in the third AZ.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZs corresponding to the nodes.
 - Single AZ: All nodes are in the same AZ.
 - Multiple AZs: The current standard specification involves three AZs. The primary and secondary nodes are not in the same AZ. Note: AZs corresponding to the nodes to be deleted should be specified. After deletion, the number of nodes in any two AZs should be larger than that in the third AZ.
                     * @param _zone AZs corresponding to the nodes.
 - Single AZ: All nodes are in the same AZ.
 - Multiple AZs: The current standard specification involves three AZs. The primary and secondary nodes are not in the same AZ. Note: AZs corresponding to the nodes to be deleted should be specified. After deletion, the number of nodes in any two AZs should be larger than that in the third AZ.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * Roles of nodes to be deleted.
 - SECONDARY: Mongod secondary node.
 - READONLY: read-only node.
 - MONGOS: Mongos node.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * IDs of nodes to be deleted. For a sharded cluster instance, specify the IDs of nodes to be deleted on one shard. Nodes with the same IDs on other shards will also be deleted.

 - Obtaining method: Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/), go to the **Node Management** tab, and obtain the **node IDs**.
 - Note: For a sharded cluster instance, specify the IDs of nodes on shard 0. For example, cmgo-6hfk****_0-node-primary.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * AZs corresponding to the nodes.
 - Single AZ: All nodes are in the same AZ.
 - Multiple AZs: The current standard specification involves three AZs. The primary and secondary nodes are not in the same AZ. Note: AZs corresponding to the nodes to be deleted should be specified. After deletion, the number of nodes in any two AZs should be larger than that in the third AZ.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_REMOVENODELIST_H_
