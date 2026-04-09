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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICYNODE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Enterprise organization policy list.
                */
                class ListPolicyNode : public AbstractModel
                {
                public:
                    ListPolicyNode();
                    ~ListPolicyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy creation time.
                     * @return AddTime Policy creation time.
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Policy creation time.
                     * @param _addTime Policy creation time.
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Policy binding count.
                     * @return AttachedTimes Policy binding count.
                     * 
                     */
                    uint64_t GetAttachedTimes() const;

                    /**
                     * 设置Policy binding count.
                     * @param _attachedTimes Policy binding count.
                     * 
                     */
                    void SetAttachedTimes(const uint64_t& _attachedTimes);

                    /**
                     * 判断参数 AttachedTimes 是否已赋值
                     * @return AttachedTimes 是否已赋值
                     * 
                     */
                    bool AttachedTimesHasBeenSet() const;

                    /**
                     * 获取Policy description information.
                     * @return Description Policy description information.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description information.
                     * @param _description Policy description information.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Policy name.
                     * @return PolicyName Policy name.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name.
                     * @param _policyName Policy name.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy update time
                     * @return UpdateTime Policy update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Policy update time
                     * @param _updateTime Policy update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Policy type. 1: custom; 2: preset.
                     * @return Type Policy type. 1: custom; 2: preset.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Policy type. 1: custom; 2: preset.
                     * @param _type Policy type. 1: custom; 2: preset.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Policy creation time.
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Policy binding count.
                     */
                    uint64_t m_attachedTimes;
                    bool m_attachedTimesHasBeenSet;

                    /**
                     * Policy description information.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Policy type. 1: custom; 2: preset.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPOLICYNODE_H_
