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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEGROUPREQUEST_H_

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
                * CreateGroup request structure.
                */
                class CreateGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupRequest();
                    ~CreateGroupRequest() = default;
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
                     * 获取User group name, which contains up to 128 characters, including English letters, digits, and special characters (-).
                     * @return GroupName User group name, which contains up to 128 characters, including English letters, digits, and special characters (-).
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置User group name, which contains up to 128 characters, including English letters, digits, and special characters (-).
                     * @param _groupName User group name, which contains up to 128 characters, including English letters, digits, and special characters (-).
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
                     * 获取User group description, which contains up to 1024 characters.
                     * @return Description User group description, which contains up to 1024 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User group description, which contains up to 1024 characters.
                     * @param _description User group description, which contains up to 1024 characters.
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
                     * 获取User group type. Manual: manually created, Synchronized: imported from external sources.
                     * @return GroupType User group type. Manual: manually created, Synchronized: imported from external sources.
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置User group type. Manual: manually created, Synchronized: imported from external sources.
                     * @param _groupType User group type. Manual: manually created, Synchronized: imported from external sources.
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User group name, which contains up to 128 characters, including English letters, digits, and special characters (-).
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * User group description, which contains up to 1024 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User group type. Manual: manually created, Synchronized: imported from external sources.
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEGROUPREQUEST_H_
