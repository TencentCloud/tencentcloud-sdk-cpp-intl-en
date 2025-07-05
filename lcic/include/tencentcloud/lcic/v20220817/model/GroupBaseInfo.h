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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPBASEINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPBASEINFO_H_

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
                * The information of the groups to create.
Used by actions: BatchCreateGroupWithMembers.
                */
                class GroupBaseInfo : public AbstractModel
                {
                public:
                    GroupBaseInfo();
                    ~GroupBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The group names. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName The group names. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The group names. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupName The group names. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeacherId The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teacherId The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The group names. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * The user ID of the teacher. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPBASEINFO_H_
