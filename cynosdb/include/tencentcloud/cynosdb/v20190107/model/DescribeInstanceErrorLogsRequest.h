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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEERRORLOGSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEERRORLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceErrorLogs request structure.
                */
                class DescribeInstanceErrorLogsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceErrorLogsRequest();
                    ~DescribeInstanceErrorLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Log entry limit
                     * @return Limit Log entry limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Log entry limit
                     * @param _limit Log entry limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Log entry offset
                     * @return Offset Log entry offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Log entry offset
                     * @param _offset Log entry offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
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
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
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
                     * 获取Sorting field. Valid values: `Timestamp` (enumeration value).
                     * @return OrderBy Sorting field. Valid values: `Timestamp` (enumeration value).
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Valid values: `Timestamp` (enumeration value).
                     * @param _orderBy Sorting field. Valid values: `Timestamp` (enumeration value).
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting type. Valid values: `ASC`, `DESC`.
                     * @return OrderByType Sorting type. Valid values: `ASC`, `DESC`.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting type. Valid values: `ASC`, `DESC`.
                     * @param _orderByType Sorting type. Valid values: `ASC`, `DESC`.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Log level. Valid values: error, warning, note. You can search multiple levels at the same time.
                     * @return LogLevels Log level. Valid values: error, warning, note. You can search multiple levels at the same time.
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置Log level. Valid values: error, warning, note. You can search multiple levels at the same time.
                     * @param _logLevels Log level. Valid values: error, warning, note. You can search multiple levels at the same time.
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取Keyword. Fuzzy search is supported.
                     * @return KeyWords Keyword. Fuzzy search is supported.
                     * 
                     */
                    std::vector<std::string> GetKeyWords() const;

                    /**
                     * 设置Keyword. Fuzzy search is supported.
                     * @param _keyWords Keyword. Fuzzy search is supported.
                     * 
                     */
                    void SetKeyWords(const std::vector<std::string>& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log entry limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Log entry offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Sorting field. Valid values: `Timestamp` (enumeration value).
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting type. Valid values: `ASC`, `DESC`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Log level. Valid values: error, warning, note. You can search multiple levels at the same time.
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * Keyword. Fuzzy search is supported.
                     */
                    std::vector<std::string> m_keyWords;
                    bool m_keyWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEERRORLOGSREQUEST_H_
