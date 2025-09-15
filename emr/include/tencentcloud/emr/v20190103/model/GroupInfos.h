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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFOS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFOS_H_

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
                class GroupInfos : public AbstractModel
                {
                public:
                    GroupInfos();
                    ~GroupInfos() = default;
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
                     * 获取User name list.
                     * @return Users User name list.
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置User name list.
                     * @param _users User name list.
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取User group type.
                     * @return GroupType User group type.
                     * 
                     */
                    int64_t GetGroupType() const;

                    /**
                     * 设置User group type.
                     * @param _groupType User group type.
                     * 
                     */
                    void SetGroupType(const int64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取User group type description.
                     * @return GroupTypeDesc User group type description.
                     * 
                     */
                    std::string GetGroupTypeDesc() const;

                    /**
                     * 设置User group type description.
                     * @param _groupTypeDesc User group type description.
                     * 
                     */
                    void SetGroupTypeDesc(const std::string& _groupTypeDesc);

                    /**
                     * 判断参数 GroupTypeDesc 是否已赋值
                     * @return GroupTypeDesc 是否已赋值
                     * 
                     */
                    bool GroupTypeDescHasBeenSet() const;

                private:

                    /**
                     * User group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * User name list.
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * User group type.
                     */
                    int64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * User group type description.
                     */
                    std::string m_groupTypeDesc;
                    bool m_groupTypeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GROUPINFOS_H_
