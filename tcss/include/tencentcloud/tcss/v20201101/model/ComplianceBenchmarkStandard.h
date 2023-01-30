/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARD_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information of a compliance standard
                */
                class ComplianceBenchmarkStandard : public AbstractModel
                {
                public:
                    ComplianceBenchmarkStandard();
                    ~ComplianceBenchmarkStandard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compliance standard ID
                     * @return StandardId Compliance standard ID
                     */
                    uint64_t GetStandardId() const;

                    /**
                     * 设置Compliance standard ID
                     * @param StandardId Compliance standard ID
                     */
                    void SetStandardId(const uint64_t& _standardId);

                    /**
                     * 判断参数 StandardId 是否已赋值
                     * @return StandardId 是否已赋值
                     */
                    bool StandardIdHasBeenSet() const;

                    /**
                     * 获取Compliance standard name
                     * @return Name Compliance standard name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Compliance standard name
                     * @param Name Compliance standard name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Number of items contained in the compliance standard
                     * @return PolicyItemCount Number of items contained in the compliance standard
                     */
                    uint64_t GetPolicyItemCount() const;

                    /**
                     * 设置Number of items contained in the compliance standard
                     * @param PolicyItemCount Number of items contained in the compliance standard
                     */
                    void SetPolicyItemCount(const uint64_t& _policyItemCount);

                    /**
                     * 判断参数 PolicyItemCount 是否已赋值
                     * @return PolicyItemCount 是否已赋值
                     */
                    bool PolicyItemCountHasBeenSet() const;

                    /**
                     * 获取Whether to enable the standard
                     * @return Enabled Whether to enable the standard
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable the standard
                     * @param Enabled Whether to enable the standard
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Description of the standard
                     * @return Description Description of the standard
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the standard
                     * @param Description Description of the standard
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Compliance standard ID
                     */
                    uint64_t m_standardId;
                    bool m_standardIdHasBeenSet;

                    /**
                     * Compliance standard name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of items contained in the compliance standard
                     */
                    uint64_t m_policyItemCount;
                    bool m_policyItemCountHasBeenSet;

                    /**
                     * Whether to enable the standard
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Description of the standard
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARD_H_
