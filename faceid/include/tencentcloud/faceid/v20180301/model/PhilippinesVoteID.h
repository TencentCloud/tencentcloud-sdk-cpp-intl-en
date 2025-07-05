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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESVOTEID_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESVOTEID_H_

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
                * Philippines VoteID Card
                */
                class PhilippinesVoteID : public AbstractModel
                {
                public:
                    PhilippinesVoteID();
                    ~PhilippinesVoteID() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VIN of Philippines VoteID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VIN VIN of Philippines VoteID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVIN() const;

                    /**
                     * 设置VIN of Philippines VoteID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vIN VIN of Philippines VoteID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVIN(const std::string& _vIN);

                    /**
                     * 判断参数 VIN 是否已赋值
                     * @return VIN 是否已赋值
                     * 
                     */
                    bool VINHasBeenSet() const;

                    /**
                     * 获取First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstName First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstName First name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastName Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastName Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

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
                     * 获取Civil status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CivilStatus Civil status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCivilStatus() const;

                    /**
                     * 设置Civil status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _civilStatus Civil status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCivilStatus(const std::string& _civilStatus);

                    /**
                     * 判断参数 CivilStatus 是否已赋值
                     * @return CivilStatus 是否已赋值
                     * 
                     */
                    bool CivilStatusHasBeenSet() const;

                    /**
                     * 获取Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Citizenship Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCitizenship() const;

                    /**
                     * 设置Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _citizenship Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCitizenship(const std::string& _citizenship);

                    /**
                     * 判断参数 Citizenship 是否已赋值
                     * @return Citizenship 是否已赋值
                     * 
                     */
                    bool CitizenshipHasBeenSet() const;

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
                     * 获取Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrecinctNo Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrecinctNo() const;

                    /**
                     * 设置Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _precinctNo Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrecinctNo(const std::string& _precinctNo);

                    /**
                     * 判断参数 PrecinctNo 是否已赋值
                     * @return PrecinctNo 是否已赋值
                     * 
                     */
                    bool PrecinctNoHasBeenSet() const;

                private:

                    /**
                     * VIN of Philippines VoteID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vIN;
                    bool m_vINHasBeenSet;

                    /**
                     * First name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Last name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Civil status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_civilStatus;
                    bool m_civilStatusHasBeenSet;

                    /**
                     * Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_citizenship;
                    bool m_citizenshipHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_precinctNo;
                    bool m_precinctNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESVOTEID_H_
