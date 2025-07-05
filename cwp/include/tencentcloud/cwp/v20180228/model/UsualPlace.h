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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_USUALPLACE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_USUALPLACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Frequently used log-in location
                */
                class UsualPlace : public AbstractModel
                {
                public:
                    UsualPlace();
                    ~UsualPlace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CWPP client UUID
                     * @return Uuid CWPP client UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP client UUID
                     * @param _uuid CWPP client UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Country ID
                     * @return CountryId Country ID
                     * 
                     */
                    uint64_t GetCountryId() const;

                    /**
                     * 设置Country ID
                     * @param _countryId Country ID
                     * 
                     */
                    void SetCountryId(const uint64_t& _countryId);

                    /**
                     * 判断参数 CountryId 是否已赋值
                     * @return CountryId 是否已赋值
                     * 
                     */
                    bool CountryIdHasBeenSet() const;

                    /**
                     * 获取Province ID
                     * @return ProvinceId Province ID
                     * 
                     */
                    uint64_t GetProvinceId() const;

                    /**
                     * 设置Province ID
                     * @param _provinceId Province ID
                     * 
                     */
                    void SetProvinceId(const uint64_t& _provinceId);

                    /**
                     * 判断参数 ProvinceId 是否已赋值
                     * @return ProvinceId 是否已赋值
                     * 
                     */
                    bool ProvinceIdHasBeenSet() const;

                    /**
                     * 获取City ID
                     * @return CityId City ID
                     * 
                     */
                    uint64_t GetCityId() const;

                    /**
                     * 设置City ID
                     * @param _cityId City ID
                     * 
                     */
                    void SetCityId(const uint64_t& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWPP client UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Country ID
                     */
                    uint64_t m_countryId;
                    bool m_countryIdHasBeenSet;

                    /**
                     * Province ID
                     */
                    uint64_t m_provinceId;
                    bool m_provinceIdHasBeenSet;

                    /**
                     * City ID
                     */
                    uint64_t m_cityId;
                    bool m_cityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_USUALPLACE_H_
