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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskSegmentSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output of video splitting.
                */
                class AiRecognitionTaskSegmentResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskSegmentResultOutput();
                    ~AiRecognitionTaskSegmentResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of split video segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * @return SegmentSet List of split video segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * 
                     */
                    std::vector<AiRecognitionTaskSegmentSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of split video segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * @param _segmentSet List of split video segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskSegmentSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取URL to the file of the list for split video segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @return SegmentSetFileUrl URL to the file of the list for split video segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL to the file of the list for split video segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @param _segmentSetFileUrl URL to the file of the list for split video segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
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
                     * 获取Expiration time of the URL to the file of the list for split video segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     * @return SegmentSetFileUrlExpireTime Expiration time of the URL to the file of the list for split video segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the URL to the file of the list for split video segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     * @param _segmentSetFileUrlExpireTime Expiration time of the URL to the file of the list for split video segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * List of split video segments
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     */
                    std::vector<AiRecognitionTaskSegmentSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL to the file of the list for split video segments. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the URL to the file of the list for split video segments, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTRESULTOUTPUT_H_
