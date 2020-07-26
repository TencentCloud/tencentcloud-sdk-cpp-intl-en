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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/ProIspPlayCodeDataInfo.h>
#include <tencentcloud/live/v20180801/model/PlayCodeTotalInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribePlayErrorCodeSumInfoList response structure.
                */
                class DescribePlayErrorCodeSumInfoListResponse : public AbstractModel
                {
                public:
                    DescribePlayErrorCodeSumInfoListResponse();
                    ~DescribePlayErrorCodeSumInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Information of 4xx or 5xx error codes by district and ISP.
                     * @return ProIspInfoList Information of 4xx or 5xx error codes by district and ISP.
                     */
                    std::vector<ProIspPlayCodeDataInfo> GetProIspInfoList() const;

                    /**
                     * 判断参数 ProIspInfoList 是否已赋值
                     * @return ProIspInfoList 是否已赋值
                     */
                    bool ProIspInfoListHasBeenSet() const;

                    /**
                     * 获取Total occurrences of all status codes.
                     * @return TotalCodeAll Total occurrences of all status codes.
                     */
                    uint64_t GetTotalCodeAll() const;

                    /**
                     * 判断参数 TotalCodeAll 是否已赋值
                     * @return TotalCodeAll 是否已赋值
                     */
                    bool TotalCodeAllHasBeenSet() const;

                    /**
                     * 获取Occurrences of 4xx status codes.
                     * @return TotalCode4xx Occurrences of 4xx status codes.
                     */
                    uint64_t GetTotalCode4xx() const;

                    /**
                     * 判断参数 TotalCode4xx 是否已赋值
                     * @return TotalCode4xx 是否已赋值
                     */
                    bool TotalCode4xxHasBeenSet() const;

                    /**
                     * 获取Occurrences of 5xx status codes.
                     * @return TotalCode5xx Occurrences of 5xx status codes.
                     */
                    uint64_t GetTotalCode5xx() const;

                    /**
                     * 判断参数 TotalCode5xx 是否已赋值
                     * @return TotalCode5xx 是否已赋值
                     */
                    bool TotalCode5xxHasBeenSet() const;

                    /**
                     * 获取Total occurrences of each status code.
                     * @return TotalCodeList Total occurrences of each status code.
                     */
                    std::vector<PlayCodeTotalInfo> GetTotalCodeList() const;

                    /**
                     * 判断参数 TotalCodeList 是否已赋值
                     * @return TotalCodeList 是否已赋值
                     */
                    bool TotalCodeListHasBeenSet() const;

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
                     * 获取Number of entries per page.
                     * @return PageSize Number of entries per page.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * 获取Occurrences of 2xx status codes.
                     * @return TotalCode2xx Occurrences of 2xx status codes.
                     */
                    uint64_t GetTotalCode2xx() const;

                    /**
                     * 判断参数 TotalCode2xx 是否已赋值
                     * @return TotalCode2xx 是否已赋值
                     */
                    bool TotalCode2xxHasBeenSet() const;

                    /**
                     * 获取Occurrences of 3xx status codes.
                     * @return TotalCode3xx Occurrences of 3xx status codes.
                     */
                    uint64_t GetTotalCode3xx() const;

                    /**
                     * 判断参数 TotalCode3xx 是否已赋值
                     * @return TotalCode3xx 是否已赋值
                     */
                    bool TotalCode3xxHasBeenSet() const;

                private:

                    /**
                     * Information of 4xx or 5xx error codes by district and ISP.
                     */
                    std::vector<ProIspPlayCodeDataInfo> m_proIspInfoList;
                    bool m_proIspInfoListHasBeenSet;

                    /**
                     * Total occurrences of all status codes.
                     */
                    uint64_t m_totalCodeAll;
                    bool m_totalCodeAllHasBeenSet;

                    /**
                     * Occurrences of 4xx status codes.
                     */
                    uint64_t m_totalCode4xx;
                    bool m_totalCode4xxHasBeenSet;

                    /**
                     * Occurrences of 5xx status codes.
                     */
                    uint64_t m_totalCode5xx;
                    bool m_totalCode5xxHasBeenSet;

                    /**
                     * Total occurrences of each status code.
                     */
                    std::vector<PlayCodeTotalInfo> m_totalCodeList;
                    bool m_totalCodeListHasBeenSet;

                    /**
                     * Page number.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of pages.
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Total number of results.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * Occurrences of 2xx status codes.
                     */
                    uint64_t m_totalCode2xx;
                    bool m_totalCode2xxHasBeenSet;

                    /**
                     * Occurrences of 3xx status codes.
                     */
                    uint64_t m_totalCode3xx;
                    bool m_totalCode3xxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTRESPONSE_H_
