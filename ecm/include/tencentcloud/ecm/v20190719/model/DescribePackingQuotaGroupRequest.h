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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPACKINGQUOTAGROUPREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPACKINGQUOTAGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePackingQuotaGroup request structure.
                */
                class DescribePackingQuotaGroupRequest : public AbstractModel
                {
                public:
                    DescribePackingQuotaGroupRequest();
                    ~DescribePackingQuotaGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter. Zone: AZ; InstanceType: instance type; DataDiskSize: data disk size.
                     * @return Filters Filter. Zone: AZ; InstanceType: instance type; DataDiskSize: data disk size.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Zone: AZ; InstanceType: instance type; DataDiskSize: data disk size.
                     * @param _filters Filter. Zone: AZ; InstanceType: instance type; DataDiskSize: data disk size.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Filter. Zone: AZ; InstanceType: instance type; DataDiskSize: data disk size.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPACKINGQUOTAGROUPREQUEST_H_
