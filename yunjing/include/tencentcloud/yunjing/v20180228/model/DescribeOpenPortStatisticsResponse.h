/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOPENPORTSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOPENPORTSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/OpenPortStatistics.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeOpenPortStatistics response structure.
                */
                class DescribeOpenPortStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeOpenPortStatisticsResponse();
                    ~DescribeOpenPortStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Total number of records in port statistics list
                     * @return TotalCount Total number of records in port statistics list
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Port statistics list
                     * @return OpenPortStatistics Port statistics list
                     */
                    std::vector<OpenPortStatistics> GetOpenPortStatistics() const;

                    /**
                     * 判断参数 OpenPortStatistics 是否已赋值
                     * @return OpenPortStatistics 是否已赋值
                     */
                    bool OpenPortStatisticsHasBeenSet() const;

                private:

                    /**
                     * Total number of records in port statistics list
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Port statistics list
                     */
                    std::vector<OpenPortStatistics> m_openPortStatistics;
                    bool m_openPortStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOPENPORTSTATISTICSRESPONSE_H_
