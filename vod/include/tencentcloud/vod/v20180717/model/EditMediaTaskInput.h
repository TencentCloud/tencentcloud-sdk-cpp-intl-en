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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaFileInfo.h>
#include <tencentcloud/vod/v20180717/model/EditMediaStreamInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input of the video editing task.
                */
                class EditMediaTaskInput : public AbstractModel
                {
                public:
                    EditMediaTaskInput();
                    ~EditMediaTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source type of the input video. Valid values: File and Stream.
                     * @return InputType Source type of the input video. Valid values: File and Stream.
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置Source type of the input video. Valid values: File and Stream.
                     * @param _inputType Source type of the input video. Valid values: File and Stream.
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取Input video file information. This field has a value when InputType is File.
                     * @return FileInfoSet Input video file information. This field has a value when InputType is File.
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfoSet() const;

                    /**
                     * 设置Input video file information. This field has a value when InputType is File.
                     * @param _fileInfoSet Input video file information. This field has a value when InputType is File.
                     * 
                     */
                    void SetFileInfoSet(const std::vector<EditMediaFileInfo>& _fileInfoSet);

                    /**
                     * 判断参数 FileInfoSet 是否已赋值
                     * @return FileInfoSet 是否已赋值
                     * 
                     */
                    bool FileInfoSetHasBeenSet() const;

                    /**
                     * 获取Input stream information. This field has a value when InputType is Stream.
                     * @return StreamInfoSet Input stream information. This field has a value when InputType is Stream.
                     * 
                     */
                    std::vector<EditMediaStreamInfo> GetStreamInfoSet() const;

                    /**
                     * 设置Input stream information. This field has a value when InputType is Stream.
                     * @param _streamInfoSet Input stream information. This field has a value when InputType is Stream.
                     * 
                     */
                    void SetStreamInfoSet(const std::vector<EditMediaStreamInfo>& _streamInfoSet);

                    /**
                     * 判断参数 StreamInfoSet 是否已赋值
                     * @return StreamInfoSet 是否已赋值
                     * 
                     */
                    bool StreamInfoSetHasBeenSet() const;

                private:

                    /**
                     * Source type of the input video. Valid values: File and Stream.
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * Input video file information. This field has a value when InputType is File.
                     */
                    std::vector<EditMediaFileInfo> m_fileInfoSet;
                    bool m_fileInfoSetHasBeenSet;

                    /**
                     * Input stream information. This field has a value when InputType is Stream.
                     */
                    std::vector<EditMediaStreamInfo> m_streamInfoSet;
                    bool m_streamInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKINPUT_H_
