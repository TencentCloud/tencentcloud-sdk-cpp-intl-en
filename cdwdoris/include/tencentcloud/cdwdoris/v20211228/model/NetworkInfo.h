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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NETWORKINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Network information
                */
                class NetworkInfo : public AbstractModel
                {
                public:
                    NetworkInfo();
                    ~NetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The number of available IP addresses in the current subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetIpNum The number of available IP addresses in the current subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSubnetIpNum() const;

                    /**
                     * 设置The number of available IP addresses in the current subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetIpNum The number of available IP addresses in the current subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetIpNum(const int64_t& _subnetIpNum);

                    /**
                     * 判断参数 SubnetIpNum 是否已赋值
                     * @return SubnetIpNum 是否已赋值
                     * 
                     */
                    bool SubnetIpNumHasBeenSet() const;

                private:

                    /**
                     * Availability zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The number of available IP addresses in the current subnet
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_subnetIpNum;
                    bool m_subnetIpNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NETWORKINFO_H_
