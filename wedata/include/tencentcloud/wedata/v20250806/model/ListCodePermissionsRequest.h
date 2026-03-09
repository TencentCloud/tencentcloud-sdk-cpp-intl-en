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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListCodePermissions request structure.
                */
                class ListCodePermissionsRequest : public AbstractModel
                {
                public:
                    ListCodePermissionsRequest();
                    ~ListCodePermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Page number, which is 1 by default.
                     * @return PageNumber Page number, which is 1 by default.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number, which is 1 by default.
                     * @param _pageNumber Page number, which is 1 by default.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of returned results. the default is 20, and the maximum value is 100. requirements: 500, 1000 or more.
                     * @return PageSize Number of returned results. the default is 20, and the maximum value is 100. requirements: 500, 1000 or more.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of returned results. the default is 20, and the maximum value is 100. requirements: 500, 1000 or more.
                     * @param _pageSize Number of returned results. the default is 20, and the maximum value is 100. requirements: 500, 1000 or more.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Authorized resources.
                     * @return Resource Authorized resources.
                     * 
                     */
                    ExploreFileResource GetResource() const;

                    /**
                     * 设置Authorized resources.
                     * @param _resource Authorized resources.
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
                     * 获取User filtering criteria.
                     * @return Users User filtering criteria.
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置User filtering criteria.
                     * @param _users User filtering criteria.
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
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page number, which is 1 by default.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of returned results. the default is 20, and the maximum value is 100. requirements: 500, 1000 or more.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Authorized resources.
                     */
                    ExploreFileResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * User filtering criteria.
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEPERMISSIONSREQUEST_H_
