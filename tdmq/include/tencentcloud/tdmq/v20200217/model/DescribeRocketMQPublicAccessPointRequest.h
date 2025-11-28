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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTREQUEST_H_

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
                * DescribeRocketMQPublicAccessPoint request structure.
                */
                class DescribeRocketMQPublicAccessPointRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQPublicAccessPointRequest();
                    ~DescribeRocketMQPublicAccessPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID. Currently, the system only supports dedicated clusters.
                     * @return InstanceId Cluster ID. Currently, the system only supports dedicated clusters.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID. Currently, the system only supports dedicated clusters.
                     * @param _instanceId Cluster ID. Currently, the system only supports dedicated clusters.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Cluster ID. Currently, the system only supports dedicated clusters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTREQUEST_H_
