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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEREQUEST_H_

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
                * ListProcessLineage request structure.
                */
                class ListProcessLineageRequest : public AbstractModel
                {
                public:
                    ListProcessLineageRequest();
                    ~ListProcessLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique task ID.
                     * @return ProcessId Unique task ID.
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置Unique task ID.
                     * @param _processId Unique task ID.
                     * 
                     */
                    void SetProcessId(const std::string& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取TASK type //scheduling tasks SCHEDULE_TASK, //INTEGRATION tasks INTEGRATION_TASK, //THIRD-party reporting THIRD_REPORT, //DATA modeling TABLE_MODEL, //MODEL create metrics MODEL_METRIC, //atomic metrics create derived metrics METRIC_METRIC, //DATA SERVICE DATA_SERVICE.
                     * @return ProcessType TASK type //scheduling tasks SCHEDULE_TASK, //INTEGRATION tasks INTEGRATION_TASK, //THIRD-party reporting THIRD_REPORT, //DATA modeling TABLE_MODEL, //MODEL create metrics MODEL_METRIC, //atomic metrics create derived metrics METRIC_METRIC, //DATA SERVICE DATA_SERVICE.
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置TASK type //scheduling tasks SCHEDULE_TASK, //INTEGRATION tasks INTEGRATION_TASK, //THIRD-party reporting THIRD_REPORT, //DATA modeling TABLE_MODEL, //MODEL create metrics MODEL_METRIC, //atomic metrics create derived metrics METRIC_METRIC, //DATA SERVICE DATA_SERVICE.
                     * @param _processType TASK type //scheduling tasks SCHEDULE_TASK, //INTEGRATION tasks INTEGRATION_TASK, //THIRD-party reporting THIRD_REPORT, //DATA modeling TABLE_MODEL, //MODEL create metrics MODEL_METRIC, //atomic metrics create derived metrics METRIC_METRIC, //DATA SERVICE DATA_SERVICE.
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
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
                     * 获取Pagination size.
                     * @return PageSize Pagination size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination size.
                     * @param _pageSize Pagination size.
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
                     * 获取Source: WEDATA|THIRD default WEDATA.
                     * @return Platform Source: WEDATA|THIRD default WEDATA.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Source: WEDATA|THIRD default WEDATA.
                     * @param _platform Source: WEDATA|THIRD default WEDATA.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * Unique task ID.
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * TASK type //scheduling tasks SCHEDULE_TASK, //INTEGRATION tasks INTEGRATION_TASK, //THIRD-party reporting THIRD_REPORT, //DATA modeling TABLE_MODEL, //MODEL create metrics MODEL_METRIC, //atomic metrics create derived metrics METRIC_METRIC, //DATA SERVICE DATA_SERVICE.
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Source: WEDATA|THIRD default WEDATA.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEREQUEST_H_
