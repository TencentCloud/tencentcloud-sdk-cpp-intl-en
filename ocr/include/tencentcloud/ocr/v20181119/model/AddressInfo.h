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
                * Overseas document recognition address information.
                */
                class AddressInfo : public AbstractModel
                {
                public:
                    AddressInfo();
                    ~AddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Country Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _country Country.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Postal code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PostalCode Postal code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置Postal code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _postalCode Postal code.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the sub-region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Subdivision Specifies the sub-region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubdivision() const;

                    /**
                     * 设置Specifies the sub-region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subdivision Specifies the sub-region.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the city.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return City Specifies the city.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置Specifies the city.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _city Specifies the city.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Complete address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormattedAddress Complete address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Complete address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formattedAddress Complete address.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取First line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineOne First line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLineOne() const;

                    /**
                     * 设置First line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineOne First line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Second line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineTwo Second line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLineTwo() const;

                    /**
                     * 设置Second line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineTwo Second line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the third line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineThree Specifies the third line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLineThree() const;

                    /**
                     * 设置Specifies the third line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineThree Specifies the third line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the fourth line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineFour Specifies the fourth line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLineFour() const;

                    /**
                     * 设置Specifies the fourth line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineFour Specifies the fourth line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the fifth line in the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineFive Specifies the fifth line in the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLineFive() const;

                    /**
                     * 设置Specifies the fifth line in the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineFive Specifies the fifth line in the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Postal code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * Specifies the sub-region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subdivision;
                    bool m_subdivisionHasBeenSet;

                    /**
                     * Specifies the city.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Complete address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * First line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lineOne;
                    bool m_lineOneHasBeenSet;

                    /**
                     * Second line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lineTwo;
                    bool m_lineTwoHasBeenSet;

                    /**
                     * Specifies the third line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lineThree;
                    bool m_lineThreeHasBeenSet;

                    /**
                     * Specifies the fourth line of the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lineFour;
                    bool m_lineFourHasBeenSet;

                    /**
                     * Specifies the fifth line in the address bar.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lineFive;
                    bool m_lineFiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ADDRESSINFO_H_
