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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESSAICHANNELSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESSAICHANNELSREQUEST_H_

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
                * DescribeStreamPackageSSAIChannels request structure.
                */
                class DescribeStreamPackageSSAIChannelsRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageSSAIChannelsRequest();
                    ~DescribeStreamPackageSSAIChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, default is 1
                     * @return PageNum Page number, default is 1
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number, default is 1
                     * @param _pageNum Page number, default is 1
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
                     * 获取Page size, default is 10
                     * @return PageSize Page size, default is 10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size, default is 10
                     * @param _pageSize Page size, default is 10
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
                     * Page number, default is 1
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Page size, default is 10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESSAICHANNELSREQUEST_H_
