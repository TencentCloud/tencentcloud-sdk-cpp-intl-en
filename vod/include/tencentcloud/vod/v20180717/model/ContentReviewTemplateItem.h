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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PornConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/TerrorismConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/PoliticalConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/UserDefineConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio/Video Moderation Template Details
                */
                class ContentReviewTemplateItem : public AbstractModel
                {
                public:
                    ContentReviewTemplateItem();
                    ~ContentReviewTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of an audio and video review template.
                     * @return Definition Unique identifier of an audio and video review template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of an audio and video review template.
                     * @param _definition Unique identifier of an audio and video review template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Audio/video moderation template name. Length limit: 64 characters.
                     * @return Name Audio/video moderation template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Audio/video moderation template name. Length limit: 64 characters.
                     * @param _name Audio/video moderation template name. Length limit: 64 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of the audio and video review template, with a length limit of 256 characters.
                     * @return Comment Description of the audio and video review template, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of the audio and video review template, with a length limit of 256 characters.
                     * @param _comment Description of the audio and video review template, with a length limit of 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Authentication involves control parameters for offensive information.
                     * @return PornConfigure Authentication involves control parameters for offensive information.
                     * 
                     */
                    PornConfigureInfo GetPornConfigure() const;

                    /**
                     * 设置Authentication involves control parameters for offensive information.
                     * @param _pornConfigure Authentication involves control parameters for offensive information.
                     * 
                     */
                    void SetPornConfigure(const PornConfigureInfo& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     * 
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameters for authentication involving unsafe information.
                     * @return TerrorismConfigure Control parameters for authentication involving unsafe information.
                     * 
                     */
                    TerrorismConfigureInfo GetTerrorismConfigure() const;

                    /**
                     * 设置Control parameters for authentication involving unsafe information.
                     * @param _terrorismConfigure Control parameters for authentication involving unsafe information.
                     * 
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     * 
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameters for identifying inappropriate information.
                     * @return PoliticalConfigure Control parameters for identifying inappropriate information.
                     * 
                     */
                    PoliticalConfigureInfo GetPoliticalConfigure() const;

                    /**
                     * 设置Control parameters for identifying inappropriate information.
                     * @param _politicalConfigure Control parameters for identifying inappropriate information.
                     * 
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     * 
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取Prohibited control parameters. Restricted content includes:
<li>Abusive language;</li>
<li>Drug-related violation.</li>
                     * @return ProhibitedConfigure Prohibited control parameters. Restricted content includes:
<li>Abusive language;</li>
<li>Drug-related violation.</li>
                     * 
                     */
                    ProhibitedConfigureInfo GetProhibitedConfigure() const;

                    /**
                     * 设置Prohibited control parameters. Restricted content includes:
<li>Abusive language;</li>
<li>Drug-related violation.</li>
                     * @param _prohibitedConfigure Prohibited control parameters. Restricted content includes:
<li>Abusive language;</li>
<li>Drug-related violation.</li>
                     * 
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     * 
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取User-customized control parameters for audio/video moderation.
                     * @return UserDefineConfigure User-customized control parameters for audio/video moderation.
                     * 
                     */
                    UserDefineConfigureInfo GetUserDefineConfigure() const;

                    /**
                     * 设置User-customized control parameters for audio/video moderation.
                     * @param _userDefineConfigure User-customized control parameters for audio/video moderation.
                     * 
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     * 
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取Whether the audio/video moderation result enters the audio/video moderation wall (for manual review of the audio/video moderation result).
<li>ON: Yes;</li>
<li>OFF: No.</li>
                     * @return ReviewWallSwitch Whether the audio/video moderation result enters the audio/video moderation wall (for manual review of the audio/video moderation result).
<li>ON: Yes;</li>
<li>OFF: No.</li>
                     * 
                     */
                    std::string GetReviewWallSwitch() const;

                    /**
                     * 设置Whether the audio/video moderation result enters the audio/video moderation wall (for manual review of the audio/video moderation result).
<li>ON: Yes;</li>
<li>OFF: No.</li>
                     * @param _reviewWallSwitch Whether the audio/video moderation result enters the audio/video moderation wall (for manual review of the audio/video moderation result).
<li>ON: Yes;</li>
<li>OFF: No.</li>
                     * 
                     */
                    void SetReviewWallSwitch(const std::string& _reviewWallSwitch);

                    /**
                     * 判断参数 ReviewWallSwitch 是否已赋值
                     * @return ReviewWallSwitch 是否已赋值
                     * 
                     */
                    bool ReviewWallSwitchHasBeenSet() const;

                    /**
                     * 获取Frame interception interval in seconds. If not specified, the default frame interval is 1 second, with a minimum value of 0.5 seconds.
                     * @return ScreenshotInterval Frame interception interval in seconds. If not specified, the default frame interval is 1 second, with a minimum value of 0.5 seconds.
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame interception interval in seconds. If not specified, the default frame interval is 1 second, with a minimum value of 0.5 seconds.
                     * @param _screenshotInterval Frame interception interval in seconds. If not specified, the default frame interval is 1 second, with a minimum value of 0.5 seconds.
                     * 
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     * 
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of an audio and video review template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Audio/video moderation template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the audio and video review template, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Authentication involves control parameters for offensive information.
                     */
                    PornConfigureInfo m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * Control parameters for authentication involving unsafe information.
                     */
                    TerrorismConfigureInfo m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * Control parameters for identifying inappropriate information.
                     */
                    PoliticalConfigureInfo m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * Prohibited control parameters. Restricted content includes:
<li>Abusive language;</li>
<li>Drug-related violation.</li>
                     */
                    ProhibitedConfigureInfo m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * User-customized control parameters for audio/video moderation.
                     */
                    UserDefineConfigureInfo m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                    /**
                     * Whether the audio/video moderation result enters the audio/video moderation wall (for manual review of the audio/video moderation result).
<li>ON: Yes;</li>
<li>OFF: No.</li>
                     */
                    std::string m_reviewWallSwitch;
                    bool m_reviewWallSwitchHasBeenSet;

                    /**
                     * Frame interception interval in seconds. If not specified, the default frame interval is 1 second, with a minimum value of 0.5 seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
