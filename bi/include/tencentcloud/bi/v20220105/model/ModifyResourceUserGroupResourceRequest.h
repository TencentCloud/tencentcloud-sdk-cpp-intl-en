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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPRESOURCEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserResourceDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ModifyResourceUserGroupResource request structure.
                */
                class ModifyResourceUserGroupResourceRequest : public AbstractModel
                {
                public:
                    ModifyResourceUserGroupResourceRequest();
                    ~ModifyResourceUserGroupResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取User ID
                     * @return UserGroupId User ID
                     * 
                     */
                    int64_t GetUserGroupId() const;

                    /**
                     * 设置User ID
                     * @param _userGroupId User ID
                     * 
                     */
                    void SetUserGroupId(const int64_t& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取resource
                     * @return Resource resource
                     * 
                     */
                    UserResourceDTO GetResource() const;

                    /**
                     * 设置resource
                     * @param _resource resource
                     * 
                     */
                    void SetResource(const UserResourceDTO& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Entity class
                     * @return EntityIds Entity class
                     * 
                     */
                    std::vector<int64_t> GetEntityIds() const;

                    /**
                     * 设置Entity class
                     * @param _entityIds Entity class
                     * 
                     */
                    void SetEntityIds(const std::vector<int64_t>& _entityIds);

                    /**
                     * 判断参数 EntityIds 是否已赋值
                     * @return EntityIds 是否已赋值
                     * 
                     */
                    bool EntityIdsHasBeenSet() const;

                    /**
                     * 获取Resource type.
                     * @return ResourceType Resource type.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type.
                     * @param _resourceType Resource type.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * User ID
                     */
                    int64_t m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * resource
                     */
                    UserResourceDTO m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Entity class
                     */
                    std::vector<int64_t> m_entityIds;
                    bool m_entityIdsHasBeenSet;

                    /**
                     * Resource type.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYRESOURCEUSERGROUPRESOURCEREQUEST_H_
