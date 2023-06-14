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
                     * 获取List of full-text speech recognition segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * @return SegmentSet List of full-text speech recognition segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of full-text speech recognition segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * @param _segmentSet List of full-text speech recognition segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
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
                     * 获取URL to the file of the list for full-text speech recognition segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @return SegmentSetFileUrl URL to the file of the list for full-text speech recognition segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL to the file of the list for full-text speech recognition segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @param _segmentSetFileUrl URL to the file of the list for full-text speech recognition segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
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
                     * 获取The expiration time of the URLs of full-text speech recognition segments in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @return SegmentSetFileUrlExpireTime The expiration time of the URLs of full-text speech recognition segments in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置The expiration time of the URLs of full-text speech recognition segments in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @param _segmentSetFileUrlExpireTime The expiration time of the URLs of full-text speech recognition segments in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
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
                     * 获取The subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @return SubtitleSet The subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置The subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @param _subtitleSet The subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
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
                     * 获取The URLs of the subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @return SubtitleUrl The URLs of the subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * 
                     */
                    std::string GetSubtitleUrl() const;

                    /**
                     * 设置The URLs of the subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     * @param _subtitleUrl The URLs of the subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
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
                     * List of full-text speech recognition segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL to the file of the list for full-text speech recognition segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * The expiration time of the URLs of full-text speech recognition segments in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                    /**
                     * The subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * The URLs of the subtitle files generated, whose format is determined by the `SubtitleFormats` parameter of [AsrFullTextConfigureInfo](https://intl.cloud.tencent.com/document/api/266/31773?from_cn_redirect=1#AsrFullTextConfigureInfo).
                     */
                    std::string m_subtitleUrl;
                    bool m_subtitleUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
