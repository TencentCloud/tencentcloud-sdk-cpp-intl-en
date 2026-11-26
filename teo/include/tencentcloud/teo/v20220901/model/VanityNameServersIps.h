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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERSIPS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERSIPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom name server IP information
                */
                class VanityNameServersIps : public AbstractModel
                {
                public:
                    VanityNameServersIps();
                    ~VanityNameServersIps() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom name server name.
                     * @return Name Custom name server name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Custom name server name.
                     * @param _name Custom name server name.
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
                     * 获取Custom IPv4 address of the name server.
                     * @return IPv4 Custom IPv4 address of the name server.
                     * 
                     */
                    std::string GetIPv4() const;

                    /**
                     * 设置Custom IPv4 address of the name server.
                     * @param _iPv4 Custom IPv4 address of the name server.
                     * 
                     */
                    void SetIPv4(const std::string& _iPv4);

                    /**
                     * 判断参数 IPv4 是否已赋值
                     * @return IPv4 是否已赋值
                     * 
                     */
                    bool IPv4HasBeenSet() const;

                private:

                    /**
                     * Custom name server name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Custom IPv4 address of the name server.
                     */
                    std::string m_iPv4;
                    bool m_iPv4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERSIPS_H_
