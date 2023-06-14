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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPFIELD_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPFIELD_H_

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
                * IP information to be queried
                */
                class IpField : public AbstractModel
                {
                public:
                    IpField();
                    ~IpField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country/region of the IP
                     * @return Country Country/region of the IP
                     * 
                     */
                    bool GetCountry() const;

                    /**
                     * 设置Country/region of the IP
                     * @param _country Country/region of the IP
                     * 
                     */
                    void SetCountry(const bool& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Province/municipality/state of the IP
                     * @return Province Province/municipality/state of the IP
                     * 
                     */
                    bool GetProvince() const;

                    /**
                     * 设置Province/municipality/state of the IP
                     * @param _province Province/municipality/state of the IP
                     * 
                     */
                    void SetProvince(const bool& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取City of the IP
                     * @return City City of the IP
                     * 
                     */
                    bool GetCity() const;

                    /**
                     * 设置City of the IP
                     * @param _city City of the IP
                     * 
                     */
                    void SetCity(const bool& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取City district of the IP
                     * @return Region City district of the IP
                     * 
                     */
                    bool GetRegion() const;

                    /**
                     * 设置City district of the IP
                     * @param _region City district of the IP
                     * 
                     */
                    void SetRegion(const bool& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Access ISP field
                     * @return Isp Access ISP field
                     * 
                     */
                    bool GetIsp() const;

                    /**
                     * 设置Access ISP field
                     * @param _isp Access ISP field
                     * 
                     */
                    void SetIsp(const bool& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取ISP backbone network’s AS field
                     * @return AsName ISP backbone network’s AS field
                     * 
                     */
                    bool GetAsName() const;

                    /**
                     * 设置ISP backbone network’s AS field
                     * @param _asName ISP backbone network’s AS field
                     * 
                     */
                    void SetAsName(const bool& _asName);

                    /**
                     * 判断参数 AsName 是否已赋值
                     * @return AsName 是否已赋值
                     * 
                     */
                    bool AsNameHasBeenSet() const;

                    /**
                     * 获取Backbone AS ID
                     * @return AsId Backbone AS ID
                     * 
                     */
                    bool GetAsId() const;

                    /**
                     * 设置Backbone AS ID
                     * @param _asId Backbone AS ID
                     * 
                     */
                    void SetAsId(const bool& _asId);

                    /**
                     * 判断参数 AsId 是否已赋值
                     * @return AsId 是否已赋值
                     * 
                     */
                    bool AsIdHasBeenSet() const;

                    /**
                     * 获取Comment
                     * @return Comment Comment
                     * 
                     */
                    bool GetComment() const;

                    /**
                     * 设置Comment
                     * @param _comment Comment
                     * 
                     */
                    void SetComment(const bool& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Country/region of the IP
                     */
                    bool m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Province/municipality/state of the IP
                     */
                    bool m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City of the IP
                     */
                    bool m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * City district of the IP
                     */
                    bool m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Access ISP field
                     */
                    bool m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * ISP backbone network’s AS field
                     */
                    bool m_asName;
                    bool m_asNameHasBeenSet;

                    /**
                     * Backbone AS ID
                     */
                    bool m_asId;
                    bool m_asIdHasBeenSet;

                    /**
                     * Comment
                     */
                    bool m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPFIELD_H_
