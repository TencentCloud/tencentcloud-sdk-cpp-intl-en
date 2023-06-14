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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHMEMBERSREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateGroupWithMembers request structure.
                */
                class CreateGroupWithMembersRequest : public AbstractModel
                {
                public:
                    CreateGroupWithMembersRequest();
                    ~CreateGroupWithMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The group name.
                     * @return GroupName The group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The group name.
                     * @param _groupName The group name.
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
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param _sdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The user ID of the teacher.
                     * @return TeacherId The user ID of the teacher.
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher.
                     * @param _teacherId The user ID of the teacher.
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取The group members. Array length limit: 200.
                     * @return MemberIds The group members. Array length limit: 200.
                     * 
                     */
                    std::vector<std::string> GetMemberIds() const;

                    /**
                     * 设置The group members. Array length limit: 200.
                     * @param _memberIds The group members. Array length limit: 200.
                     * 
                     */
                    void SetMemberIds(const std::vector<std::string>& _memberIds);

                    /**
                     * 判断参数 MemberIds 是否已赋值
                     * @return MemberIds 是否已赋值
                     * 
                     */
                    bool MemberIdsHasBeenSet() const;

                private:

                    /**
                     * The group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The user ID of the teacher.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * The group members. Array length limit: 200.
                     */
                    std::vector<std::string> m_memberIds;
                    bool m_memberIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHMEMBERSREQUEST_H_
