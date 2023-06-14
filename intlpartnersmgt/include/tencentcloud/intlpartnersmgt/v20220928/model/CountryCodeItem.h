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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COUNTRYCODEITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COUNTRYCODEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Element type of the `GetCountryCodes` API
                */
                class CountryCodeItem : public AbstractModel
                {
                public:
                    CountryCodeItem();
                    ~CountryCodeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country/region name in English
                     * @return EnName Country/region name in English
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置Country/region name in English
                     * @param _enName Country/region name in English
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取Country/region name in Chinese
                     * @return Name Country/region name in Chinese
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Country/region name in Chinese
                     * @param _name Country/region name in Chinese
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
                     * 获取
                     * @return IOS2 
                     * 
                     */
                    std::string GetIOS2() const;

                    /**
                     * 设置
                     * @param _iOS2 
                     * 
                     */
                    void SetIOS2(const std::string& _iOS2);

                    /**
                     * 判断参数 IOS2 是否已赋值
                     * @return IOS2 是否已赋值
                     * 
                     */
                    bool IOS2HasBeenSet() const;

                    /**
                     * 获取
                     * @return IOS3 
                     * 
                     */
                    std::string GetIOS3() const;

                    /**
                     * 设置
                     * @param _iOS3 
                     * 
                     */
                    void SetIOS3(const std::string& _iOS3);

                    /**
                     * 判断参数 IOS3 是否已赋值
                     * @return IOS3 是否已赋值
                     * 
                     */
                    bool IOS3HasBeenSet() const;

                    /**
                     * 获取International dialing code
                     * @return Code International dialing code
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置International dialing code
                     * @param _code International dialing code
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * Country/region name in English
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * Country/region name in Chinese
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_iOS2;
                    bool m_iOS2HasBeenSet;

                    /**
                     * 
                     */
                    std::string m_iOS3;
                    bool m_iOS3HasBeenSet;

                    /**
                     * International dialing code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COUNTRYCODEITEM_H_
