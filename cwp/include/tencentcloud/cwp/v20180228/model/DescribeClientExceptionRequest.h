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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLIENTEXCEPTIONREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLIENTEXCEPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeClientException request structure.
                */
                class DescribeClientExceptionRequest : public AbstractModel
                {
                public:
                    DescribeClientExceptionRequest();
                    ~DescribeClientExceptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Client Exception Type 1: Client Offline, 2: Client Uninstallation
                     * @return ExceptionType Client Exception Type 1: Client Offline, 2: Client Uninstallation
                     * 
                     */
                    int64_t GetExceptionType() const;

                    /**
                     * 设置Client Exception Type 1: Client Offline, 2: Client Uninstallation
                     * @param _exceptionType Client Exception Type 1: Client Offline, 2: Client Uninstallation
                     * 
                     */
                    void SetExceptionType(const int64_t& _exceptionType);

                    /**
                     * 判断参数 ExceptionType 是否已赋值
                     * @return ExceptionType 是否已赋值
                     * 
                     */
                    bool ExceptionTypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit per Page, not 0, up to 100
                     * @return Limit Limit per Page, not 0, up to 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit per Page, not 0, up to 100
                     * @param _limit Limit per Page, not 0, up to 100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Start time in the format of `2006-01-02 15:04:05`
                     * @return StartTime Start time in the format of `2006-01-02 15:04:05`
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of `2006-01-02 15:04:05`
                     * @param _startTime Start time in the format of `2006-01-02 15:04:05`
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
                     * 获取End time in the format of `2006-01-02 15:04:05`
                     * @return EndTime End time in the format of `2006-01-02 15:04:05`
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of `2006-01-02 15:04:05`
                     * @param _endTime End time in the format of `2006-01-02 15:04:05`
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Client Exception Type 1: Client Offline, 2: Client Uninstallation
                     */
                    int64_t m_exceptionType;
                    bool m_exceptionTypeHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit per Page, not 0, up to 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Start time in the format of `2006-01-02 15:04:05`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of `2006-01-02 15:04:05`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLIENTEXCEPTIONREQUEST_H_
