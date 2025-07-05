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
                * VOD video file editing information
                */
                class EditMediaFileInfo : public AbstractModel
                {
                public:
                    EditMediaFileInfo();
                    ~EditMediaFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video input information.
                     * @return InputInfo Video input information.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置Video input information.
                     * @param _inputInfo Video input information.
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
                     * 获取The start offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     * @return StartTimeOffset The start offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     * @param _startTimeOffset The start offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
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
                     * 获取The end offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     * @return EndTimeOffset The end offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     * @param _endTimeOffset The end offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
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
                     * 获取The ID of the material associated with an element. This parameter is required for video compositing tasks.

Note: The ID can be up to 32 characters long and can contain letters, digits, and special characters -_
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id The ID of the material associated with an element. This parameter is required for video compositing tasks.

Note: The ID can be up to 32 characters long and can contain letters, digits, and special characters -_
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The ID of the material associated with an element. This parameter is required for video compositing tasks.

Note: The ID can be up to 32 characters long and can contain letters, digits, and special characters -_
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id The ID of the material associated with an element. This parameter is required for video compositing tasks.

Note: The ID can be up to 32 characters long and can contain letters, digits, and special characters -_
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Video input information.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * The start offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * The end offset (seconds) for video clipping. This parameter is valid for video clipping tasks.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * The ID of the material associated with an element. This parameter is required for video compositing tasks.

Note: The ID can be up to 32 characters long and can contain letters, digits, and special characters -_
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAFILEINFO_H_
