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
                * Account factory baseline item.
                */
                class AccountFactoryItem : public AbstractModel
                {
                public:
                    AccountFactoryItem();
                    ~AccountFactoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @return Identifier Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @param _identifier Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
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
                     * 获取Baseline item name. specifies a unique name for the feature item. supports a combination of english letters, numbers, chinese characters, and symbols @, &, _, [, ], -. valid values: 1-25 chinese or english characters.
                     * @return Name Baseline item name. specifies a unique name for the feature item. supports a combination of english letters, numbers, chinese characters, and symbols @, &, _, [, ], -. valid values: 1-25 chinese or english characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Baseline item name. specifies a unique name for the feature item. supports a combination of english letters, numbers, chinese characters, and symbols @, &, _, [, ], -. valid values: 1-25 chinese or english characters.
                     * @param _name Baseline item name. specifies a unique name for the feature item. supports a combination of english letters, numbers, chinese characters, and symbols @, &, _, [, ], -. valid values: 1-25 chinese or english characters.
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
                     * 获取Baseline item english name. specifies a unique name for the baseline item. supports a combination of english letters, digits, spaces, and symbols @, &, _, [], -. valid values: 1-64 english characters.
                     * @return NameEn Baseline item english name. specifies a unique name for the baseline item. supports a combination of english letters, digits, spaces, and symbols @, &, _, [], -. valid values: 1-64 english characters.
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置Baseline item english name. specifies a unique name for the baseline item. supports a combination of english letters, digits, spaces, and symbols @, &, _, [], -. valid values: 1-64 english characters.
                     * @param _nameEn Baseline item english name. specifies a unique name for the baseline item. supports a combination of english letters, digits, spaces, and symbols @, &, _, [], -. valid values: 1-64 english characters.
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
                     * 获取Baseline item weight. the smaller the value, the higher the weight. value range equal to or greater than 0.
                     * @return Weight Baseline item weight. the smaller the value, the higher the weight. value range equal to or greater than 0.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Baseline item weight. the smaller the value, the higher the weight. value range equal to or greater than 0.
                     * @param _weight Baseline item weight. the smaller the value, the higher the weight. value range equal to or greater than 0.
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
                     * 获取Specifies whether the baseline item is required (1: required; 0: optional).
                     * @return Required Specifies whether the baseline item is required (1: required; 0: optional).
                     * 
                     */
                    int64_t GetRequired() const;

                    /**
                     * 设置Specifies whether the baseline item is required (1: required; 0: optional).
                     * @param _required Specifies whether the baseline item is required (1: required; 0: optional).
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
                     * 获取Baseline item dependency. value range of N depends on the count of other baseline items it relies on.
                     * @return DependsOn Baseline item dependency. value range of N depends on the count of other baseline items it relies on.
                     * 
                     */
                    std::vector<DependsOnItem> GetDependsOn() const;

                    /**
                     * 设置Baseline item dependency. value range of N depends on the count of other baseline items it relies on.
                     * @param _dependsOn Baseline item dependency. value range of N depends on the count of other baseline items it relies on.
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
                     * 获取Baseline description, with a length of 2 to 256 english or chinese characters. it is empty by default.
                     * @return Description Baseline description, with a length of 2 to 256 english or chinese characters. it is empty by default.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Baseline description, with a length of 2 to 256 english or chinese characters. it is empty by default.
                     * @param _description Baseline description, with a length of 2 to 256 english or chinese characters. it is empty by default.
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
                     * 获取Baseline item english description, with a length of 2 to 1024 english characters. it is empty by default.
                     * @return DescriptionEn Baseline item english description, with a length of 2 to 1024 english characters. it is empty by default.
                     * 
                     */
                    std::string GetDescriptionEn() const;

                    /**
                     * 设置Baseline item english description, with a length of 2 to 1024 english characters. it is empty by default.
                     * @param _descriptionEn Baseline item english description, with a length of 2 to 1024 english characters. it is empty by default.
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
                     * 获取Baseline classification. length: 2-32 english or chinese characters. values cannot be empty.
                     * @return Classify Baseline classification. length: 2-32 english or chinese characters. values cannot be empty.
                     * 
                     */
                    std::string GetClassify() const;

                    /**
                     * 设置Baseline classification. length: 2-32 english or chinese characters. values cannot be empty.
                     * @param _classify Baseline classification. length: 2-32 english or chinese characters. values cannot be empty.
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
                     * 获取Baseline english classification, with a length of 2-64 english characters. cannot be empty.
                     * @return ClassifyEn Baseline english classification, with a length of 2-64 english characters. cannot be empty.
                     * 
                     */
                    std::string GetClassifyEn() const;

                    /**
                     * 设置Baseline english classification, with a length of 2-64 english characters. cannot be empty.
                     * @param _classifyEn Baseline english classification, with a length of 2-64 english characters. cannot be empty.
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
                     * Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Baseline item name. specifies a unique name for the feature item. supports a combination of english letters, numbers, chinese characters, and symbols @, &, _, [, ], -. valid values: 1-25 chinese or english characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Baseline item english name. specifies a unique name for the baseline item. supports a combination of english letters, digits, spaces, and symbols @, &, _, [], -. valid values: 1-64 english characters.
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * Baseline item weight. the smaller the value, the higher the weight. value range equal to or greater than 0.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Specifies whether the baseline item is required (1: required; 0: optional).
                     */
                    int64_t m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * Baseline item dependency. value range of N depends on the count of other baseline items it relies on.
                     */
                    std::vector<DependsOnItem> m_dependsOn;
                    bool m_dependsOnHasBeenSet;

                    /**
                     * Baseline description, with a length of 2 to 256 english or chinese characters. it is empty by default.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Baseline item english description, with a length of 2 to 1024 english characters. it is empty by default.
                     */
                    std::string m_descriptionEn;
                    bool m_descriptionEnHasBeenSet;

                    /**
                     * Baseline classification. length: 2-32 english or chinese characters. values cannot be empty.
                     */
                    std::string m_classify;
                    bool m_classifyHasBeenSet;

                    /**
                     * Baseline english classification, with a length of 2-64 english characters. cannot be empty.
                     */
                    std::string m_classifyEn;
                    bool m_classifyEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_ACCOUNTFACTORYITEM_H_
