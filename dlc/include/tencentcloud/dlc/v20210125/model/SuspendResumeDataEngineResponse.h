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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SUSPENDRESUMEDATAENGINERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SUSPENDRESUMEDATAENGINERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SuspendResumeDataEngine response structure.
                */
                class SuspendResumeDataEngineResponse : public AbstractModel
                {
                public:
                    SuspendResumeDataEngineResponse();
                    ~SuspendResumeDataEngineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The details of the virtual cluster.
                     * @return DataEngineName The details of the virtual cluster.
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                private:

                    /**
                     * The details of the virtual cluster.
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SUSPENDRESUMEDATAENGINERESPONSE_H_
