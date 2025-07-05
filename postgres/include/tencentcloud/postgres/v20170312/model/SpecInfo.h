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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/SpecItemInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Purchasable specification details in an AZ in a region.
                */
                class SpecInfo : public AbstractModel
                {
                public:
                    SpecInfo();
                    ~SpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region abbreviation, which corresponds to the `Region` field of `RegionSet`
                     * @return Region Region abbreviation, which corresponds to the `Region` field of `RegionSet`
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region abbreviation, which corresponds to the `Region` field of `RegionSet`
                     * @param _region Region abbreviation, which corresponds to the `Region` field of `RegionSet`
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
                     * 获取AZ abbreviate, which corresponds to the `Zone` field of `ZoneSet`
                     * @return Zone AZ abbreviate, which corresponds to the `Zone` field of `ZoneSet`
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ abbreviate, which corresponds to the `Zone` field of `ZoneSet`
                     * @param _zone AZ abbreviate, which corresponds to the `Zone` field of `ZoneSet`
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
                     * 获取Specification details list
                     * @return SpecItemInfoList Specification details list
                     * 
                     */
                    std::vector<SpecItemInfo> GetSpecItemInfoList() const;

                    /**
                     * 设置Specification details list
                     * @param _specItemInfoList Specification details list
                     * 
                     */
                    void SetSpecItemInfoList(const std::vector<SpecItemInfo>& _specItemInfoList);

                    /**
                     * 判断参数 SpecItemInfoList 是否已赋值
                     * @return SpecItemInfoList 是否已赋值
                     * 
                     */
                    bool SpecItemInfoListHasBeenSet() const;

                    /**
                     * 获取Regions where KMS is supported
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SupportKMSRegions Regions where KMS is supported
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetSupportKMSRegions() const;

                    /**
                     * 设置Regions where KMS is supported
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _supportKMSRegions Regions where KMS is supported
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSupportKMSRegions(const std::vector<std::string>& _supportKMSRegions);

                    /**
                     * 判断参数 SupportKMSRegions 是否已赋值
                     * @return SupportKMSRegions 是否已赋值
                     * 
                     */
                    bool SupportKMSRegionsHasBeenSet() const;

                private:

                    /**
                     * Region abbreviation, which corresponds to the `Region` field of `RegionSet`
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ abbreviate, which corresponds to the `Zone` field of `ZoneSet`
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Specification details list
                     */
                    std::vector<SpecItemInfo> m_specItemInfoList;
                    bool m_specItemInfoListHasBeenSet;

                    /**
                     * Regions where KMS is supported
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_supportKMSRegions;
                    bool m_supportKMSRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECINFO_H_
