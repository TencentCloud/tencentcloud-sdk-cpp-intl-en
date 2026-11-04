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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCLASSIFICATION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCLASSIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillClassification: Skill category and source information.
                */
                class SkillClassification : public AbstractModel
                {
                public:
                    SkillClassification();
                    ~SkillClassification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing type of a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Free |
| 1 | payment |
                     * @return BillingType Billing type of a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Free |
| 1 | payment |
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置Billing type of a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Free |
| 1 | payment |
                     * @param _billingType Billing type of a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Free |
| 1 | payment |
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取Built-in Skill source. This parameter is valid only when create_type is Skill_create_type_BUILTIN.

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | ADP proprietary |
| 2 | Tencent proprietary |
| 3 | SkillHub |
| 99 | Other |
                     * @return BuiltinSource Built-in Skill source. This parameter is valid only when create_type is Skill_create_type_BUILTIN.

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | ADP proprietary |
| 2 | Tencent proprietary |
| 3 | SkillHub |
| 99 | Other |
                     * 
                     */
                    int64_t GetBuiltinSource() const;

                    /**
                     * 设置Built-in Skill source. This parameter is valid only when create_type is Skill_create_type_BUILTIN.

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | ADP proprietary |
| 2 | Tencent proprietary |
| 3 | SkillHub |
| 99 | Other |
                     * @param _builtinSource Built-in Skill source. This parameter is valid only when create_type is Skill_create_type_BUILTIN.

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | ADP proprietary |
| 2 | Tencent proprietary |
| 3 | SkillHub |
| 99 | Other |
                     * 
                     */
                    void SetBuiltinSource(const int64_t& _builtinSource);

                    /**
                     * 判断参数 BuiltinSource 是否已赋值
                     * @return BuiltinSource 是否已赋值
                     * 
                     */
                    bool BuiltinSourceHasBeenSet() const;

                    /**
                     * 获取Skill category
                     * @return CategoryKey Skill category
                     * 
                     */
                    std::string GetCategoryKey() const;

                    /**
                     * 设置Skill category
                     * @param _categoryKey Skill category
                     * 
                     */
                    void SetCategoryKey(const std::string& _categoryKey);

                    /**
                     * 判断参数 CategoryKey 是否已赋值
                     * @return CategoryKey 是否已赋值
                     * 
                     */
                    bool CategoryKeyHasBeenSet() const;

                    /**
                     * 获取Ways to create a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | file upload |
2 | Generated by an enterprise-level shared process |
| 3 | AIGC generation |
| 99 | Built-in Skill |
                     * @return CreateType Ways to create a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | file upload |
2 | Generated by an enterprise-level shared process |
| 3 | AIGC generation |
| 99 | Built-in Skill |
                     * 
                     */
                    int64_t GetCreateType() const;

                    /**
                     * 设置Ways to create a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | file upload |
2 | Generated by an enterprise-level shared process |
| 3 | AIGC generation |
| 99 | Built-in Skill |
                     * @param _createType Ways to create a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | file upload |
2 | Generated by an enterprise-level shared process |
| 3 | AIGC generation |
| 99 | Built-in Skill |
                     * 
                     */
                    void SetCreateType(const int64_t& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     * 
                     */
                    bool CreateTypeHasBeenSet() const;

                    /**
                     * 获取Skill provider type

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Official |
| 2 | third party |
| 3 | Custom |
| 4 | Custom enterprise-level sharing |
                     * @return ProviderType Skill provider type

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Official |
| 2 | third party |
| 3 | Custom |
| 4 | Custom enterprise-level sharing |
                     * 
                     */
                    int64_t GetProviderType() const;

                    /**
                     * 设置Skill provider type

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Official |
| 2 | third party |
| 3 | Custom |
| 4 | Custom enterprise-level sharing |
                     * @param _providerType Skill provider type

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Official |
| 2 | third party |
| 3 | Custom |
| 4 | Custom enterprise-level sharing |
                     * 
                     */
                    void SetProviderType(const int64_t& _providerType);

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取Skill source link
                     * @return SourceLink Skill source link
                     * 
                     */
                    std::string GetSourceLink() const;

                    /**
                     * 设置Skill source link
                     * @param _sourceLink Skill source link
                     * 
                     */
                    void SetSourceLink(const std::string& _sourceLink);

                    /**
                     * 判断参数 SourceLink 是否已赋值
                     * @return SourceLink 是否已赋值
                     * 
                     */
                    bool SourceLinkHasBeenSet() const;

                private:

                    /**
                     * Billing type of a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Free |
| 1 | payment |
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * Built-in Skill source. This parameter is valid only when create_type is Skill_create_type_BUILTIN.

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | ADP proprietary |
| 2 | Tencent proprietary |
| 3 | SkillHub |
| 99 | Other |
                     */
                    int64_t m_builtinSource;
                    bool m_builtinSourceHasBeenSet;

                    /**
                     * Skill category
                     */
                    std::string m_categoryKey;
                    bool m_categoryKeyHasBeenSet;

                    /**
                     * Ways to create a Skill

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | file upload |
2 | Generated by an enterprise-level shared process |
| 3 | AIGC generation |
| 99 | Built-in Skill |
                     */
                    int64_t m_createType;
                    bool m_createTypeHasBeenSet;

                    /**
                     * Skill provider type

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Official |
| 2 | third party |
| 3 | Custom |
| 4 | Custom enterprise-level sharing |
                     */
                    int64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * Skill source link
                     */
                    std::string m_sourceLink;
                    bool m_sourceLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLCLASSIFICATION_H_
