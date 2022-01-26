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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Redis master or replica node information
                */
                class RedisNodeInfo : public AbstractModel
                {
                public:
                    RedisNodeInfo();
                    ~RedisNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type. Valid values: `0` (master node), `1` (replica node)
                     * @return NodeType Node type. Valid values: `0` (master node), `1` (replica node)
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置Node type. Valid values: `0` (master node), `1` (replica node)
                     * @param NodeType Node type. Valid values: `0` (master node), `1` (replica node)
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取ID of the master or replica node, which is not required upon creation of the instance
                     * @return NodeId ID of the master or replica node, which is not required upon creation of the instance
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置ID of the master or replica node, which is not required upon creation of the instance
                     * @param NodeId ID of the master or replica node, which is not required upon creation of the instance
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取ID of the availability zone of the master or replica node
                     * @return ZoneId ID of the availability zone of the master or replica node
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置ID of the availability zone of the master or replica node
                     * @param ZoneId ID of the availability zone of the master or replica node
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取ID of the availability zone of the master or replica node
                     * @return ZoneName ID of the availability zone of the master or replica node
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置ID of the availability zone of the master or replica node
                     * @param ZoneName ID of the availability zone of the master or replica node
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                private:

                    /**
                     * Node type. Valid values: `0` (master node), `1` (replica node)
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * ID of the master or replica node, which is not required upon creation of the instance
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * ID of the availability zone of the master or replica node
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * ID of the availability zone of the master or replica node
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODEINFO_H_
