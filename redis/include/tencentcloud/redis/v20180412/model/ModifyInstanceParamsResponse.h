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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPARAMSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPARAMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceParams response structure.
                */
                class ModifyInstanceParamsResponse : public AbstractModel
                {
                public:
                    ModifyInstanceParamsResponse();
                    ~ModifyInstanceParamsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the parameter configuration is successfully modified.<br> <li>true: successful;</li> <li>false: failed.</li>
                     * @return Changed Whether the parameter configuration is successfully modified.<br> <li>true: successful;</li> <li>false: failed.</li>
                     * 
                     */
                    bool GetChanged() const;

                    /**
                     * 判断参数 Changed 是否已赋值
                     * @return Changed 是否已赋值
                     * 
                     */
                    bool ChangedHasBeenSet() const;

                    /**
                     * 获取ID of the task
                     * @return TaskId ID of the task
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Whether the parameter configuration is successfully modified.<br> <li>true: successful;</li> <li>false: failed.</li>
                     */
                    bool m_changed;
                    bool m_changedHasBeenSet;

                    /**
                     * ID of the task
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEPARAMSRESPONSE_H_
