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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHVIEWINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Query view info
                */
                class SearchViewInfo : public AbstractModel
                {
                public:
                    SearchViewInfo();
                    ~SearchViewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>View ID</p>
                     * @return ViewId <p>View ID</p>
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置<p>View ID</p>
                     * @param _viewId <p>View ID</p>
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                    /**
                     * 获取<p>View name</p>
                     * @return ViewName <p>View name</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>View name</p>
                     * @param _viewName <p>View name</p>
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
                     * 获取<p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul>
                     * @return ViewType <p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul>
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置<p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul>
                     * @param _viewType <p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul>
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
                     * 获取<p>Logset id</p><p>Logset of the view</p>
                     * @return LogsetId <p>Logset id</p><p>Logset of the view</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Logset id</p><p>Logset of the view</p>
                     * @param _logsetId <p>Logset id</p><p>Logset of the view</p>
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
                     * 获取<p>View log topic information</p>
                     * @return Topics <p>View log topic information</p>
                     * 
                     */
                    std::vector<ViewSearchTopic> GetTopics() const;

                    /**
                     * 设置<p>View log topic information</p>
                     * @param _topics <p>View log topic information</p>
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
                     * 获取<p>View description</p>
                     * @return Description <p>View description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>View description</p>
                     * @param _description <p>View description</p>
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
                     * 获取<p>Creation time</p><p>Unit: second-level timestamp</p>
                     * @return CreateTime <p>Creation time</p><p>Unit: second-level timestamp</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time</p><p>Unit: second-level timestamp</p>
                     * @param _createTime <p>Creation time</p><p>Unit: second-level timestamp</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time</p><p>Measurement unit: second-level timestamp</p>
                     * @return UpdateTime <p>Update time</p><p>Measurement unit: second-level timestamp</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p><p>Measurement unit: second-level timestamp</p>
                     * @param _updateTime <p>Update time</p><p>Measurement unit: second-level timestamp</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>View ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                    /**
                     * <p>View name</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>View type</p><p>Enumeration value:</p><ul><li>log: Log topic</li><li>metric: Metric topic</li></ul>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>Logset id</p><p>Logset of the view</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Region of the logset</p><p>Parameter format: ap-guangzhou</p>
                     */
                    std::string m_logsetRegion;
                    bool m_logsetRegionHasBeenSet;

                    /**
                     * <p>View log topic information</p>
                     */
                    std::vector<ViewSearchTopic> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>View description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Creation time</p><p>Unit: second-level timestamp</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time</p><p>Measurement unit: second-level timestamp</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHVIEWINFO_H_
