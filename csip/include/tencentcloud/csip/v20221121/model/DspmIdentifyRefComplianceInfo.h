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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYREFCOMPLIANCEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYREFCOMPLIANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm associated identification template info
                */
                class DspmIdentifyRefComplianceInfo : public AbstractModel
                {
                public:
                    DspmIdentifyRefComplianceInfo();
                    ~DspmIdentifyRefComplianceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Identification template ID</p>
                     * @return ComplianceId <p>Identification template ID</p>
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置<p>Identification template ID</p>
                     * @param _complianceId <p>Identification template ID</p>
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取<p>Recognition template name.</p>
                     * @return ComplianceName <p>Recognition template name.</p>
                     * 
                     */
                    std::string GetComplianceName() const;

                    /**
                     * 设置<p>Recognition template name.</p>
                     * @param _complianceName <p>Recognition template name.</p>
                     * 
                     */
                    void SetComplianceName(const std::string& _complianceName);

                    /**
                     * 判断参数 ComplianceName 是否已赋值
                     * @return ComplianceName 是否已赋值
                     * 
                     */
                    bool ComplianceNameHasBeenSet() const;

                    /**
                     * 获取<p>Identification template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @return ComplianceType <p>Identification template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    uint64_t GetComplianceType() const;

                    /**
                     * 设置<p>Identification template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @param _complianceType <p>Identification template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    void SetComplianceType(const uint64_t& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Identification template ID</p>
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * <p>Recognition template name.</p>
                     */
                    std::string m_complianceName;
                    bool m_complianceNameHasBeenSet;

                    /**
                     * <p>Identification template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     */
                    uint64_t m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYREFCOMPLIANCEINFO_H_
