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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWDEBUGCONTEXTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWDEBUGCONTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppVariableValue.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SaveWorkflowDebugContext request structure.
                */
                class SaveWorkflowDebugContextRequest : public AbstractModel
                {
                public:
                    SaveWorkflowDebugContextRequest();
                    ~SaveWorkflowDebugContextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Application variable list.</p>
                     * @return AppVariableValueList <p>Application variable list.</p>
                     * 
                     */
                    std::vector<AppVariableValue> GetAppVariableValueList() const;

                    /**
                     * 设置<p>Application variable list.</p>
                     * @param _appVariableValueList <p>Application variable list.</p>
                     * 
                     */
                    void SetAppVariableValueList(const std::vector<AppVariableValue>& _appVariableValueList);

                    /**
                     * 判断参数 AppVariableValueList 是否已赋值
                     * @return AppVariableValueList 是否已赋值
                     * 
                     */
                    bool AppVariableValueListHasBeenSet() const;

                    /**
                     * 获取<p>Session ID</p>
                     * @return SessionId <p>Session ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Session ID</p>
                     * @param _sessionId <p>Session ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom user ID</p>
                     * @return UserId <p>Custom user ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Custom user ID</p>
                     * @param _userId <p>Custom user ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Application variable list.</p>
                     */
                    std::vector<AppVariableValue> m_appVariableValueList;
                    bool m_appVariableValueListHasBeenSet;

                    /**
                     * <p>Session ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Custom user ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWDEBUGCONTEXTREQUEST_H_
