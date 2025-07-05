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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_RULEINSTANCERELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_RULEINSTANCERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Information of the Anti-DDoS instance using layer-4/7 forwarding rules
                */
                class RuleInstanceRelation : public AbstractModel
                {
                public:
                    RuleInstanceRelation();
                    ~RuleInstanceRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance IP
                     * @return EipList Instance IP
                     * 
                     */
                    std::vector<std::string> GetEipList() const;

                    /**
                     * 设置Instance IP
                     * @param _eipList Instance IP
                     * 
                     */
                    void SetEipList(const std::vector<std::string>& _eipList);

                    /**
                     * 判断参数 EipList 是否已赋值
                     * @return EipList 是否已赋值
                     * 
                     */
                    bool EipListHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance CNAME
                     * @return Cname Instance CNAME
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Instance CNAME
                     * @param _cname Instance CNAME
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                private:

                    /**
                     * Instance IP
                     */
                    std::vector<std::string> m_eipList;
                    bool m_eipListHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance CNAME
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_RULEINSTANCERELATION_H_
