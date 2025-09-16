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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINERSTATUS_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Container status.
                */
                class ContainerStatus : public AbstractModel
                {
                public:
                    ContainerStatus();
                    ~ContainerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of restarts.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RestartCount Number of restarts.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置Number of restarts.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restartCount Number of restarts.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取Status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return State Status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _state Status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Whether it is ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ready Whether it is ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetReady() const;

                    /**
                     * 设置Whether it is ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ready Whether it is ready.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReady(const bool& _ready);

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取Status reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason Status reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Status reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reason Status reason.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Container error message.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Container error message.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Container error message.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Container error message.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Number of restarts.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * Status.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Whether it is ready.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * Status reason.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Container error message.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINERSTATUS_H_
