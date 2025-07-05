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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTLISTRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQPrivateVirtualHost.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQVirtualHostList response structure.
                */
                class DescribeRabbitMQVirtualHostListResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQVirtualHostListResponse();
                    ~DescribeRabbitMQVirtualHostListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of clusters
                     * @return TotalCount The number of clusters
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Cluster list
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return VirtualHostList Cluster list
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RabbitMQPrivateVirtualHost> GetVirtualHostList() const;

                    /**
                     * 判断参数 VirtualHostList 是否已赋值
                     * @return VirtualHostList 是否已赋值
                     * 
                     */
                    bool VirtualHostListHasBeenSet() const;

                private:

                    /**
                     * The number of clusters
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cluster list
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RabbitMQPrivateVirtualHost> m_virtualHostList;
                    bool m_virtualHostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTLISTRESPONSE_H_
