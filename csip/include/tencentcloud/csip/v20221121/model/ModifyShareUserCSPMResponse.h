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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERCSPMRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERCSPMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyShareUserCSPM response structure.
                */
                class ModifyShareUserCSPMResponse : public AbstractModel
                {
                public:
                    ModifyShareUserCSPMResponse();
                    ~ModifyShareUserCSPMResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0: success; 1: failure
                     * @return Result 0: success; 1: failure
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Success or failure information
                     * @return Msg Success or failure information
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 0: success; 1: failure
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Success or failure information
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSHAREUSERCSPMRESPONSE_H_
