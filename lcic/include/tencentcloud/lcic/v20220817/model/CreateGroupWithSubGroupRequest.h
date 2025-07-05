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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHSUBGROUPREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHSUBGROUPREQUEST_H_

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
                * CreateGroupWithSubGroup request structure.
                */
                class CreateGroupWithSubGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupWithSubGroupRequest();
                    ~CreateGroupWithSubGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The group name after merging.
                     * @return GroupName The group name after merging.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The group name after merging.
                     * @param _groupName The group name after merging.
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
                     * 获取The IDs of the groups to merge. Duplicate group IDs are not allowed. Array length limit: 40.
                     * @return SubGroupIds The IDs of the groups to merge. Duplicate group IDs are not allowed. Array length limit: 40.
                     * 
                     */
                    std::vector<std::string> GetSubGroupIds() const;

                    /**
                     * 设置The IDs of the groups to merge. Duplicate group IDs are not allowed. Array length limit: 40.
                     * @param _subGroupIds The IDs of the groups to merge. Duplicate group IDs are not allowed. Array length limit: 40.
                     * 
                     */
                    void SetSubGroupIds(const std::vector<std::string>& _subGroupIds);

                    /**
                     * 判断参数 SubGroupIds 是否已赋值
                     * @return SubGroupIds 是否已赋值
                     * 
                     */
                    bool SubGroupIdsHasBeenSet() const;

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

                private:

                    /**
                     * The group name after merging.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The IDs of the groups to merge. Duplicate group IDs are not allowed. Array length limit: 40.
                     */
                    std::vector<std::string> m_subGroupIds;
                    bool m_subGroupIdsHasBeenSet;

                    /**
                     * The user ID of the teacher.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPWITHSUBGROUPREQUEST_H_
