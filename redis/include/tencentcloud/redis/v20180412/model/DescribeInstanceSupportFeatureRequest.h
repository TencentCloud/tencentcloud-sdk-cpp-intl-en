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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_

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
                * DescribeInstanceSupportFeature request structure.
                */
                class DescribeInstanceSupportFeatureRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSupportFeatureRequest();
                    ~DescribeInstanceSupportFeatureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it from the instance list.
                     * @return InstanceId Specifies the instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it from the instance list.
                     * @param _instanceId Specifies the instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it from the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The features that support queries are as follows.
- read-local-node-only: nearby access.
- multi-account: multi-account management.
- auto-failback: fault recovery scenario, such as whether automatic failback is enabled for the primary node.
                     * @return FeatureName The features that support queries are as follows.
- read-local-node-only: nearby access.
- multi-account: multi-account management.
- auto-failback: fault recovery scenario, such as whether automatic failback is enabled for the primary node.
                     * 
                     */
                    std::string GetFeatureName() const;

                    /**
                     * 设置The features that support queries are as follows.
- read-local-node-only: nearby access.
- multi-account: multi-account management.
- auto-failback: fault recovery scenario, such as whether automatic failback is enabled for the primary node.
                     * @param _featureName The features that support queries are as follows.
- read-local-node-only: nearby access.
- multi-account: multi-account management.
- auto-failback: fault recovery scenario, such as whether automatic failback is enabled for the primary node.
                     * 
                     */
                    void SetFeatureName(const std::string& _featureName);

                    /**
                     * 判断参数 FeatureName 是否已赋值
                     * @return FeatureName 是否已赋值
                     * 
                     */
                    bool FeatureNameHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID. Log in to the [Redis console](https://console.cloud.tencent.com/redis#/), and copy it from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The features that support queries are as follows.
- read-local-node-only: nearby access.
- multi-account: multi-account management.
- auto-failback: fault recovery scenario, such as whether automatic failback is enabled for the primary node.
                     */
                    std::string m_featureName;
                    bool m_featureNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_
