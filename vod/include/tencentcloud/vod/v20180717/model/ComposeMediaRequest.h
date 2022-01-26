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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaTrack.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaOutput.h>
#include <tencentcloud/vod/v20180717/model/Canvas.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ComposeMedia request structure.
                */
                class ComposeMediaRequest : public AbstractModel
                {
                public:
                    ComposeMediaRequest();
                    ~ComposeMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials. <li>Multiple input tracks are aligned with the output media file on the time axis. </li><li>The materials of each track at the same time point on the time axis will be superimposed. Specifically, videos or images will be superimposed for video image by track order, where a material with a higher track order will be more on top, while audio materials will be mixed. </li><li>Up to 10 tracks are supported for each type (video, audio, or image).</li>
                     * @return Tracks List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials. <li>Multiple input tracks are aligned with the output media file on the time axis. </li><li>The materials of each track at the same time point on the time axis will be superimposed. Specifically, videos or images will be superimposed for video image by track order, where a material with a higher track order will be more on top, while audio materials will be mixed. </li><li>Up to 10 tracks are supported for each type (video, audio, or image).</li>
                     */
                    std::vector<MediaTrack> GetTracks() const;

                    /**
                     * 设置List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials. <li>Multiple input tracks are aligned with the output media file on the time axis. </li><li>The materials of each track at the same time point on the time axis will be superimposed. Specifically, videos or images will be superimposed for video image by track order, where a material with a higher track order will be more on top, while audio materials will be mixed. </li><li>Up to 10 tracks are supported for each type (video, audio, or image).</li>
                     * @param Tracks List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials. <li>Multiple input tracks are aligned with the output media file on the time axis. </li><li>The materials of each track at the same time point on the time axis will be superimposed. Specifically, videos or images will be superimposed for video image by track order, where a material with a higher track order will be more on top, while audio materials will be mixed. </li><li>Up to 10 tracks are supported for each type (video, audio, or image).</li>
                     */
                    void SetTracks(const std::vector<MediaTrack>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取Information of output media file.
                     * @return Output Information of output media file.
                     */
                    ComposeMediaOutput GetOutput() const;

                    /**
                     * 设置Information of output media file.
                     * @param Output Information of output media file.
                     */
                    void SetOutput(const ComposeMediaOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Canvas used for composing video file.
                     * @return Canvas Canvas used for composing video file.
                     */
                    Canvas GetCanvas() const;

                    /**
                     * 设置Canvas used for composing video file.
                     * @param Canvas Canvas used for composing video file.
                     */
                    void SetCanvas(const Canvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取Used to pass through user request information. `ComposeMediaComplete` callback will return the value of this parameter. It contains up to 1,000 characters.
                     * @return SessionContext Used to pass through user request information. `ComposeMediaComplete` callback will return the value of this parameter. It contains up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Used to pass through user request information. `ComposeMediaComplete` callback will return the value of this parameter. It contains up to 1,000 characters.
                     * @param SessionContext Used to pass through user request information. `ComposeMediaComplete` callback will return the value of this parameter. It contains up to 1,000 characters.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     * @return SessionId Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     * @param SessionId Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials. <li>Multiple input tracks are aligned with the output media file on the time axis. </li><li>The materials of each track at the same time point on the time axis will be superimposed. Specifically, videos or images will be superimposed for video image by track order, where a material with a higher track order will be more on top, while audio materials will be mixed. </li><li>Up to 10 tracks are supported for each type (video, audio, or image).</li>
                     */
                    std::vector<MediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * Information of output media file.
                     */
                    ComposeMediaOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Canvas used for composing video file.
                     */
                    Canvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * Used to pass through user request information. `ComposeMediaComplete` callback will return the value of this parameter. It contains up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAREQUEST_H_
