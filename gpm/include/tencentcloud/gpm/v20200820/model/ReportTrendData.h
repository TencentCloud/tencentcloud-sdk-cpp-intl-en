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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_REPORTTRENDDATA_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_REPORTTRENDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * Trend data
                */
                class ReportTrendData : public AbstractModel
                {
                public:
                    ReportTrendData();
                    ~ReportTrendData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total count
                     * @return TotalList Total count
                     * 
                     */
                    std::vector<std::string> GetTotalList() const;

                    /**
                     * 设置Total count
                     * @param _totalList Total count
                     * 
                     */
                    void SetTotalList(const std::vector<std::string>& _totalList);

                    /**
                     * 判断参数 TotalList 是否已赋值
                     * @return TotalList 是否已赋值
                     * 
                     */
                    bool TotalListHasBeenSet() const;

                    /**
                     * 获取Number of requests cancelled
                     * @return CancelList Number of requests cancelled
                     * 
                     */
                    std::vector<std::string> GetCancelList() const;

                    /**
                     * 设置Number of requests cancelled
                     * @param _cancelList Number of requests cancelled
                     * 
                     */
                    void SetCancelList(const std::vector<std::string>& _cancelList);

                    /**
                     * 判断参数 CancelList 是否已赋值
                     * @return CancelList 是否已赋值
                     * 
                     */
                    bool CancelListHasBeenSet() const;

                    /**
                     * 获取Number of successes
                     * @return SuccessList Number of successes
                     * 
                     */
                    std::vector<std::string> GetSuccessList() const;

                    /**
                     * 设置Number of successes
                     * @param _successList Number of successes
                     * 
                     */
                    void SetSuccessList(const std::vector<std::string>& _successList);

                    /**
                     * 判断参数 SuccessList 是否已赋值
                     * @return SuccessList 是否已赋值
                     * 
                     */
                    bool SuccessListHasBeenSet() const;

                    /**
                     * 获取Number of failures
                     * @return FailList Number of failures
                     * 
                     */
                    std::vector<std::string> GetFailList() const;

                    /**
                     * 设置Number of failures
                     * @param _failList Number of failures
                     * 
                     */
                    void SetFailList(const std::vector<std::string>& _failList);

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                    /**
                     * 获取Number of request timeout
                     * @return TimeoutList Number of request timeout
                     * 
                     */
                    std::vector<std::string> GetTimeoutList() const;

                    /**
                     * 设置Number of request timeout
                     * @param _timeoutList Number of request timeout
                     * 
                     */
                    void SetTimeoutList(const std::vector<std::string>& _timeoutList);

                    /**
                     * 判断参数 TimeoutList 是否已赋值
                     * @return TimeoutList 是否已赋值
                     * 
                     */
                    bool TimeoutListHasBeenSet() const;

                    /**
                     * 获取Time array in seconds
                     * @return TimeList Time array in seconds
                     * 
                     */
                    std::vector<std::string> GetTimeList() const;

                    /**
                     * 设置Time array in seconds
                     * @param _timeList Time array in seconds
                     * 
                     */
                    void SetTimeList(const std::vector<std::string>& _timeList);

                    /**
                     * 判断参数 TimeList 是否已赋值
                     * @return TimeList 是否已赋值
                     * 
                     */
                    bool TimeListHasBeenSet() const;

                private:

                    /**
                     * Total count
                     */
                    std::vector<std::string> m_totalList;
                    bool m_totalListHasBeenSet;

                    /**
                     * Number of requests cancelled
                     */
                    std::vector<std::string> m_cancelList;
                    bool m_cancelListHasBeenSet;

                    /**
                     * Number of successes
                     */
                    std::vector<std::string> m_successList;
                    bool m_successListHasBeenSet;

                    /**
                     * Number of failures
                     */
                    std::vector<std::string> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * Number of request timeout
                     */
                    std::vector<std::string> m_timeoutList;
                    bool m_timeoutListHasBeenSet;

                    /**
                     * Time array in seconds
                     */
                    std::vector<std::string> m_timeList;
                    bool m_timeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_REPORTTRENDDATA_H_
