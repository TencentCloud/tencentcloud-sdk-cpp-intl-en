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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYASSOCIATIONSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYASSOCIATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyAssociation.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteRoutePolicyAssociations request structure.
                */
                class DeleteRoutePolicyAssociationsRequest : public AbstractModel
                {
                public:
                    DeleteRoutePolicyAssociationsRequest();
                    ~DeleteRoutePolicyAssociationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Routing policy binding object list. during routing policy unbinding, use the RouteTableId and RoutePolicyId fields of RoutePolicyAssociation (you do not need to fill in the Priority field).
                     * @return RoutePolicyAssociationSet Routing policy binding object list. during routing policy unbinding, use the RouteTableId and RoutePolicyId fields of RoutePolicyAssociation (you do not need to fill in the Priority field).
                     * 
                     */
                    std::vector<RoutePolicyAssociation> GetRoutePolicyAssociationSet() const;

                    /**
                     * 设置Routing policy binding object list. during routing policy unbinding, use the RouteTableId and RoutePolicyId fields of RoutePolicyAssociation (you do not need to fill in the Priority field).
                     * @param _routePolicyAssociationSet Routing policy binding object list. during routing policy unbinding, use the RouteTableId and RoutePolicyId fields of RoutePolicyAssociation (you do not need to fill in the Priority field).
                     * 
                     */
                    void SetRoutePolicyAssociationSet(const std::vector<RoutePolicyAssociation>& _routePolicyAssociationSet);

                    /**
                     * 判断参数 RoutePolicyAssociationSet 是否已赋值
                     * @return RoutePolicyAssociationSet 是否已赋值
                     * 
                     */
                    bool RoutePolicyAssociationSetHasBeenSet() const;

                private:

                    /**
                     * Routing policy binding object list. during routing policy unbinding, use the RouteTableId and RoutePolicyId fields of RoutePolicyAssociation (you do not need to fill in the Priority field).
                     */
                    std::vector<RoutePolicyAssociation> m_routePolicyAssociationSet;
                    bool m_routePolicyAssociationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYASSOCIATIONSREQUEST_H_
