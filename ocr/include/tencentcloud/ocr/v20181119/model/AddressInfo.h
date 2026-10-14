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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ADDRESSINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ADDRESSINFO_H_

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
                * Overseas document recognition address information
                */
                class AddressInfo : public AbstractModel
                {
                public:
                    AddressInfo();
                    ~AddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Country</p>
                     * @return Country <p>Country</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>Country</p>
                     * @param _country <p>Country</p>
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
                     * 获取<p>Postal code</p>
                     * @return PostalCode <p>Postal code</p>
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置<p>Postal code</p>
                     * @param _postalCode <p>Postal code</p>
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
                     * 获取<p>Sub-region</p>
                     * @return Subdivision <p>Sub-region</p>
                     * 
                     */
                    std::string GetSubdivision() const;

                    /**
                     * 设置<p>Sub-region</p>
                     * @param _subdivision <p>Sub-region</p>
                     * 
                     */
                    void SetSubdivision(const std::string& _subdivision);

                    /**
                     * 判断参数 Subdivision 是否已赋值
                     * @return Subdivision 是否已赋值
                     * 
                     */
                    bool SubdivisionHasBeenSet() const;

                    /**
                     * 获取<p>District</p>
                     * @return District <p>District</p>
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置<p>District</p>
                     * @param _district <p>District</p>
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取<p>City</p>
                     * @return City <p>City</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>City</p>
                     * @param _city <p>City</p>
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
                     * 获取<p>Sub-district office</p>
                     * @return Subdistrict <p>Sub-district office</p>
                     * 
                     */
                    std::string GetSubdistrict() const;

                    /**
                     * 设置<p>Sub-district office</p>
                     * @param _subdistrict <p>Sub-district office</p>
                     * 
                     */
                    void SetSubdistrict(const std::string& _subdistrict);

                    /**
                     * 判断参数 Subdistrict 是否已赋值
                     * @return Subdistrict 是否已赋值
                     * 
                     */
                    bool SubdistrictHasBeenSet() const;

                    /**
                     * 获取<p>Complete address</p>
                     * @return FormattedAddress <p>Complete address</p>
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置<p>Complete address</p>
                     * @param _formattedAddress <p>Complete address</p>
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
                     * 获取<p>First line of the address bar</p>
                     * @return LineOne <p>First line of the address bar</p>
                     * 
                     */
                    std::string GetLineOne() const;

                    /**
                     * 设置<p>First line of the address bar</p>
                     * @param _lineOne <p>First line of the address bar</p>
                     * 
                     */
                    void SetLineOne(const std::string& _lineOne);

                    /**
                     * 判断参数 LineOne 是否已赋值
                     * @return LineOne 是否已赋值
                     * 
                     */
                    bool LineOneHasBeenSet() const;

                    /**
                     * 获取<p>Second line of the address bar</p>
                     * @return LineTwo <p>Second line of the address bar</p>
                     * 
                     */
                    std::string GetLineTwo() const;

                    /**
                     * 设置<p>Second line of the address bar</p>
                     * @param _lineTwo <p>Second line of the address bar</p>
                     * 
                     */
                    void SetLineTwo(const std::string& _lineTwo);

                    /**
                     * 判断参数 LineTwo 是否已赋值
                     * @return LineTwo 是否已赋值
                     * 
                     */
                    bool LineTwoHasBeenSet() const;

                    /**
                     * 获取<p>Third line of the address bar</p>
                     * @return LineThree <p>Third line of the address bar</p>
                     * 
                     */
                    std::string GetLineThree() const;

                    /**
                     * 设置<p>Third line of the address bar</p>
                     * @param _lineThree <p>Third line of the address bar</p>
                     * 
                     */
                    void SetLineThree(const std::string& _lineThree);

                    /**
                     * 判断参数 LineThree 是否已赋值
                     * @return LineThree 是否已赋值
                     * 
                     */
                    bool LineThreeHasBeenSet() const;

                    /**
                     * 获取<p>Fourth line of the address bar</p>
                     * @return LineFour <p>Fourth line of the address bar</p>
                     * 
                     */
                    std::string GetLineFour() const;

                    /**
                     * 设置<p>Fourth line of the address bar</p>
                     * @param _lineFour <p>Fourth line of the address bar</p>
                     * 
                     */
                    void SetLineFour(const std::string& _lineFour);

                    /**
                     * 判断参数 LineFour 是否已赋值
                     * @return LineFour 是否已赋值
                     * 
                     */
                    bool LineFourHasBeenSet() const;

                    /**
                     * 获取<p>Fifth line of the address bar</p>
                     * @return LineFive <p>Fifth line of the address bar</p>
                     * 
                     */
                    std::string GetLineFive() const;

                    /**
                     * 设置<p>Fifth line of the address bar</p>
                     * @param _lineFive <p>Fifth line of the address bar</p>
                     * 
                     */
                    void SetLineFive(const std::string& _lineFive);

                    /**
                     * 判断参数 LineFive 是否已赋值
                     * @return LineFive 是否已赋值
                     * 
                     */
                    bool LineFiveHasBeenSet() const;

                private:

                    /**
                     * <p>Country</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>Postal code</p>
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * <p>Sub-region</p>
                     */
                    std::string m_subdivision;
                    bool m_subdivisionHasBeenSet;

                    /**
                     * <p>District</p>
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * <p>City</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>Sub-district office</p>
                     */
                    std::string m_subdistrict;
                    bool m_subdistrictHasBeenSet;

                    /**
                     * <p>Complete address</p>
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * <p>First line of the address bar</p>
                     */
                    std::string m_lineOne;
                    bool m_lineOneHasBeenSet;

                    /**
                     * <p>Second line of the address bar</p>
                     */
                    std::string m_lineTwo;
                    bool m_lineTwoHasBeenSet;

                    /**
                     * <p>Third line of the address bar</p>
                     */
                    std::string m_lineThree;
                    bool m_lineThreeHasBeenSet;

                    /**
                     * <p>Fourth line of the address bar</p>
                     */
                    std::string m_lineFour;
                    bool m_lineFourHasBeenSet;

                    /**
                     * <p>Fifth line of the address bar</p>
                     */
                    std::string m_lineFive;
                    bool m_lineFiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ADDRESSINFO_H_
