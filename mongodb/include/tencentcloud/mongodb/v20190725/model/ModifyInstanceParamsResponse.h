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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
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
                     * 获取Whether the modification on the parameter configuration takes effect.
- true: the modified parameter value has taken effect.
- false: execution failed.

                     * @return Changed Whether the modification on the parameter configuration takes effect.
- true: the modified parameter value has taken effect.
- false: execution failed.

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
                     * 获取This parameter is temporarily meaningless (to be compatible with the earlier versions, reserve this parameter at the frontend).
                     * @return TaskId This parameter is temporarily meaningless (to be compatible with the earlier versions, reserve this parameter at the frontend).
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Whether the modification on the parameter configuration takes effect.
- true: the modified parameter value has taken effect.
- false: execution failed.

                     */
                    bool m_changed;
                    bool m_changedHasBeenSet;

                    /**
                     * This parameter is temporarily meaningless (to be compatible with the earlier versions, reserve this parameter at the frontend).
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSRESPONSE_H_
