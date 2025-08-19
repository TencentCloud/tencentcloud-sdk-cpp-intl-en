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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * User group
                */
                class UserGroupDTO : public AbstractModel
                {
                public:
                    UserGroupDTO();
                    ~UserGroupDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取User group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName User group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置User group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupName User group name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Parent node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentId Parent node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置Parent node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentId Parent node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Whether it is default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDefault Whether it is default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether it is default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDefault Whether it is default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Administrator user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdminUserId Administrator user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置Administrator user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adminUserId Administrator user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置Location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * User group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Parent node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Whether it is default.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Administrator user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Location.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPDTO_H_
