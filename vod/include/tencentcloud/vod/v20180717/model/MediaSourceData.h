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
                     * 获取Media files source category: <li>Record: From recording. Such as live streaming recording, live time shift recording, etc.</li> <li>Upload: From upload. Such as pull upload, upload from server, client UGC upload, etc.</li> <li>VideoProcessing: From video processing. Such as video splicing, video editing, etc.</li> <li>TrtcRecord: From TRTC accompanying recording.</li> <li>WebPageRecord: From panoramic recording.</li> <li>Unknown: Unknown source.</li>
                     * @return SourceType Media files source category: <li>Record: From recording. Such as live streaming recording, live time shift recording, etc.</li> <li>Upload: From upload. Such as pull upload, upload from server, client UGC upload, etc.</li> <li>VideoProcessing: From video processing. Such as video splicing, video editing, etc.</li> <li>TrtcRecord: From TRTC accompanying recording.</li> <li>WebPageRecord: From panoramic recording.</li> <li>Unknown: Unknown source.</li>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Media files source category: <li>Record: From recording. Such as live streaming recording, live time shift recording, etc.</li> <li>Upload: From upload. Such as pull upload, upload from server, client UGC upload, etc.</li> <li>VideoProcessing: From video processing. Such as video splicing, video editing, etc.</li> <li>TrtcRecord: From TRTC accompanying recording.</li> <li>WebPageRecord: From panoramic recording.</li> <li>Unknown: Unknown source.</li>
                     * @param _sourceType Media files source category: <li>Record: From recording. Such as live streaming recording, live time shift recording, etc.</li> <li>Upload: From upload. Such as pull upload, upload from server, client UGC upload, etc.</li> <li>VideoProcessing: From video processing. Such as video splicing, video editing, etc.</li> <li>TrtcRecord: From TRTC accompanying recording.</li> <li>WebPageRecord: From panoramic recording.</li> <li>Unknown: Unknown source.</li>
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
                     * 获取User-transparent transmission field when creating a file.
                     * @return SourceContext User-transparent transmission field when creating a file.
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置User-transparent transmission field when creating a file.
                     * @param _sourceContext User-transparent transmission field when creating a file.
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
                     * 获取Live streaming recording information, valid when the file source is Record.
                     * @return LiveRecordInfo Live streaming recording information, valid when the file source is Record.
                     * 
                     */
                    LiveRecordInfo GetLiveRecordInfo() const;

                    /**
                     * 设置Live streaming recording information, valid when the file source is Record.
                     * @param _liveRecordInfo Live streaming recording information, valid when the file source is Record.
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
                     * 获取TRTC recording information, valid when the file source is TrtcRecord.
                     * @return TrtcRecordInfo TRTC recording information, valid when the file source is TrtcRecord.
                     * 
                     */
                    TrtcRecordInfo GetTrtcRecordInfo() const;

                    /**
                     * 设置TRTC recording information, valid when the file source is TrtcRecord.
                     * @param _trtcRecordInfo TRTC recording information, valid when the file source is TrtcRecord.
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
                     * 获取Panoramic recording information, valid when the file source is WebPageRecord.
                     * @return WebPageRecordInfo Panoramic recording information, valid when the file source is WebPageRecord.
                     * 
                     */
                    WebPageRecordInfo GetWebPageRecordInfo() const;

                    /**
                     * 设置Panoramic recording information, valid when the file source is WebPageRecord.
                     * @param _webPageRecordInfo Panoramic recording information, valid when the file source is WebPageRecord.
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
                     * Media files source category: <li>Record: From recording. Such as live streaming recording, live time shift recording, etc.</li> <li>Upload: From upload. Such as pull upload, upload from server, client UGC upload, etc.</li> <li>VideoProcessing: From video processing. Such as video splicing, video editing, etc.</li> <li>TrtcRecord: From TRTC accompanying recording.</li> <li>WebPageRecord: From panoramic recording.</li> <li>Unknown: Unknown source.</li>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * User-transparent transmission field when creating a file.
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * Live streaming recording information, valid when the file source is Record.
                     */
                    LiveRecordInfo m_liveRecordInfo;
                    bool m_liveRecordInfoHasBeenSet;

                    /**
                     * TRTC recording information, valid when the file source is TrtcRecord.
                     */
                    TrtcRecordInfo m_trtcRecordInfo;
                    bool m_trtcRecordInfoHasBeenSet;

                    /**
                     * Panoramic recording information, valid when the file source is WebPageRecord.
                     */
                    WebPageRecordInfo m_webPageRecordInfo;
                    bool m_webPageRecordInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
