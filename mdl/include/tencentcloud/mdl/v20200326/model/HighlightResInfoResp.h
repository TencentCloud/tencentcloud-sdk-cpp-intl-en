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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_HIGHLIGHTRESINFORESP_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_HIGHLIGHTRESINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Highlight results information.
                */
                class HighlightResInfoResp : public AbstractModel
                {
                public:
                    HighlightResInfoResp();
                    ~HighlightResInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS task ID.
                     * @return TaskId MPS task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置MPS task ID.
                     * @param _taskId MPS task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Highlights video link.
                     * @return SegmentUrl Highlights video link.
                     * 
                     */
                    std::string GetSegmentUrl() const;

                    /**
                     * 设置Highlights video link.
                     * @param _segmentUrl Highlights video link.
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
                     * 获取Collection cover link.
                     * @return CovImgUrl Collection cover link.
                     * 
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置Collection cover link.
                     * @param _covImgUrl Collection cover link.
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
                     * 获取Generation time, UTC format.
                     * @return CreateTime Generation time, UTC format.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Generation time, UTC format.
                     * @param _createTime Generation time, UTC format.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Starting pts.
                     * @return StartTime Starting pts.
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Starting pts.
                     * @param _startTime Starting pts.
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End pts.
                     * @return EndTime End pts.
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置End pts.
                     * @param _endTime End pts.
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Duration in seconds.
                     * @return Duration Duration in seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Duration in seconds.
                     * @param _duration Duration in seconds.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * MPS task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Highlights video link.
                     */
                    std::string m_segmentUrl;
                    bool m_segmentUrlHasBeenSet;

                    /**
                     * Collection cover link.
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * Generation time, UTC format.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Starting pts.
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End pts.
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Duration in seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_HIGHLIGHTRESINFORESP_H_
