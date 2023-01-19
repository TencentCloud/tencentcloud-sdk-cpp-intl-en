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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYREVIEWTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYREVIEWTEMPLATEREQUEST_H_

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
                * ModifyReviewTemplate request structure.
                */
                class ModifyReviewTemplateRequest : public AbstractModel
                {
                public:
                    ModifyReviewTemplateRequest();
                    ~ModifyReviewTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Definition 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param Definition 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubAppId 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param SubAppId 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Name 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param Name 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取
                     * @return Comment 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param Comment 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取The violation labels to use. Valid values: <li>`Porn`: Pornographic content</li> <li>`Terror`: Terrorist content</li> <li>Polity: Politically sensitive content</li> <li>`Moan`: Moaning</li>
                     * @return Labels The violation labels to use. Valid values: <li>`Porn`: Pornographic content</li> <li>`Terror`: Terrorist content</li> <li>Polity: Politically sensitive content</li> <li>`Moan`: Moaning</li>
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置The violation labels to use. Valid values: <li>`Porn`: Pornographic content</li> <li>`Terror`: Terrorist content</li> <li>Polity: Politically sensitive content</li> <li>`Moan`: Moaning</li>
                     * @param Labels The violation labels to use. Valid values: <li>`Porn`: Pornographic content</li> <li>`Terror`: Terrorist content</li> <li>Polity: Politically sensitive content</li> <li>`Moan`: Moaning</li>
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The violation labels to use. Valid values: <li>`Porn`: Pornographic content</li> <li>`Terror`: Terrorist content</li> <li>Polity: Politically sensitive content</li> <li>`Moan`: Moaning</li>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYREVIEWTEMPLATEREQUEST_H_
