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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/Filter.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeLogInstanceList request structure.
                */
                class DescribeLogInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeLogInstanceListRequest();
                    ~DescribeLogInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @return LogType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @param _logType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Size of the output task list per page.</p><ul><li>Value ranges from 1 to 100.</li><li>Default value: 20.</li></ul>
                     * @return Limit <p>Size of the output task list per page.</p><ul><li>Value ranges from 1 to 100.</li><li>Default value: 20.</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Size of the output task list per page.</p><ul><li>Value ranges from 1 to 100.</li><li>Default value: 20.</li></ul>
                     * @param _limit <p>Size of the output task list per page.</p><ul><li>Value ranges from 1 to 100.</li><li>Default value: 20.</li></ul>
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
                     * 获取<p>Pagination offset. Default value: 0. Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * @return Offset <p>Pagination offset. Default value: 0. Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset. Default value: 0. Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     * @param _offset <p>Pagination offset. Default value: 0. Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
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
                     * 获取<p>Set the log filtering field to filter and return logs that meet a specified condition.</p>
                     * @return Filters <p>Set the log filtering field to filter and return logs that meet a specified condition.</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Set the log filtering field to filter and return logs that meet a specified condition.</p>
                     * @param _filters <p>Set the log filtering field to filter and return logs that meet a specified condition.</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write logs.</li><li>read: Read logs.</li><li>all: Read/write logs.</li></ul>
                     * @return LogSubType <p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write logs.</li><li>read: Read logs.</li><li>all: Read/write logs.</li></ul>
                     * 
                     */
                    std::string GetLogSubType() const;

                    /**
                     * 设置<p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write logs.</li><li>read: Read logs.</li><li>all: Read/write logs.</li></ul>
                     * @param _logSubType <p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write logs.</li><li>read: Read logs.</li><li>all: Read/write logs.</li></ul>
                     * 
                     */
                    void SetLogSubType(const std::string& _logSubType);

                    /**
                     * 判断参数 LogSubType 是否已赋值
                     * @return LogSubType 是否已赋值
                     * 
                     */
                    bool LogSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>Log switch.</p><p>Enumeration value:</p><ul><li>on: Enable</li><li>off: Disable</li></ul><p>Default value: off</p>
                     * @return LogSwitch <p>Log switch.</p><p>Enumeration value:</p><ul><li>on: Enable</li><li>off: Disable</li></ul><p>Default value: off</p>
                     * 
                     */
                    std::string GetLogSwitch() const;

                    /**
                     * 设置<p>Log switch.</p><p>Enumeration value:</p><ul><li>on: Enable</li><li>off: Disable</li></ul><p>Default value: off</p>
                     * @param _logSwitch <p>Log switch.</p><p>Enumeration value:</p><ul><li>on: Enable</li><li>off: Disable</li></ul><p>Default value: off</p>
                     * 
                     */
                    void SetLogSwitch(const std::string& _logSwitch);

                    /**
                     * 判断参数 LogSwitch 是否已赋值
                     * @return LogSwitch 是否已赋值
                     * 
                     */
                    bool LogSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Size of the output task list per page.</p><ul><li>Value ranges from 1 to 100.</li><li>Default value: 20.</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset. Default value: 0. Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Set the log filtering field to filter and return logs that meet a specified condition.</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Log subcategory.</p><p>Enumeration value:</p><ul><li>write: Write logs.</li><li>read: Read logs.</li><li>all: Read/write logs.</li></ul>
                     */
                    std::string m_logSubType;
                    bool m_logSubTypeHasBeenSet;

                    /**
                     * <p>Log switch.</p><p>Enumeration value:</p><ul><li>on: Enable</li><li>off: Disable</li></ul><p>Default value: off</p>
                     */
                    std::string m_logSwitch;
                    bool m_logSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_
