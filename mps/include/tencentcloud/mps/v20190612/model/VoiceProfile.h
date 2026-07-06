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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VOICEPROFILE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VOICEPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Voice attribute.
                */
                class VoiceProfile : public AbstractModel
                {
                public:
                    VoiceProfile();
                    ~VoiceProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Voice name.</p>
                     * @return Name <p>Voice name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Voice name.</p>
                     * @param _name <p>Voice name.</p>
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
                     * 获取<p>Voice description.</p>
                     * @return Description <p>Voice description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Voice description.</p>
                     * @param _description <p>Voice description.</p>
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
                     * 获取<p>Gender.</p><p>Enumeration values:</p><ul><li>male: male</li><li>female: female</li><li>unknown: unknown</li></ul>
                     * @return Gender <p>Gender.</p><p>Enumeration values:</p><ul><li>male: male</li><li>female: female</li><li>unknown: unknown</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>Gender.</p><p>Enumeration values:</p><ul><li>male: male</li><li>female: female</li><li>unknown: unknown</li></ul>
                     * @param _gender <p>Gender.</p><p>Enumeration values:</p><ul><li>male: male</li><li>female: female</li><li>unknown: unknown</li></ul>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>Age.</p><p>Enumeration values:</p><ul><li>child: child</li><li>teenager: teenager</li><li>youth: youth</li><li>middle_aged: middle-aged</li><li>senior: senior</li><li>unknown: unknown</li></ul>
                     * @return Age <p>Age.</p><p>Enumeration values:</p><ul><li>child: child</li><li>teenager: teenager</li><li>youth: youth</li><li>middle_aged: middle-aged</li><li>senior: senior</li><li>unknown: unknown</li></ul>
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置<p>Age.</p><p>Enumeration values:</p><ul><li>child: child</li><li>teenager: teenager</li><li>youth: youth</li><li>middle_aged: middle-aged</li><li>senior: senior</li><li>unknown: unknown</li></ul>
                     * @param _age <p>Age.</p><p>Enumeration values:</p><ul><li>child: child</li><li>teenager: teenager</li><li>youth: youth</li><li>middle_aged: middle-aged</li><li>senior: senior</li><li>unknown: unknown</li></ul>
                     * 
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取<p>Language. Supported languages:<br>zh Chinese<br>en English<br>ja Japanese<br>de German<br>fr French<br>ko Korean<br>ru Russian<br>uk Ukrainian<br>pt Portuguese<br>it Italian<br>es Spanish<br>id Indonesian<br>nl Dutch<br>tr Turkish<br>fil Filipino<br>ms Malay<br>el Greek<br>fi Finnish<br>hr Croatian<br>sk Slovak<br>pl Polish<br>sv Swedish<br>hi Hindi<br>bg Bulgarian<br>ro Romanian<br>ar Arabic<br>cs Czech<br>da Danish<br>ta Tamil<br>hun Hungarian<br>vi Vietnamese<br>no Norwegian<br>yue Cantonese<br>th Thai<br>he Hebrew<br>ca Catalan<br>nn Nynorsk<br>af Afrikaans<br>fa Persian<br>sl Slovenian</p>
                     * @return Languages <p>Language. Supported languages:<br>zh Chinese<br>en English<br>ja Japanese<br>de German<br>fr French<br>ko Korean<br>ru Russian<br>uk Ukrainian<br>pt Portuguese<br>it Italian<br>es Spanish<br>id Indonesian<br>nl Dutch<br>tr Turkish<br>fil Filipino<br>ms Malay<br>el Greek<br>fi Finnish<br>hr Croatian<br>sk Slovak<br>pl Polish<br>sv Swedish<br>hi Hindi<br>bg Bulgarian<br>ro Romanian<br>ar Arabic<br>cs Czech<br>da Danish<br>ta Tamil<br>hun Hungarian<br>vi Vietnamese<br>no Norwegian<br>yue Cantonese<br>th Thai<br>he Hebrew<br>ca Catalan<br>nn Nynorsk<br>af Afrikaans<br>fa Persian<br>sl Slovenian</p>
                     * 
                     */
                    std::vector<std::string> GetLanguages() const;

                    /**
                     * 设置<p>Language. Supported languages:<br>zh Chinese<br>en English<br>ja Japanese<br>de German<br>fr French<br>ko Korean<br>ru Russian<br>uk Ukrainian<br>pt Portuguese<br>it Italian<br>es Spanish<br>id Indonesian<br>nl Dutch<br>tr Turkish<br>fil Filipino<br>ms Malay<br>el Greek<br>fi Finnish<br>hr Croatian<br>sk Slovak<br>pl Polish<br>sv Swedish<br>hi Hindi<br>bg Bulgarian<br>ro Romanian<br>ar Arabic<br>cs Czech<br>da Danish<br>ta Tamil<br>hun Hungarian<br>vi Vietnamese<br>no Norwegian<br>yue Cantonese<br>th Thai<br>he Hebrew<br>ca Catalan<br>nn Nynorsk<br>af Afrikaans<br>fa Persian<br>sl Slovenian</p>
                     * @param _languages <p>Language. Supported languages:<br>zh Chinese<br>en English<br>ja Japanese<br>de German<br>fr French<br>ko Korean<br>ru Russian<br>uk Ukrainian<br>pt Portuguese<br>it Italian<br>es Spanish<br>id Indonesian<br>nl Dutch<br>tr Turkish<br>fil Filipino<br>ms Malay<br>el Greek<br>fi Finnish<br>hr Croatian<br>sk Slovak<br>pl Polish<br>sv Swedish<br>hi Hindi<br>bg Bulgarian<br>ro Romanian<br>ar Arabic<br>cs Czech<br>da Danish<br>ta Tamil<br>hun Hungarian<br>vi Vietnamese<br>no Norwegian<br>yue Cantonese<br>th Thai<br>he Hebrew<br>ca Catalan<br>nn Nynorsk<br>af Afrikaans<br>fa Persian<br>sl Slovenian</p>
                     * 
                     */
                    void SetLanguages(const std::vector<std::string>& _languages);

                    /**
                     * 判断参数 Languages 是否已赋值
                     * @return Languages 是否已赋值
                     * 
                     */
                    bool LanguagesHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Labels <p>Tag.</p>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _labels <p>Tag.</p>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Scenario.</p>
                     * @return Scenes <p>Scenario.</p>
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置<p>Scenario.</p>
                     * @param _scenes <p>Scenario.</p>
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                private:

                    /**
                     * <p>Voice name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Voice description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Gender.</p><p>Enumeration values:</p><ul><li>male: male</li><li>female: female</li><li>unknown: unknown</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>Age.</p><p>Enumeration values:</p><ul><li>child: child</li><li>teenager: teenager</li><li>youth: youth</li><li>middle_aged: middle-aged</li><li>senior: senior</li><li>unknown: unknown</li></ul>
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>Language. Supported languages:<br>zh Chinese<br>en English<br>ja Japanese<br>de German<br>fr French<br>ko Korean<br>ru Russian<br>uk Ukrainian<br>pt Portuguese<br>it Italian<br>es Spanish<br>id Indonesian<br>nl Dutch<br>tr Turkish<br>fil Filipino<br>ms Malay<br>el Greek<br>fi Finnish<br>hr Croatian<br>sk Slovak<br>pl Polish<br>sv Swedish<br>hi Hindi<br>bg Bulgarian<br>ro Romanian<br>ar Arabic<br>cs Czech<br>da Danish<br>ta Tamil<br>hun Hungarian<br>vi Vietnamese<br>no Norwegian<br>yue Cantonese<br>th Thai<br>he Hebrew<br>ca Catalan<br>nn Nynorsk<br>af Afrikaans<br>fa Persian<br>sl Slovenian</p>
                     */
                    std::vector<std::string> m_languages;
                    bool m_languagesHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Scenario.</p>
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VOICEPROFILE_H_
