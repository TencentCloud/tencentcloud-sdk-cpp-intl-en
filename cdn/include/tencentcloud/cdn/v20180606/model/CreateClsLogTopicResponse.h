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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATECLSLOGTOPICRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATECLSLOGTOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateClsLogTopic response structure.
                */
                class CreateClsLogTopicResponse : public AbstractModel
                {
                public:
                    CreateClsLogTopicResponse();
                    ~CreateClsLogTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TopicId Topic ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * Topic ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATECLSLOGTOPICRESPONSE_H_
