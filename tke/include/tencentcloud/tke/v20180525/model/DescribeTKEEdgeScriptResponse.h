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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeScript response structure.
                */
                class DescribeTKEEdgeScriptResponse : public AbstractModel
                {
                public:
                    DescribeTKEEdgeScriptResponse();
                    ~DescribeTKEEdgeScriptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to download the link
                     * @return Link Whether to download the link
                     * 
                     */
                    std::string GetLink() const;

                    /**
                     * 判断参数 Link 是否已赋值
                     * @return Link 是否已赋值
                     * 
                     */
                    bool LinkHasBeenSet() const;

                    /**
                     * 获取Whether to download the desired token
                     * @return Token Whether to download the desired token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Whether to download the command
                     * @return Command Whether to download the command
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Version of edgectl script. The latest version is obtained by default.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ScriptVersion Version of edgectl script. The latest version is obtained by default.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScriptVersion() const;

                    /**
                     * 判断参数 ScriptVersion 是否已赋值
                     * @return ScriptVersion 是否已赋值
                     * 
                     */
                    bool ScriptVersionHasBeenSet() const;

                private:

                    /**
                     * Whether to download the link
                     */
                    std::string m_link;
                    bool m_linkHasBeenSet;

                    /**
                     * Whether to download the desired token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Whether to download the command
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Version of edgectl script. The latest version is obtained by default.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_scriptVersion;
                    bool m_scriptVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTRESPONSE_H_
