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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGTARGET_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Call forwarding destination.
                */
                class ForwardingTarget : public AbstractModel
                {
                public:
                    ForwardingTarget();
                    ~ForwardingTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Call forwarding target type. valid values: 1 (agent), 2 (skill group), 3 (extension).
                     * @return Type Call forwarding target type. valid values: 1 (agent), 2 (skill group), 3 (extension).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Call forwarding target type. valid values: 1 (agent), 2 (skill group), 3 (extension).
                     * @param _type Call forwarding target type. valid values: 1 (agent), 2 (skill group), 3 (extension).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Specifies the agent account when the call forwarding target is set to agent and Type is 1.
                     * @return StaffUserId Specifies the agent account when the call forwarding target is set to agent and Type is 1.
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 设置Specifies the agent account when the call forwarding target is set to agent and Type is 1.
                     * @param _staffUserId Specifies the agent account when the call forwarding target is set to agent and Type is 1.
                     * 
                     */
                    void SetStaffUserId(const std::string& _staffUserId);

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取Specifies the ID of the skill group as the call forwarding target. fill when Type is 2.
                     * @return SkillGroupId Specifies the ID of the skill group as the call forwarding target. fill when Type is 2.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Specifies the ID of the skill group as the call forwarding target. fill when Type is 2.
                     * @param _skillGroupId Specifies the ID of the skill group as the call forwarding target. fill when Type is 2.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取The account to which the call is forwarded is an extension. fill when Type is 3.
                     * @return Extension The account to which the call is forwarded is an extension. fill when Type is 3.
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置The account to which the call is forwarded is an extension. fill when Type is 3.
                     * @param _extension The account to which the call is forwarded is an extension. fill when Type is 3.
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * Call forwarding target type. valid values: 1 (agent), 2 (skill group), 3 (extension).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the agent account when the call forwarding target is set to agent and Type is 1.
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * Specifies the ID of the skill group as the call forwarding target. fill when Type is 2.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * The account to which the call is forwarded is an extension. fill when Type is 3.
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGTARGET_H_
