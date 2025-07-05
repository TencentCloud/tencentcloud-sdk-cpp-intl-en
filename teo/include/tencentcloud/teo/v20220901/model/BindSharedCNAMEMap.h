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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEMAP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEMAP_H_

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
                * Bindings between a shared CNAME and connected domain names
                */
                class BindSharedCNAMEMap : public AbstractModel
                {
                public:
                    BindSharedCNAMEMap();
                    ~BindSharedCNAMEMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The shared CNAME to be bound with or unbound from.
                     * @return SharedCNAME The shared CNAME to be bound with or unbound from.
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置The shared CNAME to be bound with or unbound from.
                     * @param _sharedCNAME The shared CNAME to be bound with or unbound from.
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                    /**
                     * 获取Acceleration domains (up to 20).
                     * @return DomainNames Acceleration domains (up to 20).
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置Acceleration domains (up to 20).
                     * @param _domainNames Acceleration domains (up to 20).
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                private:

                    /**
                     * The shared CNAME to be bound with or unbound from.
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * Acceleration domains (up to 20).
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEMAP_H_
