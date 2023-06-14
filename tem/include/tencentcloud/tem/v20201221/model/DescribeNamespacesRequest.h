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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBENAMESPACESREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBENAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * DescribeNamespaces request structure.
                */
                class DescribeNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeNamespacesRequest();
                    ~DescribeNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of items per page
                     * @return Limit Number of items per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page
                     * @param _limit Number of items per page
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return Offset Page number
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number
                     * @param _offset Page number
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Source
                     * @return SourceChannel Source
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source
                     * @param _sourceChannel Source
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * Number of items per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Source
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBENAMESPACESREQUEST_H_
