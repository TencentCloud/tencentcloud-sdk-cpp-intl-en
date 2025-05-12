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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYVERSIONINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * The proxy version information supported by TDSQL-C for MySQL.
                */
                class ProxyVersionInfo : public AbstractModel
                {
                public:
                    ProxyVersionInfo();
                    ~ProxyVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取proxy version number.
                     * @return ProxyVersion proxy version number.
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置proxy version number.
                     * @param _proxyVersion proxy version number.
                     * 
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取Version description: GA: stable version. BETA: BETA version. DEPRECATED: outdated.
                     * @return ProxyVersionType Version description: GA: stable version. BETA: BETA version. DEPRECATED: outdated.
                     * 
                     */
                    std::string GetProxyVersionType() const;

                    /**
                     * 设置Version description: GA: stable version. BETA: BETA version. DEPRECATED: outdated.
                     * @param _proxyVersionType Version description: GA: stable version. BETA: BETA version. DEPRECATED: outdated.
                     * 
                     */
                    void SetProxyVersionType(const std::string& _proxyVersionType);

                    /**
                     * 判断参数 ProxyVersionType 是否已赋值
                     * @return ProxyVersionType 是否已赋值
                     * 
                     */
                    bool ProxyVersionTypeHasBeenSet() const;

                private:

                    /**
                     * proxy version number.
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * Version description: GA: stable version. BETA: BETA version. DEPRECATED: outdated.
                     */
                    std::string m_proxyVersionType;
                    bool m_proxyVersionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYVERSIONINFO_H_
