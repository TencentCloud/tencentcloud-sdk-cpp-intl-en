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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONSREQUEST_H_

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
                * ListTaskVersions request structure.
                */
                class ListTaskVersionsRequest : public AbstractModel
                {
                public:
                    ListTaskVersionsRequest();
                    ~ListTaskVersionsRequest() = default;
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
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取SAVE version.
SUBMIT version.
Defaults to SAVE.
                     * @return TaskVersionType SAVE version.
SUBMIT version.
Defaults to SAVE.
                     * 
                     */
                    std::string GetTaskVersionType() const;

                    /**
                     * 设置SAVE version.
SUBMIT version.
Defaults to SAVE.
                     * @param _taskVersionType SAVE version.
SUBMIT version.
Defaults to SAVE.
                     * 
                     */
                    void SetTaskVersionType(const std::string& _taskVersionType);

                    /**
                     * 判断参数 TaskVersionType 是否已赋值
                     * @return TaskVersionType 是否已赋值
                     * 
                     */
                    bool TaskVersionTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     * @return PageNumber Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     * @param _pageNumber Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
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
                     * 获取Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     * @return PageSize Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     * @param _pageSize Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
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
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * SAVE version.
SUBMIT version.
Defaults to SAVE.
                     */
                    std::string m_taskVersionType;
                    bool m_taskVersionTypeHasBeenSet;

                    /**
                     * Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKVERSIONSREQUEST_H_
