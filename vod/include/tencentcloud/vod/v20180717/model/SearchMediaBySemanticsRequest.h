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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_

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
                * SearchMediaBySemantics request structure.
                */
                class SearchMediaBySemanticsRequest : public AbstractModel
                {
                public:
                    SearchMediaBySemanticsRequest();
                    ~SearchMediaBySemanticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. for customers who activate on-demand services after december 25, 2023, this field must be filled with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. for customers who activate on-demand services after december 25, 2023, this field must be filled with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. for customers who activate on-demand services after december 25, 2023, this field must be filled with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. for customers who activate on-demand services after december 25, 2023, this field must be filled with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Specifies the search content.
                     * @return Text Specifies the search content.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Specifies the search content.
                     * @param _text Specifies the search content.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Specifies the number of returned records. the default value is 20.
                     * @return Limit Specifies the number of returned records. the default value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Specifies the number of returned records. the default value is 20.
                     * @param _limit Specifies the number of returned records. the default value is 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取File type. matches any element in the collection: <li>Video: Video file</li> <li>Audio: Audio file</li> <li>Image: Image file</li>.
                     * @return Categories File type. matches any element in the collection: <li>Video: Video file</li> <li>Audio: Audio file</li> <li>Image: Image file</li>.
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置File type. matches any element in the collection: <li>Video: Video file</li> <li>Audio: Audio file</li> <li>Image: Image file</li>.
                     * @param _categories File type. matches any element in the collection: <li>Video: Video file</li> <li>Audio: Audio file</li> <li>Image: Image file</li>.
                     * 
                     */
                    void SetCategories(const std::vector<std::string>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                    /**
                     * 获取Tag set, match any element in the collection. <li>single Tag length limit: 32 characters.</li> <li>array length limit: 16.</li>
                     * @return Tags Tag set, match any element in the collection. <li>single Tag length limit: 32 characters.</li> <li>array length limit: 16.</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag set, match any element in the collection. <li>single Tag length limit: 32 characters.</li> <li>array length limit: 16.</li>
                     * @param _tags Tag set, match any element in the collection. <li>single Tag length limit: 32 characters.</li> <li>array length limit: 16.</li>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Specifies the task type for the search. valid values:. 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * @return TaskTypes Specifies the task type for the search. valid values:. 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置Specifies the task type for the search. valid values:. 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * @param _taskTypes Specifies the task type for the search. valid values:. 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                private:

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. for customers who activate on-demand services after december 25, 2023, this field must be filled with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Specifies the search content.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Specifies the number of returned records. the default value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * File type. matches any element in the collection: <li>Video: Video file</li> <li>Audio: Audio file</li> <li>Image: Image file</li>.
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * Tag set, match any element in the collection. <li>single Tag length limit: 32 characters.</li> <li>array length limit: 16.</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Specifies the task type for the search. valid values:. 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_
