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
#include <tencentcloud/trtc/v20190722/model/TTSParam.h>


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
                     * 获取<p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC is the same as the SdkAppId corresponding to the transcribe room.</p>
                     * @return SdkAppId <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC is the same as the SdkAppId corresponding to the transcribe room.</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC is the same as the SdkAppId corresponding to the transcribe room.</p>
                     * @param _sdkAppId <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC is the same as the SdkAppId corresponding to the transcribe room.</p>
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
                     * 获取<p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid">RoomId</a> of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it through RoomIdType.</p>
                     * @return RoomId <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid">RoomId</a> of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it through RoomIdType.</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid">RoomId</a> of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it through RoomIdType.</p>
                     * @param _roomId <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid">RoomId</a> of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it through RoomIdType.</p>
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
                     * 获取<p>The room information RoomType must be identical to the data type of the RoomId corresponding to the transcribed room. 0 indicates an integer room number, and 1 indicates a string Room Number.</p>
                     * @return RoomIdType <p>The room information RoomType must be identical to the data type of the RoomId corresponding to the transcribed room. 0 indicates an integer room number, and 1 indicates a string Room Number.</p>
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置<p>The room information RoomType must be identical to the data type of the RoomId corresponding to the transcribed room. 0 indicates an integer room number, and 1 indicates a string Room Number.</p>
                     * @param _roomIdType <p>The room information RoomType must be identical to the data type of the RoomId corresponding to the transcribed room. 0 indicates an integer room number, and 1 indicates a string Room Number.</p>
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
                     * 获取<p>Parameters for the transcribe service to join TRTC room.</p>
                     * @return TranscriptionParam <p>Parameters for the transcribe service to join TRTC room.</p>
                     * 
                     */
                    TranscriptionParam GetTranscriptionParam() const;

                    /**
                     * 设置<p>Parameters for the transcribe service to join TRTC room.</p>
                     * @param _transcriptionParam <p>Parameters for the transcribe service to join TRTC room.</p>
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
                     * 获取<p>Parameters used by the ASR transcribe service.</p>
                     * @return AsrParam <p>Parameters used by the ASR transcribe service.</p>
                     * 
                     */
                    AsrParam GetAsrParam() const;

                    /**
                     * 设置<p>Parameters used by the ASR transcribe service.</p>
                     * @param _asrParam <p>Parameters used by the ASR transcribe service.</p>
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
                     * 获取<p>Parameters used to transcribe the translation service.</p>
                     * @return TranslationParam <p>Parameters used to transcribe the translation service.</p>
                     * 
                     */
                    TranslationParam GetTranslationParam() const;

                    /**
                     * 设置<p>Parameters used to transcribe the translation service.</p>
                     * @param _translationParam <p>Parameters used to transcribe the translation service.</p>
                     * 
                     */
                    void SetTranslationParam(const TranslationParam& _translationParam);

                    /**
                     * 判断参数 TranslationParam 是否已赋值
                     * @return TranslationParam 是否已赋值
                     * 
                     */
                    bool TranslationParamHasBeenSet() const;

                    /**
                     * 获取<p>Parameters used by the TTS transcribe service.</p>
                     * @return TTSParam <p>Parameters used by the TTS transcribe service.</p>
                     * 
                     */
                    std::vector<TTSParam> GetTTSParam() const;

                    /**
                     * 设置<p>Parameters used by the TTS transcribe service.</p>
                     * @param _tTSParam <p>Parameters used by the TTS transcribe service.</p>
                     * 
                     */
                    void SetTTSParam(const std::vector<TTSParam>& _tTSParam);

                    /**
                     * 判断参数 TTSParam 是否已赋值
                     * @return TTSParam 是否已赋值
                     * 
                     */
                    bool TTSParamHasBeenSet() const;

                private:

                    /**
                     * <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#sdkappid">SdkAppId</a> of TRTC is the same as the SdkAppId corresponding to the transcribe room.</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>The <a href="https://www.tencentcloud.com/document/product/647/46351?from_cn_redirect=1#roomid">RoomId</a> of TRTC, which is the RoomId corresponding to the transcribed TRTC room. Note: The room ID type defaults to integer. If the room ID type is string, specify it through RoomIdType.</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>The room information RoomType must be identical to the data type of the RoomId corresponding to the transcribed room. 0 indicates an integer room number, and 1 indicates a string Room Number.</p>
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * <p>Parameters for the transcribe service to join TRTC room.</p>
                     */
                    TranscriptionParam m_transcriptionParam;
                    bool m_transcriptionParamHasBeenSet;

                    /**
                     * <p>Parameters used by the ASR transcribe service.</p>
                     */
                    AsrParam m_asrParam;
                    bool m_asrParamHasBeenSet;

                    /**
                     * <p>Parameters used to transcribe the translation service.</p>
                     */
                    TranslationParam m_translationParam;
                    bool m_translationParamHasBeenSet;

                    /**
                     * <p>Parameters used by the TTS transcribe service.</p>
                     */
                    std::vector<TTSParam> m_tTSParam;
                    bool m_tTSParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_
