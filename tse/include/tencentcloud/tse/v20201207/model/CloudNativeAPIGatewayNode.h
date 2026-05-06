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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud Native API Gateway Node Information.
                */
                class CloudNativeAPIGatewayNode : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayNode();
                    ~CloudNativeAPIGatewayNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud-native gateway node id
                     * @return NodeId Cloud-native gateway node id
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Cloud-native gateway node id
                     * @param _nodeId Cloud-native gateway node id
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
                     * 获取Node ip
                     * @return NodeIp Node ip
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置Node ip
                     * @param _nodeIp Node ip
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
                     * 获取Zone id
                     * @return ZoneId Zone id
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id
                     * @param _zoneId Zone id
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Zone
                     * @return Zone Zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Zone
                     * @param _zone Zone
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
                     * 获取group ID
                     * @return GroupId group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置group ID
                     * @param _groupId group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Group name
                     * @return GroupName Group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name
                     * @param _groupName Group name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
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
                     * 获取Node weight
                     * @return Weight Node weight
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Node weight
                     * @param _weight Node weight
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Default weight required or not
                     * @return IsDefaultWeight Default weight required or not
                     * 
                     */
                    bool GetIsDefaultWeight() const;

                    /**
                     * 设置Default weight required or not
                     * @param _isDefaultWeight Default weight required or not
                     * 
                     */
                    void SetIsDefaultWeight(const bool& _isDefaultWeight);

                    /**
                     * 判断参数 IsDefaultWeight 是否已赋值
                     * @return IsDefaultWeight 是否已赋值
                     * 
                     */
                    bool IsDefaultWeightHasBeenSet() const;

                private:

                    /**
                     * Cloud-native gateway node id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node ip
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * Zone id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Node weight
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Default weight required or not
                     */
                    bool m_isDefaultWeight;
                    bool m_isDefaultWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYNODE_H_
