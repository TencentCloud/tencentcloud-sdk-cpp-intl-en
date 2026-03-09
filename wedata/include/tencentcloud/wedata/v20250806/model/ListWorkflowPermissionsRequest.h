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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListWorkflowPermissions request structure.
                */
                class ListWorkflowPermissionsRequest : public AbstractModel
                {
                public:
                    ListWorkflowPermissionsRequest();
                    ~ListWorkflowPermissionsRequest() = default;
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
                     * 获取Authorize entity ID.
                     * @return EntityId Authorize entity ID.
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置Authorize entity ID.
                     * @param _entityId Authorize entity ID.
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取Authorized entity type, folder/workflow.
                     * @return EntityType Authorized entity type, folder/workflow.
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置Authorized entity type, folder/workflow.
                     * @param _entityType Authorized entity type, folder/workflow.
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取The page number of the requested data. the default value is 1. the value must be equal to or greater than 1.
                     * @return PageNumber The page number of the requested data. the default value is 1. the value must be equal to or greater than 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置The page number of the requested data. the default value is 1. the value must be equal to or greater than 1.
                     * @param _pageNumber The page number of the requested data. the default value is 1. the value must be equal to or greater than 1.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of data records displayed per page. default value is 10. minimum value is 10. maximum value is 200.
                     * @return PageSize Number of data records displayed per page. default value is 10. minimum value is 10. maximum value is 200.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of data records displayed per page. default value is 10. minimum value is 10. maximum value is 200.
                     * @param _pageSize Number of data records displayed per page. default value is 10. minimum value is 10. maximum value is 200.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Authorize entity ID.
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * Authorized entity type, folder/workflow.
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * The page number of the requested data. the default value is 1. the value must be equal to or greater than 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of data records displayed per page. default value is 10. minimum value is 10. maximum value is 200.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWPERMISSIONSREQUEST_H_
