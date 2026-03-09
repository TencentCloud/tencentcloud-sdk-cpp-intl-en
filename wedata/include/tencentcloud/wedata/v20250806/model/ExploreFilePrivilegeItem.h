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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILEPRIVILEGEITEM_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILEPRIVILEGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExploreFileResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Explore file permission details.
                */
                class ExploreFilePrivilegeItem : public AbstractModel
                {
                public:
                    ExploreFilePrivilegeItem();
                    ~ExploreFilePrivilegeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Privileges Permission point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置Permission point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privileges Permission point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取User: user role: role group: group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleType User: user role: role group: group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置User: user role: role group: group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleType User: user role: role group: group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取User or role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleId User or role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置User or role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleId User or role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Authorized resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resource Authorized resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExploreFileResource GetResource() const;

                    /**
                     * 设置Authorized resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resource Authorized resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResource(const ExploreFileResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Whether can be deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeleteAble Whether can be deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDeleteAble() const;

                    /**
                     * 设置Whether can be deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deleteAble Whether can be deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeleteAble(const bool& _deleteAble);

                    /**
                     * 判断参数 DeleteAble 是否已赋值
                     * @return DeleteAble 是否已赋值
                     * 
                     */
                    bool DeleteAbleHasBeenSet() const;

                private:

                    /**
                     * Permission point.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * User: user role: role group: group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * User or role ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Authorized resources.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExploreFileResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Whether can be deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_deleteAble;
                    bool m_deleteAbleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILEPRIVILEGEITEM_H_
