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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_COMPLIANCERESTRICTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_COMPLIANCERESTRICTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Information on regional access restrictions for resources due to government laws and regulations, user agreements, and other requirements.
                */
                class ComplianceRestriction : public AbstractModel
                {
                public:
                    ComplianceRestriction();
                    ~ComplianceRestriction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The causes for access restriction.</p><p>Enumeration values:</p><ul><li>ICP_RECORD_REQUIRED: unlicensed (no ICP filing);</li><li>GOVERNMENT_ORDER: government directive.</li></ul>
                     * @return Reason <p>The causes for access restriction.</p><p>Enumeration values:</p><ul><li>ICP_RECORD_REQUIRED: unlicensed (no ICP filing);</li><li>GOVERNMENT_ORDER: government directive.</li></ul>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>The causes for access restriction.</p><p>Enumeration values:</p><ul><li>ICP_RECORD_REQUIRED: unlicensed (no ICP filing);</li><li>GOVERNMENT_ORDER: government directive.</li></ul>
                     * @param _reason <p>The causes for access restriction.</p><p>Enumeration values:</p><ul><li>ICP_RECORD_REQUIRED: unlicensed (no ICP filing);</li><li>GOVERNMENT_ORDER: government directive.</li></ul>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>Restrict access to specific country/region codes using the "ISO 3166 country/region code standard".</p><p>Parameter format: view link: https://www.iso.org/iso-3166-country-codes.html.</p>
                     * @return Region <p>Restrict access to specific country/region codes using the "ISO 3166 country/region code standard".</p><p>Parameter format: view link: https://www.iso.org/iso-3166-country-codes.html.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Restrict access to specific country/region codes using the "ISO 3166 country/region code standard".</p><p>Parameter format: view link: https://www.iso.org/iso-3166-country-codes.html.</p>
                     * @param _region <p>Restrict access to specific country/region codes using the "ISO 3166 country/region code standard".</p><p>Parameter format: view link: https://www.iso.org/iso-3166-country-codes.html.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * <p>The causes for access restriction.</p><p>Enumeration values:</p><ul><li>ICP_RECORD_REQUIRED: unlicensed (no ICP filing);</li><li>GOVERNMENT_ORDER: government directive.</li></ul>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>Restrict access to specific country/region codes using the "ISO 3166 country/region code standard".</p><p>Parameter format: view link: https://www.iso.org/iso-3166-country-codes.html.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_COMPLIANCERESTRICTION_H_
