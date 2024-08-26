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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GROUPINFO_H_

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
                * User group information.
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
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
                     * 获取Creation time of the user group.
                     * @return CreateTime Creation time of the user group.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the user group.
                     * @param _createTime Creation time of the user group.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取User group type. Manual: manually created; Synchronized: externally imported.
                     * @return GroupType User group type. Manual: manually created; Synchronized: externally imported.
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置User group type. Manual: manually created; Synchronized: externally imported.
                     * @param _groupType User group type. Manual: manually created; Synchronized: externally imported.
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
                     * 获取Modification time of the user group.
                     * @return UpdateTime Modification time of the user group.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time of the user group.
                     * @param _updateTime Modification time of the user group.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取Number of group members.
                     * @return MemberCount Number of group members.
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Number of group members.
                     * @param _memberCount Number of group members.
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取If the input parameter FilterUsers is provided, return true when the user is in the user group; otherwise, return false.
                     * @return IsSelected If the input parameter FilterUsers is provided, return true when the user is in the user group; otherwise, return false.
                     * 
                     */
                    bool GetIsSelected() const;

                    /**
                     * 设置If the input parameter FilterUsers is provided, return true when the user is in the user group; otherwise, return false.
                     * @param _isSelected If the input parameter FilterUsers is provided, return true when the user is in the user group; otherwise, return false.
                     * 
                     */
                    void SetIsSelected(const bool& _isSelected);

                    /**
                     * 判断参数 IsSelected 是否已赋值
                     * @return IsSelected 是否已赋值
                     * 
                     */
                    bool IsSelectedHasBeenSet() const;

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
                     * Creation time of the user group.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * User group type. Manual: manually created; Synchronized: externally imported.
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Modification time of the user group.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * User group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Number of group members.
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * If the input parameter FilterUsers is provided, return true when the user is in the user group; otherwise, return false.
                     */
                    bool m_isSelected;
                    bool m_isSelectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GROUPINFO_H_
