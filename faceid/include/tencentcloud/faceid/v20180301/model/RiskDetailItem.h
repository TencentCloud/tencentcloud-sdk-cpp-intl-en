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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_RISKDETAILITEM_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_RISKDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * RiskDetailItem
                */
                class RiskDetailItem : public AbstractModel
                {
                public:
                    RiskDetailItem();
                    ~RiskDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk item type.</p><p>Valid values:</p><ul><li>IpLocationMismatch: The country/region of the reported coordinates is inconsistent with the country/region of the IP address.</li><li>AbnormalLocationChange: The same person has physically impossible displacement within a short period of time.</li><li>BlacklistHit: A customer-created face blocklist is matched.</li></ul>
                     * @return Type <p>Risk item type.</p><p>Valid values:</p><ul><li>IpLocationMismatch: The country/region of the reported coordinates is inconsistent with the country/region of the IP address.</li><li>AbnormalLocationChange: The same person has physically impossible displacement within a short period of time.</li><li>BlacklistHit: A customer-created face blocklist is matched.</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Risk item type.</p><p>Valid values:</p><ul><li>IpLocationMismatch: The country/region of the reported coordinates is inconsistent with the country/region of the IP address.</li><li>AbnormalLocationChange: The same person has physically impossible displacement within a short period of time.</li><li>BlacklistHit: A customer-created face blocklist is matched.</li></ul>
                     * @param _type <p>Risk item type.</p><p>Valid values:</p><ul><li>IpLocationMismatch: The country/region of the reported coordinates is inconsistent with the country/region of the IP address.</li><li>AbnormalLocationChange: The same person has physically impossible displacement within a short period of time.</li><li>BlacklistHit: A customer-created face blocklist is matched.</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Risk item type.</p><p>Valid values:</p><ul><li>IpLocationMismatch: The country/region of the reported coordinates is inconsistent with the country/region of the IP address.</li><li>AbnormalLocationChange: The same person has physically impossible displacement within a short period of time.</li><li>BlacklistHit: A customer-created face blocklist is matched.</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_RISKDETAILITEM_H_
