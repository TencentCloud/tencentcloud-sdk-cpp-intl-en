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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFILESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFILESREQUEST_H_

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
                * ListResourceFiles request structure.
                */
                class ListResourceFilesRequest : public AbstractModel
                {
                public:
                    ListResourceFilesRequest();
                    ~ListResourceFilesRequest() = default;
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

                    /**
                     * 获取Resource file name (fuzzy search keyword).
                     * @return ResourceName Resource file name (fuzzy search keyword).
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource file name (fuzzy search keyword).
                     * @param _resourceName Resource file name (fuzzy search keyword).
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Specifies the path of the file's parent folder (for example /a/b/c, querying resource files under the folder c).
                     * @return ParentFolderPath Specifies the path of the file's parent folder (for example /a/b/c, querying resource files under the folder c).
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Specifies the path of the file's parent folder (for example /a/b/c, querying resource files under the folder c).
                     * @param _parentFolderPath Specifies the path of the file's parent folder (for example /a/b/c, querying resource files under the folder c).
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
                     * 获取Creator ID. obtain through the DescribeCurrentUserInfo API.
                     * @return CreateUserUin Creator ID. obtain through the DescribeCurrentUserInfo API.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID. obtain through the DescribeCurrentUserInfo API.
                     * @param _createUserUin Creator ID. obtain through the DescribeCurrentUserInfo API.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Update time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * @return ModifyTimeStart Update time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    std::string GetModifyTimeStart() const;

                    /**
                     * 设置Update time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * @param _modifyTimeStart Update time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    void SetModifyTimeStart(const std::string& _modifyTimeStart);

                    /**
                     * 判断参数 ModifyTimeStart 是否已赋值
                     * @return ModifyTimeStart 是否已赋值
                     * 
                     */
                    bool ModifyTimeStartHasBeenSet() const;

                    /**
                     * 获取Update time range. specifies the end time in yyyy-MM-dd HH:MM:ss format.
                     * @return ModifyTimeEnd Update time range. specifies the end time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    std::string GetModifyTimeEnd() const;

                    /**
                     * 设置Update time range. specifies the end time in yyyy-MM-dd HH:MM:ss format.
                     * @param _modifyTimeEnd Update time range. specifies the end time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    void SetModifyTimeEnd(const std::string& _modifyTimeEnd);

                    /**
                     * 判断参数 ModifyTimeEnd 是否已赋值
                     * @return ModifyTimeEnd 是否已赋值
                     * 
                     */
                    bool ModifyTimeEndHasBeenSet() const;

                    /**
                     * 获取Create time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * @return CreateTimeStart Create time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    std::string GetCreateTimeStart() const;

                    /**
                     * 设置Create time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * @param _createTimeStart Create time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    void SetCreateTimeStart(const std::string& _createTimeStart);

                    /**
                     * 判断参数 CreateTimeStart 是否已赋值
                     * @return CreateTimeStart 是否已赋值
                     * 
                     */
                    bool CreateTimeStartHasBeenSet() const;

                    /**
                     * 获取Create time range. specifies the termination time in yyyy-MM-dd HH:MM:ss format.
                     * @return CreateTimeEnd Create time range. specifies the termination time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    std::string GetCreateTimeEnd() const;

                    /**
                     * 设置Create time range. specifies the termination time in yyyy-MM-dd HH:MM:ss format.
                     * @param _createTimeEnd Create time range. specifies the termination time in yyyy-MM-dd HH:MM:ss format.
                     * 
                     */
                    void SetCreateTimeEnd(const std::string& _createTimeEnd);

                    /**
                     * 判断参数 CreateTimeEnd 是否已赋值
                     * @return CreateTimeEnd 是否已赋值
                     * 
                     */
                    bool CreateTimeEndHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

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

                    /**
                     * Resource file name (fuzzy search keyword).
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Specifies the path of the file's parent folder (for example /a/b/c, querying resource files under the folder c).
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Creator ID. obtain through the DescribeCurrentUserInfo API.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Update time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     */
                    std::string m_modifyTimeStart;
                    bool m_modifyTimeStartHasBeenSet;

                    /**
                     * Update time range. specifies the end time in yyyy-MM-dd HH:MM:ss format.
                     */
                    std::string m_modifyTimeEnd;
                    bool m_modifyTimeEndHasBeenSet;

                    /**
                     * Create time range. specifies the start time in yyyy-MM-dd HH:MM:ss format.
                     */
                    std::string m_createTimeStart;
                    bool m_createTimeStartHasBeenSet;

                    /**
                     * Create time range. specifies the termination time in yyyy-MM-dd HH:MM:ss format.
                     */
                    std::string m_createTimeEnd;
                    bool m_createTimeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEFILESREQUEST_H_
