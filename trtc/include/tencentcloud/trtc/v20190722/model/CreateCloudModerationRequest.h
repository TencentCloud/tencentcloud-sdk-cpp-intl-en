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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDMODERATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/ModerationParams.h>
#include <tencentcloud/trtc/v20190722/model/ModerationStorageParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateCloudModeration request structure.
                */
                class CreateCloudModerationRequest : public AbstractModel
                {
                public:
                    CreateCloudModerationRequest();
                    ~CreateCloudModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取[SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the TRTC room.
                     * @return SdkAppId [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the TRTC room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置[SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the TRTC room.
                     * @param _sdkAppId [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the TRTC room.
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
                     * 获取[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the TRTC room.
                     * @return RoomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the TRTC room.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the TRTC room.
                     * @param _roomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the TRTC room.
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Chatbot's UserId, which is used to enter the room and initiate a moderation task. [*Note] This UserId should not be duplicated with the UserIds of the current anchors or audience members in the room. If multiple moderation tasks are initiated in one room, the chatbot's UserId should also be unique; otherwise, the previous moderation task is interrupted. It is recommended to include the room ID as part of the UserId, ensuring that the chatbot's UserId is unique in the room.
                     * @return UserId Chatbot's UserId, which is used to enter the room and initiate a moderation task. [*Note] This UserId should not be duplicated with the UserIds of the current anchors or audience members in the room. If multiple moderation tasks are initiated in one room, the chatbot's UserId should also be unique; otherwise, the previous moderation task is interrupted. It is recommended to include the room ID as part of the UserId, ensuring that the chatbot's UserId is unique in the room.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Chatbot's UserId, which is used to enter the room and initiate a moderation task. [*Note] This UserId should not be duplicated with the UserIds of the current anchors or audience members in the room. If multiple moderation tasks are initiated in one room, the chatbot's UserId should also be unique; otherwise, the previous moderation task is interrupted. It is recommended to include the room ID as part of the UserId, ensuring that the chatbot's UserId is unique in the room.
                     * @param _userId Chatbot's UserId, which is used to enter the room and initiate a moderation task. [*Note] This UserId should not be duplicated with the UserIds of the current anchors or audience members in the room. If multiple moderation tasks are initiated in one room, the chatbot's UserId should also be unique; otherwise, the previous moderation task is interrupted. It is recommended to include the room ID as part of the UserId, ensuring that the chatbot's UserId is unique in the room.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. For specific calculation methods, see TRTC solution for calculating UserSig.
                     * @return UserSig Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. For specific calculation methods, see TRTC solution for calculating UserSig.
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. For specific calculation methods, see TRTC solution for calculating UserSig.
                     * @param _userSig Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. For specific calculation methods, see TRTC solution for calculating UserSig.
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取Control parameters for cloud moderation.
                     * @return ModerationParams Control parameters for cloud moderation.
                     * 
                     */
                    ModerationParams GetModerationParams() const;

                    /**
                     * 设置Control parameters for cloud moderation.
                     * @param _moderationParams Control parameters for cloud moderation.
                     * 
                     */
                    void SetModerationParams(const ModerationParams& _moderationParams);

                    /**
                     * 判断参数 ModerationParams 是否已赋值
                     * @return ModerationParams 是否已赋值
                     * 
                     */
                    bool ModerationParamsHasBeenSet() const;

                    /**
                     * 获取Parameters for uploading cloud moderation files to the cloud storage.
                     * @return ModerationStorageParams Parameters for uploading cloud moderation files to the cloud storage.
                     * 
                     */
                    ModerationStorageParams GetModerationStorageParams() const;

                    /**
                     * 设置Parameters for uploading cloud moderation files to the cloud storage.
                     * @param _moderationStorageParams Parameters for uploading cloud moderation files to the cloud storage.
                     * 
                     */
                    void SetModerationStorageParams(const ModerationStorageParams& _moderationStorageParams);

                    /**
                     * 判断参数 ModerationStorageParams 是否已赋值
                     * @return ModerationStorageParams 是否已赋值
                     * 
                     */
                    bool ModerationStorageParamsHasBeenSet() const;

                    /**
                     * 获取Type of the TRTC room number. [*Note] It should be the same as the type of the RoomId corresponding to the recording room. 0: string type; 1: 32-bit integer type (default value). Example value: 1.
                     * @return RoomIdType Type of the TRTC room number. [*Note] It should be the same as the type of the RoomId corresponding to the recording room. 0: string type; 1: 32-bit integer type (default value). Example value: 1.
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置Type of the TRTC room number. [*Note] It should be the same as the type of the RoomId corresponding to the recording room. 0: string type; 1: 32-bit integer type (default value). Example value: 1.
                     * @param _roomIdType Type of the TRTC room number. [*Note] It should be the same as the type of the RoomId corresponding to the recording room. 0: string type; 1: 32-bit integer type (default value). Example value: 1.
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取Validity period for calling the task ID, which starts upon successful initiation of the task and obtaining the task ID. After the timeout, APIs such as querying, updating, or stopping cannot be called, but the moderation task is not stopped. The unit of the parameter is hours, with a default value of 24 hours (1 day). The maximum value is 72 hours (3 days), while the minimum value is 6 hours. For example, if this parameter is not specified, the validity period for calling the querying, updating, and stopping slicing APIs is 24 hours upon the successful start of slicing.
                     * @return ResourceExpiredHour Validity period for calling the task ID, which starts upon successful initiation of the task and obtaining the task ID. After the timeout, APIs such as querying, updating, or stopping cannot be called, but the moderation task is not stopped. The unit of the parameter is hours, with a default value of 24 hours (1 day). The maximum value is 72 hours (3 days), while the minimum value is 6 hours. For example, if this parameter is not specified, the validity period for calling the querying, updating, and stopping slicing APIs is 24 hours upon the successful start of slicing.
                     * 
                     */
                    uint64_t GetResourceExpiredHour() const;

                    /**
                     * 设置Validity period for calling the task ID, which starts upon successful initiation of the task and obtaining the task ID. After the timeout, APIs such as querying, updating, or stopping cannot be called, but the moderation task is not stopped. The unit of the parameter is hours, with a default value of 24 hours (1 day). The maximum value is 72 hours (3 days), while the minimum value is 6 hours. For example, if this parameter is not specified, the validity period for calling the querying, updating, and stopping slicing APIs is 24 hours upon the successful start of slicing.
                     * @param _resourceExpiredHour Validity period for calling the task ID, which starts upon successful initiation of the task and obtaining the task ID. After the timeout, APIs such as querying, updating, or stopping cannot be called, but the moderation task is not stopped. The unit of the parameter is hours, with a default value of 24 hours (1 day). The maximum value is 72 hours (3 days), while the minimum value is 6 hours. For example, if this parameter is not specified, the validity period for calling the querying, updating, and stopping slicing APIs is 24 hours upon the successful start of slicing.
                     * 
                     */
                    void SetResourceExpiredHour(const uint64_t& _resourceExpiredHour);

                    /**
                     * 判断参数 ResourceExpiredHour 是否已赋值
                     * @return ResourceExpiredHour 是否已赋值
                     * 
                     */
                    bool ResourceExpiredHourHasBeenSet() const;

                private:

                    /**
                     * [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the TRTC room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the TRTC room.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Chatbot's UserId, which is used to enter the room and initiate a moderation task. [*Note] This UserId should not be duplicated with the UserIds of the current anchors or audience members in the room. If multiple moderation tasks are initiated in one room, the chatbot's UserId should also be unique; otherwise, the previous moderation task is interrupted. It is recommended to include the room ID as part of the UserId, ensuring that the chatbot's UserId is unique in the room.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Signature verification corresponding to the chatbot's UserId, namely, the UserId and UserSig serve as the login password for the chatbot to enter the room. For specific calculation methods, see TRTC solution for calculating UserSig.
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * Control parameters for cloud moderation.
                     */
                    ModerationParams m_moderationParams;
                    bool m_moderationParamsHasBeenSet;

                    /**
                     * Parameters for uploading cloud moderation files to the cloud storage.
                     */
                    ModerationStorageParams m_moderationStorageParams;
                    bool m_moderationStorageParamsHasBeenSet;

                    /**
                     * Type of the TRTC room number. [*Note] It should be the same as the type of the RoomId corresponding to the recording room. 0: string type; 1: 32-bit integer type (default value). Example value: 1.
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * Validity period for calling the task ID, which starts upon successful initiation of the task and obtaining the task ID. After the timeout, APIs such as querying, updating, or stopping cannot be called, but the moderation task is not stopped. The unit of the parameter is hours, with a default value of 24 hours (1 day). The maximum value is 72 hours (3 days), while the minimum value is 6 hours. For example, if this parameter is not specified, the validity period for calling the querying, updating, and stopping slicing APIs is 24 hours upon the successful start of slicing.
                     */
                    uint64_t m_resourceExpiredHour;
                    bool m_resourceExpiredHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDMODERATIONREQUEST_H_
