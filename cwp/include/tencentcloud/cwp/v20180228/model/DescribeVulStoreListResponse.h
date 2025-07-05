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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulStoreListInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulStoreList response structure.
                */
                class DescribeVulStoreListResponse : public AbstractModel
                {
                public:
                    DescribeVulStoreListResponse();
                    ~DescribeVulStoreListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return List Vulnerability information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VulStoreListInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return TotalCount Total number
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
                     * 获取Remaining Searches for Today
                     * @return Remaining Remaining Searches for Today
                     * 
                     */
                    uint64_t GetRemaining() const;

                    /**
                     * 判断参数 Remaining 是否已赋值
                     * @return Remaining 是否已赋值
                     * 
                     */
                    bool RemainingHasBeenSet() const;

                    /**
                     * 获取Free Search Count
                     * @return FreeSearchTimes Free Search Count
                     * 
                     */
                    uint64_t GetFreeSearchTimes() const;

                    /**
                     * 判断参数 FreeSearchTimes 是否已赋值
                     * @return FreeSearchTimes 是否已赋值
                     * 
                     */
                    bool FreeSearchTimesHasBeenSet() const;

                private:

                    /**
                     * Vulnerability information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VulStoreListInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Total number
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Remaining Searches for Today
                     */
                    uint64_t m_remaining;
                    bool m_remainingHasBeenSet;

                    /**
                     * Free Search Count
                     */
                    uint64_t m_freeSearchTimes;
                    bool m_freeSearchTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULSTORELISTRESPONSE_H_
