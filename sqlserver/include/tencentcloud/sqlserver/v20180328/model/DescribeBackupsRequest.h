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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_

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
                * DescribeBackups request structure.
                */
                class DescribeBackupsRequest : public AbstractModel
                {
                public:
                    DescribeBackupsRequest();
                    ~DescribeBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start name (yyyy-MM-dd HH:mm:ss)
                     * @return StartTime Start name (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start name (yyyy-MM-dd HH:mm:ss)
                     * @param StartTime Start name (yyyy-MM-dd HH:mm:ss)
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (yyyy-MM-dd HH:mm:ss)
                     * @return EndTime End time (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (yyyy-MM-dd HH:mm:ss)
                     * @param EndTime End time (yyyy-MM-dd HH:mm:ss)
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Instance ID in the format of mssql-njj2mtpl
                     * @return InstanceId Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-njj2mtpl
                     * @param InstanceId Instance ID in the format of mssql-njj2mtpl
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of results per page. Value range: 1–100. Default value: 20
                     * @return Limit Number of results per page. Value range: 1–100. Default value: 20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page. Value range: 1–100. Default value: 20
                     * @param Limit Number of results per page. Value range: 1–100. Default value: 20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: 0
                     * @return Offset Page number. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0
                     * @param Offset Page number. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Start name (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Instance ID in the format of mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of results per page. Value range: 1–100. Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSREQUEST_H_
