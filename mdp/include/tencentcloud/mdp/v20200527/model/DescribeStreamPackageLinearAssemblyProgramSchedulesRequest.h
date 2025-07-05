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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYPROGRAMSCHEDULESREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYPROGRAMSCHEDULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageLinearAssemblyProgramSchedules request structure.
                */
                class DescribeStreamPackageLinearAssemblyProgramSchedulesRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageLinearAssemblyProgramSchedulesRequest();
                    ~DescribeStreamPackageLinearAssemblyProgramSchedulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query all Programs under a Channel.
                     * @return ChannelId Query all Programs under a Channel.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Query all Programs under a Channel.
                     * @param _channelId Query all Programs under a Channel.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Window duration information, in seconds.
                     * @return TimeWindow Window duration information, in seconds.
                     * 
                     */
                    uint64_t GetTimeWindow() const;

                    /**
                     * 设置Window duration information, in seconds.
                     * @param _timeWindow Window duration information, in seconds.
                     * 
                     */
                    void SetTimeWindow(const uint64_t& _timeWindow);

                    /**
                     * 判断参数 TimeWindow 是否已赋值
                     * @return TimeWindow 是否已赋值
                     * 
                     */
                    bool TimeWindowHasBeenSet() const;

                    /**
                     * 获取Paging query page number, the value range is [1, 1000].
                     * @return PageNum Paging query page number, the value range is [1, 1000].
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Paging query page number, the value range is [1, 1000].
                     * @param _pageNum Paging query page number, the value range is [1, 1000].
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Paging query the size of each page, the value range is [1, 1000].
                     * @return PageSize Paging query the size of each page, the value range is [1, 1000].
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Paging query the size of each page, the value range is [1, 1000].
                     * @param _pageSize Paging query the size of each page, the value range is [1, 1000].
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Query all Programs under a Channel.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Window duration information, in seconds.
                     */
                    uint64_t m_timeWindow;
                    bool m_timeWindowHasBeenSet;

                    /**
                     * Paging query page number, the value range is [1, 1000].
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Paging query the size of each page, the value range is [1, 1000].
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYPROGRAMSCHEDULESREQUEST_H_
