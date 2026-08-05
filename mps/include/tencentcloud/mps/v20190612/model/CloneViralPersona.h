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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALPERSONA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALPERSONA_H_

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
                * Model appearance of hit product clone
                */
                class CloneViralPersona : public AbstractModel
                {
                public:
                    CloneViralPersona();
                    ~CloneViralPersona() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Model gender. Values: male/female/any</p>
                     * @return Gender <p>Model gender. Values: male/female/any</p>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>Model gender. Values: male/female/any</p>
                     * @param _gender <p>Model gender. Values: male/female/any</p>
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
                     * 获取<p>Age segment. Values: teenager/youth/middle_aged/senior</p>
                     * @return Age <p>Age segment. Values: teenager/youth/middle_aged/senior</p>
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置<p>Age segment. Values: teenager/youth/middle_aged/senior</p>
                     * @param _age <p>Age segment. Values: teenager/youth/middle_aged/senior</p>
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
                     * 获取<p>Appearance feature. Values: caucasian/asian/latino/african/middle_eastern</p>
                     * @return Ethnicity <p>Appearance feature. Values: caucasian/asian/latino/african/middle_eastern</p>
                     * 
                     */
                    std::string GetEthnicity() const;

                    /**
                     * 设置<p>Appearance feature. Values: caucasian/asian/latino/african/middle_eastern</p>
                     * @param _ethnicity <p>Appearance feature. Values: caucasian/asian/latino/african/middle_eastern</p>
                     * 
                     */
                    void SetEthnicity(const std::string& _ethnicity);

                    /**
                     * 判断参数 Ethnicity 是否已赋值
                     * @return Ethnicity 是否已赋值
                     * 
                     */
                    bool EthnicityHasBeenSet() const;

                    /**
                     * 获取<p>Body type. Values: slim / standard / athletic / chubby</p>
                     * @return BodyType <p>Body type. Values: slim / standard / athletic / chubby</p>
                     * 
                     */
                    std::string GetBodyType() const;

                    /**
                     * 设置<p>Body type. Values: slim / standard / athletic / chubby</p>
                     * @param _bodyType <p>Body type. Values: slim / standard / athletic / chubby</p>
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
                     * <p>Model gender. Values: male/female/any</p>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>Age segment. Values: teenager/youth/middle_aged/senior</p>
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>Appearance feature. Values: caucasian/asian/latino/african/middle_eastern</p>
                     */
                    std::string m_ethnicity;
                    bool m_ethnicityHasBeenSet;

                    /**
                     * <p>Body type. Values: slim / standard / athletic / chubby</p>
                     */
                    std::string m_bodyType;
                    bool m_bodyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALPERSONA_H_
