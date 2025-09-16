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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PROBEACTION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PROBEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/HTTPGetAction.h>
#include <tencentcloud/tione/v20211111/model/ExecAction.h>
#include <tencentcloud/tione/v20211111/model/TCPSocketAction.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Probe action.
                */
                class ProbeAction : public AbstractModel
                {
                public:
                    ProbeAction();
                    ~ProbeAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP GET action.
                     * @return HTTPGet HTTP GET action.
                     * 
                     */
                    HTTPGetAction GetHTTPGet() const;

                    /**
                     * 设置HTTP GET action.
                     * @param _hTTPGet HTTP GET action.
                     * 
                     */
                    void SetHTTPGet(const HTTPGetAction& _hTTPGet);

                    /**
                     * 判断参数 HTTPGet 是否已赋值
                     * @return HTTPGet 是否已赋值
                     * 
                     */
                    bool HTTPGetHasBeenSet() const;

                    /**
                     * 获取Executes check command action.
                     * @return Exec Executes check command action.
                     * 
                     */
                    ExecAction GetExec() const;

                    /**
                     * 设置Executes check command action.
                     * @param _exec Executes check command action.
                     * 
                     */
                    void SetExec(const ExecAction& _exec);

                    /**
                     * 判断参数 Exec 是否已赋值
                     * @return Exec 是否已赋值
                     * 
                     */
                    bool ExecHasBeenSet() const;

                    /**
                     * 获取TCP Socket check action.
                     * @return TCPSocket TCP Socket check action.
                     * 
                     */
                    TCPSocketAction GetTCPSocket() const;

                    /**
                     * 设置TCP Socket check action.
                     * @param _tCPSocket TCP Socket check action.
                     * 
                     */
                    void SetTCPSocket(const TCPSocketAction& _tCPSocket);

                    /**
                     * 判断参数 TCPSocket 是否已赋值
                     * @return TCPSocket 是否已赋值
                     * 
                     */
                    bool TCPSocketHasBeenSet() const;

                    /**
                     * 获取Probe type. The default value is HTTPGet. Valid values: HTTPGet, Exec, and TCPSocket.
                     * @return ActionType Probe type. The default value is HTTPGet. Valid values: HTTPGet, Exec, and TCPSocket.
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Probe type. The default value is HTTPGet. Valid values: HTTPGet, Exec, and TCPSocket.
                     * @param _actionType Probe type. The default value is HTTPGet. Valid values: HTTPGet, Exec, and TCPSocket.
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * HTTP GET action.
                     */
                    HTTPGetAction m_hTTPGet;
                    bool m_hTTPGetHasBeenSet;

                    /**
                     * Executes check command action.
                     */
                    ExecAction m_exec;
                    bool m_execHasBeenSet;

                    /**
                     * TCP Socket check action.
                     */
                    TCPSocketAction m_tCPSocket;
                    bool m_tCPSocketHasBeenSet;

                    /**
                     * Probe type. The default value is HTTPGet. Valid values: HTTPGet, Exec, and TCPSocket.
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PROBEACTION_H_
