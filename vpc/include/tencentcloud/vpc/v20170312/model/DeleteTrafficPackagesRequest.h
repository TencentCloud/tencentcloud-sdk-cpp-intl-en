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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETETRAFFICPACKAGESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETETRAFFICPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteTrafficPackages request structure.
                */
                class DeleteTrafficPackagesRequest : public AbstractModel
                {
                public:
                    DeleteTrafficPackagesRequest();
                    ~DeleteTrafficPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID array of traffic packages to delete
                     * @return TrafficPackageIds The unique ID array of traffic packages to delete
                     * 
                     */
                    std::vector<std::string> GetTrafficPackageIds() const;

                    /**
                     * 设置The unique ID array of traffic packages to delete
                     * @param _trafficPackageIds The unique ID array of traffic packages to delete
                     * 
                     */
                    void SetTrafficPackageIds(const std::vector<std::string>& _trafficPackageIds);

                    /**
                     * 判断参数 TrafficPackageIds 是否已赋值
                     * @return TrafficPackageIds 是否已赋值
                     * 
                     */
                    bool TrafficPackageIdsHasBeenSet() const;

                private:

                    /**
                     * The unique ID array of traffic packages to delete
                     */
                    std::vector<std::string> m_trafficPackageIds;
                    bool m_trafficPackageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETETRAFFICPACKAGESREQUEST_H_
