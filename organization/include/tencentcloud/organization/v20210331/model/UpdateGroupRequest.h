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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEGROUPREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateGroup request structure.
                */
                class UpdateGroupRequest : public AbstractModel
                {
                public:
                    UpdateGroupRequest();
                    ~UpdateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID.
                     * @return ZoneId Space ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID.
                     * @param _zoneId Space ID.
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
                     * 获取User group ID.
                     * @return GroupId User group ID.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置User group ID.
                     * @param _groupId User group ID.
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
                     * 获取New user group name.
                     * @return NewGroupName New user group name.
                     * 
                     */
                    std::string GetNewGroupName() const;

                    /**
                     * 设置New user group name.
                     * @param _newGroupName New user group name.
                     * 
                     */
                    void SetNewGroupName(const std::string& _newGroupName);

                    /**
                     * 判断参数 NewGroupName 是否已赋值
                     * @return NewGroupName 是否已赋值
                     * 
                     */
                    bool NewGroupNameHasBeenSet() const;

                    /**
                     * 获取New user group description.
                     * @return NewDescription New user group description.
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置New user group description.
                     * @param _newDescription New user group description.
                     * 
                     */
                    void SetNewDescription(const std::string& _newDescription);

                    /**
                     * 判断参数 NewDescription 是否已赋值
                     * @return NewDescription 是否已赋值
                     * 
                     */
                    bool NewDescriptionHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * New user group name.
                     */
                    std::string m_newGroupName;
                    bool m_newGroupNameHasBeenSet;

                    /**
                     * New user group description.
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEGROUPREQUEST_H_
