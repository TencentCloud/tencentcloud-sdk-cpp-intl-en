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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_GETSNAPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_GETSNAPOVERVIEWRESPONSE_H_

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
                * GetSnapOverview response structure.
                */
                class GetSnapOverviewResponse : public AbstractModel
                {
                public:
                    GetSnapOverviewResponse();
                    ~GetSnapOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total snapshot size of the user
                     * @return TotalSize The total snapshot size of the user
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
                     * 获取The total billed snapshot size of the user
                     * @return RealTradeSize The total billed snapshot size of the user
                     * 
                     */
                    double GetRealTradeSize() const;

                    /**
                     * 判断参数 RealTradeSize 是否已赋值
                     * @return RealTradeSize 是否已赋值
                     * 
                     */
                    bool RealTradeSizeHasBeenSet() const;

                    /**
                     * 获取Free tier of snapshot
                     * @return FreeQuota Free tier of snapshot
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
                     * 获取Total number of snapshots
                     * @return TotalNums Total number of snapshots
                     * 
                     */
                    int64_t GetTotalNums() const;

                    /**
                     * 判断参数 TotalNums 是否已赋值
                     * @return TotalNums 是否已赋值
                     * 
                     */
                    bool TotalNumsHasBeenSet() const;

                private:

                    /**
                     * The total snapshot size of the user
                     */
                    double m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * The total billed snapshot size of the user
                     */
                    double m_realTradeSize;
                    bool m_realTradeSizeHasBeenSet;

                    /**
                     * Free tier of snapshot
                     */
                    double m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * Total number of snapshots
                     */
                    int64_t m_totalNums;
                    bool m_totalNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_GETSNAPOVERVIEWRESPONSE_H_
