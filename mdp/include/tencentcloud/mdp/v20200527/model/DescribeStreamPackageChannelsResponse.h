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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGECHANNELSRESPONSE_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGECHANNELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/ChannelInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageChannels response structure.
                */
                class DescribeStreamPackageChannelsResponse : public AbstractModel
                {
                public:
                    DescribeStreamPackageChannelsResponse();
                    ~DescribeStreamPackageChannelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of channel information
Note: this field may return `null`, indicating that no valid value was found.
                     * @return Infos List of channel information
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<ChannelInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNum Page number
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page
                     * @return PageSize Number of entries per page
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Total number of entries
                     * @return TotalNum Total number of entries
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取Total number of pages
                     * @return TotalPage Total number of pages
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     */
                    bool TotalPageHasBeenSet() const;

                private:

                    /**
                     * List of channel information
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<ChannelInfo> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * Page number
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of entries
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * Total number of pages
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGECHANNELSRESPONSE_H_
