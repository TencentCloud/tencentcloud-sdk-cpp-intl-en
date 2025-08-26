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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentRecognitionItem.h>
#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisHighlightItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 
                */
                class LiveStreamAiAnalysisResultItem : public AbstractModel
                {
                public:
                    LiveStreamAiAnalysisResultItem();
                    ~LiveStreamAiAnalysisResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result type. Valid values:
<li>SegmentRecognition: video splitting.</li>
<li>Highlight: highlight.</li>
                     * @return Type Result type. Valid values:
<li>SegmentRecognition: video splitting.</li>
<li>Highlight: highlight.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Result type. Valid values:
<li>SegmentRecognition: video splitting.</li>
<li>Highlight: highlight.</li>
                     * @param _type Result type. Valid values:
<li>SegmentRecognition: video splitting.</li>
<li>Highlight: highlight.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SegmentResultSet 
                     * 
                     */
                    std::vector<SegmentRecognitionItem> GetSegmentResultSet() const;

                    /**
                     * 设置
                     * @param _segmentResultSet 
                     * 
                     */
                    void SetSegmentResultSet(const std::vector<SegmentRecognitionItem>& _segmentResultSet);

                    /**
                     * 判断参数 SegmentResultSet 是否已赋值
                     * @return SegmentResultSet 是否已赋值
                     * 
                     */
                    bool SegmentResultSetHasBeenSet() const;

                    /**
                     * 获取Highlight result. This field is valid when Type is set to Highlight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HighlightResultSet Highlight result. This field is valid when Type is set to Highlight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaAiAnalysisHighlightItem> GetHighlightResultSet() const;

                    /**
                     * 设置Highlight result. This field is valid when Type is set to Highlight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _highlightResultSet Highlight result. This field is valid when Type is set to Highlight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHighlightResultSet(const std::vector<MediaAiAnalysisHighlightItem>& _highlightResultSet);

                    /**
                     * 判断参数 HighlightResultSet 是否已赋值
                     * @return HighlightResultSet 是否已赋值
                     * 
                     */
                    bool HighlightResultSetHasBeenSet() const;

                private:

                    /**
                     * Result type. Valid values:
<li>SegmentRecognition: video splitting.</li>
<li>Highlight: highlight.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SegmentRecognitionItem> m_segmentResultSet;
                    bool m_segmentResultSetHasBeenSet;

                    /**
                     * Highlight result. This field is valid when Type is set to Highlight.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaAiAnalysisHighlightItem> m_highlightResultSet;
                    bool m_highlightResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTITEM_H_
