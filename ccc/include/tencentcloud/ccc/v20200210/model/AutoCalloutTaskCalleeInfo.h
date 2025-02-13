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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKCALLEEINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKCALLEEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Outbound call task called information.
                */
                class AutoCalloutTaskCalleeInfo : public AbstractModel
                {
                public:
                    AutoCalloutTaskCalleeInfo();
                    ~AutoCalloutTaskCalleeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Called number.
                     * @return Callee Called number.
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置Called number.
                     * @param _callee Called number.
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取Call status 0 - initial, 1 - answered, 2 - unanswered, 3 - calling, 4 - pending retry.
                     * @return State Call status 0 - initial, 1 - answered, 2 - unanswered, 3 - calling, 4 - pending retry.
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置Call status 0 - initial, 1 - answered, 2 - unanswered, 3 - calling, 4 - pending retry.
                     * @param _state Call status 0 - initial, 1 - answered, 2 - unanswered, 3 - calling, 4 - pending retry.
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取List of session ids.
                     * @return Sessions List of session ids.
                     * 
                     */
                    std::vector<std::string> GetSessions() const;

                    /**
                     * 设置List of session ids.
                     * @param _sessions List of session ids.
                     * 
                     */
                    void SetSessions(const std::vector<std::string>& _sessions);

                    /**
                     * 判断参数 Sessions 是否已赋值
                     * @return Sessions 是否已赋值
                     * 
                     */
                    bool SessionsHasBeenSet() const;

                private:

                    /**
                     * Called number.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Call status 0 - initial, 1 - answered, 2 - unanswered, 3 - calling, 4 - pending retry.
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * List of session ids.
                     */
                    std::vector<std::string> m_sessions;
                    bool m_sessionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKCALLEEINFO_H_
