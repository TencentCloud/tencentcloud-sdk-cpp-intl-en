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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RetentionExecution.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeTagRetentionExecution response structure.
                */
                class DescribeTagRetentionExecutionResponse : public AbstractModel
                {
                public:
                    DescribeTagRetentionExecutionResponse();
                    ~DescribeTagRetentionExecutionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of tag retention execution records
                     * @return RetentionExecutionList List of tag retention execution records
                     * 
                     */
                    std::vector<RetentionExecution> GetRetentionExecutionList() const;

                    /**
                     * 判断参数 RetentionExecutionList 是否已赋值
                     * @return RetentionExecutionList 是否已赋值
                     * 
                     */
                    bool RetentionExecutionListHasBeenSet() const;

                    /**
                     * 获取Total number of tag retention execution records
                     * @return TotalCount Total number of tag retention execution records
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of tag retention execution records
                     */
                    std::vector<RetentionExecution> m_retentionExecutionList;
                    bool m_retentionExecutionListHasBeenSet;

                    /**
                     * Total number of tag retention execution records
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONRESPONSE_H_
