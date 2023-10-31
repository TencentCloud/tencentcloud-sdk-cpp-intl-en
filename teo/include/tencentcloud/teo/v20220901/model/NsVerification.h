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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_NSVERIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_NSVERIFICATION_H_

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
                * Information required for switching DNS servers. It's applicable to sites connected via NSs.
                */
                class NsVerification : public AbstractModel
                {
                public:
                    NsVerification();
                    ~NsVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The DNS server address assigned to the user when connecting a site to EO via NS. You need to switch the NameServer of the domain name to this address.
                     * @return NameServers The DNS server address assigned to the user when connecting a site to EO via NS. You need to switch the NameServer of the domain name to this address.
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置The DNS server address assigned to the user when connecting a site to EO via NS. You need to switch the NameServer of the domain name to this address.
                     * @param _nameServers The DNS server address assigned to the user when connecting a site to EO via NS. You need to switch the NameServer of the domain name to this address.
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                private:

                    /**
                     * The DNS server address assigned to the user when connecting a site to EO via NS. You need to switch the NameServer of the domain name to this address.
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_NSVERIFICATION_H_
