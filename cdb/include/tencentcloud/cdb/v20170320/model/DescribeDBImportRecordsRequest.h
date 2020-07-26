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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBIMPORTRECORDSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBIMPORTRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBImportRecords request structure.
                */
                class DescribeDBImportRecordsRequest : public AbstractModel
                {
                public:
                    DescribeDBImportRecordsRequest();
                    ~DescribeDBImportRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 00:00:01.
                     * @return StartTime Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 00:00:01.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 00:00:01.
                     * @param StartTime Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 00:00:01.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 23:59:59.
                     * @return EndTime End time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 23:59:59.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 23:59:59.
                     * @param EndTime End time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 23:59:59.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Pagination parameter indicating the offset. Default value: 0.
                     * @return Offset Pagination parameter indicating the offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter indicating the offset. Default value: 0.
                     * @param Offset Pagination parameter indicating the offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination parameter indicating the number of results to be returned for a single request. Value range: 1-100. Default value: 20.
                     * @return Limit Pagination parameter indicating the number of results to be returned for a single request. Value range: 1-100. Default value: 20.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter indicating the number of results to be returned for a single request. Value range: 1-100. Default value: 20.
                     * @param Limit Pagination parameter indicating the number of results to be returned for a single request. Value range: 1-100. Default value: 20.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 00:00:01.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-01-01 23:59:59.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pagination parameter indicating the offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameter indicating the number of results to be returned for a single request. Value range: 1-100. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBIMPORTRECORDSREQUEST_H_
