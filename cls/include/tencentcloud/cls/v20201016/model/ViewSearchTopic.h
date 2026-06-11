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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_VIEWSEARCHTOPIC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_VIEWSEARCHTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Query view topic configuration
                */
                class ViewSearchTopic : public AbstractModel
                {
                public:
                    ViewSearchTopic();
                    ~ViewSearchTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Region of the logset and topic</p><p>Parameter format: ap-guangzhou</p><p>In the same query view, each topic must be in the same region.</p>
                     * @return Region <p>Region of the logset and topic</p><p>Parameter format: ap-guangzhou</p><p>In the same query view, each topic must be in the same region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region of the logset and topic</p><p>Parameter format: ap-guangzhou</p><p>In the same query view, each topic must be in the same region.</p>
                     * @param _region <p>Region of the logset and topic</p><p>Parameter format: ap-guangzhou</p><p>In the same query view, each topic must be in the same region.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Log set id</p>
                     * @return LogsetId <p>Log set id</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Log set id</p>
                     * @param _logsetId <p>Log set id</p>
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
                     * 获取<p>Log topic id</p>
                     * @return TopicId <p>Log topic id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic id</p>
                     * @param _topicId <p>Log topic id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * <p>Region of the logset and topic</p><p>Parameter format: ap-guangzhou</p><p>In the same query view, each topic must be in the same region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Log set id</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Log topic id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_VIEWSEARCHTOPIC_H_
