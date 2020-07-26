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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeReportData request structure.
                */
                class DescribeReportDataRequest : public AbstractModel
                {
                public:
                    DescribeReportDataRequest();
                    ~DescribeReportDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time in the format of `yyyy-MM-dd`
                     * @return StartTime Query start time in the format of `yyyy-MM-dd`
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time in the format of `yyyy-MM-dd`
                     * @param StartTime Query start time in the format of `yyyy-MM-dd`
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time in the format of `yyyy-MM-dd`
                     * @return EndTime Query end time in the format of `yyyy-MM-dd`
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time in the format of `yyyy-MM-dd`
                     * @param EndTime Query end time in the format of `yyyy-MM-dd`
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Report type
daily: daily report
weekly: weekly report (Monday to Sunday)
monthly: monthly report (calendar month)
                     * @return ReportType Report type
daily: daily report
weekly: weekly report (Monday to Sunday)
monthly: monthly report (calendar month)
                     */
                    std::string GetReportType() const;

                    /**
                     * 设置Report type
daily: daily report
weekly: weekly report (Monday to Sunday)
monthly: monthly report (calendar month)
                     * @param ReportType Report type
daily: daily report
weekly: weekly report (Monday to Sunday)
monthly: monthly report (calendar month)
                     */
                    void SetReportType(const std::string& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取Domain name acceleration region
mainland: in Mainland China
overseas: outside Mainland China
                     * @return Area Domain name acceleration region
mainland: in Mainland China
overseas: outside Mainland China
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Domain name acceleration region
mainland: in Mainland China
overseas: outside Mainland China
                     * @param Area Domain name acceleration region
mainland: in Mainland China
overseas: outside Mainland China
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of data entries. Default value: 1000.
                     * @return Limit Number of data entries. Default value: 1000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of data entries. Default value: 1000.
                     * @param Limit Number of data entries. Default value: 1000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filters by project ID
                     * @return Project Filters by project ID
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置Filters by project ID
                     * @param Project Filters by project ID
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     */
                    bool ProjectHasBeenSet() const;

                private:

                    /**
                     * Query start time in the format of `yyyy-MM-dd`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in the format of `yyyy-MM-dd`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Report type
daily: daily report
weekly: weekly report (Monday to Sunday)
monthly: monthly report (calendar month)
                     */
                    std::string m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * Domain name acceleration region
mainland: in Mainland China
overseas: outside Mainland China
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of data entries. Default value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filters by project ID
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATAREQUEST_H_
