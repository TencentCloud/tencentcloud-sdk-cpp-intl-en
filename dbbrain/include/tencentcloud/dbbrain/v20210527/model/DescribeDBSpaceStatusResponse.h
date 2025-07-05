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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBSPACESTATUSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBSPACESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBSpaceStatus response structure.
                */
                class DescribeDBSpaceStatusResponse : public AbstractModel
                {
                public:
                    DescribeDBSpaceStatusResponse();
                    ~DescribeDBSpaceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Disk usage growth in MB.
                     * @return Growth Disk usage growth in MB.
                     * 
                     */
                    int64_t GetGrowth() const;

                    /**
                     * 判断参数 Growth 是否已赋值
                     * @return Growth 是否已赋值
                     * 
                     */
                    bool GrowthHasBeenSet() const;

                    /**
                     * 获取Available disk space in MB.
                     * @return Remain Available disk space in MB.
                     * 
                     */
                    int64_t GetRemain() const;

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取Total disk space in MB.
                     * @return Total Total disk space in MB.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Estimated number of available days.
                     * @return AvailableDays Estimated number of available days.
                     * 
                     */
                    int64_t GetAvailableDays() const;

                    /**
                     * 判断参数 AvailableDays 是否已赋值
                     * @return AvailableDays 是否已赋值
                     * 
                     */
                    bool AvailableDaysHasBeenSet() const;

                private:

                    /**
                     * Disk usage growth in MB.
                     */
                    int64_t m_growth;
                    bool m_growthHasBeenSet;

                    /**
                     * Available disk space in MB.
                     */
                    int64_t m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * Total disk space in MB.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Estimated number of available days.
                     */
                    int64_t m_availableDays;
                    bool m_availableDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBSPACESTATUSRESPONSE_H_
