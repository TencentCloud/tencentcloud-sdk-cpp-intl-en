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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULESUPLOADREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULESUPLOADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L7RuleEntry.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateL7RulesUpload request structure.
                */
                class CreateL7RulesUploadRequest : public AbstractModel
                {
                public:
                    CreateL7RulesUploadRequest();
                    ~CreateL7RulesUploadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Rule list
                     * @return Rules Rule list
                     * 
                     */
                    std::vector<L7RuleEntry> GetRules() const;

                    /**
                     * 设置Rule list
                     * @param _rules Rule list
                     * 
                     */
                    void SetRules(const std::vector<L7RuleEntry>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule list
                     */
                    std::vector<L7RuleEntry> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7RULESUPLOADREQUEST_H_
