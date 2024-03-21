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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLSTOPIC_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLSTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The configuration information of real-time log delivery to Tencent Cloud CLS
                */
                class CLSTopic : public AbstractModel
                {
                public:
                    CLSTopic();
                    ~CLSTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the Tencent Cloud CLS log set.
                     * @return LogSetId The ID of the Tencent Cloud CLS log set.
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置The ID of the Tencent Cloud CLS log set.
                     * @param _logSetId The ID of the Tencent Cloud CLS log set.
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取The ID of the Tencent Cloud CLS log topic.
                     * @return TopicId The ID of the Tencent Cloud CLS log topic.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置The ID of the Tencent Cloud CLS log topic.
                     * @param _topicId The ID of the Tencent Cloud CLS log topic.
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
                     * 获取The region of the Tencent Cloud CLS log set.
                     * @return LogSetRegion The region of the Tencent Cloud CLS log set.
                     * 
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置The region of the Tencent Cloud CLS log set.
                     * @param _logSetRegion The region of the Tencent Cloud CLS log set.
                     * 
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     * 
                     */
                    bool LogSetRegionHasBeenSet() const;

                private:

                    /**
                     * The ID of the Tencent Cloud CLS log set.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * The ID of the Tencent Cloud CLS log topic.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * The region of the Tencent Cloud CLS log set.
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLSTOPIC_H_
