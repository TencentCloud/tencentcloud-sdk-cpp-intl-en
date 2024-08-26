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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_JOINEDGROUPS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_JOINEDGROUPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * User group joined by the user.
                */
                class JoinedGroups : public AbstractModel
                {
                public:
                    JoinedGroups();
                    ~JoinedGroups() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User group name.
                     * @return GroupName User group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置User group name.
                     * @param _groupName User group name.
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
                     * 获取User group description.
                     * @return Description User group description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User group description.
                     * @param _description User group description.
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
                     * 获取User group type. Valid values:

Manual: manually created.
Synchronized: externally synchronized.
                     * @return GroupType User group type. Valid values:

Manual: manually created.
Synchronized: externally synchronized.
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置User group type. Valid values:

Manual: manually created.
Synchronized: externally synchronized.
                     * @param _groupType User group type. Valid values:

Manual: manually created.
Synchronized: externally synchronized.
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取Time of joining the user group.
                     * @return JoinTime Time of joining the user group.
                     * 
                     */
                    std::string GetJoinTime() const;

                    /**
                     * 设置Time of joining the user group.
                     * @param _joinTime Time of joining the user group.
                     * 
                     */
                    void SetJoinTime(const std::string& _joinTime);

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     * 
                     */
                    bool JoinTimeHasBeenSet() const;

                private:

                    /**
                     * User group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * User group description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * User group type. Valid values:

Manual: manually created.
Synchronized: externally synchronized.
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Time of joining the user group.
                     */
                    std::string m_joinTime;
                    bool m_joinTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_JOINEDGROUPS_H_
