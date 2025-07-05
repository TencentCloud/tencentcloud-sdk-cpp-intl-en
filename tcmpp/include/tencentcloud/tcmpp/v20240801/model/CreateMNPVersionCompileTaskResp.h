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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEMNPVERSIONCOMPILETASKRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEMNPVERSIONCOMPILETASKRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Compilation task
                */
                class CreateMNPVersionCompileTaskResp : public AbstractModel
                {
                public:
                    CreateMNPVersionCompileTaskResp();
                    ~CreateMNPVersionCompileTaskResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取WS address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WSUrl WS address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWSUrl() const;

                    /**
                     * 设置WS address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wSUrl WS address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWSUrl(const std::string& _wSUrl);

                    /**
                     * 判断参数 WSUrl 是否已赋值
                     * @return WSUrl 是否已赋值
                     * 
                     */
                    bool WSUrlHasBeenSet() const;

                    /**
                     * 获取Room ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoomId Room ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置Room ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roomId Room ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * WS address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wSUrl;
                    bool m_wSUrlHasBeenSet;

                    /**
                     * Room ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEMNPVERSIONCOMPILETASKRESP_H_
