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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/OutputParams.h>
#include <tencentcloud/trtc/v20190722/model/EncodeParams.h>
#include <tencentcloud/trtc/v20190722/model/LayoutParams.h>
#include <tencentcloud/trtc/v20190722/model/PublishCdnParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartMCUMixTranscodeByStrRoomId request structure.
                */
                class StartMCUMixTranscodeByStrRoomIdRequest : public AbstractModel
                {
                public:
                    StartMCUMixTranscodeByStrRoomIdRequest();
                    ~StartMCUMixTranscodeByStrRoomIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`SDKAppId` of TRTC
                     * @return SdkAppId `SDKAppId` of TRTC
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置`SDKAppId` of TRTC
                     * @param SdkAppId `SDKAppId` of TRTC
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Room ID in string type
                     * @return StrRoomId Room ID in string type
                     */
                    std::string GetStrRoomId() const;

                    /**
                     * 设置Room ID in string type
                     * @param StrRoomId Room ID in string type
                     */
                    void SetStrRoomId(const std::string& _strRoomId);

                    /**
                     * 判断参数 StrRoomId 是否已赋值
                     * @return StrRoomId 是否已赋值
                     */
                    bool StrRoomIdHasBeenSet() const;

                    /**
                     * 获取On-Cloud MixTranscoding output parameters
                     * @return OutputParams On-Cloud MixTranscoding output parameters
                     */
                    OutputParams GetOutputParams() const;

                    /**
                     * 设置On-Cloud MixTranscoding output parameters
                     * @param OutputParams On-Cloud MixTranscoding output parameters
                     */
                    void SetOutputParams(const OutputParams& _outputParams);

                    /**
                     * 判断参数 OutputParams 是否已赋值
                     * @return OutputParams 是否已赋值
                     */
                    bool OutputParamsHasBeenSet() const;

                    /**
                     * 获取On-Cloud MixTranscoding output encoding parameters
                     * @return EncodeParams On-Cloud MixTranscoding output encoding parameters
                     */
                    EncodeParams GetEncodeParams() const;

                    /**
                     * 设置On-Cloud MixTranscoding output encoding parameters
                     * @param EncodeParams On-Cloud MixTranscoding output encoding parameters
                     */
                    void SetEncodeParams(const EncodeParams& _encodeParams);

                    /**
                     * 判断参数 EncodeParams 是否已赋值
                     * @return EncodeParams 是否已赋值
                     */
                    bool EncodeParamsHasBeenSet() const;

                    /**
                     * 获取On-Cloud MixTranscoding output layout parameters
                     * @return LayoutParams On-Cloud MixTranscoding output layout parameters
                     */
                    LayoutParams GetLayoutParams() const;

                    /**
                     * 设置On-Cloud MixTranscoding output layout parameters
                     * @param LayoutParams On-Cloud MixTranscoding output layout parameters
                     */
                    void SetLayoutParams(const LayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取Relayed push parameters of a non-Tencent Cloud CDN
                     * @return PublishCdnParams Relayed push parameters of a non-Tencent Cloud CDN
                     */
                    PublishCdnParams GetPublishCdnParams() const;

                    /**
                     * 设置Relayed push parameters of a non-Tencent Cloud CDN
                     * @param PublishCdnParams Relayed push parameters of a non-Tencent Cloud CDN
                     */
                    void SetPublishCdnParams(const PublishCdnParams& _publishCdnParams);

                    /**
                     * 判断参数 PublishCdnParams 是否已赋值
                     * @return PublishCdnParams 是否已赋值
                     */
                    bool PublishCdnParamsHasBeenSet() const;

                private:

                    /**
                     * `SDKAppId` of TRTC
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Room ID in string type
                     */
                    std::string m_strRoomId;
                    bool m_strRoomIdHasBeenSet;

                    /**
                     * On-Cloud MixTranscoding output parameters
                     */
                    OutputParams m_outputParams;
                    bool m_outputParamsHasBeenSet;

                    /**
                     * On-Cloud MixTranscoding output encoding parameters
                     */
                    EncodeParams m_encodeParams;
                    bool m_encodeParamsHasBeenSet;

                    /**
                     * On-Cloud MixTranscoding output layout parameters
                     */
                    LayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * Relayed push parameters of a non-Tencent Cloud CDN
                     */
                    PublishCdnParams m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_
