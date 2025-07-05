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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPROJECTRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ProjectSummaryOverviewItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummaryByProject response structure.
                */
                class DescribeBillSummaryByProjectResponse : public AbstractModel
                {
                public:
                    DescribeBillSummaryByProjectResponse();
                    ~DescribeBillSummaryByProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Indicates whether the data is ready. `0`: Not ready. `1`: Ready. If `Ready` is `0`, it indicates that the current UIN is initializing billing for the first time. Wait for 5-10 minutes and try again.
                     * @return Ready Indicates whether the data is ready. `0`: Not ready. `1`: Ready. If `Ready` is `0`, it indicates that the current UIN is initializing billing for the first time. Wait for 5-10 minutes and try again.
                     * 
                     */
                    uint64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取Detailed cost distribution for all projects
Note: This field may return null, indicating that no valid value was found.
                     * @return SummaryOverview Detailed cost distribution for all projects
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<ProjectSummaryOverviewItem> GetSummaryOverview() const;

                    /**
                     * 判断参数 SummaryOverview 是否已赋值
                     * @return SummaryOverview 是否已赋值
                     * 
                     */
                    bool SummaryOverviewHasBeenSet() const;

                private:

                    /**
                     * Indicates whether the data is ready. `0`: Not ready. `1`: Ready. If `Ready` is `0`, it indicates that the current UIN is initializing billing for the first time. Wait for 5-10 minutes and try again.
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * Detailed cost distribution for all projects
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<ProjectSummaryOverviewItem> m_summaryOverview;
                    bool m_summaryOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPROJECTRESPONSE_H_
