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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationStrategyInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * DescribeIncrementalMigrationStrategyInfos response structure.
                */
                class DescribeIncrementalMigrationStrategyInfosResponse : public AbstractModel
                {
                public:
                    DescribeIncrementalMigrationStrategyInfosResponse();
                    ~DescribeIncrementalMigrationStrategyInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total count of matched strategies.
                     * @return TotalCount Total count of matched strategies.
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
                     * 获取Information of all matched strategies.
                     * @return StrategyInfoSet Information of all matched strategies.
                     * 
                     */
                    std::vector<IncrementalMigrationStrategyInfo> GetStrategyInfoSet() const;

                    /**
                     * 判断参数 StrategyInfoSet 是否已赋值
                     * @return StrategyInfoSet 是否已赋值
                     * 
                     */
                    bool StrategyInfoSetHasBeenSet() const;

                private:

                    /**
                     * Total count of matched strategies.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Information of all matched strategies.
                     */
                    std::vector<IncrementalMigrationStrategyInfo> m_strategyInfoSet;
                    bool m_strategyInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSRESPONSE_H_
