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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODE_H_

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
                * Running information of Redis nodes
                */
                class RedisNode : public AbstractModel
                {
                public:
                    RedisNode();
                    ~RedisNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of keys on the node
                     * @return Keys Number of keys on the node
                     * 
                     */
                    int64_t GetKeys() const;

                    /**
                     * 设置Number of keys on the node
                     * @param _keys Number of keys on the node
                     * 
                     */
                    void SetKeys(const int64_t& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Distribution of node slots
                     * @return Slot Distribution of node slots
                     * 
                     */
                    std::string GetSlot() const;

                    /**
                     * 设置Distribution of node slots
                     * @param _slot Distribution of node slots
                     * 
                     */
                    void SetSlot(const std::string& _slot);

                    /**
                     * 判断参数 Slot 是否已赋值
                     * @return Slot 是否已赋值
                     * 
                     */
                    bool SlotHasBeenSet() const;

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
                     * 获取Node status
                     * @return Status Node status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Node status
                     * @param _status Node status
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
                     * 获取Node role
                     * @return Role Node role
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node role
                     * @param _role Node role
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * Number of keys on the node
                     */
                    int64_t m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Distribution of node slots
                     */
                    std::string m_slot;
                    bool m_slotHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Node role
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISNODE_H_
