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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVETRANSCODEDETAILRESPONSE_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVETRANSCODEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/DescribeTranscodeDetailInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DescribeStreamLiveTranscodeDetail response structure.
                */
                class DescribeStreamLiveTranscodeDetailResponse : public AbstractModel
                {
                public:
                    DescribeStreamLiveTranscodeDetailResponse();
                    ~DescribeStreamLiveTranscodeDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取A list of the transcoding information.
                     * @return Infos A list of the transcoding information.
                     */
                    std::vector<DescribeTranscodeDetailInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取The number of the current page.
                     * @return PageNum The number of the current page.
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取The number of records per page.
                     * @return PageSize The number of records per page.
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取The total number of records.
                     * @return TotalNum The total number of records.
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取The total number of pages.
                     * @return TotalPage The total number of pages.
                     */
                    int64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     */
                    bool TotalPageHasBeenSet() const;

                private:

                    /**
                     * A list of the transcoding information.
                     */
                    std::vector<DescribeTranscodeDetailInfo> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * The number of the current page.
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * The number of records per page.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * The total number of records.
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * The total number of pages.
                     */
                    int64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVETRANSCODEDETAILRESPONSE_H_
