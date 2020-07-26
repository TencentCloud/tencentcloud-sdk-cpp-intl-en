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
                     * 获取Unique ID of a content audit template.
                     * @return Definition Unique ID of a content audit template.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of a content audit template.
                     * @param Definition Unique ID of a content audit template.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Name of a content audit template. Length limit: 64 characters.
                     * @return Name Name of a content audit template. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a content audit template. Length limit: 64 characters.
                     * @param Name Name of a content audit template. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of a content audit template. Length limit: 256 characters.
                     * @return Comment Description of a content audit template. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of a content audit template. Length limit: 256 characters.
                     * @param Comment Description of a content audit template. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Porn information detection control parameter.
                     * @return PornConfigure Porn information detection control parameter.
                     */
                    PornConfigureInfoForUpdate GetPornConfigure() const;

                    /**
                     * 设置Porn information detection control parameter.
                     * @param PornConfigure Porn information detection control parameter.
                     */
                    void SetPornConfigure(const PornConfigureInfoForUpdate& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取Terrorism information detection control parameter.
                     * @return TerrorismConfigure Terrorism information detection control parameter.
                     */
                    TerrorismConfigureInfoForUpdate GetTerrorismConfigure() const;

                    /**
                     * 设置Terrorism information detection control parameter.
                     * @param TerrorismConfigure Terrorism information detection control parameter.
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfoForUpdate& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取Politically sensitive information detection control parameter.
                     * @return PoliticalConfigure Politically sensitive information detection control parameter.
                     */
                    PoliticalConfigureInfoForUpdate GetPoliticalConfigure() const;

                    /**
                     * 设置Politically sensitive information detection control parameter.
                     * @param PoliticalConfigure Politically sensitive information detection control parameter.
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfoForUpdate& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProhibitedConfigure 
                     */
                    ProhibitedConfigureInfoForUpdate GetProhibitedConfigure() const;

                    /**
                     * 设置
                     * @param ProhibitedConfigure 
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfoForUpdate& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取Custom content audit control parameter.
                     * @return UserDefineConfigure Custom content audit control parameter.
                     */
                    UserDefineConfigureInfoForUpdate GetUserDefineConfigure() const;

                    /**
                     * 设置Custom content audit control parameter.
                     * @param UserDefineConfigure Custom content audit control parameter.
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfoForUpdate& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a content audit template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Name of a content audit template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of a content audit template. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Porn information detection control parameter.
                     */
                    PornConfigureInfoForUpdate m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * Terrorism information detection control parameter.
                     */
                    TerrorismConfigureInfoForUpdate m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * Politically sensitive information detection control parameter.
                     */
                    PoliticalConfigureInfoForUpdate m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * 
                     */
                    ProhibitedConfigureInfoForUpdate m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * Custom content audit control parameter.
                     */
                    UserDefineConfigureInfoForUpdate m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
