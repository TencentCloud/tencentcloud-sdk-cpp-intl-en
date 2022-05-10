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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETARGETHEALTHRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETARGETHEALTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/LoadBalancerHealth.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeTargetHealth response structure.
                */
                class DescribeTargetHealthResponse : public AbstractModel
                {
                public:
                    DescribeTargetHealthResponse();
                    ~DescribeTargetHealthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of CLB instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancers List of CLB instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LoadBalancerHealth> GetLoadBalancers() const;

                    /**
                     * 判断参数 LoadBalancers 是否已赋值
                     * @return LoadBalancers 是否已赋值
                     */
                    bool LoadBalancersHasBeenSet() const;

                private:

                    /**
                     * List of CLB instances.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LoadBalancerHealth> m_loadBalancers;
                    bool m_loadBalancersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETARGETHEALTHRESPONSE_H_