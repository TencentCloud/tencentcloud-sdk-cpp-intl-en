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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_NATIONCOUNTRYINNERINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_NATIONCOUNTRYINNERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Nearest access country/region details
                */
                class NationCountryInnerInfo : public AbstractModel
                {
                public:
                    NationCountryInnerInfo();
                    ~NationCountryInnerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country name
                     * @return NationCountryName Country name
                     * 
                     */
                    std::string GetNationCountryName() const;

                    /**
                     * 设置Country name
                     * @param _nationCountryName Country name
                     * 
                     */
                    void SetNationCountryName(const std::string& _nationCountryName);

                    /**
                     * 判断参数 NationCountryName 是否已赋值
                     * @return NationCountryName 是否已赋值
                     * 
                     */
                    bool NationCountryNameHasBeenSet() const;

                    /**
                     * 获取Country internal code
                     * @return NationCountryInnerCode Country internal code
                     * 
                     */
                    std::string GetNationCountryInnerCode() const;

                    /**
                     * 设置Country internal code
                     * @param _nationCountryInnerCode Country internal code
                     * 
                     */
                    void SetNationCountryInnerCode(const std::string& _nationCountryInnerCode);

                    /**
                     * 判断参数 NationCountryInnerCode 是否已赋值
                     * @return NationCountryInnerCode 是否已赋值
                     * 
                     */
                    bool NationCountryInnerCodeHasBeenSet() const;

                private:

                    /**
                     * Country name
                     */
                    std::string m_nationCountryName;
                    bool m_nationCountryNameHasBeenSet;

                    /**
                     * Country internal code
                     */
                    std::string m_nationCountryInnerCode;
                    bool m_nationCountryInnerCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_NATIONCOUNTRYINNERINFO_H_
