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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFORMATION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * Returned user group list.
                */
                class UserGroupInformation : public AbstractModel
                {
                public:
                    UserGroupInformation();
                    ~UserGroupInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User group ID.
                     * @return UserGroupId User group ID.
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置User group ID.
                     * @param UserGroupId User group ID.
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取User group name.
                     * @return UserGroupName User group name.
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置User group name.
                     * @param UserGroupName User group name.
                     */
                    void SetUserGroupName(const std::string& _userGroupName);

                    /**
                     * 判断参数 UserGroupName 是否已赋值
                     * @return UserGroupName 是否已赋值
                     */
                    bool UserGroupNameHasBeenSet() const;

                    /**
                     * 获取Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifiedDate Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastModifiedDate Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     */
                    bool LastModifiedDateHasBeenSet() const;

                private:

                    /**
                     * User group ID.
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * User group name.
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                    /**
                     * Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFORMATION_H_
