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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPEALINGSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPEALINGSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Configuration in appeal - Record whether each configuration item is in appeal
                */
                class AppealingStatus : public AbstractModel
                {
                public:
                    AppealingStatus();
                    ~AppealingStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the avatar is under appeal
                     * @return AvatarInAppeal Whether the avatar is under appeal
                     * 
                     */
                    bool GetAvatarInAppeal() const;

                    /**
                     * 设置Whether the avatar is under appeal
                     * @param _avatarInAppeal Whether the avatar is under appeal
                     * 
                     */
                    void SetAvatarInAppeal(const bool& _avatarInAppeal);

                    /**
                     * 判断参数 AvatarInAppeal 是否已赋值
                     * @return AvatarInAppeal 是否已赋值
                     * 
                     */
                    bool AvatarInAppealHasBeenSet() const;

                    /**
                     * 获取Is the fallback response included in the appeal?
                     * @return FallbackReplyInAppeal Is the fallback response included in the appeal?
                     * 
                     */
                    bool GetFallbackReplyInAppeal() const;

                    /**
                     * 设置Is the fallback response included in the appeal?
                     * @param _fallbackReplyInAppeal Is the fallback response included in the appeal?
                     * 
                     */
                    void SetFallbackReplyInAppeal(const bool& _fallbackReplyInAppeal);

                    /**
                     * 判断参数 FallbackReplyInAppeal 是否已赋值
                     * @return FallbackReplyInAppeal 是否已赋值
                     * 
                     */
                    bool FallbackReplyInAppealHasBeenSet() const;

                    /**
                     * 获取Whether the welcome message is required in an appeal
                     * @return GreetingInAppeal Whether the welcome message is required in an appeal
                     * 
                     */
                    bool GetGreetingInAppeal() const;

                    /**
                     * 设置Whether the welcome message is required in an appeal
                     * @param _greetingInAppeal Whether the welcome message is required in an appeal
                     * 
                     */
                    void SetGreetingInAppeal(const bool& _greetingInAppeal);

                    /**
                     * 判断参数 GreetingInAppeal 是否已赋值
                     * @return GreetingInAppeal 是否已赋值
                     * 
                     */
                    bool GreetingInAppealHasBeenSet() const;

                    /**
                     * 获取Whether the application name is under appeal
                     * @return NameInAppeal Whether the application name is under appeal
                     * 
                     */
                    bool GetNameInAppeal() const;

                    /**
                     * 设置Whether the application name is under appeal
                     * @param _nameInAppeal Whether the application name is under appeal
                     * 
                     */
                    void SetNameInAppeal(const bool& _nameInAppeal);

                    /**
                     * 判断参数 NameInAppeal 是否已赋值
                     * @return NameInAppeal 是否已赋值
                     * 
                     */
                    bool NameInAppealHasBeenSet() const;

                    /**
                     * 获取Whether the role description is in the appeal
                     * @return RoleInAppeal Whether the role description is in the appeal
                     * 
                     */
                    bool GetRoleInAppeal() const;

                    /**
                     * 设置Whether the role description is in the appeal
                     * @param _roleInAppeal Whether the role description is in the appeal
                     * 
                     */
                    void SetRoleInAppeal(const bool& _roleInAppeal);

                    /**
                     * 判断参数 RoleInAppeal 是否已赋值
                     * @return RoleInAppeal 是否已赋值
                     * 
                     */
                    bool RoleInAppealHasBeenSet() const;

                private:

                    /**
                     * Whether the avatar is under appeal
                     */
                    bool m_avatarInAppeal;
                    bool m_avatarInAppealHasBeenSet;

                    /**
                     * Is the fallback response included in the appeal?
                     */
                    bool m_fallbackReplyInAppeal;
                    bool m_fallbackReplyInAppealHasBeenSet;

                    /**
                     * Whether the welcome message is required in an appeal
                     */
                    bool m_greetingInAppeal;
                    bool m_greetingInAppealHasBeenSet;

                    /**
                     * Whether the application name is under appeal
                     */
                    bool m_nameInAppeal;
                    bool m_nameInAppealHasBeenSet;

                    /**
                     * Whether the role description is in the appeal
                     */
                    bool m_roleInAppeal;
                    bool m_roleInAppealHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPEALINGSTATUS_H_
