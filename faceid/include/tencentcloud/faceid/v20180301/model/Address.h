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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ADDRESS_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ADDRESS_H_

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
                * 
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Nationality.
                     * @return Country Nationality.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Nationality.
                     * @param _country Nationality.
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
                     * 获取Post code.
                     * @return PostalCode Post code.
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置Post code.
                     * @param _postalCode Post code.
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
                     * 获取Subregion.
                     * @return Subdivision Subregion.
                     * 
                     */
                    std::string GetSubdivision() const;

                    /**
                     * 设置Subregion.
                     * @param _subdivision Subregion.
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
                     * 获取City.
                     * @return City City.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City.
                     * @param _city City.
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
                     * @return FormattedAddress Complete address.
                     * 
                     */
                    std::string GetFormattedAddress() const;

                    /**
                     * 设置Complete address.
                     * @param _formattedAddress Complete address.
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
                     * 获取The first line of address.
                     * @return LineOne The first line of address.
                     * 
                     */
                    std::string GetLineOne() const;

                    /**
                     * 设置The first line of address.
                     * @param _lineOne The first line of address.
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
                     * 获取The second line of address.
                     * @return LineTwo The second line of address.
                     * 
                     */
                    std::string GetLineTwo() const;

                    /**
                     * 设置The second line of address.
                     * @param _lineTwo The second line of address.
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
                     * 获取The third line of address.
                     * @return LineThree The third line of address.
                     * 
                     */
                    std::string GetLineThree() const;

                    /**
                     * 设置The third line of address.
                     * @param _lineThree The third line of address.
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
                     * 获取The fourth line of address.
                     * @return LineFour The fourth line of address.
                     * 
                     */
                    std::string GetLineFour() const;

                    /**
                     * 设置The fourth line of address.
                     * @param _lineFour The fourth line of address.
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
                     * 获取The fifth line of address.
                     * @return LineFive The fifth line of address.
                     * 
                     */
                    std::string GetLineFive() const;

                    /**
                     * 设置The fifth line of address.
                     * @param _lineFive The fifth line of address.
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
                     * Nationality.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Post code.
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * Subregion.
                     */
                    std::string m_subdivision;
                    bool m_subdivisionHasBeenSet;

                    /**
                     * City.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Complete address.
                     */
                    std::string m_formattedAddress;
                    bool m_formattedAddressHasBeenSet;

                    /**
                     * The first line of address.
                     */
                    std::string m_lineOne;
                    bool m_lineOneHasBeenSet;

                    /**
                     * The second line of address.
                     */
                    std::string m_lineTwo;
                    bool m_lineTwoHasBeenSet;

                    /**
                     * The third line of address.
                     */
                    std::string m_lineThree;
                    bool m_lineThreeHasBeenSet;

                    /**
                     * The fourth line of address.
                     */
                    std::string m_lineFour;
                    bool m_lineFourHasBeenSet;

                    /**
                     * The fifth line of address.
                     */
                    std::string m_lineFive;
                    bool m_lineFiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ADDRESS_H_
