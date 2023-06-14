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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESERVICETEMPLATEGROUPSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESERVICETEMPLATEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServiceTemplateGroup.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeServiceTemplateGroups response structure.
                */
                class DescribeServiceTemplateGroupsResponse : public AbstractModel
                {
                public:
                    DescribeServiceTemplateGroupsResponse();
                    ~DescribeServiceTemplateGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of instances meeting the filter condition.
                     * @return TotalCount The number of instances meeting the filter condition.
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
                     * 获取Protocol port template group.
                     * @return ServiceTemplateGroupSet Protocol port template group.
                     * 
                     */
                    std::vector<ServiceTemplateGroup> GetServiceTemplateGroupSet() const;

                    /**
                     * 判断参数 ServiceTemplateGroupSet 是否已赋值
                     * @return ServiceTemplateGroupSet 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupSetHasBeenSet() const;

                private:

                    /**
                     * The number of instances meeting the filter condition.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Protocol port template group.
                     */
                    std::vector<ServiceTemplateGroup> m_serviceTemplateGroupSet;
                    bool m_serviceTemplateGroupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESERVICETEMPLATEGROUPSRESPONSE_H_
