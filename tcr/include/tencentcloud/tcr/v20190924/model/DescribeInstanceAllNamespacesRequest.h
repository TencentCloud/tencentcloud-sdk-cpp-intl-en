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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCEALLNAMESPACESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCEALLNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeInstanceAllNamespaces request structure.
                */
                class DescribeInstanceAllNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceAllNamespacesRequest();
                    ~DescribeInstanceAllNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries per page
                     * @return Limit Number of entries per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page
                     * @param _limit Number of entries per page
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
                     * 获取Start position offset
                     * @return Offset Start position offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Start position offset
                     * @param _offset Start position offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Number of entries per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Start position offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCEALLNAMESPACESREQUEST_H_
