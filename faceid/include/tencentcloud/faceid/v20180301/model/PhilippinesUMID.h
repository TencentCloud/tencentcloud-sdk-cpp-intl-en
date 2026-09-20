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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESUMID_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESUMID_H_

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
                * Philippines UMID
                */
                class PhilippinesUMID : public AbstractModel
                {
                public:
                    PhilippinesUMID();
                    ~PhilippinesUMID() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Last name
                     * @return Surname Last name
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置Last name
                     * @param _surname Last name
                     * 
                     */
                    void SetSurname(const std::string& _surname);

                    /**
                     * 判断参数 Surname 是否已赋值
                     * @return Surname 是否已赋值
                     * 
                     */
                    bool SurnameHasBeenSet() const;

                    /**
                     * 获取Middle name
                     * @return MiddleName Middle name
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置Middle name
                     * @param _middleName Middle name
                     * 
                     */
                    void SetMiddleName(const std::string& _middleName);

                    /**
                     * 判断参数 MiddleName 是否已赋值
                     * @return MiddleName 是否已赋值
                     * 
                     */
                    bool MiddleNameHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return GivenName Name
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置Name
                     * @param _givenName Name
                     * 
                     */
                    void SetGivenName(const std::string& _givenName);

                    /**
                     * 判断参数 GivenName 是否已赋值
                     * @return GivenName 是否已赋值
                     * 
                     */
                    bool GivenNameHasBeenSet() const;

                    /**
                     * 获取Address.
                     * @return Sex Address.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Address.
                     * @param _sex Address.
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Birthday
                     * @return Birthday Birthday
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday
                     * @param _birthday Birthday
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Address.
                     * @return Address Address.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address.
                     * @param _address Address.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取crn code
                     * @return CRN crn code
                     * 
                     */
                    std::string GetCRN() const;

                    /**
                     * 设置crn code
                     * @param _cRN crn code
                     * 
                     */
                    void SetCRN(const std::string& _cRN);

                    /**
                     * 判断参数 CRN 是否已赋值
                     * @return CRN 是否已赋值
                     * 
                     */
                    bool CRNHasBeenSet() const;

                private:

                    /**
                     * Last name
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * Middle name
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Birthday
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * crn code
                     */
                    std::string m_cRN;
                    bool m_cRNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESUMID_H_
