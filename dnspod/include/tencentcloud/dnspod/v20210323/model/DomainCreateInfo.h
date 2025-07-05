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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCREATEINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Domain information returned during domain creation
                */
                class DomainCreateInfo : public AbstractModel
                {
                public:
                    DomainCreateInfo();
                    ~DomainCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain ID
                     * @return Id Domain ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Domain ID
                     * @param _id Domain ID
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
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain Punycode
                     * @return Punycode Domain Punycode
                     * 
                     */
                    std::string GetPunycode() const;

                    /**
                     * 设置Domain Punycode
                     * @param _punycode Domain Punycode
                     * 
                     */
                    void SetPunycode(const std::string& _punycode);

                    /**
                     * 判断参数 Punycode 是否已赋值
                     * @return Punycode 是否已赋值
                     * 
                     */
                    bool PunycodeHasBeenSet() const;

                    /**
                     * 获取NS list of the domain
                     * @return GradeNsList NS list of the domain
                     * 
                     */
                    std::vector<std::string> GetGradeNsList() const;

                    /**
                     * 设置NS list of the domain
                     * @param _gradeNsList NS list of the domain
                     * 
                     */
                    void SetGradeNsList(const std::vector<std::string>& _gradeNsList);

                    /**
                     * 判断参数 GradeNsList 是否已赋值
                     * @return GradeNsList 是否已赋值
                     * 
                     */
                    bool GradeNsListHasBeenSet() const;

                private:

                    /**
                     * Domain ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain Punycode
                     */
                    std::string m_punycode;
                    bool m_punycodeHasBeenSet;

                    /**
                     * NS list of the domain
                     */
                    std::vector<std::string> m_gradeNsList;
                    bool m_gradeNsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCREATEINFO_H_
