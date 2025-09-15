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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERFILTER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * User management list filter
                */
                class UserManagerFilter : public AbstractModel
                {
                public:
                    UserManagerFilter();
                    ~UserManagerFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取User source.
                     * @return UserType User source.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置User source.
                     * @param _userType User source.
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Group name.
                     * @return Groups Group name.
                     * 
                     */
                    std::string GetGroups() const;

                    /**
                     * 设置Group name.
                     * @param _groups Group name.
                     * 
                     */
                    void SetGroups(const std::string& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User source.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Group name.
                     */
                    std::string m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERFILTER_H_
