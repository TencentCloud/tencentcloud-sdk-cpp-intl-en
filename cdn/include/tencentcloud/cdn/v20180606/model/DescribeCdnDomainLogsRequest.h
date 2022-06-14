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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_

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
                * DescribeCdnDomainLogs request structure.
                */
                class DescribeCdnDomainLogsRequest : public AbstractModel
                {
                public:
                    DescribeCdnDomainLogsRequest();
                    ~DescribeCdnDomainLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies a domain name for the query
                     * @return Domain Specifies a domain name for the query
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Specifies a domain name for the query
                     * @param Domain Specifies a domain name for the query
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Starting time, such as `2019-09-04 00:00:00`
                     * @return StartTime Starting time, such as `2019-09-04 00:00:00`
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Starting time, such as `2019-09-04 00:00:00`
                     * @param StartTime Starting time, such as `2019-09-04 00:00:00`
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, such as `2019-09-04 12:00:00`
                     * @return EndTime End time, such as `2019-09-04 12:00:00`
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, such as `2019-09-04 12:00:00`
                     * @param EndTime End time, such as `2019-09-04 12:00:00`
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Offset for paginated queries. Default value: 0
                     * @return Offset Offset for paginated queries. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: 0
                     * @param Offset Offset for paginated queries. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit on paged queries. Default value: 100. Maximum value: 1,000
                     * @return Limit Limit on paged queries. Default value: 100. Maximum value: 1,000
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paged queries. Default value: 100. Maximum value: 1,000
                     * @param Limit Limit on paged queries. Default value: 100. Maximum value: 1,000
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specifies a region for the query.
`mainland`: specifies to return the download link of logs on acceleration within Mainland China;
`overseas`: specifies to return the download link of logs on acceleration outside Mainland China;
`global`: specifies to return a download link of logs on acceleration within Mainland China and a link of logs on acceleration outside Mainland China.
Default value: `mainland`.
                     * @return Area Specifies a region for the query.
`mainland`: specifies to return the download link of logs on acceleration within Mainland China;
`overseas`: specifies to return the download link of logs on acceleration outside Mainland China;
`global`: specifies to return a download link of logs on acceleration within Mainland China and a link of logs on acceleration outside Mainland China.
Default value: `mainland`.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies a region for the query.
`mainland`: specifies to return the download link of logs on acceleration within Mainland China;
`overseas`: specifies to return the download link of logs on acceleration outside Mainland China;
`global`: specifies to return a download link of logs on acceleration within Mainland China and a link of logs on acceleration outside Mainland China.
Default value: `mainland`.
                     * @param Area Specifies a region for the query.
`mainland`: specifies to return the download link of logs on acceleration within Mainland China;
`overseas`: specifies to return the download link of logs on acceleration outside Mainland China;
`global`: specifies to return a download link of logs on acceleration within Mainland China and a link of logs on acceleration outside Mainland China.
Default value: `mainland`.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取The type of log to be downloaded.
access: access logs
                     * @return LogType The type of log to be downloaded.
access: access logs
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置The type of log to be downloaded.
access: access logs
                     * @param LogType The type of log to be downloaded.
access: access logs
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * Specifies a domain name for the query
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Starting time, such as `2019-09-04 00:00:00`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, such as `2019-09-04 12:00:00`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Offset for paginated queries. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on paged queries. Default value: 100. Maximum value: 1,000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies a region for the query.
`mainland`: specifies to return the download link of logs on acceleration within Mainland China;
`overseas`: specifies to return the download link of logs on acceleration outside Mainland China;
`global`: specifies to return a download link of logs on acceleration within Mainland China and a link of logs on acceleration outside Mainland China.
Default value: `mainland`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The type of log to be downloaded.
access: access logs
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_
