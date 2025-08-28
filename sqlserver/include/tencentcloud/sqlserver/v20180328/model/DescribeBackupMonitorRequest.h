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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBackupMonitor request structure.
                */
                class DescribeBackupMonitorRequest : public AbstractModel
                {
                public:
                    DescribeBackupMonitorRequest();
                    ~DescribeBackupMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sets the start time for querying backup space usage details.
                     * @return StartTime Sets the start time for querying backup space usage details.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Sets the start time for querying backup space usage details.
                     * @param _startTime Sets the start time for querying backup space usage details.
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
                     * 获取End time of backup space usage.
                     * @return EndTime End time of backup space usage.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of backup space usage.
                     * @param _endTime End time of backup space usage.
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
                     * 获取Backup trend query type. local - local backup; cross - cross-region backup.
                     * @return Type Backup trend query type. local - local backup; cross - cross-region backup.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Backup trend query type. local - local backup; cross - cross-region backup.
                     * @param _type Backup trend query type. local - local backup; cross - cross-region backup.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Sets the start time for querying backup space usage details.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of backup space usage.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Backup trend query type. local - local backup; cross - cross-region backup.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORREQUEST_H_
