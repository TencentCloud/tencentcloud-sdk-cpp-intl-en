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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQNAMESPACESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQNamespaces request structure.
                */
                class DescribeRocketMQNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQNamespacesRequest();
                    ~DescribeRocketMQNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The max number of returned results.
                     * @return Limit The max number of returned results.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The max number of returned results.
                     * @param _limit The max number of returned results.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Search by name.
                     * @return NameKeyword Search by name.
                     * 
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置Search by name.
                     * @param _nameKeyword Search by name.
                     * 
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     * 
                     */
                    bool NameKeywordHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The max number of returned results.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search by name.
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQNAMESPACESREQUEST_H_
