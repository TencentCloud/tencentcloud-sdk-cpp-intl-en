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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeLogContext request structure.
                */
                class DescribeLogContextRequest : public AbstractModel
                {
                public:
                    DescribeLogContextRequest();
                    ~DescribeLogContextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic Id to query.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @return TopicId Log topic Id to query.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic Id to query.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @param _topicId Log topic Id to query.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Log time, which is the Time in the Results structure in the returned information of the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api, should be converted from the millisecond-level Unix timestamp to a string in the YYYY-mm-dd HH:MM:SS.FFF format according to the UTC+8 time zone.
                     * @return BTime Log time, which is the Time in the Results structure in the returned information of the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api, should be converted from the millisecond-level Unix timestamp to a string in the YYYY-mm-dd HH:MM:SS.FFF format according to the UTC+8 time zone.
                     * 
                     */
                    std::string GetBTime() const;

                    /**
                     * 设置Log time, which is the Time in the Results structure in the returned information of the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api, should be converted from the millisecond-level Unix timestamp to a string in the YYYY-mm-dd HH:MM:SS.FFF format according to the UTC+8 time zone.
                     * @param _bTime Log time, which is the Time in the Results structure in the returned information of the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api, should be converted from the millisecond-level Unix timestamp to a string in the YYYY-mm-dd HH:MM:SS.FFF format according to the UTC+8 time zone.
                     * 
                     */
                    void SetBTime(const std::string& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     * 
                     */
                    bool BTimeHasBeenSet() const;

                    /**
                     * 获取Log package sequence number, which is the PkgId in the Results structure returned by the retrieve and analyze logs api (https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1).
                     * @return PkgId Log package sequence number, which is the PkgId in the Results structure returned by the retrieve and analyze logs api (https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1).
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log package sequence number, which is the PkgId in the Results structure returned by the retrieve and analyze logs api (https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1).
                     * @param _pkgId Log package sequence number, which is the PkgId in the Results structure returned by the retrieve and analyze logs api (https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1).
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取Sequence number of a log within the log package, which is the PkgLogId in the Results structure returned by the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api.
                     * @return PkgLogId Sequence number of a log within the log package, which is the PkgLogId in the Results structure returned by the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api.
                     * 
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置Sequence number of a log within the log package, which is the PkgLogId in the Results structure returned by the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api.
                     * @param _pkgLogId Sequence number of a log within the log package, which is the PkgLogId in the Results structure returned by the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api.
                     * 
                     */
                    void SetPkgLogId(const int64_t& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取The previous ${PrevLogs} logs. Default value: 10.
                     * @return PrevLogs The previous ${PrevLogs} logs. Default value: 10.
                     * 
                     */
                    int64_t GetPrevLogs() const;

                    /**
                     * 设置The previous ${PrevLogs} logs. Default value: 10.
                     * @param _prevLogs The previous ${PrevLogs} logs. Default value: 10.
                     * 
                     */
                    void SetPrevLogs(const int64_t& _prevLogs);

                    /**
                     * 判断参数 PrevLogs 是否已赋值
                     * @return PrevLogs 是否已赋值
                     * 
                     */
                    bool PrevLogsHasBeenSet() const;

                    /**
                     * 获取The next ${NextLogs} logs. Default value: 10.
                     * @return NextLogs The next ${NextLogs} logs. Default value: 10.
                     * 
                     */
                    int64_t GetNextLogs() const;

                    /**
                     * 设置The next ${NextLogs} logs. Default value: 10.
                     * @param _nextLogs The next ${NextLogs} logs. Default value: 10.
                     * 
                     */
                    void SetNextLogs(const int64_t& _nextLogs);

                    /**
                     * 判断参数 NextLogs 是否已赋值
                     * @return NextLogs 是否已赋值
                     * 
                     */
                    bool NextLogsHasBeenSet() const;

                    /**
                     * 获取Query statement, filtering the log context with a maximum length of 12KB
The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval criteria]</a> and does not support SQL statement.
                     * @return Query Query statement, filtering the log context with a maximum length of 12KB
The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval criteria]</a> and does not support SQL statement.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement, filtering the log context with a maximum length of 12KB
The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval criteria]</a> and does not support SQL statement.
                     * @param _query Query statement, filtering the log context with a maximum length of 12KB
The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval criteria]</a> and does not support SQL statement.
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
                     * 获取Context search start time, unit: millisecond-level timestamp
Note:
-When From is empty, it means no restrictions on the start time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * @return From Context search start time, unit: millisecond-level timestamp
Note:
-When From is empty, it means no restrictions on the start time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置Context search start time, unit: millisecond-level timestamp
Note:
-When From is empty, it means no restrictions on the start time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * @param _from Context search start time, unit: millisecond-level timestamp
Note:
-When From is empty, it means no restrictions on the start time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * 
                     */
                    void SetFrom(const uint64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of context search. Measurement unit: millisecond-level timestamp.
Note:
-When To is empty, it means no restrictions on the end time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * @return To End time of context search. Measurement unit: millisecond-level timestamp.
Note:
-When To is empty, it means no restrictions on the end time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * 
                     */
                    uint64_t GetTo() const;

                    /**
                     * 设置End time of context search. Measurement unit: millisecond-level timestamp.
Note:
-When To is empty, it means no restrictions on the end time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * @param _to End time of context search. Measurement unit: millisecond-level timestamp.
Note:
-When To is empty, it means no restrictions on the end time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     * 
                     */
                    void SetTo(const uint64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                private:

                    /**
                     * Log topic Id to query.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log time, which is the Time in the Results structure in the returned information of the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api, should be converted from the millisecond-level Unix timestamp to a string in the YYYY-mm-dd HH:MM:SS.FFF format according to the UTC+8 time zone.
                     */
                    std::string m_bTime;
                    bool m_bTimeHasBeenSet;

                    /**
                     * Log package sequence number, which is the PkgId in the Results structure returned by the retrieve and analyze logs api (https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1).
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Sequence number of a log within the log package, which is the PkgLogId in the Results structure returned by the [retrieve and analyze logs](https://www.tencentcloud.com/document/product/614/56447?from_cn_redirect=1) api.
                     */
                    int64_t m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * The previous ${PrevLogs} logs. Default value: 10.
                     */
                    int64_t m_prevLogs;
                    bool m_prevLogsHasBeenSet;

                    /**
                     * The next ${NextLogs} logs. Default value: 10.
                     */
                    int64_t m_nextLogs;
                    bool m_nextLogsHasBeenSet;

                    /**
                     * Query statement, filtering the log context with a maximum length of 12KB
The statement consists of <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1" target="_blank">[retrieval criteria]</a> and does not support SQL statement.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Context search start time, unit: millisecond-level timestamp
Note:
-When From is empty, it means no restrictions on the start time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of context search. Measurement unit: millisecond-level timestamp.
Note:
-When To is empty, it means no restrictions on the end time of context search.
-From and To are not empty, From < To
-Currently, the system only supports the Shanghai/Virginia/Singapore region.
                     */
                    uint64_t m_to;
                    bool m_toHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
