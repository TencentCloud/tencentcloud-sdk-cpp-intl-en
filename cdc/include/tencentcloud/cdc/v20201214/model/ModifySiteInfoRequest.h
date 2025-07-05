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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEINFOREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * ModifySiteInfo request structure.
                */
                class ModifySiteInfoRequest : public AbstractModel
                {
                public:
                    ModifySiteInfoRequest();
                    ~ModifySiteInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Equipment room ID
                     * @return SiteId Equipment room ID
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置Equipment room ID
                     * @param _siteId Equipment room ID
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取Site name
                     * @return Name Site name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Site name
                     * @param _name Site name
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
                     * 获取Site description
                     * @return Description Site description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Site description
                     * @param _description Site description
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
                     * 获取Note
                     * @return Note Note
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Note
                     * @param _note Note
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Country where the site is located
                     * @return Country Country where the site is located
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Country where the site is located
                     * @param _country Country where the site is located
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Province where the site is located
                     * @return Province Province where the site is located
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province where the site is located
                     * @param _province Province where the site is located
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取City where the site is located
                     * @return City City where the site is located
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City where the site is located
                     * @param _city City where the site is located
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Postal code of the site area
                     * @return PostalCode Postal code of the site area
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置Postal code of the site area
                     * @param _postalCode Postal code of the site area
                     * 
                     */
                    void SetPostalCode(const std::string& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     * 
                     */
                    bool PostalCodeHasBeenSet() const;

                    /**
                     * 获取Detailed address of the site
                     * @return AddressLine Detailed address of the site
                     * 
                     */
                    std::string GetAddressLine() const;

                    /**
                     * 设置Detailed address of the site
                     * @param _addressLine Detailed address of the site
                     * 
                     */
                    void SetAddressLine(const std::string& _addressLine);

                    /**
                     * 判断参数 AddressLine 是否已赋值
                     * @return AddressLine 是否已赋值
                     * 
                     */
                    bool AddressLineHasBeenSet() const;

                private:

                    /**
                     * Equipment room ID
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Site description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Note
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Country where the site is located
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Province where the site is located
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City where the site is located
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Postal code of the site area
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * Detailed address of the site
                     */
                    std::string m_addressLine;
                    bool m_addressLineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYSITEINFOREQUEST_H_
