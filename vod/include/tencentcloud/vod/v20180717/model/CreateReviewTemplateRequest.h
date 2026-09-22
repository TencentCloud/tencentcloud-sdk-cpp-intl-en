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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREVIEWTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREVIEWTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateReviewTemplate request structure.
                */
                class CreateReviewTemplateRequest : public AbstractModel
                {
                public:
                    CreateReviewTemplateRequest();
                    ~CreateReviewTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of violation labels to return. Available values:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Ad: advertisement;</li>
<li>Moan: panting.</li>
                     * @return Labels List of violation labels to return. Available values:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Ad: advertisement;</li>
<li>Moan: panting.</li>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置List of violation labels to return. Available values:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Ad: advertisement;</li>
<li>Moan: panting.</li>
                     * @param _labels List of violation labels to return. Available values:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Ad: advertisement;</li>
<li>Moan: panting.</li>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Review template name. Length limit: 64 characters.
                     * @return Name Review template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Review template name. Length limit: 64 characters.
                     * @param _name Review template name. Length limit: 64 characters.
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
                     * 获取Review template description information. Length limit: 256 characters.
                     * @return Comment Review template description information. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Review template description information. Length limit: 256 characters.
                     * @param _comment Review template description information. Length limit: 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * List of violation labels to return. Available values:
<li>Porn: pornography;</li>
<li>Terror: violence.</li>
<li>Polity: inappropriate information;</li>
<li>Illegal: illegal;</li>
<li>Abuse: abusive language;</li>
<li>Ad: advertisement;</li>
<li>Moan: panting.</li>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Review template name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Review template description information. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREVIEWTEMPLATEREQUEST_H_
