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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The information of the groups queried.
Used by actions: DescribeGroupList.
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Group ID Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId Group ID Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GroupId Group ID Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The group name. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName The group name. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The group name. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GroupName The group name. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeacherId The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TeacherId The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取The group type. 0: Ordinary group. 1: Merged group. If the group queried is a merged group, the IDs of the sub-groups will be returned. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupType The group type. 0: Ordinary group. 1: Merged group. If the group queried is a merged group, the IDs of the sub-groups will be returned. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetGroupType() const;

                    /**
                     * 设置The group type. 0: Ordinary group. 1: Merged group. If the group queried is a merged group, the IDs of the sub-groups will be returned. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GroupType The group type. 0: Ordinary group. 1: Merged group. If the group queried is a merged group, the IDs of the sub-groups will be returned. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupType(const uint64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取The IDs of the sub-groups. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubGroupIds The IDs of the sub-groups. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubGroupIds() const;

                    /**
                     * 设置The IDs of the sub-groups. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubGroupIds The IDs of the sub-groups. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubGroupIds(const std::string& _subGroupIds);

                    /**
                     * 判断参数 SubGroupIds 是否已赋值
                     * @return SubGroupIds 是否已赋值
                     */
                    bool SubGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Group ID Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The group name. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * The group type. 0: Ordinary group. 1: Merged group. If the group queried is a merged group, the IDs of the sub-groups will be returned. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * The IDs of the sub-groups. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subGroupIds;
                    bool m_subGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPINFO_H_
