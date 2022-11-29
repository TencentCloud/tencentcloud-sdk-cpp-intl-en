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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETELOGTOPICTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETELOGTOPICTASKREQUEST_H_

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
                * DeleteLogTopicTask request structure.
                */
                class DeleteLogTopicTaskRequest : public AbstractModel
                {
                public:
                    DeleteLogTopicTaskRequest();
                    ~DeleteLogTopicTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the shipping task to be deleted.
                     * @return TopicId ID of the shipping task to be deleted.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the shipping task to be deleted.
                     * @param TopicId ID of the shipping task to be deleted.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Region of the logset to be shipped. This field is only required when you configure CLS shipping tasks.
                     * @return LogSetRegion Region of the logset to be shipped. This field is only required when you configure CLS shipping tasks.
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置Region of the logset to be shipped. This field is only required when you configure CLS shipping tasks.
                     * @param LogSetRegion Region of the logset to be shipped. This field is only required when you configure CLS shipping tasks.
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     */
                    bool LogSetRegionHasBeenSet() const;

                private:

                    /**
                     * ID of the shipping task to be deleted.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Region of the logset to be shipped. This field is only required when you configure CLS shipping tasks.
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETELOGTOPICTASKREQUEST_H_
