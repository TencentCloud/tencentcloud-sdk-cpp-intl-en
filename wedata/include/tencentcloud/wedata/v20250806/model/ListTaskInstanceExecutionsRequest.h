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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCEEXECUTIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCEEXECUTIONSREQUEST_H_

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
                * ListTaskInstanceExecutions request structure.
                */
                class ListTaskInstanceExecutionsRequest : public AbstractModel
                {
                public:
                    ListTaskInstanceExecutionsRequest();
                    ~ListTaskInstanceExecutionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id.
                     * @return ProjectId Project id.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id.
                     * @param _projectId Project id.
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
                     * 获取Instance unique id, can be obtained through ListInstances.
                     * @return InstanceKey Instance unique id, can be obtained through ListInstances.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Instance unique id, can be obtained through ListInstances.
                     * @param _instanceKey Instance unique id, can be obtained through ListInstances.
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
                     * 获取**Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     * @return TimeZone **Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置**Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     * @param _timeZone **Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
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
                     * 获取Size per page. default: 10. maximum: 200.
                     * @return PageSize Size per page. default: 10. maximum: 200.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Size per page. default: 10. maximum: 200.
                     * @param _pageSize Size per page. default: 10. maximum: 200.
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
                     * 获取Page number, which is 1 by default.
                     * @return PageNumber Page number, which is 1 by default.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, which is 1 by default.
                     * @param _pageNumber Page number, which is 1 by default.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * Project id.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance unique id, can be obtained through ListInstances.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **Time zone** timeZone, specifies the time zone of the passed in time string. default UTC+8.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Size per page. default: 10. maximum: 200.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number, which is 1 by default.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCEEXECUTIONSREQUEST_H_
