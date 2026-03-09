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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTSREQUEST_H_

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
                * ListProjects request structure.
                */
                class ListProjectsRequest : public AbstractModel
                {
                public:
                    ListProjectsRequest();
                    ~ListProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID List
                     * @return ProjectIds Project ID List
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置Project ID List
                     * @param _projectIds Project ID List
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Project name or unique id, supports fuzzy search.
                     * @return ProjectName Project name or unique id, supports fuzzy search.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name or unique id, supports fuzzy search.
                     * @param _projectName Project name or unique id, supports fuzzy search.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Project status, available values: 0 (disabled), 1 (normal).
                     * @return Status Project status, available values: 0 (disabled), 1 (normal).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Project status, available values: 0 (disabled), 1 (normal).
                     * @param _status Project status, available values: 0 (disabled), 1 (normal).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Project mode. available values: SIMPLE, STANDARD.
                     * @return ProjectModel Project mode. available values: SIMPLE, STANDARD.
                     * 
                     */
                    std::string GetProjectModel() const;

                    /**
                     * 设置Project mode. available values: SIMPLE, STANDARD.
                     * @param _projectModel Project mode. available values: SIMPLE, STANDARD.
                     * 
                     */
                    void SetProjectModel(const std::string& _projectModel);

                    /**
                     * 判断参数 ProjectModel 是否已赋值
                     * @return ProjectModel 是否已赋值
                     * 
                     */
                    bool ProjectModelHasBeenSet() const;

                    /**
                     * 获取Number of requested data pages for pagination.
                     * @return PageNumber Number of requested data pages for pagination.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Number of requested data pages for pagination.
                     * @param _pageNumber Number of requested data pages for pagination.
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
                     * 获取Number of items per page. default value is `10`.
                     * @return PageSize Number of items per page. default value is `10`.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. default value is `10`.
                     * @param _pageSize Number of items per page. default value is `10`.
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
                     * Project ID List
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Project name or unique id, supports fuzzy search.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Project status, available values: 0 (disabled), 1 (normal).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project mode. available values: SIMPLE, STANDARD.
                     */
                    std::string m_projectModel;
                    bool m_projectModelHasBeenSet;

                    /**
                     * Number of requested data pages for pagination.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page. default value is `10`.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTSREQUEST_H_
