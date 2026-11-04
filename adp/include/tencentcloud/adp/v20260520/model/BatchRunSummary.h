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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_BATCHRUNSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_BATCHRUNSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * BatchRunSummary
                */
                class BatchRunSummary : public AbstractModel
                {
                public:
                    BatchRunSummary();
                    ~BatchRunSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取	Number of failures.
                     * @return FailedCount 	Number of failures.
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置	Number of failures.
                     * @param _failedCount 	Number of failures.
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取	Number of successes.
                     * @return SuccessCount 	Number of successes.
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置	Number of successes.
                     * @param _successCount 	Number of successes.
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Total batches
                     * @return TotalCount Total batches
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total batches
                     * @param _totalCount Total batches
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Failed subscript
                     * @return FailedIndexList Failed subscript
                     * 
                     */
                    std::vector<int64_t> GetFailedIndexList() const;

                    /**
                     * 设置Failed subscript
                     * @param _failedIndexList Failed subscript
                     * 
                     */
                    void SetFailedIndexList(const std::vector<int64_t>& _failedIndexList);

                    /**
                     * 判断参数 FailedIndexList 是否已赋值
                     * @return FailedIndexList 是否已赋值
                     * 
                     */
                    bool FailedIndexListHasBeenSet() const;

                    /**
                     * 获取	Batches completed in the previous round
                     * @return JustCompletedIndexList 	Batches completed in the previous round
                     * 
                     */
                    std::vector<int64_t> GetJustCompletedIndexList() const;

                    /**
                     * 设置	Batches completed in the previous round
                     * @param _justCompletedIndexList 	Batches completed in the previous round
                     * 
                     */
                    void SetJustCompletedIndexList(const std::vector<int64_t>& _justCompletedIndexList);

                    /**
                     * 判断参数 JustCompletedIndexList 是否已赋值
                     * @return JustCompletedIndexList 是否已赋值
                     * 
                     */
                    bool JustCompletedIndexListHasBeenSet() const;

                    /**
                     * 获取Subscript in running
                     * @return RunningIndexList Subscript in running
                     * 
                     */
                    std::vector<int64_t> GetRunningIndexList() const;

                    /**
                     * 设置Subscript in running
                     * @param _runningIndexList Subscript in running
                     * 
                     */
                    void SetRunningIndexList(const std::vector<int64_t>& _runningIndexList);

                    /**
                     * 判断参数 RunningIndexList 是否已赋值
                     * @return RunningIndexList 是否已赋值
                     * 
                     */
                    bool RunningIndexListHasBeenSet() const;

                    /**
                     * 获取Subscript of success
                     * @return SuccessIndexList Subscript of success
                     * 
                     */
                    std::vector<int64_t> GetSuccessIndexList() const;

                    /**
                     * 设置Subscript of success
                     * @param _successIndexList Subscript of success
                     * 
                     */
                    void SetSuccessIndexList(const std::vector<int64_t>& _successIndexList);

                    /**
                     * 判断参数 SuccessIndexList 是否已赋值
                     * @return SuccessIndexList 是否已赋值
                     * 
                     */
                    bool SuccessIndexListHasBeenSet() const;

                private:

                    /**
                     * 	Number of failures.
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 	Number of successes.
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Total batches
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Failed subscript
                     */
                    std::vector<int64_t> m_failedIndexList;
                    bool m_failedIndexListHasBeenSet;

                    /**
                     * 	Batches completed in the previous round
                     */
                    std::vector<int64_t> m_justCompletedIndexList;
                    bool m_justCompletedIndexListHasBeenSet;

                    /**
                     * Subscript in running
                     */
                    std::vector<int64_t> m_runningIndexList;
                    bool m_runningIndexListHasBeenSet;

                    /**
                     * Subscript of success
                     */
                    std::vector<int64_t> m_successIndexList;
                    bool m_successIndexListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_BATCHRUNSUMMARY_H_
