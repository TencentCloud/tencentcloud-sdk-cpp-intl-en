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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateRoutePolicy response structure.
                */
                class CreateRoutePolicyResponse : public AbstractModel
                {
                public:
                    CreateRoutePolicyResponse();
                    ~CreateRoutePolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the routing policy ID and rules.
                     * @return RoutePolicy Specifies the routing policy ID and rules.
                     * 
                     */
                    RoutePolicy GetRoutePolicy() const;

                    /**
                     * 判断参数 RoutePolicy 是否已赋值
                     * @return RoutePolicy 是否已赋值
                     * 
                     */
                    bool RoutePolicyHasBeenSet() const;

                private:

                    /**
                     * Specifies the routing policy ID and rules.
                     */
                    RoutePolicy m_routePolicy;
                    bool m_routePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYRESPONSE_H_
