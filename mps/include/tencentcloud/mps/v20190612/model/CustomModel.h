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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMMODEL_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMMODEL_H_

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
                * Product fission model info
                */
                class CustomModel : public AbstractModel
                {
                public:
                    CustomModel();
                    ~CustomModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Gender</p><p>Enumeration value:</p><ul><li>male: man</li><li>female: woman</li><li>any: unlimited</li></ul>
                     * @return Gender <p>Gender</p><p>Enumeration value:</p><ul><li>male: man</li><li>female: woman</li><li>any: unlimited</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>Gender</p><p>Enumeration value:</p><ul><li>male: man</li><li>female: woman</li><li>any: unlimited</li></ul>
                     * @param _gender <p>Gender</p><p>Enumeration value:</p><ul><li>male: man</li><li>female: woman</li><li>any: unlimited</li></ul>
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
                     * 获取<p>Age range.</p><p>Enumeration values:</p><ul><li>teen: youth</li><li>young_adult: adulthood</li><li>middle_aged: middle-aged</li><li>mature: mature</li></ul>
                     * @return Age <p>Age range.</p><p>Enumeration values:</p><ul><li>teen: youth</li><li>young_adult: adulthood</li><li>middle_aged: middle-aged</li><li>mature: mature</li></ul>
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置<p>Age range.</p><p>Enumeration values:</p><ul><li>teen: youth</li><li>young_adult: adulthood</li><li>middle_aged: middle-aged</li><li>mature: mature</li></ul>
                     * @param _age <p>Age range.</p><p>Enumeration values:</p><ul><li>teen: youth</li><li>young_adult: adulthood</li><li>middle_aged: middle-aged</li><li>mature: mature</li></ul>
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
                     * 获取<p>Appearance</p><p>Enumeration value:</p><ul><li>caucasian: White</li><li>asian: Asian</li><li>latino: Latino</li><li>african: African</li><li>middle_eastern: Middle Eastern</li></ul>
                     * @return Appearance <p>Appearance</p><p>Enumeration value:</p><ul><li>caucasian: White</li><li>asian: Asian</li><li>latino: Latino</li><li>african: African</li><li>middle_eastern: Middle Eastern</li></ul>
                     * 
                     */
                    std::string GetAppearance() const;

                    /**
                     * 设置<p>Appearance</p><p>Enumeration value:</p><ul><li>caucasian: White</li><li>asian: Asian</li><li>latino: Latino</li><li>african: African</li><li>middle_eastern: Middle Eastern</li></ul>
                     * @param _appearance <p>Appearance</p><p>Enumeration value:</p><ul><li>caucasian: White</li><li>asian: Asian</li><li>latino: Latino</li><li>african: African</li><li>middle_eastern: Middle Eastern</li></ul>
                     * 
                     */
                    void SetAppearance(const std::string& _appearance);

                    /**
                     * 判断参数 Appearance 是否已赋值
                     * @return Appearance 是否已赋值
                     * 
                     */
                    bool AppearanceHasBeenSet() const;

                    /**
                     * 获取<p>Body shape</p><p>Enumeration value:</p><ul><li>slim: Slim</li><li>standard: Standard</li><li>athletic: Healthy</li><li>chubby: Chubby</li></ul>
                     * @return BodyType <p>Body shape</p><p>Enumeration value:</p><ul><li>slim: Slim</li><li>standard: Standard</li><li>athletic: Healthy</li><li>chubby: Chubby</li></ul>
                     * 
                     */
                    std::string GetBodyType() const;

                    /**
                     * 设置<p>Body shape</p><p>Enumeration value:</p><ul><li>slim: Slim</li><li>standard: Standard</li><li>athletic: Healthy</li><li>chubby: Chubby</li></ul>
                     * @param _bodyType <p>Body shape</p><p>Enumeration value:</p><ul><li>slim: Slim</li><li>standard: Standard</li><li>athletic: Healthy</li><li>chubby: Chubby</li></ul>
                     * 
                     */
                    void SetBodyType(const std::string& _bodyType);

                    /**
                     * 判断参数 BodyType 是否已赋值
                     * @return BodyType 是否已赋值
                     * 
                     */
                    bool BodyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Gender</p><p>Enumeration value:</p><ul><li>male: man</li><li>female: woman</li><li>any: unlimited</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>Age range.</p><p>Enumeration values:</p><ul><li>teen: youth</li><li>young_adult: adulthood</li><li>middle_aged: middle-aged</li><li>mature: mature</li></ul>
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>Appearance</p><p>Enumeration value:</p><ul><li>caucasian: White</li><li>asian: Asian</li><li>latino: Latino</li><li>african: African</li><li>middle_eastern: Middle Eastern</li></ul>
                     */
                    std::string m_appearance;
                    bool m_appearanceHasBeenSet;

                    /**
                     * <p>Body shape</p><p>Enumeration value:</p><ul><li>slim: Slim</li><li>standard: Standard</li><li>athletic: Healthy</li><li>chubby: Chubby</li></ul>
                     */
                    std::string m_bodyType;
                    bool m_bodyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMMODEL_H_
