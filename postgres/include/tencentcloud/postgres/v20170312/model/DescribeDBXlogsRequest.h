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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSREQUEST_H_

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
                * DescribeDBXlogs request structure.
                */
                class DescribeDBXlogsRequest : public AbstractModel
                {
                public:
                    DescribeDBXlogsRequest();
                    ~DescribeDBXlogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. for example, postgres-4wdeb0zv.
                     * @return DBInstanceId Instance ID. for example, postgres-4wdeb0zv.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. for example, postgres-4wdeb0zv.
                     * @param _dBInstanceId Instance ID. for example, postgres-4wdeb0zv.
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
                     * 获取Query start time, such as 2018-06-10 17:06:38. start time should not be less than 7 days ago.
                     * @return StartTime Query start time, such as 2018-06-10 17:06:38. start time should not be less than 7 days ago.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time, such as 2018-06-10 17:06:38. start time should not be less than 7 days ago.
                     * @param _startTime Query start time, such as 2018-06-10 17:06:38. start time should not be less than 7 days ago.
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
                     * 获取Query end time, in the format of 2018-06-10 17:06:38.
                     * @return EndTime Query end time, in the format of 2018-06-10 17:06:38.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time, in the format of 2018-06-10 17:06:38.
                     * @param _endTime Query end time, in the format of 2018-06-10 17:06:38.
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
                     * 获取Pagination return indicates which page of entries to return. counting begins from page 0.
                     * @return Offset Pagination return indicates which page of entries to return. counting begins from page 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination return indicates which page of entries to return. counting begins from page 0.
                     * @param _offset Pagination return indicates which page of entries to return. counting begins from page 0.
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
                     * 获取Pagination return indicates how many items per page. value range: 1-100.
                     * @return Limit Pagination return indicates how many items per page. value range: 1-100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination return indicates how many items per page. value range: 1-100.
                     * @param _limit Pagination return indicates how many items per page. value range: 1-100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID. for example, postgres-4wdeb0zv.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Query start time, such as 2018-06-10 17:06:38. start time should not be less than 7 days ago.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time, in the format of 2018-06-10 17:06:38.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pagination return indicates which page of entries to return. counting begins from page 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination return indicates how many items per page. value range: 1-100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSREQUEST_H_
