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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PushDataInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveStreamPushInfoList response structure.
                */
                class DescribeLiveStreamPushInfoListResponse : public AbstractModel
                {
                public:
                    DescribeLiveStreamPushInfoListResponse();
                    ~DescribeLiveStreamPushInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Live stream statistics list.
                     * @return DataInfoList Live stream statistics list.
                     */
                    std::vector<PushDataInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     */
                    bool DataInfoListHasBeenSet() const;

                    /**
                     * 获取Total number of live streams.
                     * @return TotalNum Total number of live streams.
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
                     * 获取Page number where the current data resides.
                     * @return PageNum Page number where the current data resides.
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of live streams per page.
                     * @return PageSize Number of live streams per page.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Live stream statistics list.
                     */
                    std::vector<PushDataInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                    /**
                     * Total number of live streams.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * Total number of pages.
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * Page number where the current data resides.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of live streams per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTRESPONSE_H_
