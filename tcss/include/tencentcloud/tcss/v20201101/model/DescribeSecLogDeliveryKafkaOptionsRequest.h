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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYKAFKAOPTIONSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYKAFKAOPTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogDeliveryKafkaOptions request structure.
                */
                class DescribeSecLogDeliveryKafkaOptionsRequest : public AbstractModel
                {
                public:
                    DescribeSecLogDeliveryKafkaOptionsRequest();
                    ~DescribeSecLogDeliveryKafkaOptionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Region. If this field was left blank, return all available regions.
                     * @return RegionID Region. If this field was left blank, return all available regions.
                     * 
                     */
                    std::string GetRegionID() const;

                    /**
                     * 设置Region. If this field was left blank, return all available regions.
                     * @param _regionID Region. If this field was left blank, return all available regions.
                     * 
                     */
                    void SetRegionID(const std::string& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                private:

                    /**
                     * Region. If this field was left blank, return all available regions.
                     */
                    std::string m_regionID;
                    bool m_regionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYKAFKAOPTIONSREQUEST_H_
