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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPADVANCEDCONF_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPADVANCEDCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DialogCustomConfig.h>
#include <tencentcloud/adp/v20260520/model/IntentAchievementInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Advanced app configuration
                */
                class AppAdvancedConf : public AbstractModel
                {
                public:
                    AppAdvancedConf();
                    ~AppAdvancedConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable context rewrite</p>
                     * @return EnableContextRewrite <p>Whether to enable context rewrite</p>
                     * 
                     */
                    bool GetEnableContextRewrite() const;

                    /**
                     * 设置<p>Whether to enable context rewrite</p>
                     * @param _enableContextRewrite <p>Whether to enable context rewrite</p>
                     * 
                     */
                    void SetEnableContextRewrite(const bool& _enableContextRewrite);

                    /**
                     * 判断参数 EnableContextRewrite 是否已赋值
                     * @return EnableContextRewrite 是否已赋值
                     * 
                     */
                    bool EnableContextRewriteHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable image and text retrieval.</p>
                     * @return EnableImageTextRetrieval <p>Whether to enable image and text retrieval.</p>
                     * 
                     */
                    bool GetEnableImageTextRetrieval() const;

                    /**
                     * 设置<p>Whether to enable image and text retrieval.</p>
                     * @param _enableImageTextRetrieval <p>Whether to enable image and text retrieval.</p>
                     * 
                     */
                    void SetEnableImageTextRetrieval(const bool& _enableImageTextRetrieval);

                    /**
                     * 判断参数 EnableImageTextRetrieval 是否已赋值
                     * @return EnableImageTextRetrieval 是否已赋值
                     * 
                     */
                    bool EnableImageTextRetrievalHasBeenSet() const;

                    /**
                     * 获取<p>Reply flexibility</p>
                     * @return ReplyFlexibility <p>Reply flexibility</p>
                     * 
                     */
                    uint64_t GetReplyFlexibility() const;

                    /**
                     * 设置<p>Reply flexibility</p>
                     * @param _replyFlexibility <p>Reply flexibility</p>
                     * 
                     */
                    void SetReplyFlexibility(const uint64_t& _replyFlexibility);

                    /**
                     * 判断参数 ReplyFlexibility 是否已赋值
                     * @return ReplyFlexibility 是否已赋值
                     * 
                     */
                    bool ReplyFlexibilityHasBeenSet() const;

                    /**
                     * 获取<p>Custom configuration on the dialogue side (shared across all modes, with permission to modify configuration dynamically during a dialogue)</p>
                     * @return DialogCustomConfig <p>Custom configuration on the dialogue side (shared across all modes, with permission to modify configuration dynamically during a dialogue)</p>
                     * 
                     */
                    DialogCustomConfig GetDialogCustomConfig() const;

                    /**
                     * 设置<p>Custom configuration on the dialogue side (shared across all modes, with permission to modify configuration dynamically during a dialogue)</p>
                     * @param _dialogCustomConfig <p>Custom configuration on the dialogue side (shared across all modes, with permission to modify configuration dynamically during a dialogue)</p>
                     * 
                     */
                    void SetDialogCustomConfig(const DialogCustomConfig& _dialogCustomConfig);

                    /**
                     * 判断参数 DialogCustomConfig 是否已赋值
                     * @return DialogCustomConfig 是否已赋值
                     * 
                     */
                    bool DialogCustomConfigHasBeenSet() const;

                    /**
                     * 获取<p>Intent attainment priority</p>
                     * @return IntentAchievement <p>Intent attainment priority</p>
                     * 
                     */
                    std::vector<IntentAchievementInfo> GetIntentAchievement() const;

                    /**
                     * 设置<p>Intent attainment priority</p>
                     * @param _intentAchievement <p>Intent attainment priority</p>
                     * 
                     */
                    void SetIntentAchievement(const std::vector<IntentAchievementInfo>& _intentAchievement);

                    /**
                     * 判断参数 IntentAchievement 是否已赋值
                     * @return IntentAchievement 是否已赋值
                     * 
                     */
                    bool IntentAchievementHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable context rewrite</p>
                     */
                    bool m_enableContextRewrite;
                    bool m_enableContextRewriteHasBeenSet;

                    /**
                     * <p>Whether to enable image and text retrieval.</p>
                     */
                    bool m_enableImageTextRetrieval;
                    bool m_enableImageTextRetrievalHasBeenSet;

                    /**
                     * <p>Reply flexibility</p>
                     */
                    uint64_t m_replyFlexibility;
                    bool m_replyFlexibilityHasBeenSet;

                    /**
                     * <p>Custom configuration on the dialogue side (shared across all modes, with permission to modify configuration dynamically during a dialogue)</p>
                     */
                    DialogCustomConfig m_dialogCustomConfig;
                    bool m_dialogCustomConfigHasBeenSet;

                    /**
                     * <p>Intent attainment priority</p>
                     */
                    std::vector<IntentAchievementInfo> m_intentAchievement;
                    bool m_intentAchievementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPADVANCEDCONF_H_
