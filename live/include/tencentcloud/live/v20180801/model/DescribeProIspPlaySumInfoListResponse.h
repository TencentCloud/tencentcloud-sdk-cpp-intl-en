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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROISPPLAYSUMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROISPPLAYSUMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/ProIspPlaySumInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeProIspPlaySumInfoList response structure.
                */
                class DescribeProIspPlaySumInfoListResponse : public AbstractModel
                {
                public:
                    DescribeProIspPlaySumInfoListResponse();
                    ~DescribeProIspPlaySumInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Total traffic.
                     * @return TotalFlux Total traffic.
                     */
                    double GetTotalFlux() const;

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     */
                    bool TotalFluxHasBeenSet() const;

                    /**
                     * 获取Total number of requests.
                     * @return TotalRequest Total number of requests.
                     */
                    uint64_t GetTotalRequest() const;

                    /**
                     * 判断参数 TotalRequest 是否已赋值
                     * @return TotalRequest 是否已赋值
                     */
                    bool TotalRequestHasBeenSet() const;

                    /**
                     * 获取Statistics type.
                     * @return StatType Statistics type.
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取Number of results per page.
                     * @return PageSize Number of results per page.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number.
                     * @return PageNum Page number.
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Total number of results.
                     * @return TotalNum Total number of results.
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取Total number of pages.
                     * @return TotalPage Total number of pages.
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取Aggregated data list by district, ISP, or country/region.
                     * @return DataInfoList Aggregated data list by district, ISP, or country/region.
                     */
                    std::vector<ProIspPlaySumInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     */
                    bool DataInfoListHasBeenSet() const;

                    /**
                     * 获取Download speed in MB/s. Calculation method: total traffic/total duration.
                     * @return AvgFluxPerSecond Download speed in MB/s. Calculation method: total traffic/total duration.
                     */
                    double GetAvgFluxPerSecond() const;

                    /**
                     * 判断参数 AvgFluxPerSecond 是否已赋值
                     * @return AvgFluxPerSecond 是否已赋值
                     */
                    bool AvgFluxPerSecondHasBeenSet() const;

                private:

                    /**
                     * Total traffic.
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                    /**
                     * Total number of requests.
                     */
                    uint64_t m_totalRequest;
                    bool m_totalRequestHasBeenSet;

                    /**
                     * Statistics type.
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * Number of results per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Total number of results.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * Total number of pages.
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Aggregated data list by district, ISP, or country/region.
                     */
                    std::vector<ProIspPlaySumInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                    /**
                     * Download speed in MB/s. Calculation method: total traffic/total duration.
                     */
                    double m_avgFluxPerSecond;
                    bool m_avgFluxPerSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROISPPLAYSUMINFOLISTRESPONSE_H_
