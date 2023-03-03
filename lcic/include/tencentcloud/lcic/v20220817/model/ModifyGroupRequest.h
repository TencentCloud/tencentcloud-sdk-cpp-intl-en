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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYGROUPREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYGROUPREQUEST_H_

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
                * ModifyGroup request structure.
                */
                class ModifyGroupRequest : public AbstractModel
                {
                public:
                    ModifyGroupRequest();
                    ~ModifyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the group to modify.
                     * @return GroupId The ID of the group to modify.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置The ID of the group to modify.
                     * @param GroupId The ID of the group to modify.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param SdkAppId The SDKAppID assigned by LCIC.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The user ID of the teacher.
                     * @return TeacherId The user ID of the teacher.
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher.
                     * @param TeacherId The user ID of the teacher.
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取The new group name.
                     * @return GroupName The new group name.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The new group name.
                     * @param GroupName The new group name.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * The ID of the group to modify.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

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
                     * The new group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYGROUPREQUEST_H_
