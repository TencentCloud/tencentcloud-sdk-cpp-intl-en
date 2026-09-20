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
                * Philippines voter card
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
                     * @return VIN VIN of Philippines VoteID
                     * 
                     */
                    std::string GetVIN() const;

                    /**
                     * 设置VIN of Philippines VoteID
                     * @param _vIN VIN of Philippines VoteID
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
                     * 获取Name
                     * @return FirstName Name
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置Name
                     * @param _firstName Name
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
                     * @return LastName Last name
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置Last name
                     * @param _lastName Last name
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
                     * 获取Date of birth
                     * @return Birthday Date of birth
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth
                     * @param _birthday Date of birth
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
                     * 获取Marital status
                     * @return CivilStatus Marital status
                     * 
                     */
                    std::string GetCivilStatus() const;

                    /**
                     * 设置Marital status
                     * @param _civilStatus Marital status
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
                     * @return Citizenship Nationality
                     * 
                     */
                    std::string GetCitizenship() const;

                    /**
                     * 设置Nationality
                     * @param _citizenship Nationality
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
                     * 获取Region.
                     * @return PrecinctNo Region.
                     * 
                     */
                    std::string GetPrecinctNo() const;

                    /**
                     * 设置Region.
                     * @param _precinctNo Region.
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
                     */
                    std::string m_vIN;
                    bool m_vINHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Last name
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Marital status
                     */
                    std::string m_civilStatus;
                    bool m_civilStatusHasBeenSet;

                    /**
                     * Nationality
                     */
                    std::string m_citizenship;
                    bool m_citizenshipHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_precinctNo;
                    bool m_precinctNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESVOTEID_H_
