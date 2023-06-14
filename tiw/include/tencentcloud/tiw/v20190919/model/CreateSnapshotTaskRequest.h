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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/SnapshotWhiteboard.h>
#include <tencentcloud/tiw/v20190919/model/SnapshotCOS.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateSnapshotTask request structure.
                */
                class CreateSnapshotTaskRequest : public AbstractModel
                {
                public:
                    CreateSnapshotTaskRequest();
                    ~CreateSnapshotTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whiteboard parameters.
                     * @return Whiteboard Whiteboard parameters.
                     * 
                     */
                    SnapshotWhiteboard GetWhiteboard() const;

                    /**
                     * 设置Whiteboard parameters.
                     * @param _whiteboard Whiteboard parameters.
                     * 
                     */
                    void SetWhiteboard(const SnapshotWhiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取`SdkAppId` of the whiteboard application.
                     * @return SdkAppId `SdkAppId` of the whiteboard application.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置`SdkAppId` of the whiteboard application.
                     * @param _sdkAppId `SdkAppId` of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Whiteboard room ID.
                     * @return RoomId Whiteboard room ID.
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置Whiteboard room ID.
                     * @param _roomId Whiteboard room ID.
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Callback URL to which the whiteboard snapshot result is to be sent.
                     * @return CallbackURL Callback URL to which the whiteboard snapshot result is to be sent.
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置Callback URL to which the whiteboard snapshot result is to be sent.
                     * @param _callbackURL Callback URL to which the whiteboard snapshot result is to be sent.
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                    /**
                     * 获取`COS` bucket in which the generated whiteboard snapshot file is to be stored. If you leave this parameter empty, the generated file will be stored in the public bucket and retained for only three days.
                     * @return COS `COS` bucket in which the generated whiteboard snapshot file is to be stored. If you leave this parameter empty, the generated file will be stored in the public bucket and retained for only three days.
                     * 
                     */
                    SnapshotCOS GetCOS() const;

                    /**
                     * 设置`COS` bucket in which the generated whiteboard snapshot file is to be stored. If you leave this parameter empty, the generated file will be stored in the public bucket and retained for only three days.
                     * @param _cOS `COS` bucket in which the generated whiteboard snapshot file is to be stored. If you leave this parameter empty, the generated file will be stored in the public bucket and retained for only three days.
                     * 
                     */
                    void SetCOS(const SnapshotCOS& _cOS);

                    /**
                     * 判断参数 COS 是否已赋值
                     * @return COS 是否已赋值
                     * 
                     */
                    bool COSHasBeenSet() const;

                    /**
                     * 获取Whiteboard snapshot mode. Default value: `AllMarks`. Valid values:

`AllMarks`: Full mode. In this mode, a snapshot image is generated based on each whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client.

`LatestMarksOnly`: Single-page deduplication mode. In this mode, a snapshot image is generated based only on the latest whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client if the API is called multiple times for the same whiteboard snapshot.

**Note: The `LatestMarksOnly` mode takes effect only when the `addSnapshotMark` API is called by using Tencent Interactive Whiteboard SDK v2.6.8 or later. Otherwise, even if this parameter is set to `LatestMarksOnly`, the default `AllMarks` mode is used.**
                     * @return SnapshotMode Whiteboard snapshot mode. Default value: `AllMarks`. Valid values:

`AllMarks`: Full mode. In this mode, a snapshot image is generated based on each whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client.

`LatestMarksOnly`: Single-page deduplication mode. In this mode, a snapshot image is generated based only on the latest whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client if the API is called multiple times for the same whiteboard snapshot.

**Note: The `LatestMarksOnly` mode takes effect only when the `addSnapshotMark` API is called by using Tencent Interactive Whiteboard SDK v2.6.8 or later. Otherwise, even if this parameter is set to `LatestMarksOnly`, the default `AllMarks` mode is used.**
                     * 
                     */
                    std::string GetSnapshotMode() const;

                    /**
                     * 设置Whiteboard snapshot mode. Default value: `AllMarks`. Valid values:

`AllMarks`: Full mode. In this mode, a snapshot image is generated based on each whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client.

`LatestMarksOnly`: Single-page deduplication mode. In this mode, a snapshot image is generated based only on the latest whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client if the API is called multiple times for the same whiteboard snapshot.

**Note: The `LatestMarksOnly` mode takes effect only when the `addSnapshotMark` API is called by using Tencent Interactive Whiteboard SDK v2.6.8 or later. Otherwise, even if this parameter is set to `LatestMarksOnly`, the default `AllMarks` mode is used.**
                     * @param _snapshotMode Whiteboard snapshot mode. Default value: `AllMarks`. Valid values:

`AllMarks`: Full mode. In this mode, a snapshot image is generated based on each whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client.

`LatestMarksOnly`: Single-page deduplication mode. In this mode, a snapshot image is generated based only on the latest whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client if the API is called multiple times for the same whiteboard snapshot.

**Note: The `LatestMarksOnly` mode takes effect only when the `addSnapshotMark` API is called by using Tencent Interactive Whiteboard SDK v2.6.8 or later. Otherwise, even if this parameter is set to `LatestMarksOnly`, the default `AllMarks` mode is used.**
                     * 
                     */
                    void SetSnapshotMode(const std::string& _snapshotMode);

                    /**
                     * 判断参数 SnapshotMode 是否已赋值
                     * @return SnapshotMode 是否已赋值
                     * 
                     */
                    bool SnapshotModeHasBeenSet() const;

                private:

                    /**
                     * Whiteboard parameters.
                     */
                    SnapshotWhiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * `SdkAppId` of the whiteboard application.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Whiteboard room ID.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Callback URL to which the whiteboard snapshot result is to be sent.
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                    /**
                     * `COS` bucket in which the generated whiteboard snapshot file is to be stored. If you leave this parameter empty, the generated file will be stored in the public bucket and retained for only three days.
                     */
                    SnapshotCOS m_cOS;
                    bool m_cOSHasBeenSet;

                    /**
                     * Whiteboard snapshot mode. Default value: `AllMarks`. Valid values:

`AllMarks`: Full mode. In this mode, a snapshot image is generated based on each whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client.

`LatestMarksOnly`: Single-page deduplication mode. In this mode, a snapshot image is generated based only on the latest whiteboard snapshot mark that is added by calling the `addSnapshotMark` API on the client if the API is called multiple times for the same whiteboard snapshot.

**Note: The `LatestMarksOnly` mode takes effect only when the `addSnapshotMark` API is called by using Tencent Interactive Whiteboard SDK v2.6.8 or later. Otherwise, even if this parameter is set to `LatestMarksOnly`, the default `AllMarks` mode is used.**
                     */
                    std::string m_snapshotMode;
                    bool m_snapshotModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKREQUEST_H_
