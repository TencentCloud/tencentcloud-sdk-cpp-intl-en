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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_COUNTRY_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_COUNTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Country/Region information
                */
                class Country : public AbstractModel
                {
                public:
                    Country();
                    ~Country() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country/Region ID
                     * @return CountryId Country/Region ID
                     * 
                     */
                    std::string GetCountryId() const;

                    /**
                     * 设置Country/Region ID
                     * @param _countryId Country/Region ID
                     * 
                     */
                    void SetCountryId(const std::string& _countryId);

                    /**
                     * 判断参数 CountryId 是否已赋值
                     * @return CountryId 是否已赋值
                     * 
                     */
                    bool CountryIdHasBeenSet() const;

                    /**
                     * 获取Country/Region name
                     * @return CountryName Country/Region name
                     * 
                     */
                    std::string GetCountryName() const;

                    /**
                     * 设置Country/Region name
                     * @param _countryName Country/Region name
                     * 
                     */
                    void SetCountryName(const std::string& _countryName);

                    /**
                     * 判断参数 CountryName 是否已赋值
                     * @return CountryName 是否已赋值
                     * 
                     */
                    bool CountryNameHasBeenSet() const;

                private:

                    /**
                     * Country/Region ID
                     */
                    std::string m_countryId;
                    bool m_countryIdHasBeenSet;

                    /**
                     * Country/Region name
                     */
                    std::string m_countryName;
                    bool m_countryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_COUNTRY_H_
