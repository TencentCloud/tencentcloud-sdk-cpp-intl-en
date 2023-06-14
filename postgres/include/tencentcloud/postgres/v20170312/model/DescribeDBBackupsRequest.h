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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBBACKUPSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBBackups request structure.
                */
                class DescribeDBBackupsRequest : public AbstractModel
                {
                public:
                    DescribeDBBackupsRequest();
                    ~DescribeDBBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of postgres-4wdeb0zv.
                     * @return DBInstanceId Instance ID in the format of postgres-4wdeb0zv.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-4wdeb0zv.
                     * @param _dBInstanceId Instance ID in the format of postgres-4wdeb0zv.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup mode (1: full). Currently, only full backup is supported. The value is 1.
                     * @return Type Backup mode (1: full). Currently, only full backup is supported. The value is 1.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Backup mode (1: full). Currently, only full backup is supported. The value is 1.
                     * @param _type Backup mode (1: full). Currently, only full backup is supported. The value is 1.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Query start time in the format of 2018-06-10 17:06:38, which cannot be more than 7 days ago
                     * @return StartTime Query start time in the format of 2018-06-10 17:06:38, which cannot be more than 7 days ago
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time in the format of 2018-06-10 17:06:38, which cannot be more than 7 days ago
                     * @param _startTime Query start time in the format of 2018-06-10 17:06:38, which cannot be more than 7 days ago
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
                     * 获取Query end time in the format of 2018-06-10 17:06:38
                     * @return EndTime Query end time in the format of 2018-06-10 17:06:38
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time in the format of 2018-06-10 17:06:38
                     * @param _endTime Query end time in the format of 2018-06-10 17:06:38
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
                     * 获取Number of entries to be returned per page for backup list. Default value: 20. Minimum value: 1. Maximum value: 100. (If this parameter is left empty or 0, the default value will be used)
                     * @return Limit Number of entries to be returned per page for backup list. Default value: 20. Minimum value: 1. Maximum value: 100. (If this parameter is left empty or 0, the default value will be used)
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries to be returned per page for backup list. Default value: 20. Minimum value: 1. Maximum value: 100. (If this parameter is left empty or 0, the default value will be used)
                     * @param _limit Number of entries to be returned per page for backup list. Default value: 20. Minimum value: 1. Maximum value: 100. (If this parameter is left empty or 0, the default value will be used)
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
                     * 获取Page number for data return in paged query. Pagination starts from 0. Default value: 0.
                     * @return Offset Page number for data return in paged query. Pagination starts from 0. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number for data return in paged query. Pagination starts from 0. Default value: 0.
                     * @param _offset Page number for data return in paged query. Pagination starts from 0. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of postgres-4wdeb0zv.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Backup mode (1: full). Currently, only full backup is supported. The value is 1.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query start time in the format of 2018-06-10 17:06:38, which cannot be more than 7 days ago
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in the format of 2018-06-10 17:06:38
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of entries to be returned per page for backup list. Default value: 20. Minimum value: 1. Maximum value: 100. (If this parameter is left empty or 0, the default value will be used)
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number for data return in paged query. Pagination starts from 0. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBBACKUPSREQUEST_H_
