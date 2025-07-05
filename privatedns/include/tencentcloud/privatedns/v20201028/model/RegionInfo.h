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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Region information
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region encoding
                     * @return RegionCode Region encoding
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region encoding
                     * @param _regionCode Region encoding
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
                     * 获取Region name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CnName Region name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCnName() const;

                    /**
                     * 设置Region name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cnName Region name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCnName(const std::string& _cnName);

                    /**
                     * 判断参数 CnName 是否已赋值
                     * @return CnName 是否已赋值
                     * 
                     */
                    bool CnNameHasBeenSet() const;

                    /**
                     * 获取English name of the region
                     * @return EnName English name of the region
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置English name of the region
                     * @param _enName English name of the region
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Number of AZs

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailableZoneNum Number of AZs

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAvailableZoneNum() const;

                    /**
                     * 设置Number of AZs

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availableZoneNum Number of AZs

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableZoneNum(const uint64_t& _availableZoneNum);

                    /**
                     * 判断参数 AvailableZoneNum 是否已赋值
                     * @return AvailableZoneNum 是否已赋值
                     * 
                     */
                    bool AvailableZoneNumHasBeenSet() const;

                private:

                    /**
                     * Region encoding
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Region name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * English name of the region
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * Region ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Number of AZs

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_availableZoneNum;
                    bool m_availableZoneNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_REGIONINFO_H_
