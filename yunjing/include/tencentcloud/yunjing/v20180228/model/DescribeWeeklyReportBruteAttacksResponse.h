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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTBRUTEATTACKSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTBRUTEATTACKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/WeeklyReportBruteAttack.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWeeklyReportBruteAttacks response structure.
                */
                class DescribeWeeklyReportBruteAttacksResponse : public AbstractModel
                {
                public:
                    DescribeWeeklyReportBruteAttacksResponse();
                    ~DescribeWeeklyReportBruteAttacksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Brute force attack array in weekly CWP Pro report.
                     * @return WeeklyReportBruteAttacks Brute force attack array in weekly CWP Pro report.
                     * 
                     */
                    std::vector<WeeklyReportBruteAttack> GetWeeklyReportBruteAttacks() const;

                    /**
                     * 判断参数 WeeklyReportBruteAttacks 是否已赋值
                     * @return WeeklyReportBruteAttacks 是否已赋值
                     * 
                     */
                    bool WeeklyReportBruteAttacksHasBeenSet() const;

                    /**
                     * 获取Total number of records.
                     * @return TotalCount Total number of records.
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
                     * Brute force attack array in weekly CWP Pro report.
                     */
                    std::vector<WeeklyReportBruteAttack> m_weeklyReportBruteAttacks;
                    bool m_weeklyReportBruteAttacksHasBeenSet;

                    /**
                     * Total number of records.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTBRUTEATTACKSRESPONSE_H_
