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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALMLIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALMLIDCARD_H_

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
                * Malaysian identity card (mapped field result)
                */
                class NormalMLIDCard : public AbstractModel
                {
                public:
                    NormalMLIDCard();
                    ~NormalMLIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return FullName Name
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Name
                     * @param _fullName Name
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取Identity card number
                     * @return LicenseNumber Identity card number
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置Identity card number
                     * @param _licenseNumber Identity card number
                     * 
                     */
                    void SetLicenseNumber(const std::string& _licenseNumber);

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取Sex
                     * @return Sex Sex
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置Sex
                     * @param _sex Sex
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
                     * 获取Address.
                     * @return FormattedAddress Address.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Address.
                     * @param _formattedAddress Address.
                     * 
                     */
                    void SetFormattedAddress(const std::string& _formattedAddress);

                    /**
                     * 判断参数 FormattedAddress 是否已赋值
                     * @return FormattedAddress 是否已赋值
                     * 
                     */
                    bool FormattedAddressHasBeenSet() const;

                    /**
                     * 获取Document type
MyKad identity card
MyPR permanent residence permit
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD labor ID card
MyKid Juvenile ID card
                     * @return Type Document type
MyKad identity card
MyPR permanent residence permit
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD labor ID card
MyKid Juvenile ID card
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Document type
MyKad identity card
MyPR permanent residence permit
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD labor ID card
MyKid Juvenile ID card
                     * @param _type Document type
MyKad identity card
MyPR permanent residence permit
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD labor ID card
MyKid Juvenile ID card
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Date of birth (currently this field only supports IKAD labor ID card and MyKad ID card)
                     * @return Birthday Date of birth (currently this field only supports IKAD labor ID card and MyKad ID card)
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth (currently this field only supports IKAD labor ID card and MyKad ID card)
                     * @param _birthday Date of birth (currently this field only supports IKAD labor ID card and MyKad ID card)
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Identity card number
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Sex
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * Document type
MyKad identity card
MyPR permanent residence permit
MyTentera Military ID card
MyKAS Temporary ID card
POLIS Police ID card
IKAD labor ID card
MyKid Juvenile ID card
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Date of birth (currently this field only supports IKAD labor ID card and MyKad ID card)
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALMLIDCARD_H_
