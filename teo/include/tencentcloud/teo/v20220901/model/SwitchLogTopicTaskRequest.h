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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SWITCHLOGTOPICTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SWITCHLOGTOPICTASKREQUEST_H_

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
                * SwitchLogTopicTask request structure.
                */
                class SwitchLogTopicTaskRequest : public AbstractModel
                {
                public:
                    SwitchLogTopicTaskRequest();
                    ~SwitchLogTopicTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic ID of the shipping task.
                     * @return TopicId Topic ID of the shipping task.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID of the shipping task.
                     * @param TopicId Topic ID of the shipping task.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the shipping task. Values:
<li>`true`: Enable the shipping task;</li>
<li>`false`: Disable the shipping task.</li>
                     * @return IsOpen Whether to enable the shipping task. Values:
<li>`true`: Enable the shipping task;</li>
<li>`false`: Disable the shipping task.</li>
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置Whether to enable the shipping task. Values:
<li>`true`: Enable the shipping task;</li>
<li>`false`: Disable the shipping task.</li>
                     * @param IsOpen Whether to enable the shipping task. Values:
<li>`true`: Enable the shipping task;</li>
<li>`false`: Disable the shipping task.</li>
                     */
                    void SetIsOpen(const bool& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     */
                    bool IsOpenHasBeenSet() const;

                private:

                    /**
                     * Topic ID of the shipping task.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Whether to enable the shipping task. Values:
<li>`true`: Enable the shipping task;</li>
<li>`false`: Disable the shipping task.</li>
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SWITCHLOGTOPICTASKREQUEST_H_
