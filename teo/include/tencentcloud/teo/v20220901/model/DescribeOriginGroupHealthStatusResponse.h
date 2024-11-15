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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupHealthStatusDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeOriginGroupHealthStatus response structure.
                */
                class DescribeOriginGroupHealthStatusResponse : public AbstractModel
                {
                public:
                    DescribeOriginGroupHealthStatusResponse();
                    ~DescribeOriginGroupHealthStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Health status of origin servers in an origin server group.
                     * @return OriginGroupHealthStatusList Health status of origin servers in an origin server group.
                     * 
                     */
                    std::vector<OriginGroupHealthStatusDetail> GetOriginGroupHealthStatusList() const;

                    /**
                     * 判断参数 OriginGroupHealthStatusList 是否已赋值
                     * @return OriginGroupHealthStatusList 是否已赋值
                     * 
                     */
                    bool OriginGroupHealthStatusListHasBeenSet() const;

                private:

                    /**
                     * Health status of origin servers in an origin server group.
                     */
                    std::vector<OriginGroupHealthStatusDetail> m_originGroupHealthStatusList;
                    bool m_originGroupHealthStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSRESPONSE_H_
