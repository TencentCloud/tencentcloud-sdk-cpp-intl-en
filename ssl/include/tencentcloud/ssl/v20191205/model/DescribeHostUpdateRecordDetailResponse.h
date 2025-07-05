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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/UpdateRecordDetails.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostUpdateRecordDetail response structure.
                */
                class DescribeHostUpdateRecordDetailResponse : public AbstractModel
                {
                public:
                    DescribeHostUpdateRecordDetailResponse();
                    ~DescribeHostUpdateRecordDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取If the total number cannot be obtained, return 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount If the total number cannot be obtained, return 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Certificate deployment record list; returns an empty array if no value is obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RecordDetailList Certificate deployment record list; returns an empty array if no value is obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UpdateRecordDetails> GetRecordDetailList() const;

                    /**
                     * 判断参数 RecordDetailList 是否已赋值
                     * @return RecordDetailList 是否已赋值
                     * 
                     */
                    bool RecordDetailListHasBeenSet() const;

                    /**
                     * 获取Total number of successes; returns 0 if unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SuccessTotalCount Total number of successes; returns 0 if unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSuccessTotalCount() const;

                    /**
                     * 判断参数 SuccessTotalCount 是否已赋值
                     * @return SuccessTotalCount 是否已赋值
                     * 
                     */
                    bool SuccessTotalCountHasBeenSet() const;

                    /**
                     * 获取Total number of failures. if it cannot be obtained, return 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FailedTotalCount Total number of failures. if it cannot be obtained, return 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFailedTotalCount() const;

                    /**
                     * 判断参数 FailedTotalCount 是否已赋值
                     * @return FailedTotalCount 是否已赋值
                     * 
                     */
                    bool FailedTotalCountHasBeenSet() const;

                    /**
                     * 获取Total number of deployments in progress; returns 0 if unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RunningTotalCount Total number of deployments in progress; returns 0 if unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRunningTotalCount() const;

                    /**
                     * 判断参数 RunningTotalCount 是否已赋值
                     * @return RunningTotalCount 是否已赋值
                     * 
                     */
                    bool RunningTotalCountHasBeenSet() const;

                private:

                    /**
                     * If the total number cannot be obtained, return 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Certificate deployment record list; returns an empty array if no value is obtained.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UpdateRecordDetails> m_recordDetailList;
                    bool m_recordDetailListHasBeenSet;

                    /**
                     * Total number of successes; returns 0 if unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_successTotalCount;
                    bool m_successTotalCountHasBeenSet;

                    /**
                     * Total number of failures. if it cannot be obtained, return 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_failedTotalCount;
                    bool m_failedTotalCountHasBeenSet;

                    /**
                     * Total number of deployments in progress; returns 0 if unavailable.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_runningTotalCount;
                    bool m_runningTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILRESPONSE_H_
