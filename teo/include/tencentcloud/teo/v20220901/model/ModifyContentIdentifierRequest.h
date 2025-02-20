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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCONTENTIDENTIFIERREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCONTENTIDENTIFIERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyContentIdentifier request structure.
                */
                class ModifyContentIdentifierRequest : public AbstractModel
                {
                public:
                    ModifyContentIdentifierRequest();
                    ~ModifyContentIdentifierRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Content identifier id.
                     * @return ContentId Content identifier id.
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置Content identifier id.
                     * @param _contentId Content identifier id.
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取Content identifier description. length limit: 20 characters.
                     * @return Description Content identifier description. length limit: 20 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Content identifier description. length limit: 20 characters.
                     * @param _description Content identifier description. length limit: 20 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Content identifier id.
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * Content identifier description. length limit: 20 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCONTENTIDENTIFIERREQUEST_H_
