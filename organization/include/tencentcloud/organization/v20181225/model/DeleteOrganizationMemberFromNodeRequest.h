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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONMEMBERFROMNODEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONMEMBERFROMNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * DeleteOrganizationMemberFromNode request structure.
                */
                class DeleteOrganizationMemberFromNodeRequest : public AbstractModel
                {
                public:
                    DeleteOrganizationMemberFromNodeRequest();
                    ~DeleteOrganizationMemberFromNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取UIN of the member to be deleted
                     * @return MemberUin UIN of the member to be deleted
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置UIN of the member to be deleted
                     * @param _memberUin UIN of the member to be deleted
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Organizational unit ID
                     * @return NodeId Organizational unit ID
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置Organizational unit ID
                     * @param _nodeId Organizational unit ID
                     * 
                     */
                    void SetNodeId(const uint64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * UIN of the member to be deleted
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Organizational unit ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_DELETEORGANIZATIONMEMBERFROMNODEREQUEST_H_
