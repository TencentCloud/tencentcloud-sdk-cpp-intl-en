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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESEARCHVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESEARCHVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ViewSearchTopic.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateSearchView request structure.
                */
                class CreateSearchViewRequest : public AbstractModel
                {
                public:
                    CreateSearchViewRequest();
                    ~CreateSearchViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>log set id</p><p>Logset to which the query view belongs. It is only used to manage the query view. Topics contained in the query view can be irrelevant to this logset.</p>
                     * @return LogsetId <p>log set id</p><p>Logset to which the query view belongs. It is only used to manage the query view. Topics contained in the query view can be irrelevant to this logset.</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>log set id</p><p>Logset to which the query view belongs. It is only used to manage the query view. Topics contained in the query view can be irrelevant to this logset.</p>
                     * @param _logsetId <p>log set id</p><p>Logset to which the query view belongs. It is only used to manage the query view. Topics contained in the query view can be irrelevant to this logset.</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>Region of the logset</p><p>Parameter format: ap-guangzhou</p>
                     * @return LogsetRegion <p>Region of the logset</p><p>Parameter format: ap-guangzhou</p>
                     * 
                     */
                    std::string GetLogsetRegion() const;

                    /**
                     * 设置<p>Region of the logset</p><p>Parameter format: ap-guangzhou</p>
                     * @param _logsetRegion <p>Region of the logset</p><p>Parameter format: ap-guangzhou</p>
                     * 
                     */
                    void SetLogsetRegion(const std::string& _logsetRegion);

                    /**
                     * 判断参数 LogsetRegion 是否已赋值
                     * @return LogsetRegion 是否已赋值
                     * 
                     */
                    bool LogsetRegionHasBeenSet() const;

                    /**
                     * 获取<p>View name</p><p>Input parameter limit: Supports up to 255 characters. Cannot contain "|" character.</p>
                     * @return ViewName <p>View name</p><p>Input parameter limit: Supports up to 255 characters. Cannot contain "|" character.</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>View name</p><p>Input parameter limit: Supports up to 255 characters. Cannot contain "|" character.</p>
                     * @param _viewName <p>View name</p><p>Input parameter limit: Supports up to 255 characters. Cannot contain "|" character.</p>
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取<p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul><p>The topic type in the field of Topics should match the ViewType.</p>
                     * @return ViewType <p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul><p>The topic type in the field of Topics should match the ViewType.</p>
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置<p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul><p>The topic type in the field of Topics should match the ViewType.</p>
                     * @param _viewType <p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul><p>The topic type in the field of Topics should match the ViewType.</p>
                     * 
                     */
                    void SetViewType(const std::string& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                    /**
                     * 获取<p>The query view contains topics, with a maximum of 10 topics.</p><p>The topic information configured in the Topics field should match the ViewType.</p>
                     * @return Topics <p>The query view contains topics, with a maximum of 10 topics.</p><p>The topic information configured in the Topics field should match the ViewType.</p>
                     * 
                     */
                    std::vector<ViewSearchTopic> GetTopics() const;

                    /**
                     * 设置<p>The query view contains topics, with a maximum of 10 topics.</p><p>The topic information configured in the Topics field should match the ViewType.</p>
                     * @param _topics <p>The query view contains topics, with a maximum of 10 topics.</p><p>The topic information configured in the Topics field should match the ViewType.</p>
                     * 
                     */
                    void SetTopics(const std::vector<ViewSearchTopic>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>Custom query view id prefix</p><p>Parameter format: <code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>ViewId format of successfully created query view is ${ViewIdPrefix}-view</p>
                     * @return ViewIdPrefix <p>Custom query view id prefix</p><p>Parameter format: <code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>ViewId format of successfully created query view is ${ViewIdPrefix}-view</p>
                     * 
                     */
                    std::string GetViewIdPrefix() const;

                    /**
                     * 设置<p>Custom query view id prefix</p><p>Parameter format: <code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>ViewId format of successfully created query view is ${ViewIdPrefix}-view</p>
                     * @param _viewIdPrefix <p>Custom query view id prefix</p><p>Parameter format: <code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>ViewId format of successfully created query view is ${ViewIdPrefix}-view</p>
                     * 
                     */
                    void SetViewIdPrefix(const std::string& _viewIdPrefix);

                    /**
                     * 判断参数 ViewIdPrefix 是否已赋值
                     * @return ViewIdPrefix 是否已赋值
                     * 
                     */
                    bool ViewIdPrefixHasBeenSet() const;

                    /**
                     * 获取<p>Description</p>
                     * @return Description <p>Description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description</p>
                     * @param _description <p>Description</p>
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
                     * <p>log set id</p><p>Logset to which the query view belongs. It is only used to manage the query view. Topics contained in the query view can be irrelevant to this logset.</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Region of the logset</p><p>Parameter format: ap-guangzhou</p>
                     */
                    std::string m_logsetRegion;
                    bool m_logsetRegionHasBeenSet;

                    /**
                     * <p>View name</p><p>Input parameter limit: Supports up to 255 characters. Cannot contain "|" character.</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul><p>The topic type in the field of Topics should match the ViewType.</p>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>The query view contains topics, with a maximum of 10 topics.</p><p>The topic information configured in the Topics field should match the ViewType.</p>
                     */
                    std::vector<ViewSearchTopic> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>Custom query view id prefix</p><p>Parameter format: <code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>ViewId format of successfully created query view is ${ViewIdPrefix}-view</p>
                     */
                    std::string m_viewIdPrefix;
                    bool m_viewIdPrefixHasBeenSet;

                    /**
                     * <p>Description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESEARCHVIEWREQUEST_H_
