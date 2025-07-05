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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSlowLogs request structure.
                */
                class DescribeSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogsRequest();
                    ~DescribeSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取MD5 value of a SQL template
                     * @return Md5 MD5 value of a SQL template
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置MD5 value of a SQL template
                     * @param _md5 MD5 value of a SQL template
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Start time in the format of "2019-09-10 12:13:14".
                     * @return StartTime Start time in the format of "2019-09-10 12:13:14".
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of "2019-09-10 12:13:14".
                     * @param _startTime Start time in the format of "2019-09-10 12:13:14".
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
                     * 获取End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     * @return EndTime End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     * @param _endTime End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
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
                     * 获取The offset. Default value: `0`.
                     * @return Offset The offset. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: `0`.
                     * @param _offset The offset. Default value: `0`.
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
                     * 获取The number of queried items. Default value: `20`. Max value: `100`.
                     * @return Limit The number of queried items. Default value: `20`. Max value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of queried items. Default value: `20`. Max value: `100`.
                     * @param _limit The number of queried items. Default value: `20`. Max value: `100`.
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
                     * 获取Database list
                     * @return DB Database list
                     * 
                     */
                    std::vector<std::string> GetDB() const;

                    /**
                     * 设置Database list
                     * @param _dB Database list
                     * 
                     */
                    void SetDB(const std::vector<std::string>& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取Keyword
                     * @return Key Keyword
                     * 
                     */
                    std::vector<std::string> GetKey() const;

                    /**
                     * 设置Keyword
                     * @param _key Keyword
                     * 
                     */
                    void SetKey(const std::vector<std::string>& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取User
                     * @return User User
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置User
                     * @param _user User
                     * 
                     */
                    void SetUser(const std::vector<std::string>& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Duration range. The left and right borders of the range are the zeroth and first element of the array, respectively.
                     * @return Time Duration range. The left and right borders of the range are the zeroth and first element of the array, respectively.
                     * 
                     */
                    std::vector<int64_t> GetTime() const;

                    /**
                     * 设置Duration range. The left and right borders of the range are the zeroth and first element of the array, respectively.
                     * @param _time Duration range. The left and right borders of the range are the zeroth and first element of the array, respectively.
                     * 
                     */
                    void SetTime(const std::vector<int64_t>& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * MD5 value of a SQL template
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Start time in the format of "2019-09-10 12:13:14".
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of "2019-09-11 10:13:14". The interval between the end time and the start time can be up to 7 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of queried items. Default value: `20`. Max value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Database list
                     */
                    std::vector<std::string> m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * Keyword
                     */
                    std::vector<std::string> m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * User
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * IP
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Duration range. The left and right borders of the range are the zeroth and first element of the array, respectively.
                     */
                    std::vector<int64_t> m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGSREQUEST_H_
