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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAFILEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Edit on-demand video file information
                */
                class EditMediaFileInfo : public AbstractModel
                {
                public:
                    EditMediaFileInfo();
                    ~EditMediaFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input video information.
                     * @return InputInfo Input video information.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置Input video information.
                     * @param _inputInfo Input video information.
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取[Edit] task takes effect, video editing start time offset, measurement unit: second.
                     * @return StartTimeOffset [Edit] task takes effect, video editing start time offset, measurement unit: second.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置[Edit] task takes effect, video editing start time offset, measurement unit: second.
                     * @param _startTimeOffset [Edit] task takes effect, video editing start time offset, measurement unit: second.
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
                     * 获取[Edit] task takes effect, video editing end time offset, measurement unit: second.
                     * @return EndTimeOffset [Edit] task takes effect, video editing end time offset, measurement unit: second.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置[Edit] task takes effect, video editing end time offset, measurement unit: second.
                     * @param _endTimeOffset [Edit] task takes effect, video editing end time offset, measurement unit: second.
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
                     * 获取
                     * @return Id 
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置
                     * @param _id 
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Input video information.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * [Edit] task takes effect, video editing start time offset, measurement unit: second.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * [Edit] task takes effect, video editing end time offset, measurement unit: second.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAFILEINFO_H_
