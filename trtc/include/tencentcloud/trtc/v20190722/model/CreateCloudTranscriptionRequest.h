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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionParam.h>
#include <tencentcloud/trtc/v20190722/model/AsrParam.h>
#include <tencentcloud/trtc/v20190722/model/TranslationParam.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateCloudTranscription request structure.
                */
                class CreateCloudTranscriptionRequest : public AbstractModel
                {
                public:
                    CreateCloudTranscriptionRequest();
                    ~CreateCloudTranscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取[SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the transcribed room.
                     * @return SdkAppId [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the transcribed room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置[SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the transcribed room.
                     * @param _sdkAppId [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the transcribed room.
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
                     * 获取[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it via RoomIdType.
                     * @return RoomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it via RoomIdType.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置[RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it via RoomIdType.
                     * @param _roomId [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it via RoomIdType.
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
                     * 获取Room information RoomType must be the same as the RoomId type of the corresponding transcribed room. 0 indicates an integer type room ID, and 1 indicates a string Room Number.
                     * @return RoomIdType Room information RoomType must be the same as the RoomId type of the corresponding transcribed room. 0 indicates an integer type room ID, and 1 indicates a string Room Number.
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置Room information RoomType must be the same as the RoomId type of the corresponding transcribed room. 0 indicates an integer type room ID, and 1 indicates a string Room Number.
                     * @param _roomIdType Room information RoomType must be the same as the RoomId type of the corresponding transcribed room. 0 indicates an integer type room ID, and 1 indicates a string Room Number.
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
                     * 获取Parameters for transcribe service to join TRTC room.
                     * @return TranscriptionParam Parameters for transcribe service to join TRTC room.
                     * 
                     */
                    TranscriptionParam GetTranscriptionParam() const;

                    /**
                     * 设置Parameters for transcribe service to join TRTC room.
                     * @param _transcriptionParam Parameters for transcribe service to join TRTC room.
                     * 
                     */
                    void SetTranscriptionParam(const TranscriptionParam& _transcriptionParam);

                    /**
                     * 判断参数 TranscriptionParam 是否已赋值
                     * @return TranscriptionParam 是否已赋值
                     * 
                     */
                    bool TranscriptionParamHasBeenSet() const;

                    /**
                     * 获取Parameters used by the ASR transcribe service.
                     * @return AsrParam Parameters used by the ASR transcribe service.
                     * 
                     */
                    AsrParam GetAsrParam() const;

                    /**
                     * 设置Parameters used by the ASR transcribe service.
                     * @param _asrParam Parameters used by the ASR transcribe service.
                     * 
                     */
                    void SetAsrParam(const AsrParam& _asrParam);

                    /**
                     * 判断参数 AsrParam 是否已赋值
                     * @return AsrParam 是否已赋值
                     * 
                     */
                    bool AsrParamHasBeenSet() const;

                    /**
                     * 获取Translation parameters used for transcription.
                     * @return TranslationParam Translation parameters used for transcription.
                     * 
                     */
                    TranslationParam GetTranslationParam() const;

                    /**
                     * 设置Translation parameters used for transcription.
                     * @param _translationParam Translation parameters used for transcription.
                     * 
                     */
                    void SetTranslationParam(const TranslationParam& _translationParam);

                    /**
                     * 判断参数 TranslationParam 是否已赋值
                     * @return TranslationParam 是否已赋值
                     * 
                     */
                    bool TranslationParamHasBeenSet() const;

                private:

                    /**
                     * [SdkAppId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid) of TRTC, which is the same as the SdkAppId corresponding to the transcribed room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * [RoomId](https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid) of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it via RoomIdType.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Room information RoomType must be the same as the RoomId type of the corresponding transcribed room. 0 indicates an integer type room ID, and 1 indicates a string Room Number.
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * Parameters for transcribe service to join TRTC room.
                     */
                    TranscriptionParam m_transcriptionParam;
                    bool m_transcriptionParamHasBeenSet;

                    /**
                     * Parameters used by the ASR transcribe service.
                     */
                    AsrParam m_asrParam;
                    bool m_asrParamHasBeenSet;

                    /**
                     * Translation parameters used for transcription.
                     */
                    TranslationParam m_translationParam;
                    bool m_translationParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_
