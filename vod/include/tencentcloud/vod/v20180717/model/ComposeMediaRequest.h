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
                     * 获取The input media track list includes multiple track information composed of materials such as video, audio, and images. Among them:<li>The input multiple tracks are aligned with the output media file timeline on the timeline.</li><li>Overlap materials on different tracks at the same time point on the timeline. Perform image overlay of videos or images in track order, with materials of higher track order overlaid on top. Mix audio materials.</li><li>Each type of track supports up to 10 video, audio, or image tracks.</li><li>The total number of media segments placed on all types of tracks supports up to 500.</li>
                     * @return Tracks The input media track list includes multiple track information composed of materials such as video, audio, and images. Among them:<li>The input multiple tracks are aligned with the output media file timeline on the timeline.</li><li>Overlap materials on different tracks at the same time point on the timeline. Perform image overlay of videos or images in track order, with materials of higher track order overlaid on top. Mix audio materials.</li><li>Each type of track supports up to 10 video, audio, or image tracks.</li><li>The total number of media segments placed on all types of tracks supports up to 500.</li>
                     * 
                     */
                    std::vector<MediaTrack> GetTracks() const;

                    /**
                     * 设置The input media track list includes multiple track information composed of materials such as video, audio, and images. Among them:<li>The input multiple tracks are aligned with the output media file timeline on the timeline.</li><li>Overlap materials on different tracks at the same time point on the timeline. Perform image overlay of videos or images in track order, with materials of higher track order overlaid on top. Mix audio materials.</li><li>Each type of track supports up to 10 video, audio, or image tracks.</li><li>The total number of media segments placed on all types of tracks supports up to 500.</li>
                     * @param _tracks The input media track list includes multiple track information composed of materials such as video, audio, and images. Among them:<li>The input multiple tracks are aligned with the output media file timeline on the timeline.</li><li>Overlap materials on different tracks at the same time point on the timeline. Perform image overlay of videos or images in track order, with materials of higher track order overlaid on top. Mix audio materials.</li><li>Each type of track supports up to 10 video, audio, or image tracks.</li><li>The total number of media segments placed on all types of tracks supports up to 500.</li>
                     * 
                     */
                    void SetTracks(const std::vector<MediaTrack>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取Output media file information.
                     * @return Output Output media file information.
                     * 
                     */
                    ComposeMediaOutput GetOutput() const;

                    /**
                     * 设置Output media file information.
                     * @param _output Output media file information.
                     * 
                     */
                    void SetOutput(const ComposeMediaOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Canvas used when making video files.
                     * @return Canvas Canvas used when making video files.
                     * 
                     */
                    Canvas GetCanvas() const;

                    /**
                     * 设置Canvas used when making video files.
                     * @param _canvas Canvas used when making video files.
                     * 
                     */
                    void SetCanvas(const Canvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取Identify source context. This is used to pass through user request information. The ComposeMediaComplete callback returns the value of this field. The maximum length is 1000 characters.
                     * @return SessionContext Identify source context. This is used to pass through user request information. The ComposeMediaComplete callback returns the value of this field. The maximum length is 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Identify source context. This is used to pass through user request information. The ComposeMediaComplete callback returns the value of this field. The maximum length is 1000 characters.
                     * @param _sessionContext Identify source context. This is used to pass through user request information. The ComposeMediaComplete callback returns the value of this field. The maximum length is 1000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Identifier for task deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * @return SessionId Identifier for task deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Identifier for task deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * @param _sessionId Identifier for task deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * The input media track list includes multiple track information composed of materials such as video, audio, and images. Among them:<li>The input multiple tracks are aligned with the output media file timeline on the timeline.</li><li>Overlap materials on different tracks at the same time point on the timeline. Perform image overlay of videos or images in track order, with materials of higher track order overlaid on top. Mix audio materials.</li><li>Each type of track supports up to 10 video, audio, or image tracks.</li><li>The total number of media segments placed on all types of tracks supports up to 500.</li>
                     */
                    std::vector<MediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * Output media file information.
                     */
                    ComposeMediaOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Canvas used when making video files.
                     */
                    Canvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * Identify source context. This is used to pass through user request information. The ComposeMediaComplete callback returns the value of this field. The maximum length is 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Identifier for task deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAREQUEST_H_
