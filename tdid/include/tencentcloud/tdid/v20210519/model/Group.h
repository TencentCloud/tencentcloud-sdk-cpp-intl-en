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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GROUP_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * The group information.
                */
                class Group : public AbstractModel
                {
                public:
                    Group();
                    ~Group() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param _groupId The group ID.
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The number of nodes.
                     * @return NodeCount The number of nodes.
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置The number of nodes.
                     * @param _nodeCount The number of nodes.
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取The number of nodes of the organization.
                     * @return NodeCountOfAgency The number of nodes of the organization.
                     * 
                     */
                    uint64_t GetNodeCountOfAgency() const;

                    /**
                     * 设置The number of nodes of the organization.
                     * @param _nodeCountOfAgency The number of nodes of the organization.
                     * 
                     */
                    void SetNodeCountOfAgency(const uint64_t& _nodeCountOfAgency);

                    /**
                     * 判断参数 NodeCountOfAgency 是否已赋值
                     * @return NodeCountOfAgency 是否已赋值
                     * 
                     */
                    bool NodeCountOfAgencyHasBeenSet() const;

                    /**
                     * 获取The description of the group.
                     * @return Description The description of the group.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The description of the group.
                     * @param _description The description of the group.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether you are the owner of the consortium or not.
                     * @return RoleType Whether you are the owner of the consortium or not.
                     * 
                     */
                    uint64_t GetRoleType() const;

                    /**
                     * 设置Whether you are the owner of the consortium or not.
                     * @param _roleType Whether you are the owner of the consortium or not.
                     * 
                     */
                    void SetRoleType(const uint64_t& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取The chain ID.
                     * @return ChainId The chain ID.
                     * 
                     */
                    std::string GetChainId() const;

                    /**
                     * 设置The chain ID.
                     * @param _chainId The chain ID.
                     * 
                     */
                    void SetChainId(const std::string& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     * 
                     */
                    bool ChainIdHasBeenSet() const;

                private:

                    /**
                     * The group ID.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The number of nodes.
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * The number of nodes of the organization.
                     */
                    uint64_t m_nodeCountOfAgency;
                    bool m_nodeCountOfAgencyHasBeenSet;

                    /**
                     * The description of the group.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether you are the owner of the consortium or not.
                     */
                    uint64_t m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * The chain ID.
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GROUP_H_
