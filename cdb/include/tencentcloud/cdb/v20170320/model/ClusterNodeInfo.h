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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERNODEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERNODEINFO_H_

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
                * Cluster Edition instance node information.
                */
                class ClusterNodeInfo : public AbstractModel
                {
                public:
                    ClusterNodeInfo();
                    ~ClusterNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取node id.
                     * @return NodeId node id.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置node id.
                     * @param _nodeId node id.
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
                     * 获取Node role.
                     * @return Role Node role.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node role.
                     * @param _role Node role.
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
                     * 获取Node AZ.
                     * @return Zone Node AZ.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Node AZ.
                     * @param _zone Node AZ.
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
                     * 获取Weight of the node
                     * @return Weight Weight of the node
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight of the node
                     * @param _weight Weight of the node
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Node status.
                     * @return Status Node status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Node status.
                     * @param _status Node status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * node id.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node role.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Node AZ.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Weight of the node
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Node status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLUSTERNODEINFO_H_
