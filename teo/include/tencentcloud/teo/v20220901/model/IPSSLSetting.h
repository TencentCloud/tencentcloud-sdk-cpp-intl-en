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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLSETTING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLSETTING_H_

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
                * IP SSL configuration message
                */
                class IPSSLSetting : public AbstractModel
                {
                public:
                    IPSSLSetting();
                    ~IPSSLSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation type, values as follows: <li>bind: bind</li> <li>unbind: unbind</li>
                     * @return Operation Operation type, values as follows: <li>bind: bind</li> <li>unbind: unbind</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type, values as follows: <li>bind: bind</li> <li>unbind: unbind</li>
                     * @param _operation Operation type, values as follows: <li>bind: bind</li> <li>unbind: unbind</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Domain name of the IP SSL that should be bound.
                     * @return AssociatedDomain Domain name of the IP SSL that should be bound.
                     * 
                     */
                    std::string GetAssociatedDomain() const;

                    /**
                     * 设置Domain name of the IP SSL that should be bound.
                     * @param _associatedDomain Domain name of the IP SSL that should be bound.
                     * 
                     */
                    void SetAssociatedDomain(const std::string& _associatedDomain);

                    /**
                     * 判断参数 AssociatedDomain 是否已赋值
                     * @return AssociatedDomain 是否已赋值
                     * 
                     */
                    bool AssociatedDomainHasBeenSet() const;

                private:

                    /**
                     * Operation type, values as follows: <li>bind: bind</li> <li>unbind: unbind</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Domain name of the IP SSL that should be bound.
                     */
                    std::string m_associatedDomain;
                    bool m_associatedDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLSETTING_H_
