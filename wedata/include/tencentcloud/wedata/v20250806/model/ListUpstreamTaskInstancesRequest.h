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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTUPSTREAMTASKINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTUPSTREAMTASKINSTANCESREQUEST_H_

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
                * ListUpstreamTaskInstances request structure.
                */
                class ListUpstreamTaskInstancesRequest : public AbstractModel
                {
                public:
                    ListUpstreamTaskInstancesRequest();
                    ~ListUpstreamTaskInstancesRequest() = default;
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
                     * 获取**Instance unique id**.
                     * @return InstanceKey **Instance unique id**.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置**Instance unique id**.
                     * @param _instanceKey **Instance unique id**.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取**Time zone** timeZone, default UTC+8.
                     * @return TimeZone **Time zone** timeZone, default UTC+8.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置**Time zone** timeZone, default UTC+8.
                     * @param _timeZone **Time zone** timeZone, default UTC+8.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取**Page number, int** used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     * @return PageNumber **Page number, int** used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置**Page number, int** used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     * @param _pageNumber **Page number, int** used in conjunction with pageSize and cannot be less than 1. default value: 1.
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
                     * 获取Specifies the number of items to display per page. default: 10. value range: 1-100.
                     * @return PageSize Specifies the number of items to display per page. default: 10. value range: 1-100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of items to display per page. default: 10. value range: 1-100.
                     * @param _pageSize Specifies the number of items to display per page. default: 10. value range: 1-100.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

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
                     * **Instance unique id**.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **Time zone** timeZone, default UTC+8.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * **Page number, int** used in conjunction with pageSize and cannot be less than 1. default value: 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of items to display per page. default: 10. value range: 1-100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTUPSTREAMTASKINSTANCESREQUEST_H_
