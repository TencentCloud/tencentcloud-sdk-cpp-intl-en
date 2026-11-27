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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_ACCOUNTFACTORYITEM_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_ACCOUNTFACTORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/DependsOnItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * Account Factory baseline items.
                */
                class AccountFactoryItem : public AbstractModel
                {
                public:
                    AccountFactoryItem();
                    ~AccountFactoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the Account Factory baseline item, which can contain only English letters, numbers, and symbols (@,._[]-:()+=), and must be 2 to 128 characters in length.
                     * @return Identifier Unique ID of the Account Factory baseline item, which can contain only English letters, numbers, and symbols (@,._[]-:()+=), and must be 2 to 128 characters in length.
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Unique ID of the Account Factory baseline item, which can contain only English letters, numbers, and symbols (@,._[]-:()+=), and must be 2 to 128 characters in length.
                     * @param _identifier Unique ID of the Account Factory baseline item, which can contain only English letters, numbers, and symbols (@,._[]-:()+=), and must be 2 to 128 characters in length.
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取Baseline item name, which is unique, supports only the combination of English letters, digits, and symbols (@&_[]-), and is 1 to 25 characters in length.
                     * @return Name Baseline item name, which is unique, supports only the combination of English letters, digits, and symbols (@&_[]-), and is 1 to 25 characters in length.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Baseline item name, which is unique, supports only the combination of English letters, digits, and symbols (@&_[]-), and is 1 to 25 characters in length.
                     * @param _name Baseline item name, which is unique, supports only the combination of English letters, digits, and symbols (@&_[]-), and is 1 to 25 characters in length.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Baseline item English name, which must be unique, can contain only English letters, numbers, spaces, and symbols (@&_[]-), and must be 1 to 64 characters in length.
                     * @return NameEn Baseline item English name, which must be unique, can contain only English letters, numbers, spaces, and symbols (@&_[]-), and must be 1 to 64 characters in length.
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置Baseline item English name, which must be unique, can contain only English letters, numbers, spaces, and symbols (@&_[]-), and must be 1 to 64 characters in length.
                     * @param _nameEn Baseline item English name, which must be unique, can contain only English letters, numbers, spaces, and symbols (@&_[]-), and must be 1 to 64 characters in length.
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取Baseline item weight. A smaller value indicates a higher priority. Value range: greater than or equal to 0.
                     * @return Weight Baseline item weight. A smaller value indicates a higher priority. Value range: greater than or equal to 0.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Baseline item weight. A smaller value indicates a higher priority. Value range: greater than or equal to 0.
                     * @param _weight Baseline item weight. A smaller value indicates a higher priority. Value range: greater than or equal to 0.
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Whether the baseline item is required. Valid values: 1 (yes) and 0 (no).
                     * @return Required Whether the baseline item is required. Valid values: 1 (yes) and 0 (no).
                     * 
                     */
                    int64_t GetRequired() const;

                    /**
                     * 设置Whether the baseline item is required. Valid values: 1 (yes) and 0 (no).
                     * @param _required Whether the baseline item is required. Valid values: 1 (yes) and 0 (no).
                     * 
                     */
                    void SetRequired(const int64_t& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取Baseline item dependencies. The value range of N depends on the number of other baseline items that the current baseline item depends on.
                     * @return DependsOn Baseline item dependencies. The value range of N depends on the number of other baseline items that the current baseline item depends on.
                     * 
                     */
                    std::vector<DependsOnItem> GetDependsOn() const;

                    /**
                     * 设置Baseline item dependencies. The value range of N depends on the number of other baseline items that the current baseline item depends on.
                     * @param _dependsOn Baseline item dependencies. The value range of N depends on the number of other baseline items that the current baseline item depends on.
                     * 
                     */
                    void SetDependsOn(const std::vector<DependsOnItem>& _dependsOn);

                    /**
                     * 判断参数 DependsOn 是否已赋值
                     * @return DependsOn 是否已赋值
                     * 
                     */
                    bool DependsOnHasBeenSet() const;

                    /**
                     * 获取Baseline description, which is 2 to 256 English characters in length. The default value is empty.
                     * @return Description Baseline description, which is 2 to 256 English characters in length. The default value is empty.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Baseline description, which is 2 to 256 English characters in length. The default value is empty.
                     * @param _description Baseline description, which is 2 to 256 English characters in length. The default value is empty.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Baseline item English description, which is 2 to 1024 English characters in length. The default value is empty.
                     * @return DescriptionEn Baseline item English description, which is 2 to 1024 English characters in length. The default value is empty.
                     * 
                     */
                    std::string GetDescriptionEn() const;

                    /**
                     * 设置Baseline item English description, which is 2 to 1024 English characters in length. The default value is empty.
                     * @param _descriptionEn Baseline item English description, which is 2 to 1024 English characters in length. The default value is empty.
                     * 
                     */
                    void SetDescriptionEn(const std::string& _descriptionEn);

                    /**
                     * 判断参数 DescriptionEn 是否已赋值
                     * @return DescriptionEn 是否已赋值
                     * 
                     */
                    bool DescriptionEnHasBeenSet() const;

                    /**
                     * 获取Baseline category, which is 2 to 32 English characters in length and cannot be empty.
                     * @return Classify Baseline category, which is 2 to 32 English characters in length and cannot be empty.
                     * 
                     */
                    std::string GetClassify() const;

                    /**
                     * 设置Baseline category, which is 2 to 32 English characters in length and cannot be empty.
                     * @param _classify Baseline category, which is 2 to 32 English characters in length and cannot be empty.
                     * 
                     */
                    void SetClassify(const std::string& _classify);

                    /**
                     * 判断参数 Classify 是否已赋值
                     * @return Classify 是否已赋值
                     * 
                     */
                    bool ClassifyHasBeenSet() const;

                    /**
                     * 获取Baseline English category, which is 2 to 64 English characters in length and cannot be empty.
                     * @return ClassifyEn Baseline English category, which is 2 to 64 English characters in length and cannot be empty.
                     * 
                     */
                    std::string GetClassifyEn() const;

                    /**
                     * 设置Baseline English category, which is 2 to 64 English characters in length and cannot be empty.
                     * @param _classifyEn Baseline English category, which is 2 to 64 English characters in length and cannot be empty.
                     * 
                     */
                    void SetClassifyEn(const std::string& _classifyEn);

                    /**
                     * 判断参数 ClassifyEn 是否已赋值
                     * @return ClassifyEn 是否已赋值
                     * 
                     */
                    bool ClassifyEnHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the Account Factory baseline item, which can contain only English letters, numbers, and symbols (@,._[]-:()+=), and must be 2 to 128 characters in length.
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Baseline item name, which is unique, supports only the combination of English letters, digits, and symbols (@&_[]-), and is 1 to 25 characters in length.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Baseline item English name, which must be unique, can contain only English letters, numbers, spaces, and symbols (@&_[]-), and must be 1 to 64 characters in length.
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * Baseline item weight. A smaller value indicates a higher priority. Value range: greater than or equal to 0.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Whether the baseline item is required. Valid values: 1 (yes) and 0 (no).
                     */
                    int64_t m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * Baseline item dependencies. The value range of N depends on the number of other baseline items that the current baseline item depends on.
                     */
                    std::vector<DependsOnItem> m_dependsOn;
                    bool m_dependsOnHasBeenSet;

                    /**
                     * Baseline description, which is 2 to 256 English characters in length. The default value is empty.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Baseline item English description, which is 2 to 1024 English characters in length. The default value is empty.
                     */
                    std::string m_descriptionEn;
                    bool m_descriptionEnHasBeenSet;

                    /**
                     * Baseline category, which is 2 to 32 English characters in length and cannot be empty.
                     */
                    std::string m_classify;
                    bool m_classifyHasBeenSet;

                    /**
                     * Baseline English category, which is 2 to 64 English characters in length and cannot be empty.
                     */
                    std::string m_classifyEn;
                    bool m_classifyEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_ACCOUNTFACTORYITEM_H_
