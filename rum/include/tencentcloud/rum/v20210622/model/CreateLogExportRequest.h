/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
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
                     * 获取Project ID
                     * @return ID Project ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID
                     * @param _iD Project ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Log export start time
                     * @return StartTime Log export start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log export start time
                     * @param _startTime Log export start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Log export end time
                     * @return EndTime Log export end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log export end time
                     * @param _endTime Log export end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Log export search statement
                     * @return Query Log export search statement
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Log export search statement
                     * @param _query Log export search statement
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Number of logs to be exported. Maximum value: 10 million
                     * @return Count Number of logs to be exported. Maximum value: 10 million
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of logs to be exported. Maximum value: 10 million
                     * @param _count Number of logs to be exported. Maximum value: 10 million
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Exported log sorting order by time. Valid values: asc: ascending; desc: descending. Default value: desc
                     * @return Order Exported log sorting order by time. Valid values: asc: ascending; desc: descending. Default value: desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Exported log sorting order by time. Valid values: asc: ascending; desc: descending. Default value: desc
                     * @param _order Exported log sorting order by time. Valid values: asc: ascending; desc: descending. Default value: desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Exported log data format. Valid values: json, csv. Default value: json
                     * @return Format Exported log data format. Valid values: json, csv. Default value: json
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Exported log data format. Valid values: json, csv. Default value: json
                     * @param _format Exported log data format. Valid values: json, csv. Default value: json
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
                     * Project ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Log export start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log export end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Log export search statement
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Number of logs to be exported. Maximum value: 10 million
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Exported log sorting order by time. Valid values: asc: ascending; desc: descending. Default value: desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Exported log data format. Valid values: json, csv. Default value: json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTREQUEST_H_
