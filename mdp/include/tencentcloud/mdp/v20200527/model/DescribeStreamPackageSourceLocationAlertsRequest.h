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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESOURCELOCATIONALERTSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESOURCELOCATIONALERTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageSourceLocationAlerts request structure.
                */
                class DescribeStreamPackageSourceLocationAlertsRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageSourceLocationAlertsRequest();
                    ~DescribeStreamPackageSourceLocationAlertsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Location ID.
                     * @return LocationId Location ID.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Location ID.
                     * @param _locationId Location ID.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                private:

                    /**
                     * Location ID.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGESOURCELOCATIONALERTSREQUEST_H_
