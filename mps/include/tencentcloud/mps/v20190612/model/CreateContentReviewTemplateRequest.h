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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATECONTENTREVIEWTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATECONTENTREVIEWTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PornConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TerrorismConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/PoliticalConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/ProhibitedConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/UserDefineConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateContentReviewTemplate request structure.
                */
                class CreateContentReviewTemplateRequest : public AbstractModel
                {
                public:
                    CreateContentReviewTemplateRequest();
                    ~CreateContentReviewTemplateRequest() = default;
                    std::string ToJsonString() const;


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
                    PornConfigureInfo GetPornConfigure() const;

                    /**
                     * 设置Porn information detection control parameter.
                     * @param PornConfigure Porn information detection control parameter.
                     */
                    void SetPornConfigure(const PornConfigureInfo& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取Terrorism information detection control parameter.
                     * @return TerrorismConfigure Terrorism information detection control parameter.
                     */
                    TerrorismConfigureInfo GetTerrorismConfigure() const;

                    /**
                     * 设置Terrorism information detection control parameter.
                     * @param TerrorismConfigure Terrorism information detection control parameter.
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取Politically sensitive information detection control parameter.
                     * @return PoliticalConfigure Politically sensitive information detection control parameter.
                     */
                    PoliticalConfigureInfo GetPoliticalConfigure() const;

                    /**
                     * 设置Politically sensitive information detection control parameter.
                     * @param PoliticalConfigure Politically sensitive information detection control parameter.
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProhibitedConfigure 
                     */
                    ProhibitedConfigureInfo GetProhibitedConfigure() const;

                    /**
                     * 设置
                     * @param ProhibitedConfigure 
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取Custom content audit control parameter.
                     * @return UserDefineConfigure Custom content audit control parameter.
                     */
                    UserDefineConfigureInfo GetUserDefineConfigure() const;

                    /**
                     * 设置Custom content audit control parameter.
                     * @param UserDefineConfigure Custom content audit control parameter.
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                private:

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
                    PornConfigureInfo m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * Terrorism information detection control parameter.
                     */
                    TerrorismConfigureInfo m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * Politically sensitive information detection control parameter.
                     */
                    PoliticalConfigureInfo m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * 
                     */
                    ProhibitedConfigureInfo m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * Custom content audit control parameter.
                     */
                    UserDefineConfigureInfo m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATECONTENTREVIEWTEMPLATEREQUEST_H_
