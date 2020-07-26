/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                * Content audit template details
                */
                class ContentReviewTemplateItem : public AbstractModel
                {
                public:
                    ContentReviewTemplateItem();
                    ~ContentReviewTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of content audit template.
                     * @return Definition Unique ID of content audit template.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of content audit template.
                     * @param Definition Unique ID of content audit template.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Content audit template name. Length limit: 64 characters.
                     * @return Name Content audit template name. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Content audit template name. Length limit: 64 characters.
                     * @param Name Content audit template name. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Content audit template description. Length limit: 256 characters.
                     * @return Comment Content audit template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Content audit template description. Length limit: 256 characters.
                     * @param Comment Content audit template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Porn information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PornConfigure Porn information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PornConfigureInfo GetPornConfigure() const;

                    /**
                     * 设置Porn information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PornConfigure Porn information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPornConfigure(const PornConfigureInfo& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取Terrorism information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TerrorismConfigure Terrorism information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TerrorismConfigureInfo GetTerrorismConfigure() const;

                    /**
                     * 设置Terrorism information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TerrorismConfigure Terrorism information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取Politically sensitive information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PoliticalConfigure Politically sensitive information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalConfigureInfo GetPoliticalConfigure() const;

                    /**
                     * 设置Politically sensitive information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PoliticalConfigure Politically sensitive information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProhibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedConfigureInfo GetProhibitedConfigure() const;

                    /**
                     * 设置Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProhibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取Custom content audit control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserDefineConfigure Custom content audit control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    UserDefineConfigureInfo GetUserDefineConfigure() const;

                    /**
                     * 设置Custom content audit control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UserDefineConfigure Custom content audit control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取Switch controlling whether to add audit result to review list (for human review).
<li>ON: yes;</li>
<li>OFF: no.</li>
                     * @return ReviewWallSwitch Switch controlling whether to add audit result to review list (for human review).
<li>ON: yes;</li>
<li>OFF: no.</li>
                     */
                    std::string GetReviewWallSwitch() const;

                    /**
                     * 设置Switch controlling whether to add audit result to review list (for human review).
<li>ON: yes;</li>
<li>OFF: no.</li>
                     * @param ReviewWallSwitch Switch controlling whether to add audit result to review list (for human review).
<li>ON: yes;</li>
<li>OFF: no.</li>
                     */
                    void SetReviewWallSwitch(const std::string& _reviewWallSwitch);

                    /**
                     * 判断参数 ReviewWallSwitch 是否已赋值
                     * @return ReviewWallSwitch 是否已赋值
                     */
                    bool ReviewWallSwitchHasBeenSet() const;

                    /**
                     * 获取Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     * @return ScreenshotInterval Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     * @param ScreenshotInterval Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return CreateTime Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param CreateTime Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return UpdateTime Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param UpdateTime Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of content audit template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Content audit template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Content audit template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Porn information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PornConfigureInfo m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * Terrorism information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TerrorismConfigureInfo m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * Politically sensitive information detection control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PoliticalConfigureInfo m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedConfigureInfo m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * Custom content audit control parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    UserDefineConfigureInfo m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                    /**
                     * Switch controlling whether to add audit result to review list (for human review).
<li>ON: yes;</li>
<li>OFF: no.</li>
                     */
                    std::string m_reviewWallSwitch;
                    bool m_reviewWallSwitchHasBeenSet;

                    /**
                     * Frame capturing interval in seconds. If this parameter is left empty, 1 second will be used by default. Minimum value: 0.5 seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * Creation time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of template in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
