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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHCREATEACLREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHCREATEACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/AclRuleInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * BatchCreateAcl request structure.
                */
                class BatchCreateAclRequest : public AbstractModel
                {
                public:
                    BatchCreateAclRequest();
                    ~BatchCreateAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取ACL resource type. Default value: `2` (topic).
                     * @return ResourceType ACL resource type. Default value: `2` (topic).
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置ACL resource type. Default value: `2` (topic).
                     * @param _resourceType ACL resource type. Default value: `2` (topic).
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource list array.
                     * @return ResourceNames Resource list array.
                     * 
                     */
                    std::vector<std::string> GetResourceNames() const;

                    /**
                     * 设置Resource list array.
                     * @param _resourceNames Resource list array.
                     * 
                     */
                    void SetResourceNames(const std::vector<std::string>& _resourceNames);

                    /**
                     * 判断参数 ResourceNames 是否已赋值
                     * @return ResourceNames 是否已赋值
                     * 
                     */
                    bool ResourceNamesHasBeenSet() const;

                    /**
                     * 获取ACL rule list.
                     * @return RuleList ACL rule list.
                     * 
                     */
                    std::vector<AclRuleInfo> GetRuleList() const;

                    /**
                     * 设置ACL rule list.
                     * @param _ruleList ACL rule list.
                     * 
                     */
                    void SetRuleList(const std::vector<AclRuleInfo>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL resource type. Default value: `2` (topic).
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource list array.
                     */
                    std::vector<std::string> m_resourceNames;
                    bool m_resourceNamesHasBeenSet;

                    /**
                     * ACL rule list.
                     */
                    std::vector<AclRuleInfo> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHCREATEACLREQUEST_H_
