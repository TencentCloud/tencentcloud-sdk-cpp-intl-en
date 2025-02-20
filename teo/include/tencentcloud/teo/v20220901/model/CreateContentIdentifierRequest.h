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
                     * 获取Description of the content identifier, length limit of up to 20 characters.
                     * @return Description Description of the content identifier, length limit of up to 20 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the content identifier, length limit of up to 20 characters.
                     * @param _description Description of the content identifier, length limit of up to 20 characters.
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
                     * 获取Target plan id to be bound, available only for the enterprise edition. <li>if there is already a plan under your account, go to [plan management](https://console.cloud.tencent.com/edgeone/package) to get the plan id and directly bind the content identifier to the plan;</li><li>if you do not have a plan to bind, please purchase an enterprise edition plan first.</li>.
                     * @return PlanId Target plan id to be bound, available only for the enterprise edition. <li>if there is already a plan under your account, go to [plan management](https://console.cloud.tencent.com/edgeone/package) to get the plan id and directly bind the content identifier to the plan;</li><li>if you do not have a plan to bind, please purchase an enterprise edition plan first.</li>.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Target plan id to be bound, available only for the enterprise edition. <li>if there is already a plan under your account, go to [plan management](https://console.cloud.tencent.com/edgeone/package) to get the plan id and directly bind the content identifier to the plan;</li><li>if you do not have a plan to bind, please purchase an enterprise edition plan first.</li>.
                     * @param _planId Target plan id to be bound, available only for the enterprise edition. <li>if there is already a plan under your account, go to [plan management](https://console.cloud.tencent.com/edgeone/package) to get the plan id and directly bind the content identifier to the plan;</li><li>if you do not have a plan to bind, please purchase an enterprise edition plan first.</li>.
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
                     * 获取Tags of the content identifier. this parameter is used for authority control. to create tags, go to the [tag console](https://console.cloud.tencent.com/tag/taglist).
                     * @return Tags Tags of the content identifier. this parameter is used for authority control. to create tags, go to the [tag console](https://console.cloud.tencent.com/tag/taglist).
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags of the content identifier. this parameter is used for authority control. to create tags, go to the [tag console](https://console.cloud.tencent.com/tag/taglist).
                     * @param _tags Tags of the content identifier. this parameter is used for authority control. to create tags, go to the [tag console](https://console.cloud.tencent.com/tag/taglist).
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
                     * Description of the content identifier, length limit of up to 20 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Target plan id to be bound, available only for the enterprise edition. <li>if there is already a plan under your account, go to [plan management](https://console.cloud.tencent.com/edgeone/package) to get the plan id and directly bind the content identifier to the plan;</li><li>if you do not have a plan to bind, please purchase an enterprise edition plan first.</li>.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Tags of the content identifier. this parameter is used for authority control. to create tags, go to the [tag console](https://console.cloud.tencent.com/tag/taglist).
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONTENTIDENTIFIERREQUEST_H_
