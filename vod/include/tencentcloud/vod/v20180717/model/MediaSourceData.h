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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LiveRecordInfo.h>
#include <tencentcloud/vod/v20180717/model/TrtcRecordInfo.h>
#include <tencentcloud/vod/v20180717/model/WebPageRecordInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Source file information.
                */
                class MediaSourceData : public AbstractModel
                {
                public:
                    MediaSourceData();
                    ~MediaSourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media file source category:
<li>Record: comes from recording, such as live recording, live streaming time shift recording.</li>
<li>Upload: Comes from upload, such as pull upload, server-side upload, and client UGC upload.</li>
<li>VideoProcessing: comes from video processing, such as video splicing, video editing.</li>
<li>TrtcRecord: Comes from TRTC simultaneous recording.</li>
<li>WebPageRecord: comes from panoramic recording.</li>
<li>Unknown: Unknown source.</li>
                     * @return SourceType Media file source category:
<li>Record: comes from recording, such as live recording, live streaming time shift recording.</li>
<li>Upload: Comes from upload, such as pull upload, server-side upload, and client UGC upload.</li>
<li>VideoProcessing: comes from video processing, such as video splicing, video editing.</li>
<li>TrtcRecord: Comes from TRTC simultaneous recording.</li>
<li>WebPageRecord: comes from panoramic recording.</li>
<li>Unknown: Unknown source.</li>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Media file source category:
<li>Record: comes from recording, such as live recording, live streaming time shift recording.</li>
<li>Upload: Comes from upload, such as pull upload, server-side upload, and client UGC upload.</li>
<li>VideoProcessing: comes from video processing, such as video splicing, video editing.</li>
<li>TrtcRecord: Comes from TRTC simultaneous recording.</li>
<li>WebPageRecord: comes from panoramic recording.</li>
<li>Unknown: Unknown source.</li>
                     * @param _sourceType Media file source category:
<li>Record: comes from recording, such as live recording, live streaming time shift recording.</li>
<li>Upload: Comes from upload, such as pull upload, server-side upload, and client UGC upload.</li>
<li>VideoProcessing: comes from video processing, such as video splicing, video editing.</li>
<li>TrtcRecord: Comes from TRTC simultaneous recording.</li>
<li>WebPageRecord: comes from panoramic recording.</li>
<li>Unknown: Unknown source.</li>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Field passed through when the user creates a file.
                     * @return SourceContext Field passed through when the user creates a file.
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置Field passed through when the user creates a file.
                     * @param _sourceContext Field passed through when the user creates a file.
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取Live recording information is valid when file source is Record.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LiveRecordInfo Live recording information is valid when file source is Record.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LiveRecordInfo GetLiveRecordInfo() const;

                    /**
                     * 设置Live recording information is valid when file source is Record.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _liveRecordInfo Live recording information is valid when file source is Record.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLiveRecordInfo(const LiveRecordInfo& _liveRecordInfo);

                    /**
                     * 判断参数 LiveRecordInfo 是否已赋值
                     * @return LiveRecordInfo 是否已赋值
                     * 
                     */
                    bool LiveRecordInfoHasBeenSet() const;

                    /**
                     * 获取TRTC Companion Recording Information. Valid at that time when the file source is TrtcRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrtcRecordInfo TRTC Companion Recording Information. Valid at that time when the file source is TrtcRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TrtcRecordInfo GetTrtcRecordInfo() const;

                    /**
                     * 设置TRTC Companion Recording Information. Valid at that time when the file source is TrtcRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trtcRecordInfo TRTC Companion Recording Information. Valid at that time when the file source is TrtcRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrtcRecordInfo(const TrtcRecordInfo& _trtcRecordInfo);

                    /**
                     * 判断参数 TrtcRecordInfo 是否已赋值
                     * @return TrtcRecordInfo 是否已赋值
                     * 
                     */
                    bool TrtcRecordInfoHasBeenSet() const;

                    /**
                     * 获取Panoramic recording information. Valid when the file source is WebPageRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebPageRecordInfo Panoramic recording information. Valid when the file source is WebPageRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WebPageRecordInfo GetWebPageRecordInfo() const;

                    /**
                     * 设置Panoramic recording information. Valid when the file source is WebPageRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _webPageRecordInfo Panoramic recording information. Valid when the file source is WebPageRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebPageRecordInfo(const WebPageRecordInfo& _webPageRecordInfo);

                    /**
                     * 判断参数 WebPageRecordInfo 是否已赋值
                     * @return WebPageRecordInfo 是否已赋值
                     * 
                     */
                    bool WebPageRecordInfoHasBeenSet() const;

                private:

                    /**
                     * Media file source category:
<li>Record: comes from recording, such as live recording, live streaming time shift recording.</li>
<li>Upload: Comes from upload, such as pull upload, server-side upload, and client UGC upload.</li>
<li>VideoProcessing: comes from video processing, such as video splicing, video editing.</li>
<li>TrtcRecord: Comes from TRTC simultaneous recording.</li>
<li>WebPageRecord: comes from panoramic recording.</li>
<li>Unknown: Unknown source.</li>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Field passed through when the user creates a file.
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * Live recording information is valid when file source is Record.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LiveRecordInfo m_liveRecordInfo;
                    bool m_liveRecordInfoHasBeenSet;

                    /**
                     * TRTC Companion Recording Information. Valid at that time when the file source is TrtcRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TrtcRecordInfo m_trtcRecordInfo;
                    bool m_trtcRecordInfoHasBeenSet;

                    /**
                     * Panoramic recording information. Valid when the file source is WebPageRecord.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WebPageRecordInfo m_webPageRecordInfo;
                    bool m_webPageRecordInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
