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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Permission user project information.
                */
                class AuthInfo : public AbstractModel
                {
                public:
                    AuthInfo();
                    ~AuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authorize the target project id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthProjectIds Authorize the target project id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAuthProjectIds() const;

                    /**
                     * 设置Authorize the target project id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authProjectIds Authorize the target project id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthProjectIds(const std::vector<std::string>& _authProjectIds);

                    /**
                     * 判断参数 AuthProjectIds 是否已赋值
                     * @return AuthProjectIds 是否已赋值
                     * 
                     */
                    bool AuthProjectIdsHasBeenSet() const;

                    /**
                     * 获取List of users under the authorized project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthUsers List of users under the authorized project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAuthUsers() const;

                    /**
                     * 设置List of users under the authorized project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authUsers List of users under the authorized project.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthUsers(const std::vector<std::string>& _authUsers);

                    /**
                     * 判断参数 AuthUsers 是否已赋值
                     * @return AuthUsers 是否已赋值
                     * 
                     */
                    bool AuthUsersHasBeenSet() const;

                private:

                    /**
                     * Authorize the target project id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_authProjectIds;
                    bool m_authProjectIdsHasBeenSet;

                    /**
                     * List of users under the authorized project.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_authUsers;
                    bool m_authUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHINFO_H_
