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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDRECORDINGREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDRECORDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/RecordParams.h>
#include <tencentcloud/trtc/v20190722/model/StorageParams.h>
#include <tencentcloud/trtc/v20190722/model/MixTranscodeParams.h>
#include <tencentcloud/trtc/v20190722/model/MixLayoutParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateCloudRecording request structure.
                */
                class CreateCloudRecordingRequest : public AbstractModel
                {
                public:
                    CreateCloudRecordingRequest();
                    ~CreateCloudRecordingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     * @return SdkAppId The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     * @param SdkAppId The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The [room ID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     * @return RoomId The [room ID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置The [room ID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     * @param RoomId The [room ID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the recording robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in the user ID.
                     * @return UserId The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the recording robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in the user ID.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the recording robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in the user ID.
                     * @param UserId The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the recording robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in the user ID.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The signature (similar to a login password) required for the recording robot to enter the room. Each user ID corresponds to a signature. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104).
                     * @return UserSig The signature (similar to a login password) required for the recording robot to enter the room. Each user ID corresponds to a signature. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104).
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置The signature (similar to a login password) required for the recording robot to enter the room. Each user ID corresponds to a signature. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104).
                     * @param UserSig The signature (similar to a login password) required for the recording robot to enter the room. Each user ID corresponds to a signature. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104).
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取The on-cloud recording parameters.
                     * @return RecordParams The on-cloud recording parameters.
                     */
                    RecordParams GetRecordParams() const;

                    /**
                     * 设置The on-cloud recording parameters.
                     * @param RecordParams The on-cloud recording parameters.
                     */
                    void SetRecordParams(const RecordParams& _recordParams);

                    /**
                     * 判断参数 RecordParams 是否已赋值
                     * @return RecordParams 是否已赋值
                     */
                    bool RecordParamsHasBeenSet() const;

                    /**
                     * 获取The cloud storage information of the recording file. Currently, you can only save recording files to Tencent Cloud VOD.
                     * @return StorageParams The cloud storage information of the recording file. Currently, you can only save recording files to Tencent Cloud VOD.
                     */
                    StorageParams GetStorageParams() const;

                    /**
                     * 设置The cloud storage information of the recording file. Currently, you can only save recording files to Tencent Cloud VOD.
                     * @param StorageParams The cloud storage information of the recording file. Currently, you can only save recording files to Tencent Cloud VOD.
                     */
                    void SetStorageParams(const StorageParams& _storageParams);

                    /**
                     * 判断参数 StorageParams 是否已赋值
                     * @return StorageParams 是否已赋值
                     */
                    bool StorageParamsHasBeenSet() const;

                    /**
                     * 获取The type of the TRTC room ID, which must be the same as the ID type of the room whose streams are recorded.
0: String
1: 32-bit integer (default)
                     * @return RoomIdType The type of the TRTC room ID, which must be the same as the ID type of the room whose streams are recorded.
0: String
1: 32-bit integer (default)
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置The type of the TRTC room ID, which must be the same as the ID type of the room whose streams are recorded.
0: String
1: 32-bit integer (default)
                     * @param RoomIdType The type of the TRTC room ID, which must be the same as the ID type of the room whose streams are recorded.
0: String
1: 32-bit integer (default)
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取The stream mixing parameters, which are valid if the mixed-stream recording mode is used.
                     * @return MixTranscodeParams The stream mixing parameters, which are valid if the mixed-stream recording mode is used.
                     */
                    MixTranscodeParams GetMixTranscodeParams() const;

                    /**
                     * 设置The stream mixing parameters, which are valid if the mixed-stream recording mode is used.
                     * @param MixTranscodeParams The stream mixing parameters, which are valid if the mixed-stream recording mode is used.
                     */
                    void SetMixTranscodeParams(const MixTranscodeParams& _mixTranscodeParams);

                    /**
                     * 判断参数 MixTranscodeParams 是否已赋值
                     * @return MixTranscodeParams 是否已赋值
                     */
                    bool MixTranscodeParamsHasBeenSet() const;

                    /**
                     * 获取The layout parameters, which are valid if the mixed-stream recording mode is used.
                     * @return MixLayoutParams The layout parameters, which are valid if the mixed-stream recording mode is used.
                     */
                    MixLayoutParams GetMixLayoutParams() const;

                    /**
                     * 设置The layout parameters, which are valid if the mixed-stream recording mode is used.
                     * @param MixLayoutParams The layout parameters, which are valid if the mixed-stream recording mode is used.
                     */
                    void SetMixLayoutParams(const MixLayoutParams& _mixLayoutParams);

                    /**
                     * 判断参数 MixLayoutParams 是否已赋值
                     * @return MixLayoutParams 是否已赋值
                     */
                    bool MixLayoutParamsHasBeenSet() const;

                    /**
                     * 获取The amount of time (in hours) during which API requests can be made after recording starts. Calculation starts when a recording task is started (when the recording task ID is returned). Once the period elapses, the query, modification, and stop recording APIs can no longer be called, but the recording task will continue. The default value is `72` (three days), and the maximum and minimum values allowed are `720` (30 days) and `6` respectively. If you do not set this parameter, the query, modification, and stop recording APIs can be called within 72 hours after recording starts.
                     * @return ResourceExpiredHour The amount of time (in hours) during which API requests can be made after recording starts. Calculation starts when a recording task is started (when the recording task ID is returned). Once the period elapses, the query, modification, and stop recording APIs can no longer be called, but the recording task will continue. The default value is `72` (three days), and the maximum and minimum values allowed are `720` (30 days) and `6` respectively. If you do not set this parameter, the query, modification, and stop recording APIs can be called within 72 hours after recording starts.
                     */
                    uint64_t GetResourceExpiredHour() const;

                    /**
                     * 设置The amount of time (in hours) during which API requests can be made after recording starts. Calculation starts when a recording task is started (when the recording task ID is returned). Once the period elapses, the query, modification, and stop recording APIs can no longer be called, but the recording task will continue. The default value is `72` (three days), and the maximum and minimum values allowed are `720` (30 days) and `6` respectively. If you do not set this parameter, the query, modification, and stop recording APIs can be called within 72 hours after recording starts.
                     * @param ResourceExpiredHour The amount of time (in hours) during which API requests can be made after recording starts. Calculation starts when a recording task is started (when the recording task ID is returned). Once the period elapses, the query, modification, and stop recording APIs can no longer be called, but the recording task will continue. The default value is `72` (three days), and the maximum and minimum values allowed are `720` (30 days) and `6` respectively. If you do not set this parameter, the query, modification, and stop recording APIs can be called within 72 hours after recording starts.
                     */
                    void SetResourceExpiredHour(const uint64_t& _resourceExpiredHour);

                    /**
                     * 判断参数 ResourceExpiredHour 是否已赋值
                     * @return ResourceExpiredHour 是否已赋值
                     */
                    bool ResourceExpiredHourHasBeenSet() const;

                    /**
                     * 获取The permission ticket for a TRTC room. This parameter is required if advanced permission control is enabled in the console, in which case the TRTC backend will verify users’ [PrivateMapKey](https://intl.cloud.tencent.com/document/product/647/32240?from_cn_redirect=1), which include an encrypted room ID and permission bit list. A user providing only `UserSig` and not `PrivateMapKey` will be unable to enter the room.
                     * @return PrivateMapKey The permission ticket for a TRTC room. This parameter is required if advanced permission control is enabled in the console, in which case the TRTC backend will verify users’ [PrivateMapKey](https://intl.cloud.tencent.com/document/product/647/32240?from_cn_redirect=1), which include an encrypted room ID and permission bit list. A user providing only `UserSig` and not `PrivateMapKey` will be unable to enter the room.
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置The permission ticket for a TRTC room. This parameter is required if advanced permission control is enabled in the console, in which case the TRTC backend will verify users’ [PrivateMapKey](https://intl.cloud.tencent.com/document/product/647/32240?from_cn_redirect=1), which include an encrypted room ID and permission bit list. A user providing only `UserSig` and not `PrivateMapKey` will be unable to enter the room.
                     * @param PrivateMapKey The permission ticket for a TRTC room. This parameter is required if advanced permission control is enabled in the console, in which case the TRTC backend will verify users’ [PrivateMapKey](https://intl.cloud.tencent.com/document/product/647/32240?from_cn_redirect=1), which include an encrypted room ID and permission bit list. A user providing only `UserSig` and not `PrivateMapKey` will be unable to enter the room.
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                private:

                    /**
                     * The [SDKAppID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The [room ID](https://intl.cloud.tencent.com/document/product/647/37714) of the TRTC room whose streams are recorded.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The [user ID](https://intl.cloud.tencent.com/document/product/647/37714) of the recording robot in the TRTC room, which cannot be the same as a user ID already in use. We recommend you include the room ID in the user ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The signature (similar to a login password) required for the recording robot to enter the room. Each user ID corresponds to a signature. For information on how to calculate the signature, see [What is UserSig?](https://intl.cloud.tencent.com/document/product/647/38104).
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * The on-cloud recording parameters.
                     */
                    RecordParams m_recordParams;
                    bool m_recordParamsHasBeenSet;

                    /**
                     * The cloud storage information of the recording file. Currently, you can only save recording files to Tencent Cloud VOD.
                     */
                    StorageParams m_storageParams;
                    bool m_storageParamsHasBeenSet;

                    /**
                     * The type of the TRTC room ID, which must be the same as the ID type of the room whose streams are recorded.
0: String
1: 32-bit integer (default)
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * The stream mixing parameters, which are valid if the mixed-stream recording mode is used.
                     */
                    MixTranscodeParams m_mixTranscodeParams;
                    bool m_mixTranscodeParamsHasBeenSet;

                    /**
                     * The layout parameters, which are valid if the mixed-stream recording mode is used.
                     */
                    MixLayoutParams m_mixLayoutParams;
                    bool m_mixLayoutParamsHasBeenSet;

                    /**
                     * The amount of time (in hours) during which API requests can be made after recording starts. Calculation starts when a recording task is started (when the recording task ID is returned). Once the period elapses, the query, modification, and stop recording APIs can no longer be called, but the recording task will continue. The default value is `72` (three days), and the maximum and minimum values allowed are `720` (30 days) and `6` respectively. If you do not set this parameter, the query, modification, and stop recording APIs can be called within 72 hours after recording starts.
                     */
                    uint64_t m_resourceExpiredHour;
                    bool m_resourceExpiredHourHasBeenSet;

                    /**
                     * The permission ticket for a TRTC room. This parameter is required if advanced permission control is enabled in the console, in which case the TRTC backend will verify users’ [PrivateMapKey](https://intl.cloud.tencent.com/document/product/647/32240?from_cn_redirect=1), which include an encrypted room ID and permission bit list. A user providing only `UserSig` and not `PrivateMapKey` will be unable to enter the room.
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDRECORDINGREQUEST_H_
