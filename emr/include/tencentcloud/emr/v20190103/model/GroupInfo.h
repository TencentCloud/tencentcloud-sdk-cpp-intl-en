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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFO_H_

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
                     * 获取Group name.
                     * @return GroupName Group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name.
                     * @param _groupName Group name.
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
                     * 获取Remarks.
                     * @return Description Remarks.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks.
                     * @param _description Remarks.
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
                     * 获取User list.
                     * @return Users User list.
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置User list.
                     * @param _users User list.
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * Group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User list.
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFO_H_
