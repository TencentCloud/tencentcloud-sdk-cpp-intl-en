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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRTRANSLATERESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRTRANSLATERESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrTranslateSegmentItem.h>
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
                * Voice translation result.
                */
                class AiRecognitionTaskAsrTranslateResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrTranslateResultOutput();
                    ~AiRecognitionTaskAsrTranslateResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice translation segments list.
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     * @return SegmentSet Voice translation segments list.
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrTranslateSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Voice translation segments list.
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     * @param _segmentSet Voice translation segments list.
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskAsrTranslateSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL to the file of the list for voice translation segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @return SegmentSetFileUrl URL to the file of the list for voice translation segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL to the file of the list for voice translation segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @param _segmentSetFileUrl URL to the file of the list for voice translation segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
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
                     * 获取The expiration time of the URLs of voice translation segments in [ISO date format](https://cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @return SegmentSetFileUrlExpireTime The expiration time of the URLs of voice translation segments in [ISO date format](https://cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置The expiration time of the URLs of voice translation segments in [ISO date format](https://cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @param _segmentSetFileUrlExpireTime The expiration time of the URLs of voice translation segments in [ISO date format](https://cloud.tencent.com/document/product/266/11732#iso-date-format).
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
                     * 获取Generated subtitle list.
                     * @return SubtitleSet Generated subtitle list.
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置Generated subtitle list.
                     * @param _subtitleSet Generated subtitle list.
                     * 
                     */
                    void SetSubtitleSet(const std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                private:

                    /**
                     * Voice translation segments list.
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `SegmentSetFileUrl`.
                     */
                    std::vector<AiRecognitionTaskAsrTranslateSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL to the file of the list for voice translation segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * The expiration time of the URLs of voice translation segments in [ISO date format](https://cloud.tencent.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                    /**
                     * Generated subtitle list.
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRTRANSLATERESULTOUTPUT_H_
