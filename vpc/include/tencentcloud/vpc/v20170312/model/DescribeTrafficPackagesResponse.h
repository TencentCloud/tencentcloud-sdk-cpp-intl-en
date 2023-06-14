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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICPACKAGESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficPackage.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTrafficPackages response structure.
                */
                class DescribeTrafficPackagesResponse : public AbstractModel
                {
                public:
                    DescribeTrafficPackagesResponse();
                    ~DescribeTrafficPackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible traffic packages
                     * @return TotalCount Number of eligible traffic packages
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
                     * 获取Traffic package information
                     * @return TrafficPackageSet Traffic package information
                     * 
                     */
                    std::vector<TrafficPackage> GetTrafficPackageSet() const;

                    /**
                     * 判断参数 TrafficPackageSet 是否已赋值
                     * @return TrafficPackageSet 是否已赋值
                     * 
                     */
                    bool TrafficPackageSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible traffic packages
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Traffic package information
                     */
                    std::vector<TrafficPackage> m_trafficPackageSet;
                    bool m_trafficPackageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETRAFFICPACKAGESRESPONSE_H_
