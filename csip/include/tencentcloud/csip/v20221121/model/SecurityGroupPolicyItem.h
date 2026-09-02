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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SECURITYGROUPPOLICYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SECURITYGROUPPOLICYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Security group policy
                */
                class SecurityGroupPolicyItem : public AbstractModel
                {
                public:
                    SecurityGroupPolicyItem();
                    ~SecurityGroupPolicyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Port</p>
                     * @return Port <p>Port</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>Port</p>
                     * @param _port <p>Port</p>
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Policy.</p>
                     * @return Action <p>Policy.</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Policy.</p>
                     * @param _action <p>Policy.</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Protocol</p>
                     * @return Protocol <p>Protocol</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Protocol</p>
                     * @param _protocol <p>Protocol</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Access source</p>
                     * @return CidrBlock <p>Access source</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>Access source</p>
                     * @param _cidrBlock <p>Access source</p>
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Priority</p><p>Unit: 1</p>
                     * @return Priority <p>Priority</p><p>Unit: 1</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>Priority</p><p>Unit: 1</p>
                     * @param _priority <p>Priority</p><p>Unit: 1</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * <p>Port</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Policy.</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Protocol</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Access source</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Priority</p><p>Unit: 1</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SECURITYGROUPPOLICYITEM_H_
