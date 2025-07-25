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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDWORKLOADLISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDWORKLOADLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AffectedWorkloadItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAffectedWorkloadList response structure.
                */
                class DescribeAffectedWorkloadListResponse : public AbstractModel
                {
                public:
                    DescribeAffectedWorkloadListResponse();
                    ~DescribeAffectedWorkloadListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of affected workloads
                     * @return TotalCount Number of affected workloads
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of affected workloads
                     * @return AffectedWorkloadList List of affected workloads
                     * 
                     */
                    std::vector<AffectedWorkloadItem> GetAffectedWorkloadList() const;

                    /**
                     * 判断参数 AffectedWorkloadList 是否已赋值
                     * @return AffectedWorkloadList 是否已赋值
                     * 
                     */
                    bool AffectedWorkloadListHasBeenSet() const;

                private:

                    /**
                     * Number of affected workloads
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of affected workloads
                     */
                    std::vector<AffectedWorkloadItem> m_affectedWorkloadList;
                    bool m_affectedWorkloadListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDWORKLOADLISTRESPONSE_H_
