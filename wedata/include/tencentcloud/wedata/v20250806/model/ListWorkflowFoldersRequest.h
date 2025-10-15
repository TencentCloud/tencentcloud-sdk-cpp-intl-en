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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWFOLDERSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWFOLDERSREQUEST_H_

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
                * ListWorkflowFolders request structure.
                */
                class ListWorkflowFoldersRequest : public AbstractModel
                {
                public:
                    ListWorkflowFoldersRequest();
                    ~ListWorkflowFoldersRequest() = default;
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
                     * 获取Parent folder absolute path, for example /abc/de, if it is root directory, pass /.
                     * @return ParentFolderPath Parent folder absolute path, for example /abc/de, if it is root directory, pass /.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Parent folder absolute path, for example /abc/de, if it is root directory, pass /.
                     * @param _parentFolderPath Parent folder absolute path, for example /abc/de, if it is root directory, pass /.
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取Data page number, equal to or greater than 1. default 1.
                     * @return PageNumber Data page number, equal to or greater than 1. default 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Data page number, equal to or greater than 1. default 1.
                     * @param _pageNumber Data page number, equal to or greater than 1. default 1.
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
                     * 获取Specifies the number of data records displayed per page. valid values: 10 to 200. default: 10.
                     * @return PageSize Specifies the number of data records displayed per page. valid values: 10 to 200. default: 10.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of data records displayed per page. valid values: 10 to 200. default: 10.
                     * @param _pageSize Specifies the number of data records displayed per page. valid values: 10 to 200. default: 10.
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
                     * Parent folder absolute path, for example /abc/de, if it is root directory, pass /.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Data page number, equal to or greater than 1. default 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of data records displayed per page. valid values: 10 to 200. default: 10.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWFOLDERSREQUEST_H_
