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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELSREQUEST_H_

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
                * DescribeStreamPackageLinearAssemblyChannels request structure.
                */
                class DescribeStreamPackageLinearAssemblyChannelsRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageLinearAssemblyChannelsRequest();
                    ~DescribeStreamPackageLinearAssemblyChannelsRequest() = default;
                    std::string ToJsonString() const;


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

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELSREQUEST_H_
