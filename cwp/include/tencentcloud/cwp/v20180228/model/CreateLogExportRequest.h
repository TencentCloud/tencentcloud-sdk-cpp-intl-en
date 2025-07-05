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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATELOGEXPORTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATELOGEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateLogExport request structure.
                */
                class CreateLogExportRequest : public AbstractModel
                {
                public:
                    CreateLogExportRequest();
                    ~CreateLogExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of logs exported. The maximum value is 50 million.
                     * @return Count Number of logs exported. The maximum value is 50 million.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of logs exported. The maximum value is 50 million.
                     * @param _count Number of logs exported. The maximum value is 50 million.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Start time of log export, with a timestamp in milliseconds
                     * @return StartTime Start time of log export, with a timestamp in milliseconds
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time of log export, with a timestamp in milliseconds
                     * @param _startTime Start time of log export, with a timestamp in milliseconds
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of log export, with a timestamp in milliseconds
                     * @return EndTime End time of log export, with a timestamp in milliseconds
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of log export, with a timestamp in milliseconds
                     * @param _endTime End time of log export, with a timestamp in milliseconds
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Retrieval statements for log export, and [SQL statements] are not supported
                     * @return QueryString Retrieval statements for log export, and [SQL statements] are not supported
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置Retrieval statements for log export, and [SQL statements] are not supported
                     * @param _queryString Retrieval statements for log export, and [SQL statements] are not supported
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Sorting for log export time. Valid values are asc and desc, and the default value is desc.
                     * @return Sort Sorting for log export time. Valid values are asc and desc, and the default value is desc.
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting for log export time. Valid values are asc and desc, and the default value is desc.
                     * @param _sort Sorting for log export time. Valid values are asc and desc, and the default value is desc.
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Data format for exported log. Valid values are json an csv, the default value is json.
                     * @return Format Data format for exported log. Valid values are json an csv, the default value is json.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Data format for exported log. Valid values are json an csv, the default value is json.
                     * @param _format Data format for exported log. Valid values are json an csv, the default value is json.
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * Number of logs exported. The maximum value is 50 million.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Start time of log export, with a timestamp in milliseconds
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of log export, with a timestamp in milliseconds
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Retrieval statements for log export, and [SQL statements] are not supported
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Sorting for log export time. Valid values are asc and desc, and the default value is desc.
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Data format for exported log. Valid values are json an csv, the default value is json.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATELOGEXPORTREQUEST_H_
