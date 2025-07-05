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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Split video segment.
                */
                class AiRecognitionTaskSegmentSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskSegmentSegmentItem();
                    ~AiRecognitionTaskSegmentSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File ID, which is valid only when a VOD file is processed and the subsegments generated through segmentation are also VOD files.
                     * @return FileId File ID, which is valid only when a VOD file is processed and the subsegments generated through segmentation are also VOD files.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID, which is valid only when a VOD file is processed and the subsegments generated through segmentation are also VOD files.
                     * @param _fileId File ID, which is valid only when a VOD file is processed and the subsegments generated through segmentation are also VOD files.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Split video segment URL.
                     * @return SegmentUrl Split video segment URL.
                     * 
                     */
                    std::string GetSegmentUrl() const;

                    /**
                     * 设置Split video segment URL.
                     * @param _segmentUrl Split video segment URL.
                     * 
                     */
                    void SetSegmentUrl(const std::string& _segmentUrl);

                    /**
                     * 判断参数 SegmentUrl 是否已赋值
                     * @return SegmentUrl 是否已赋值
                     * 
                     */
                    bool SegmentUrlHasBeenSet() const;

                    /**
                     * 获取Confidence of split segment. Value range: 0-100.
                     * @return Confidence Confidence of split segment. Value range: 0-100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of split segment. Value range: 0-100.
                     * @param _confidence Confidence of split segment. Value range: 0-100.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Start time offset of split segment in seconds.
                     * @return StartTimeOffset Start time offset of split segment in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of split segment in seconds.
                     * @param _startTimeOffset Start time offset of split segment in seconds.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of split segment in seconds.
                     * @return EndTimeOffset End time offset of split segment in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of split segment in seconds.
                     * @param _endTimeOffset End time offset of split segment in seconds.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Split cover image URL.
                     * @return CovImgUrl Split cover image URL.
                     * 
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置Split cover image URL.
                     * @param _covImgUrl Split cover image URL.
                     * 
                     */
                    void SetCovImgUrl(const std::string& _covImgUrl);

                    /**
                     * 判断参数 CovImgUrl 是否已赋值
                     * @return CovImgUrl 是否已赋值
                     * 
                     */
                    bool CovImgUrlHasBeenSet() const;

                    /**
                     * 获取Special field, which should be ignored.
                     * @return SpecialInfo Special field, which should be ignored.
                     * 
                     */
                    std::string GetSpecialInfo() const;

                    /**
                     * 设置Special field, which should be ignored.
                     * @param _specialInfo Special field, which should be ignored.
                     * 
                     */
                    void SetSpecialInfo(const std::string& _specialInfo);

                    /**
                     * 判断参数 SpecialInfo 是否已赋值
                     * @return SpecialInfo 是否已赋值
                     * 
                     */
                    bool SpecialInfoHasBeenSet() const;

                private:

                    /**
                     * File ID, which is valid only when a VOD file is processed and the subsegments generated through segmentation are also VOD files.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Split video segment URL.
                     */
                    std::string m_segmentUrl;
                    bool m_segmentUrlHasBeenSet;

                    /**
                     * Confidence of split segment. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Start time offset of split segment in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of split segment in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Split cover image URL.
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * Special field, which should be ignored.
                     */
                    std::string m_specialInfo;
                    bool m_specialInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKSEGMENTSEGMENTITEM_H_
