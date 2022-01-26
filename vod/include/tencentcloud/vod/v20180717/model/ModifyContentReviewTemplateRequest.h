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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TerrorismConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/PornConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/PoliticalConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/UserDefineConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyContentReviewTemplate request structure.
                */
                class ModifyContentReviewTemplateRequest : public AbstractModel
                {
                public:
                    ModifyContentReviewTemplateRequest();
                    ~ModifyContentReviewTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of an intelligent content recognition template.
                     * @return Definition Unique ID of an intelligent content recognition template.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of an intelligent content recognition template.
                     * @param Definition Unique ID of an intelligent content recognition template.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Name of an intelligent content recognition template. Length limit: 64 characters.
                     * @return Name Name of an intelligent content recognition template. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an intelligent content recognition template. Length limit: 64 characters.
                     * @param Name Name of an intelligent content recognition template. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of an intelligent content recognition template. Length limit: 256 characters.
                     * @return Comment Description of an intelligent content recognition template. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of an intelligent content recognition template. Length limit: 256 characters.
                     * @param Comment Description of an intelligent content recognition template. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Control parameter for terrorism information.
                     * @return TerrorismConfigure Control parameter for terrorism information.
                     */
                    TerrorismConfigureInfoForUpdate GetTerrorismConfigure() const;

                    /**
                     * 设置Control parameter for terrorism information.
                     * @param TerrorismConfigure Control parameter for terrorism information.
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfoForUpdate& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter for porn information.
                     * @return PornConfigure Control parameter for porn information.
                     */
                    PornConfigureInfoForUpdate GetPornConfigure() const;

                    /**
                     * 设置Control parameter for porn information.
                     * @param PornConfigure Control parameter for porn information.
                     */
                    void SetPornConfigure(const PornConfigureInfoForUpdate& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter for politically sensitive information.
                     * @return PoliticalConfigure Control parameter for politically sensitive information.
                     */
                    PoliticalConfigureInfoForUpdate GetPoliticalConfigure() const;

                    /**
                     * 设置Control parameter for politically sensitive information.
                     * @param PoliticalConfigure Control parameter for politically sensitive information.
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfoForUpdate& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
                     * @return ProhibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
                     */
                    ProhibitedConfigureInfoForUpdate GetProhibitedConfigure() const;

                    /**
                     * 设置Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
                     * @param ProhibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfoForUpdate& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter for custom intelligent content recognition tasks.
                     * @return UserDefineConfigure Control parameter for custom intelligent content recognition tasks.
                     */
                    UserDefineConfigureInfoForUpdate GetUserDefineConfigure() const;

                    /**
                     * 设置Control parameter for custom intelligent content recognition tasks.
                     * @param UserDefineConfigure Control parameter for custom intelligent content recognition tasks.
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfoForUpdate& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     * @return ScreenshotInterval Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     * @param ScreenshotInterval Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取Whether to allow the recognition result to enter the intelligent recognition platform (for human recognition).
<li>ON: yes</li>
<li>OFF: no</li>
                     * @return ReviewWallSwitch Whether to allow the recognition result to enter the intelligent recognition platform (for human recognition).
<li>ON: yes</li>
<li>OFF: no</li>
                     */
                    std::string GetReviewWallSwitch() const;

                    /**
                     * 设置Whether to allow the recognition result to enter the intelligent recognition platform (for human recognition).
<li>ON: yes</li>
<li>OFF: no</li>
                     * @param ReviewWallSwitch Whether to allow the recognition result to enter the intelligent recognition platform (for human recognition).
<li>ON: yes</li>
<li>OFF: no</li>
                     */
                    void SetReviewWallSwitch(const std::string& _reviewWallSwitch);

                    /**
                     * 判断参数 ReviewWallSwitch 是否已赋值
                     * @return ReviewWallSwitch 是否已赋值
                     */
                    bool ReviewWallSwitchHasBeenSet() const;

                    /**
                     * 获取[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Unique ID of an intelligent content recognition template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Name of an intelligent content recognition template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of an intelligent content recognition template. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Control parameter for terrorism information.
                     */
                    TerrorismConfigureInfoForUpdate m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * Control parameter for porn information.
                     */
                    PornConfigureInfoForUpdate m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * Control parameter for politically sensitive information.
                     */
                    PoliticalConfigureInfoForUpdate m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
                     */
                    ProhibitedConfigureInfoForUpdate m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * Control parameter for custom intelligent content recognition tasks.
                     */
                    UserDefineConfigureInfoForUpdate m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                    /**
                     * Frame capturing interval in seconds. Minimum value: 0.5 seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * Whether to allow the recognition result to enter the intelligent recognition platform (for human recognition).
<li>ON: yes</li>
<li>OFF: no</li>
                     */
                    std::string m_reviewWallSwitch;
                    bool m_reviewWallSwitchHasBeenSet;

                    /**
                     * [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
