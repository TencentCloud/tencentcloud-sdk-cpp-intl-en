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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceBackups request structure.
                */
                class DescribeInstanceBackupsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceBackupsRequest();
                    ~DescribeInstanceBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of backups returned per page. Default value: `20`. Maximum value: `100`.
                     * @return Limit Number of backups returned per page. Default value: `20`. Maximum value: `100`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of backups returned per page. Default value: `20`. Maximum value: `100`.
                     * @param Limit Number of backups returned per page. Default value: `20`. Maximum value: `100`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     * @return Offset Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     * @param Offset Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     * @return InstanceId ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     * @param InstanceId ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 16:46:34. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     * @return BeginTime Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 16:46:34. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 16:46:34. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     * @param BeginTime Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 16:46:34. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 19:09:26. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     * @return EndTime End time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 19:09:26. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 19:09:26. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     * @param EndTime End time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 19:09:26. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Backup task status:
`1`: The backup is in the process.
`2`: The backup is normal.
`3`: The backup is being converted to an RDB file.
`4`: Conversion to RDB has been completed.
`-1`: The backup expired.
`-2`: The backup has been deleted.
                     * @return Status Backup task status:
`1`: The backup is in the process.
`2`: The backup is normal.
`3`: The backup is being converted to an RDB file.
`4`: Conversion to RDB has been completed.
`-1`: The backup expired.
`-2`: The backup has been deleted.
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Backup task status:
`1`: The backup is in the process.
`2`: The backup is normal.
`3`: The backup is being converted to an RDB file.
`4`: Conversion to RDB has been completed.
`-1`: The backup expired.
`-2`: The backup has been deleted.
                     * @param Status Backup task status:
`1`: The backup is in the process.
`2`: The backup is normal.
`3`: The backup is being converted to an RDB file.
`4`: Conversion to RDB has been completed.
`-1`: The backup expired.
`-2`: The backup has been deleted.
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance name, which can be fuzzily searched.
                     * @return InstanceName Instance name, which can be fuzzily searched.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which can be fuzzily searched.
                     * @param InstanceName Instance name, which can be fuzzily searched.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Number of backups returned per page. Default value: `20`. Maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, which is an integral multiple of `Limit`. `offset` = `limit` * (page number - 1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 16:46:34. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-02-08 19:09:26. This parameter is used to query the list of instance backups started during the [beginTime, endTime] range.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Backup task status:
`1`: The backup is in the process.
`2`: The backup is normal.
`3`: The backup is being converted to an RDB file.
`4`: Conversion to RDB has been completed.
`-1`: The backup expired.
`-2`: The backup has been deleted.
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance name, which can be fuzzily searched.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_
