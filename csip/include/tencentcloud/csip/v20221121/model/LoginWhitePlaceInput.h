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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEPLACEINPUT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEPLACEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Common login location (input parameter)
                */
                class LoginWhitePlaceInput : public AbstractModel
                {
                public:
                    LoginWhitePlaceInput();
                    ~LoginWhitePlaceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Country ID. Currently, only 1 is supported, indicating China.</p>
                     * @return CountryId <p>Country ID. Currently, only 1 is supported, indicating China.</p>
                     * 
                     */
                    int64_t GetCountryId() const;

                    /**
                     * 设置<p>Country ID. Currently, only 1 is supported, indicating China.</p>
                     * @param _countryId <p>Country ID. Currently, only 1 is supported, indicating China.</p>
                     * 
                     */
                    void SetCountryId(const int64_t& _countryId);

                    /**
                     * 判断参数 CountryId 是否已赋值
                     * @return CountryId 是否已赋值
                     * 
                     */
                    bool CountryIdHasBeenSet() const;

                    /**
                     * 获取<p>Province ID; 99999 means all provinces</p>
                     * @return ProvinceId <p>Province ID; 99999 means all provinces</p>
                     * 
                     */
                    int64_t GetProvinceId() const;

                    /**
                     * 设置<p>Province ID; 99999 means all provinces</p>
                     * @param _provinceId <p>Province ID; 99999 means all provinces</p>
                     * 
                     */
                    void SetProvinceId(const int64_t& _provinceId);

                    /**
                     * 判断参数 ProvinceId 是否已赋值
                     * @return ProvinceId 是否已赋值
                     * 
                     */
                    bool ProvinceIdHasBeenSet() const;

                    /**
                     * 获取<p>City ID; 99999 means all cities</p>
                     * @return CityId <p>City ID; 99999 means all cities</p>
                     * 
                     */
                    int64_t GetCityId() const;

                    /**
                     * 设置<p>City ID; 99999 means all cities</p>
                     * @param _cityId <p>City ID; 99999 means all cities</p>
                     * 
                     */
                    void SetCityId(const int64_t& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                private:

                    /**
                     * <p>Country ID. Currently, only 1 is supported, indicating China.</p>
                     */
                    int64_t m_countryId;
                    bool m_countryIdHasBeenSet;

                    /**
                     * <p>Province ID; 99999 means all provinces</p>
                     */
                    int64_t m_provinceId;
                    bool m_provinceIdHasBeenSet;

                    /**
                     * <p>City ID; 99999 means all cities</p>
                     */
                    int64_t m_cityId;
                    bool m_cityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEPLACEINPUT_H_
