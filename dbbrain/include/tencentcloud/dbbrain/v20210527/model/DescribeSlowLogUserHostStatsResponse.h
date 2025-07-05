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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGUSERHOSTSTATSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGUSERHOSTSTATSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/SlowLogHost.h>
#include <tencentcloud/dbbrain/v20210527/model/SlowLogUser.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSlowLogUserHostStats response structure.
                */
                class DescribeSlowLogUserHostStatsResponse : public AbstractModel
                {
                public:
                    DescribeSlowLogUserHostStatsResponse();
                    ~DescribeSlowLogUserHostStatsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of source addresses.
                     * @return TotalCount Total number of source addresses.
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
                     * 获取Detailed list of the proportion of slow logs from each source address.
                     * @return Items Detailed list of the proportion of slow logs from each source address.
                     * 
                     */
                    std::vector<SlowLogHost> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Detailed list of the percentages of slow logs from different source usernames
                     * @return UserNameItems Detailed list of the percentages of slow logs from different source usernames
                     * 
                     */
                    std::vector<SlowLogUser> GetUserNameItems() const;

                    /**
                     * 判断参数 UserNameItems 是否已赋值
                     * @return UserNameItems 是否已赋值
                     * 
                     */
                    bool UserNameItemsHasBeenSet() const;

                    /**
                     * 获取The number of source users
                     * @return UserTotalCount The number of source users
                     * 
                     */
                    int64_t GetUserTotalCount() const;

                    /**
                     * 判断参数 UserTotalCount 是否已赋值
                     * @return UserTotalCount 是否已赋值
                     * 
                     */
                    bool UserTotalCountHasBeenSet() const;

                private:

                    /**
                     * Total number of source addresses.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Detailed list of the proportion of slow logs from each source address.
                     */
                    std::vector<SlowLogHost> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Detailed list of the percentages of slow logs from different source usernames
                     */
                    std::vector<SlowLogUser> m_userNameItems;
                    bool m_userNameItemsHasBeenSet;

                    /**
                     * The number of source users
                     */
                    int64_t m_userTotalCount;
                    bool m_userTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGUSERHOSTSTATSRESPONSE_H_
