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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETOPCLIENTIPSUMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETOPCLIENTIPSUMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/ClientIpPlaySumInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeTopClientIpSumInfoList response structure.
                */
                class DescribeTopClientIpSumInfoListResponse : public AbstractModel
                {
                public:
                    DescribeTopClientIpSumInfoListResponse();
                    ~DescribeTopClientIpSumInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number. Value range: [1,1000]. Default value: 1.
                     * @return PageNum Page number. Value range: [1,1000]. Default value: 1.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: [1,1000]. Default value: 20.
                     * @return PageSize Number of entries per page. Value range: [1,1000]. Default value: 20.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Sorting metric. Valid values: "TotalRequest", "FailedRequest", "TotalFlux".
                     * @return OrderParam Sorting metric. Valid values: "TotalRequest", "FailedRequest", "TotalFlux".
                     * 
                     */
                    std::string GetOrderParam() const;

                    /**
                     * 判断参数 OrderParam 是否已赋值
                     * @return OrderParam 是否已赋值
                     * 
                     */
                    bool OrderParamHasBeenSet() const;

                    /**
                     * 获取Total number of results.
                     * @return TotalNum Total number of results.
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取Total number of result pages.
                     * @return TotalPage Total number of result pages.
                     * 
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     * 
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取Data content.
                     * @return DataInfoList Data content.
                     * 
                     */
                    std::vector<ClientIpPlaySumInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * Page number. Value range: [1,1000]. Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Value range: [1,1000]. Default value: 20.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sorting metric. Valid values: "TotalRequest", "FailedRequest", "TotalFlux".
                     */
                    std::string m_orderParam;
                    bool m_orderParamHasBeenSet;

                    /**
                     * Total number of results.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * Total number of result pages.
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Data content.
                     */
                    std::vector<ClientIpPlaySumInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETOPCLIENTIPSUMINFOLISTRESPONSE_H_
