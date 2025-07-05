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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHBACKUPPARAM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHBACKUPPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Backup-related request parameters of the whiteboard push task.
                */
                class WhiteboardPushBackupParam : public AbstractModel
                {
                public:
                    WhiteboardPushBackupParam();
                    ~WhiteboardPushBackupParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID used by the whiteboard push service for entering a room,
The ID must be an unused ID in the SDK. The whiteboard push service uses the user ID to enter the room for whiteboard push. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the pushing operation.
                     * @return PushUserId User ID used by the whiteboard push service for entering a room,
The ID must be an unused ID in the SDK. The whiteboard push service uses the user ID to enter the room for whiteboard push. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the pushing operation.
                     * 
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 设置User ID used by the whiteboard push service for entering a room,
The ID must be an unused ID in the SDK. The whiteboard push service uses the user ID to enter the room for whiteboard push. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the pushing operation.
                     * @param _pushUserId User ID used by the whiteboard push service for entering a room,
The ID must be an unused ID in the SDK. The whiteboard push service uses the user ID to enter the room for whiteboard push. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the pushing operation.
                     * 
                     */
                    void SetPushUserId(const std::string& _pushUserId);

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     * 
                     */
                    bool PushUserIdHasBeenSet() const;

                    /**
                     * 获取Signature corresponding to the PushUserId ID.
                     * @return PushUserSig Signature corresponding to the PushUserId ID.
                     * 
                     */
                    std::string GetPushUserSig() const;

                    /**
                     * 设置Signature corresponding to the PushUserId ID.
                     * @param _pushUserSig Signature corresponding to the PushUserId ID.
                     * 
                     */
                    void SetPushUserSig(const std::string& _pushUserSig);

                    /**
                     * 判断参数 PushUserSig 是否已赋值
                     * @return PushUserSig 是否已赋值
                     * 
                     */
                    bool PushUserSigHasBeenSet() const;

                private:

                    /**
                     * User ID used by the whiteboard push service for entering a room,
The ID must be an unused ID in the SDK. The whiteboard push service uses the user ID to enter the room for whiteboard push. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the pushing operation.
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                    /**
                     * Signature corresponding to the PushUserId ID.
                     */
                    std::string m_pushUserSig;
                    bool m_pushUserSigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHBACKUPPARAM_H_
