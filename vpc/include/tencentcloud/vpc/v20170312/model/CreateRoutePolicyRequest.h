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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyEntry.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateRoutePolicy request structure.
                */
                class CreateRoutePolicyRequest : public AbstractModel
                {
                public:
                    CreateRoutePolicyRequest();
                    ~CreateRoutePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Routing policy description.
                     * @return RoutePolicyDescription Routing policy description.
                     * 
                     */
                    std::string GetRoutePolicyDescription() const;

                    /**
                     * 设置Routing policy description.
                     * @param _routePolicyDescription Routing policy description.
                     * 
                     */
                    void SetRoutePolicyDescription(const std::string& _routePolicyDescription);

                    /**
                     * 判断参数 RoutePolicyDescription 是否已赋值
                     * @return RoutePolicyDescription 是否已赋值
                     * 
                     */
                    bool RoutePolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取Specifies the routing strategy name.
                     * @return RoutePolicyName Specifies the routing strategy name.
                     * 
                     */
                    std::string GetRoutePolicyName() const;

                    /**
                     * 设置Specifies the routing strategy name.
                     * @param _routePolicyName Specifies the routing strategy name.
                     * 
                     */
                    void SetRoutePolicyName(const std::string& _routePolicyName);

                    /**
                     * 判断参数 RoutePolicyName 是否已赋值
                     * @return RoutePolicyName 是否已赋值
                     * 
                     */
                    bool RoutePolicyNameHasBeenSet() const;

                    /**
                     * 获取Routing policy entry list.
                     * @return RoutePolicyEntrySet Routing policy entry list.
                     * 
                     */
                    std::vector<RoutePolicyEntry> GetRoutePolicyEntrySet() const;

                    /**
                     * 设置Routing policy entry list.
                     * @param _routePolicyEntrySet Routing policy entry list.
                     * 
                     */
                    void SetRoutePolicyEntrySet(const std::vector<RoutePolicyEntry>& _routePolicyEntrySet);

                    /**
                     * 判断参数 RoutePolicyEntrySet 是否已赋值
                     * @return RoutePolicyEntrySet 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntrySetHasBeenSet() const;

                private:

                    /**
                     * Routing policy description.
                     */
                    std::string m_routePolicyDescription;
                    bool m_routePolicyDescriptionHasBeenSet;

                    /**
                     * Specifies the routing strategy name.
                     */
                    std::string m_routePolicyName;
                    bool m_routePolicyNameHasBeenSet;

                    /**
                     * Routing policy entry list.
                     */
                    std::vector<RoutePolicyEntry> m_routePolicyEntrySet;
                    bool m_routePolicyEntrySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYREQUEST_H_
