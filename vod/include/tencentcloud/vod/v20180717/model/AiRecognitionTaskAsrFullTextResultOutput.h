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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextSegmentItem.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Full speech recognition result.
                */
                class AiRecognitionTaskAsrFullTextResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrFullTextResultOutput();
                    ~AiRecognitionTaskAsrFullTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of segments for full speech recognition.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @return SegmentSet List of segments for full speech recognition.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of segments for full speech recognition.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * @param _segmentSet List of segments for full speech recognition.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskAsrFullTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL of the speech full text recognition Segment List File. The content of the file is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @return SegmentSetFileUrl URL of the speech full text recognition Segment List File. The content of the file is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of the speech full text recognition Segment List File. The content of the file is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * @param _segmentSetFileUrl URL of the speech full text recognition Segment List File. The content of the file is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the full speech recognition segment list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime Expiration time of the full speech recognition segment list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the full speech recognition segment list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime Expiration time of the full speech recognition segment list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                    /**
                     * 获取Generated subtitle list, corresponding to SubtitleFormats in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @return SubtitleSet Generated subtitle list, corresponding to SubtitleFormats in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置Generated subtitle list, corresponding to SubtitleFormats in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @param _subtitleSet Generated subtitle list, corresponding to SubtitleFormats in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * 
                     */
                    void SetSubtitleSet(const std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                    /**
                     * 获取Generated subtitle file Url, corresponding to SubtitleFormat in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @return SubtitleUrl Generated subtitle file Url, corresponding to SubtitleFormat in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * 
                     */
                    std::string GetSubtitleUrl() const;

                    /**
                     * 设置Generated subtitle file Url, corresponding to SubtitleFormat in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @param _subtitleUrl Generated subtitle file Url, corresponding to SubtitleFormat in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * 
                     */
                    void SetSubtitleUrl(const std::string& _subtitleUrl);

                    /**
                     * 判断参数 SubtitleUrl 是否已赋值
                     * @return SubtitleUrl 是否已赋值
                     * 
                     */
                    bool SubtitleUrlHasBeenSet() const;

                private:

                    /**
                     * List of segments for full speech recognition.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of the speech full text recognition Segment List File. The content of the file is in JSON format, and its data structure is consistent with the fields of SegmentSet. (The file is not retained permanently. It will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the full speech recognition segment list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                    /**
                     * Generated subtitle list, corresponding to SubtitleFormats in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * Generated subtitle file Url, corresponding to SubtitleFormat in speech full-text recognition task control parameter (https://www.tencentcloud.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     */
                    std::string m_subtitleUrl;
                    bool m_subtitleUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
