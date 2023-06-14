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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPGEOLOCATIONINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPGEOLOCATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * IP location
                */
                class IpGeolocationInfo : public AbstractModel
                {
                public:
                    IpGeolocationInfo();
                    ~IpGeolocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country/region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Country Country/region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Country/region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _country Country/region
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Province- or municipality-level administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Province Province- or municipality-level administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province- or municipality-level administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _province Province- or municipality-level administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Municipal administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return City Municipal administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置Municipal administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _city Municipal administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Urban area
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Region Urban area
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Urban area
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _region Urban area
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Access ISP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Isp Access ISP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置Access ISP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _isp Access ISP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取ISP backbone network’s AS name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AsName ISP backbone network’s AS name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAsName() const;

                    /**
                     * 设置ISP backbone network’s AS name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _asName ISP backbone network’s AS name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAsName(const std::string& _asName);

                    /**
                     * 判断参数 AsName 是否已赋值
                     * @return AsName 是否已赋值
                     * 
                     */
                    bool AsNameHasBeenSet() const;

                    /**
                     * 获取ISP backbone network’s AS ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AsId ISP backbone network’s AS ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAsId() const;

                    /**
                     * 设置ISP backbone network’s AS ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _asId ISP backbone network’s AS ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAsId(const std::string& _asId);

                    /**
                     * 判断参数 AsId 是否已赋值
                     * @return AsId 是否已赋值
                     * 
                     */
                    bool AsIdHasBeenSet() const;

                    /**
                     * 获取Comment. The APN value of mobile users is entered currently. If there is no APN attribute, this is `null`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Comment Comment. The APN value of mobile users is entered currently. If there is no APN attribute, this is `null`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Comment. The APN value of mobile users is entered currently. If there is no APN attribute, this is `null`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _comment Comment. The APN value of mobile users is entered currently. If there is no APN attribute, this is `null`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AddressIp IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _addressIp IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                private:

                    /**
                     * Country/region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Province- or municipality-level administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * Municipal administrative region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Urban area
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Access ISP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * ISP backbone network’s AS name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_asName;
                    bool m_asNameHasBeenSet;

                    /**
                     * ISP backbone network’s AS ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_asId;
                    bool m_asIdHasBeenSet;

                    /**
                     * Comment. The APN value of mobile users is entered currently. If there is no APN attribute, this is `null`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * IP address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPGEOLOCATIONINFO_H_
