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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYREGIONSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/GeoIp.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyRegions response structure.
                */
                class DescribeSecurityPolicyRegionsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyRegionsResponse();
                    ~DescribeSecurityPolicyRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of regions
                     * @return Count Total number of regions
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Region information
                     * @return GeoIp Region information
                     * 
                     */
                    std::vector<GeoIp> GetGeoIp() const;

                    /**
                     * 判断参数 GeoIp 是否已赋值
                     * @return GeoIp 是否已赋值
                     * 
                     */
                    bool GeoIpHasBeenSet() const;

                private:

                    /**
                     * Total number of regions
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Region information
                     */
                    std::vector<GeoIp> m_geoIp;
                    bool m_geoIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYREGIONSRESPONSE_H_
