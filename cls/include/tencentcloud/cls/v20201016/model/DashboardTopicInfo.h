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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDTOPICINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDTOPICINFO_H_

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
                * Dashboard associated topic information
                */
                class DashboardTopicInfo : public AbstractModel
                {
                public:
                    DashboardTopicInfo();
                    ~DashboardTopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param _topicId Topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Region of the topic.
- 1: Guangzhou
-4: Shanghai
- 5: Hong Kong (China)
- 7: Shanghai Finance
-8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
-16: Chengdu
-17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: São Paulo
-78: Shanghai Autonomous Driving Cloud
                     * @return Region Region of the topic.
- 1: Guangzhou
-4: Shanghai
- 5: Hong Kong (China)
- 7: Shanghai Finance
-8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
-16: Chengdu
-17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: São Paulo
-78: Shanghai Autonomous Driving Cloud
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the topic.
- 1: Guangzhou
-4: Shanghai
- 5: Hong Kong (China)
- 7: Shanghai Finance
-8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
-16: Chengdu
-17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: São Paulo
-78: Shanghai Autonomous Driving Cloud
                     * @param _region Region of the topic.
- 1: Guangzhou
-4: Shanghai
- 5: Hong Kong (China)
- 7: Shanghai Finance
-8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
-16: Chengdu
-17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: São Paulo
-78: Shanghai Autonomous Driving Cloud
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Region of the topic.
- 1: Guangzhou
-4: Shanghai
- 5: Hong Kong (China)
- 7: Shanghai Finance
-8: Beijing
-9: Singapore
- 11: Shenzhen Finance
- 15: Silicon Valley
-16: Chengdu
-17: Frankfurt
- 18: Seoul
- 19: Chongqing
- 22: Virginia
- 23: Bangkok
- 25: Tokyo
- 33: Nanjing
- 36: Tianjin
-39: Taipei (China)
- 46: Beijing Finance
-72: Jakarta
-74: São Paulo
-78: Shanghai Autonomous Driving Cloud
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDTOPICINFO_H_
