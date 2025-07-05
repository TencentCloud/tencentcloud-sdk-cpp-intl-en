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
                     * 获取Log topic ID to be queried
                     * @return TopicId Log topic ID to be queried
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID to be queried
                     * @param _topicId Log topic ID to be queried
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
                     * 获取Log time in the format of YYYY-mm-dd HH:MM:SS.FFF
                     * @return BTime Log time in the format of YYYY-mm-dd HH:MM:SS.FFF
                     * 
                     */
                    std::string GetBTime() const;

                    /**
                     * 设置Log time in the format of YYYY-mm-dd HH:MM:SS.FFF
                     * @param _bTime Log time in the format of YYYY-mm-dd HH:MM:SS.FFF
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
                     * 获取Log package sequence number. PkgId in the Results structure of the returned information of SearchLog API.
                     * @return PkgId Log package sequence number. PkgId in the Results structure of the returned information of SearchLog API.
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log package sequence number. PkgId in the Results structure of the returned information of SearchLog API.
                     * @param _pkgId Log package sequence number. PkgId in the Results structure of the returned information of SearchLog API.
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
                     * 获取Sequence number of a log within the log package.
The PkgLogId in the Results structure of the SearchLog API returned information.
                     * @return PkgLogId Sequence number of a log within the log package.
The PkgLogId in the Results structure of the SearchLog API returned information.
                     * 
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置Sequence number of a log within the log package.
The PkgLogId in the Results structure of the SearchLog API returned information.
                     * @param _pkgLogId Sequence number of a log within the log package.
The PkgLogId in the Results structure of the SearchLog API returned information.
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

                private:

                    /**
                     * Log topic ID to be queried
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log time in the format of YYYY-mm-dd HH:MM:SS.FFF
                     */
                    std::string m_bTime;
                    bool m_bTimeHasBeenSet;

                    /**
                     * Log package sequence number. PkgId in the Results structure of the returned information of SearchLog API.
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Sequence number of a log within the log package.
The PkgLogId in the Results structure of the SearchLog API returned information.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
