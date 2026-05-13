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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSnapshotOverview response structure.
                */
                class DescribeSnapshotOverviewResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotOverviewResponse();
                    ~DescribeSnapshotOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current number of valid snapshots.
                     * @return TotalNums Current number of valid snapshots.
                     * 
                     */
                    uint64_t GetTotalNums() const;

                    /**
                     * 判断参数 TotalNums 是否已赋值
                     * @return TotalNums 是否已赋值
                     * 
                     */
                    bool TotalNumsHasBeenSet() const;

                    /**
                     * 获取Total used snapshot capacity. unit: GiB.
                     * @return TotalSize Total used snapshot capacity. unit: GiB.
                     * 
                     */
                    double GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取Snapshot free quota size in GiB.
                     * @return FreeQuota Snapshot free quota size in GiB.
                     * 
                     */
                    double GetFreeQuota() const;

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取Snapshot actual cost of total capacity in GiB.
                     * @return RealTradeSize Snapshot actual cost of total capacity in GiB.
                     * 
                     */
                    double GetRealTradeSize() const;

                    /**
                     * 判断参数 RealTradeSize 是否已赋值
                     * @return RealTradeSize 是否已赋值
                     * 
                     */
                    bool RealTradeSizeHasBeenSet() const;

                private:

                    /**
                     * Current number of valid snapshots.
                     */
                    uint64_t m_totalNums;
                    bool m_totalNumsHasBeenSet;

                    /**
                     * Total used snapshot capacity. unit: GiB.
                     */
                    double m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * Snapshot free quota size in GiB.
                     */
                    double m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * Snapshot actual cost of total capacity in GiB.
                     */
                    double m_realTradeSize;
                    bool m_realTradeSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTOVERVIEWRESPONSE_H_
