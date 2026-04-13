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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/KVNamespace.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeEdgeKVNamespaces response structure.
                */
                class DescribeEdgeKVNamespacesResponse : public AbstractModel
                {
                public:
                    DescribeEdgeKVNamespacesResponse();
                    ~DescribeEdgeKVNamespacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of eligible namespaces.
                     * @return TotalCount Total number of eligible namespaces.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取KV namespace information list. If no matching criteria, return an empty array.
                     * @return KVNamespaces KV namespace information list. If no matching criteria, return an empty array.
                     * 
                     */
                    std::vector<KVNamespace> GetKVNamespaces() const;

                    /**
                     * 判断参数 KVNamespaces 是否已赋值
                     * @return KVNamespaces 是否已赋值
                     * 
                     */
                    bool KVNamespacesHasBeenSet() const;

                private:

                    /**
                     * Total number of eligible namespaces.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * KV namespace information list. If no matching criteria, return an empty array.
                     */
                    std::vector<KVNamespace> m_kVNamespaces;
                    bool m_kVNamespacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESRESPONSE_H_
