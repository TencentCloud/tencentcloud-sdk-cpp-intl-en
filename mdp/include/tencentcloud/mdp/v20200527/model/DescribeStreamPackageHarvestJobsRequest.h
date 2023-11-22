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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGEHARVESTJOBSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGEHARVESTJOBSREQUEST_H_

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
                * DescribeStreamPackageHarvestJobs request structure.
                */
                class DescribeStreamPackageHarvestJobsRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageHarvestJobsRequest();
                    ~DescribeStreamPackageHarvestJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The bound channel name. If not passed, all channels will be queried by default.
                     * @return ChannelName The bound channel name. If not passed, all channels will be queried by default.
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置The bound channel name. If not passed, all channels will be queried by default.
                     * @param _channelName The bound channel name. If not passed, all channels will be queried by default.
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Page number.
                     * @return PageNum Page number.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number.
                     * @param _pageNum Page number.
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
                     * 获取PageSize.
                     * @return PageSize PageSize.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置PageSize.
                     * @param _pageSize PageSize.
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
                     * The bound channel name. If not passed, all channels will be queried by default.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Page number.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * PageSize.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGEHARVESTJOBSREQUEST_H_
