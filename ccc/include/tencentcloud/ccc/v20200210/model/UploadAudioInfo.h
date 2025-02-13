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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADAUDIOINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADAUDIOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Upload Audio File Information
                */
                class UploadAudioInfo : public AbstractModel
                {
                public:
                    UploadAudioInfo();
                    ~UploadAudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File alias (can be duplicated).
                     * @return CustomFileName File alias (can be duplicated).
                     * 
                     */
                    std::string GetCustomFileName() const;

                    /**
                     * 设置File alias (can be duplicated).
                     * @param _customFileName File alias (can be duplicated).
                     * 
                     */
                    void SetCustomFileName(const std::string& _customFileName);

                    /**
                     * 判断参数 CustomFileName 是否已赋值
                     * @return CustomFileName 是否已赋值
                     * 
                     */
                    bool CustomFileNameHasBeenSet() const;

                    /**
                     * 获取Audio file link (supports mp3 and wav formats, file size not exceeding 5mb).
                     * @return AudioUrl Audio file link (supports mp3 and wav formats, file size not exceeding 5mb).
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置Audio file link (supports mp3 and wav formats, file size not exceeding 5mb).
                     * @param _audioUrl Audio file link (supports mp3 and wav formats, file size not exceeding 5mb).
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                private:

                    /**
                     * File alias (can be duplicated).
                     */
                    std::string m_customFileName;
                    bool m_customFileNameHasBeenSet;

                    /**
                     * Audio file link (supports mp3 and wav formats, file size not exceeding 5mb).
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADAUDIOINFO_H_
