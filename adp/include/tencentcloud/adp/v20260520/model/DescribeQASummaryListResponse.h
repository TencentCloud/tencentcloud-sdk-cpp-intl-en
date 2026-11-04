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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQASUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQASUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/QASummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeQASummaryList response structure.
                */
                class DescribeQASummaryListResponse : public AbstractModel
                {
                public:
                    DescribeQASummaryListResponse();
                    ~DescribeQASummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Not adopted count</p>
                     * @return NotAcceptedCount <p>Not adopted count</p>
                     * 
                     */
                    uint64_t GetNotAcceptedCount() const;

                    /**
                     * 判断参数 NotAcceptedCount 是否已赋值
                     * @return NotAcceptedCount 是否已赋值
                     * 
                     */
                    bool NotAcceptedCountHasBeenSet() const;

                    /**
                     * 获取<p>Quantity to be checked</p>
                     * @return PendingVerifyCount <p>Quantity to be checked</p>
                     * 
                     */
                    uint64_t GetPendingVerifyCount() const;

                    /**
                     * 判断参数 PendingVerifyCount 是否已赋值
                     * @return PendingVerifyCount 是否已赋值
                     * 
                     */
                    bool PendingVerifyCountHasBeenSet() const;

                    /**
                     * 获取<p>QA list</p>
                     * @return QaList <p>QA list</p>
                     * 
                     */
                    std::vector<QASummary> GetQaList() const;

                    /**
                     * 判断参数 QaList 是否已赋值
                     * @return QaList 是否已赋值
                     * 
                     */
                    bool QaListHasBeenSet() const;

                    /**
                     * 获取<p>Total.</p>
                     * @return TotalCount <p>Total.</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Not adopted count</p>
                     */
                    uint64_t m_notAcceptedCount;
                    bool m_notAcceptedCountHasBeenSet;

                    /**
                     * <p>Quantity to be checked</p>
                     */
                    uint64_t m_pendingVerifyCount;
                    bool m_pendingVerifyCountHasBeenSet;

                    /**
                     * <p>QA list</p>
                     */
                    std::vector<QASummary> m_qaList;
                    bool m_qaListHasBeenSet;

                    /**
                     * <p>Total.</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQASUMMARYLISTRESPONSE_H_
