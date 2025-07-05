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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/RecentSessionInfo.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeRecentSessionList response structure.
                */
                class DescribeRecentSessionListResponse : public AbstractModel
                {
                public:
                    DescribeRecentSessionListResponse();
                    ~DescribeRecentSessionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number.
                     * @return Total Total number.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Conversation list.
                     * @return RecentSessionList Conversation list.
                     * 
                     */
                    std::vector<RecentSessionInfo> GetRecentSessionList() const;

                    /**
                     * 判断参数 RecentSessionList 是否已赋值
                     * @return RecentSessionList 是否已赋值
                     * 
                     */
                    bool RecentSessionListHasBeenSet() const;

                    /**
                     * 获取Number of items on this page.
                     * @return Num Number of items on this page.
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Conversation list.
                     */
                    std::vector<RecentSessionInfo> m_recentSessionList;
                    bool m_recentSessionListHasBeenSet;

                    /**
                     * Number of items on this page.
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTRESPONSE_H_
