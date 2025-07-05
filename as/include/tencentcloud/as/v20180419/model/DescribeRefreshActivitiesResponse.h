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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshActivity.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeRefreshActivities response structure.
                */
                class DescribeRefreshActivitiesResponse : public AbstractModel
                {
                public:
                    DescribeRefreshActivitiesResponse();
                    ~DescribeRefreshActivitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of refresh activities that meet the conditions.
                     * @return TotalCount Number of refresh activities that meet the conditions.
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
                     * 获取A collection of information about refresh activities that meet the conditions.
                     * @return RefreshActivitySet A collection of information about refresh activities that meet the conditions.
                     * 
                     */
                    std::vector<RefreshActivity> GetRefreshActivitySet() const;

                    /**
                     * 判断参数 RefreshActivitySet 是否已赋值
                     * @return RefreshActivitySet 是否已赋值
                     * 
                     */
                    bool RefreshActivitySetHasBeenSet() const;

                private:

                    /**
                     * Number of refresh activities that meet the conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * A collection of information about refresh activities that meet the conditions.
                     */
                    std::vector<RefreshActivity> m_refreshActivitySet;
                    bool m_refreshActivitySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESRESPONSE_H_
