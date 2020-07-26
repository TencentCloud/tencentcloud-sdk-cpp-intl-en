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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeEcdnDomainLogs request structure.
                */
                class DescribeEcdnDomainLogsRequest : public AbstractModel
                {
                public:
                    DescribeEcdnDomainLogsRequest();
                    ~DescribeEcdnDomainLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name to be queried.
                     * @return Domain Domain name to be queried.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name to be queried.
                     * @param Domain Domain name to be queried.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Log start time, such as 2019-10-01 00:00:00
                     * @return StartTime Log start time, such as 2019-10-01 00:00:00
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log start time, such as 2019-10-01 00:00:00
                     * @param StartTime Log start time, such as 2019-10-01 00:00:00
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Log end time, such as 2019-10-02 00:00:00. Only logs for the last 30 days can be queried.
                     * @return EndTime Log end time, such as 2019-10-02 00:00:00. Only logs for the last 30 days can be queried.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log end time, such as 2019-10-02 00:00:00. Only logs for the last 30 days can be queried.
                     * @param EndTime Log end time, such as 2019-10-02 00:00:00. Only logs for the last 30 days can be queried.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Pagination offset for log link list. Default value: 0.
                     * @return Offset Pagination offset for log link list. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset for log link list. Default value: 0.
                     * @param Offset Pagination offset for log link list. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of log links per page. Default value: 100. Maximum value: 1000.
                     * @return Limit Number of log links per page. Default value: 100. Maximum value: 1000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of log links per page. Default value: 100. Maximum value: 1000.
                     * @param Limit Number of log links per page. Default value: 100. Maximum value: 1000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Domain name to be queried.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Log start time, such as 2019-10-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log end time, such as 2019-10-02 00:00:00. Only logs for the last 30 days can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pagination offset for log link list. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of log links per page. Default value: 100. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSREQUEST_H_
