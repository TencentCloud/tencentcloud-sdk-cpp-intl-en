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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORRESPONSE_H_

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
                * DescribeBackupMonitor response structure.
                */
                class DescribeBackupMonitorResponse : public AbstractModel
                {
                public:
                    DescribeBackupMonitorResponse();
                    ~DescribeBackupMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Backup trend chart timeline.
                     * @return TimeStamp Backup trend chart timeline.
                     * 
                     */
                    std::vector<std::string> GetTimeStamp() const;

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                    /**
                     * 获取Free backup space.
                     * @return FreeSpace Free backup space.
                     * 
                     */
                    std::vector<double> GetFreeSpace() const;

                    /**
                     * 判断参数 FreeSpace 是否已赋值
                     * @return FreeSpace 是否已赋值
                     * 
                     */
                    bool FreeSpaceHasBeenSet() const;

                    /**
                     * 获取Actual total backup space.
                     * @return ActualUsedSpace Actual total backup space.
                     * 
                     */
                    std::vector<double> GetActualUsedSpace() const;

                    /**
                     * 判断参数 ActualUsedSpace 是否已赋值
                     * @return ActualUsedSpace 是否已赋值
                     * 
                     */
                    bool ActualUsedSpaceHasBeenSet() const;

                    /**
                     * 获取Backup space for logs.
                     * @return LogBackupSpace Backup space for logs.
                     * 
                     */
                    std::vector<double> GetLogBackupSpace() const;

                    /**
                     * 判断参数 LogBackupSpace 是否已赋值
                     * @return LogBackupSpace 是否已赋值
                     * 
                     */
                    bool LogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Backup space for data.
                     * @return DataBackupSpace Backup space for data.
                     * 
                     */
                    std::vector<double> GetDataBackupSpace() const;

                    /**
                     * 判断参数 DataBackupSpace 是否已赋值
                     * @return DataBackupSpace 是否已赋值
                     * 
                     */
                    bool DataBackupSpaceHasBeenSet() const;

                private:

                    /**
                     * Backup trend chart timeline.
                     */
                    std::vector<std::string> m_timeStamp;
                    bool m_timeStampHasBeenSet;

                    /**
                     * Free backup space.
                     */
                    std::vector<double> m_freeSpace;
                    bool m_freeSpaceHasBeenSet;

                    /**
                     * Actual total backup space.
                     */
                    std::vector<double> m_actualUsedSpace;
                    bool m_actualUsedSpaceHasBeenSet;

                    /**
                     * Backup space for logs.
                     */
                    std::vector<double> m_logBackupSpace;
                    bool m_logBackupSpaceHasBeenSet;

                    /**
                     * Backup space for data.
                     */
                    std::vector<double> m_dataBackupSpace;
                    bool m_dataBackupSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORRESPONSE_H_
