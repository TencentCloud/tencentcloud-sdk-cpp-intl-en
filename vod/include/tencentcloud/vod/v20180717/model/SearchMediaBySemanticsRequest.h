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
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
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
                     * 获取<p>Search content</p>
                     * @return Text <p>Search content</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Search content</p>
                     * @param _text <p>Search content</p>
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
                     * 获取<p>Number of returned records. The default value is 20.</p><p>Value ranges from 1 to 100.</p>
                     * @return Limit <p>Number of returned records. The default value is 20.</p><p>Value ranges from 1 to 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned records. The default value is 20.</p><p>Value ranges from 1 to 100.</p>
                     * @param _limit <p>Number of returned records. The default value is 20.</p><p>Value ranges from 1 to 100.</p>
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
                     * 获取<p>File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li></p>
                     * @return Categories <p>File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li></p>
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置<p>File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li></p>
                     * @param _categories <p>File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li></p>
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
                     * 获取<p>Tag set, match any element in the collection.</p><p>Input parameter limit: single tag length limited to 32 characters. Array length limit: 16.</p>
                     * @return Tags <p>Tag set, match any element in the collection.</p><p>Input parameter limit: single tag length limited to 32 characters. Array length limit: 16.</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Tag set, match any element in the collection.</p><p>Input parameter limit: single tag length limited to 32 characters. Array length limit: 16.</p>
                     * @param _tags <p>Tag set, match any element in the collection.</p><p>Input parameter limit: single tag length limited to 32 characters. Array length limit: 16.</p>
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
                     * 获取<p>Figure collection, matching video clips where all imported figures appear.</p><p>Input limit: Array length limit: 16.</p>
                     * @return Persons <p>Figure collection, matching video clips where all imported figures appear.</p><p>Input limit: Array length limit: 16.</p>
                     * 
                     */
                    std::vector<std::string> GetPersons() const;

                    /**
                     * 设置<p>Figure collection, matching video clips where all imported figures appear.</p><p>Input limit: Array length limit: 16.</p>
                     * @param _persons <p>Figure collection, matching video clips where all imported figures appear.</p><p>Input limit: Array length limit: 16.</p>
                     * 
                     */
                    void SetPersons(const std::vector<std::string>& _persons);

                    /**
                     * 判断参数 Persons 是否已赋值
                     * @return Persons 是否已赋值
                     * 
                     */
                    bool PersonsHasBeenSet() const;

                    /**
                     * 获取<p>Task type to search. Optional values: </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @return TaskTypes <p>Task type to search. Optional values: </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置<p>Task type to search. Optional values: </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @param _taskTypes <p>Task type to search. Optional values: </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
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
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the application ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Search content</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Number of returned records. The default value is 20.</p><p>Value ranges from 1 to 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li></p>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * <p>Tag set, match any element in the collection.</p><p>Input parameter limit: single tag length limited to 32 characters. Array length limit: 16.</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Figure collection, matching video clips where all imported figures appear.</p><p>Input limit: Array length limit: 16.</p>
                     */
                    std::vector<std::string> m_persons;
                    bool m_personsHasBeenSet;

                    /**
                     * <p>Task type to search. Optional values: </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_
