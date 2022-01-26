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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CERTIDINSL7RULES_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CERTIDINSL7RULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InsL7Rules.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Set of rules configured for certificates
                */
                class CertIdInsL7Rules : public AbstractModel
                {
                public:
                    CertIdInsL7Rules();
                    ~CertIdInsL7Rules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of rules configured for certificates
                     * @return L7Rules List of rules configured for certificates
                     */
                    std::vector<InsL7Rules> GetL7Rules() const;

                    /**
                     * 设置List of rules configured for certificates
                     * @param L7Rules List of rules configured for certificates
                     */
                    void SetL7Rules(const std::vector<InsL7Rules>& _l7Rules);

                    /**
                     * 判断参数 L7Rules 是否已赋值
                     * @return L7Rules 是否已赋值
                     */
                    bool L7RulesHasBeenSet() const;

                    /**
                     * 获取Certificate ID
                     * @return CertId Certificate ID
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate ID
                     * @param CertId Certificate ID
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * List of rules configured for certificates
                     */
                    std::vector<InsL7Rules> m_l7Rules;
                    bool m_l7RulesHasBeenSet;

                    /**
                     * Certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CERTIDINSL7RULES_H_
