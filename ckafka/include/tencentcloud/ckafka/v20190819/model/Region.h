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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Region entity object
                */
                class Region : public AbstractModel
                {
                public:
                    Region();
                    ~Region() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return RegionName Region name
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
                     * @param _regionName Region name
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Area name
                     * @return AreaName Area name
                     * 
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置Area name
                     * @param _areaName Area name
                     * 
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     * 
                     */
                    bool AreaNameHasBeenSet() const;

                    /**
                     * 获取Region code
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return RegionCode Region code
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region code
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _regionCode Region code
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取Region code (v3)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return RegionCodeV3 Region code (v3)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionCodeV3() const;

                    /**
                     * 设置Region code (v3)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _regionCodeV3 Region code (v3)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionCodeV3(const std::string& _regionCodeV3);

                    /**
                     * 判断参数 RegionCodeV3 是否已赋值
                     * @return RegionCodeV3 是否已赋值
                     * 
                     */
                    bool RegionCodeV3HasBeenSet() const;

                    /**
                     * 获取NONE: no special models are supported by default.\nCVM: the CVM type is supported.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Support NONE: no special models are supported by default.\nCVM: the CVM type is supported.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSupport() const;

                    /**
                     * 设置NONE: no special models are supported by default.\nCVM: the CVM type is supported.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _support NONE: no special models are supported by default.\nCVM: the CVM type is supported.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupport(const std::string& _support);

                    /**
                     * 判断参数 Support 是否已赋值
                     * @return Support 是否已赋值
                     * 
                     */
                    bool SupportHasBeenSet() const;

                    /**
                     * 获取Whether IPv6 is supported. `0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Ipv6 Whether IPv6 is supported. `0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIpv6() const;

                    /**
                     * 设置Whether IPv6 is supported. `0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _ipv6 Whether IPv6 is supported. `0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpv6(const int64_t& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取Whether cross-AZ clusters are supported.`0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return MultiZone Whether cross-AZ clusters are supported.`0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMultiZone() const;

                    /**
                     * 设置Whether cross-AZ clusters are supported.`0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _multiZone Whether cross-AZ clusters are supported.`0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMultiZone(const int64_t& _multiZone);

                    /**
                     * 判断参数 MultiZone 是否已赋值
                     * @return MultiZone 是否已赋值
                     * 
                     */
                    bool MultiZoneHasBeenSet() const;

                private:

                    /**
                     * Region ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Area name
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                    /**
                     * Region code
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Region code (v3)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_regionCodeV3;
                    bool m_regionCodeV3HasBeenSet;

                    /**
                     * NONE: no special models are supported by default.\nCVM: the CVM type is supported.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_support;
                    bool m_supportHasBeenSet;

                    /**
                     * Whether IPv6 is supported. `0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Whether cross-AZ clusters are supported.`0` indicates no, and `1` indicates yes.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_multiZone;
                    bool m_multiZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_REGION_H_
