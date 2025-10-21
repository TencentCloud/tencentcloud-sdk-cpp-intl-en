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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYENTRIESREQUEST_H_

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
                * ResetRoutePolicyEntries request structure.
                */
                class ResetRoutePolicyEntriesRequest : public AbstractModel
                {
                public:
                    ResetRoutePolicyEntriesRequest();
                    ~ResetRoutePolicyEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID of the route reception policy, such as rrp-azd4dt1c.
                     * @return RoutePolicyId Specifies the instance ID of the route reception policy, such as rrp-azd4dt1c.
                     * 
                     */
                    std::string GetRoutePolicyId() const;

                    /**
                     * 设置Specifies the instance ID of the route reception policy, such as rrp-azd4dt1c.
                     * @param _routePolicyId Specifies the instance ID of the route reception policy, such as rrp-azd4dt1c.
                     * 
                     */
                    void SetRoutePolicyId(const std::string& _routePolicyId);

                    /**
                     * 判断参数 RoutePolicyId 是否已赋值
                     * @return RoutePolicyId 是否已赋值
                     * 
                     */
                    bool RoutePolicyIdHasBeenSet() const;

                    /**
                     * 获取Route reception policy entry list. requires specifying the routing strategy entry ID (RoutePolicyEntryId).
                     * @return RoutePolicyEntrySet Route reception policy entry list. requires specifying the routing strategy entry ID (RoutePolicyEntryId).
                     * 
                     */
                    std::vector<RoutePolicyEntry> GetRoutePolicyEntrySet() const;

                    /**
                     * 设置Route reception policy entry list. requires specifying the routing strategy entry ID (RoutePolicyEntryId).
                     * @param _routePolicyEntrySet Route reception policy entry list. requires specifying the routing strategy entry ID (RoutePolicyEntryId).
                     * 
                     */
                    void SetRoutePolicyEntrySet(const std::vector<RoutePolicyEntry>& _routePolicyEntrySet);

                    /**
                     * 判断参数 RoutePolicyEntrySet 是否已赋值
                     * @return RoutePolicyEntrySet 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntrySetHasBeenSet() const;

                    /**
                     * 获取Describes the route reception policy.
                     * @return RoutePolicyDescription Describes the route reception policy.
                     * 
                     */
                    std::string GetRoutePolicyDescription() const;

                    /**
                     * 设置Describes the route reception policy.
                     * @param _routePolicyDescription Describes the route reception policy.
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
                     * 获取Specifies the route reception policy name.
                     * @return RoutePolicyName Specifies the route reception policy name.
                     * 
                     */
                    std::string GetRoutePolicyName() const;

                    /**
                     * 设置Specifies the route reception policy name.
                     * @param _routePolicyName Specifies the route reception policy name.
                     * 
                     */
                    void SetRoutePolicyName(const std::string& _routePolicyName);

                    /**
                     * 判断参数 RoutePolicyName 是否已赋值
                     * @return RoutePolicyName 是否已赋值
                     * 
                     */
                    bool RoutePolicyNameHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID of the route reception policy, such as rrp-azd4dt1c.
                     */
                    std::string m_routePolicyId;
                    bool m_routePolicyIdHasBeenSet;

                    /**
                     * Route reception policy entry list. requires specifying the routing strategy entry ID (RoutePolicyEntryId).
                     */
                    std::vector<RoutePolicyEntry> m_routePolicyEntrySet;
                    bool m_routePolicyEntrySetHasBeenSet;

                    /**
                     * Describes the route reception policy.
                     */
                    std::string m_routePolicyDescription;
                    bool m_routePolicyDescriptionHasBeenSet;

                    /**
                     * Specifies the route reception policy name.
                     */
                    std::string m_routePolicyName;
                    bool m_routePolicyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYENTRIESREQUEST_H_
