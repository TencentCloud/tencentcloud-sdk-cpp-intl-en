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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PornConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/TerrorismConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/PoliticalConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/ProhibitedConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/UserDefineConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取The unique ID of the content moderation template.
                     * @return Definition The unique ID of the content moderation template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置The unique ID of the content moderation template.
                     * @param _definition The unique ID of the content moderation template.
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
                     * 获取The name of the content moderation template. Length limit: 64 characters.
                     * @return Name The name of the content moderation template. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the content moderation template. Length limit: 64 characters.
                     * @param _name The name of the content moderation template. Length limit: 64 characters.
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
                     * 获取The template description. Length limit: 256 characters.
                     * @return Comment The template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The template description. Length limit: 256 characters.
                     * @param _comment The template description. Length limit: 256 characters.
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
                     * 获取Control parameter for porn information
                     * @return PornConfigure Control parameter for porn information
                     * 
                     */
                    PornConfigureInfoForUpdate GetPornConfigure() const;

                    /**
                     * 设置Control parameter for porn information
                     * @param _pornConfigure Control parameter for porn information
                     * 
                     */
                    void SetPornConfigure(const PornConfigureInfoForUpdate& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     * 
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter for terrorism information
                     * @return TerrorismConfigure Control parameter for terrorism information
                     * 
                     */
                    TerrorismConfigureInfoForUpdate GetTerrorismConfigure() const;

                    /**
                     * 设置Control parameter for terrorism information
                     * @param _terrorismConfigure Control parameter for terrorism information
                     * 
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfoForUpdate& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     * 
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter for politically sensitive information
                     * @return PoliticalConfigure Control parameter for politically sensitive information
                     * 
                     */
                    PoliticalConfigureInfoForUpdate GetPoliticalConfigure() const;

                    /**
                     * 设置Control parameter for politically sensitive information
                     * @param _politicalConfigure Control parameter for politically sensitive information
                     * 
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfoForUpdate& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     * 
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this parameter is not supported yet.
                     * @return ProhibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this parameter is not supported yet.
                     * 
                     */
                    ProhibitedConfigureInfoForUpdate GetProhibitedConfigure() const;

                    /**
                     * 设置Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this parameter is not supported yet.
                     * @param _prohibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this parameter is not supported yet.
                     * 
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfoForUpdate& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     * 
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取Custom content moderation parameters.
                     * @return UserDefineConfigure Custom content moderation parameters.
                     * 
                     */
                    UserDefineConfigureInfoForUpdate GetUserDefineConfigure() const;

                    /**
                     * 设置Custom content moderation parameters.
                     * @param _userDefineConfigure Custom content moderation parameters.
                     * 
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfoForUpdate& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     * 
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the content moderation template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * The name of the content moderation template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Control parameter for porn information
                     */
                    PornConfigureInfoForUpdate m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * Control parameter for terrorism information
                     */
                    TerrorismConfigureInfoForUpdate m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * Control parameter for politically sensitive information
                     */
                    PoliticalConfigureInfoForUpdate m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this parameter is not supported yet.
                     */
                    ProhibitedConfigureInfoForUpdate m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * Custom content moderation parameters.
                     */
                    UserDefineConfigureInfoForUpdate m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
