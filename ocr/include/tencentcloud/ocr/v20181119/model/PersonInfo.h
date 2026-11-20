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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PERSONINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Information of the inquirer
                */
                class PersonInfo : public AbstractModel
                {
                public:
                    PersonInfo();
                    ~PersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the inquirer
                     * @return Name Name of the inquirer
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the inquirer
                     * @param _name Name of the inquirer
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
                     * 获取Gender
                     * @return Gender Gender
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置Gender
                     * @param _gender Gender
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
                     * 获取Date of birth
                     * @return BirthDate Date of birth
                     * 
                     */
                    std::string GetBirthDate() const;

                    /**
                     * 设置Date of birth
                     * @param _birthDate Date of birth
                     * 
                     */
                    void SetBirthDate(const std::string& _birthDate);

                    /**
                     * 判断参数 BirthDate 是否已赋值
                     * @return BirthDate 是否已赋值
                     * 
                     */
                    bool BirthDateHasBeenSet() const;

                    /**
                     * 获取Citizen ID number
                     * @return IdCardNo Citizen ID number
                     * 
                     */
                    std::string GetIdCardNo() const;

                    /**
                     * 设置Citizen ID number
                     * @param _idCardNo Citizen ID number
                     * 
                     */
                    void SetIdCardNo(const std::string& _idCardNo);

                    /**
                     * 判断参数 IdCardNo 是否已赋值
                     * @return IdCardNo 是否已赋值
                     * 
                     */
                    bool IdCardNoHasBeenSet() const;

                private:

                    /**
                     * Name of the inquirer
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthDate;
                    bool m_birthDateHasBeenSet;

                    /**
                     * Citizen ID number
                     */
                    std::string m_idCardNo;
                    bool m_idCardNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PERSONINFO_H_
