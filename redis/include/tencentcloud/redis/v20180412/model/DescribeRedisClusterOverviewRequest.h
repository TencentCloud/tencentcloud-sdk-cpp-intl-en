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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTEROVERVIEWREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTEROVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeRedisClusterOverview request structure.
                */
                class DescribeRedisClusterOverviewRequest : public AbstractModel
                {
                public:
                    DescribeRedisClusterOverviewRequest();
                    ~DescribeRedisClusterOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * @return DedicatedClusterId CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * @param _dedicatedClusterId CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTEROVERVIEWREQUEST_H_
