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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSSTATISTICS_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * Public IP address statistics of internet tunnels
                */
                class InternetAddressStatistics : public AbstractModel
                {
                public:
                    InternetAddressStatistics();
                    ~InternetAddressStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Region Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _region Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Number of public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetNum Number of public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSubnetNum() const;

                    /**
                     * 设置Number of public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _subnetNum Number of public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetNum(const int64_t& _subnetNum);

                    /**
                     * 判断参数 SubnetNum 是否已赋值
                     * @return SubnetNum 是否已赋值
                     * 
                     */
                    bool SubnetNumHasBeenSet() const;

                private:

                    /**
                     * Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Number of public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_subnetNum;
                    bool m_subnetNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSSTATISTICS_H_
