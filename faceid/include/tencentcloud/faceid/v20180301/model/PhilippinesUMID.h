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
                * Philippines UMID Card
                */
                class PhilippinesUMID : public AbstractModel
                {
                public:
                    PhilippinesUMID();
                    ~PhilippinesUMID() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Surname
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Surname Surname
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSurname() const;

                    /**
                     * 设置Surname
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _surname Surname
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Middle Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiddleName Middle Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMiddleName() const;

                    /**
                     * 设置Middle Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _middleName Middle Name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GivenName First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGivenName() const;

                    /**
                     * 设置First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _givenName First name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sex Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sex Gender
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CRN code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CRN CRN code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCRN() const;

                    /**
                     * 设置CRN code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cRN CRN code
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Surname
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * Middle Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * First name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * CRN code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cRN;
                    bool m_cRNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESUMID_H_
