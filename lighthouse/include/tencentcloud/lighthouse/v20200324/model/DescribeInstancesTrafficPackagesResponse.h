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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESTRAFFICPACKAGESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESTRAFFICPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceTrafficPackage.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeInstancesTrafficPackages response structure.
                */
                class DescribeInstancesTrafficPackagesResponse : public AbstractModel
                {
                public:
                    DescribeInstancesTrafficPackagesResponse();
                    ~DescribeInstancesTrafficPackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible instance traffic package details.
                     * @return TotalCount Number of eligible instance traffic package details.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of instance traffic package details.
                     * @return InstanceTrafficPackageSet List of instance traffic package details.
                     * 
                     */
                    std::vector<InstanceTrafficPackage> GetInstanceTrafficPackageSet() const;

                    /**
                     * 判断参数 InstanceTrafficPackageSet 是否已赋值
                     * @return InstanceTrafficPackageSet 是否已赋值
                     * 
                     */
                    bool InstanceTrafficPackageSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible instance traffic package details.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of instance traffic package details.
                     */
                    std::vector<InstanceTrafficPackage> m_instanceTrafficPackageSet;
                    bool m_instanceTrafficPackageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESTRAFFICPACKAGESRESPONSE_H_
