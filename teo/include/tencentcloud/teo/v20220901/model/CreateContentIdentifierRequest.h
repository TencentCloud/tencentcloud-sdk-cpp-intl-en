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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONTENTIDENTIFIERREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONTENTIDENTIFIERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Tag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateContentIdentifier request structure.
                */
                class CreateContentIdentifierRequest : public AbstractModel
                {
                public:
                    CreateContentIdentifierRequest();
                    ~CreateContentIdentifierRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Description of the content identifier. Length limited to 20 characters.
                     * @return Description Description of the content identifier. Length limited to 20 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the content identifier. Length limited to 20 characters.
                     * @param _description Description of the content identifier. Length limited to 20 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Target bundle ID to be bound. Enterprise edition only.<li>If a package already exists under your account, go to [Plan management](https://console.cloud.tencent.com/edgeone/package) to get the package ID, and bind the content identifier to that package directly;</li><li>If you currently have no bindable package, purchase an enterprise edition package first.</li>
                     * @return PlanId Target bundle ID to be bound. Enterprise edition only.<li>If a package already exists under your account, go to [Plan management](https://console.cloud.tencent.com/edgeone/package) to get the package ID, and bind the content identifier to that package directly;</li><li>If you currently have no bindable package, purchase an enterprise edition package first.</li>
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Target bundle ID to be bound. Enterprise edition only.<li>If a package already exists under your account, go to [Plan management](https://console.cloud.tencent.com/edgeone/package) to get the package ID, and bind the content identifier to that package directly;</li><li>If you currently have no bindable package, purchase an enterprise edition package first.</li>
                     * @param _planId Target bundle ID to be bound. Enterprise edition only.<li>If a package already exists under your account, go to [Plan management](https://console.cloud.tencent.com/edgeone/package) to get the package ID, and bind the content identifier to that package directly;</li><li>If you currently have no bindable package, purchase an enterprise edition package first.</li>
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Tag. This parameter is used for authority control over content identifiers. Go to the tag console (https://console.cloud.tencent.com/tag/taglist) first to create tags before you can input the corresponding tag key and tag value here.
                     * @return Tags Tag. This parameter is used for authority control over content identifiers. Go to the tag console (https://console.cloud.tencent.com/tag/taglist) first to create tags before you can input the corresponding tag key and tag value here.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag. This parameter is used for authority control over content identifiers. Go to the tag console (https://console.cloud.tencent.com/tag/taglist) first to create tags before you can input the corresponding tag key and tag value here.
                     * @param _tags Tag. This parameter is used for authority control over content identifiers. Go to the tag console (https://console.cloud.tencent.com/tag/taglist) first to create tags before you can input the corresponding tag key and tag value here.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Description of the content identifier. Length limited to 20 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Target bundle ID to be bound. Enterprise edition only.<li>If a package already exists under your account, go to [Plan management](https://console.cloud.tencent.com/edgeone/package) to get the package ID, and bind the content identifier to that package directly;</li><li>If you currently have no bindable package, purchase an enterprise edition package first.</li>
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Tag. This parameter is used for authority control over content identifiers. Go to the tag console (https://console.cloud.tencent.com/tag/taglist) first to create tags before you can input the corresponding tag key and tag value here.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONTENTIDENTIFIERREQUEST_H_
