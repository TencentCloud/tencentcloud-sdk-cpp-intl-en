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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEERRORLOGDATAREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEERRORLOGDATAREQUEST_H_

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
                * DescribeErrorLogData request structure.
                */
                class DescribeErrorLogDataRequest : public AbstractModel
                {
                public:
                    DescribeErrorLogDataRequest();
                    ~DescribeErrorLogDataRequest() = default;
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
                     * 获取Start timestamp, such as 1585142640.
                     * @return StartTime Start timestamp, such as 1585142640.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp, such as 1585142640.
                     * @param _startTime Start timestamp, such as 1585142640.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp, such as 1585142640.
                     * @return EndTime End timestamp, such as 1585142640.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End timestamp, such as 1585142640.
                     * @param _endTime End timestamp, such as 1585142640.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取List of keywords to match. Up to 15 keywords are supported.
                     * @return KeyWords List of keywords to match. Up to 15 keywords are supported.
                     * 
                     */
                    std::vector<std::string> GetKeyWords() const;

                    /**
                     * 设置List of keywords to match. Up to 15 keywords are supported.
                     * @param _keyWords List of keywords to match. Up to 15 keywords are supported.
                     * 
                     */
                    void SetKeyWords(const std::vector<std::string>& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     * @return Limit The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     * @param _limit The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * @return InstType This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * 
                     */
                    std::string GetInstType() const;

                    /**
                     * 设置This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * @param _instType This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     * 
                     */
                    void SetInstType(const std::string& _instType);

                    /**
                     * 判断参数 InstType 是否已赋值
                     * @return InstType 是否已赋值
                     * 
                     */
                    bool InstTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start timestamp, such as 1585142640.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp, such as 1585142640.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of keywords to match. Up to 15 keywords are supported.
                     */
                    std::vector<std::string> m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * The number of results per page in paginated queries. Default value: 100. Maximum value: 400.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * This parameter is valid only for source or disaster recovery instances. Valid value: `slave`, which indicates pulling logs from the replica.
                     */
                    std::string m_instType;
                    bool m_instTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEERRORLOGDATAREQUEST_H_
