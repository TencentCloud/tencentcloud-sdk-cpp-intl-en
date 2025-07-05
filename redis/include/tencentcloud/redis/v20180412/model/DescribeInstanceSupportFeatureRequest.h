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
                     * 获取Specify the instance ID.
 For example: crs-xjhsdj****. Please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.
Sample value: crs-asdasdas.
                     * @return InstanceId Specify the instance ID.
 For example: crs-xjhsdj****. Please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.
Sample value: crs-asdasdas.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specify the instance ID.
 For example: crs-xjhsdj****. Please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.
Sample value: crs-asdasdas.
                     * @param _instanceId Specify the instance ID.
 For example: crs-xjhsdj****. Please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.
Sample value: crs-asdasdas.
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
                     * 获取Feature names.
- Read-local-node-only: Proximity access feature.- multi-account: Multiple accounts feature.
                     * @return FeatureName Feature names.
- Read-local-node-only: Proximity access feature.- multi-account: Multiple accounts feature.
                     * 
                     */
                    std::string GetFeatureName() const;

                    /**
                     * 设置Feature names.
- Read-local-node-only: Proximity access feature.- multi-account: Multiple accounts feature.
                     * @param _featureName Feature names.
- Read-local-node-only: Proximity access feature.- multi-account: Multiple accounts feature.
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
                     * Specify the instance ID.
 For example: crs-xjhsdj****. Please log in to the [Redis Console] (https://console.cloud.tencent.com/redis#/) and copy the instance ID from the instance list.
Sample value: crs-asdasdas.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Feature names.
- Read-local-node-only: Proximity access feature.- multi-account: Multiple accounts feature.
                     */
                    std::string m_featureName;
                    bool m_featureNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATUREREQUEST_H_
