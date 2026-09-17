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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOOUTPUTCONFIG_H_

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
                * 
                */
                class AigcAudioOutputConfig : public AbstractModel
                {
                public:
                    AigcAudioOutputConfig();
                    ~AigcAudioOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return StorageMode 
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置
                     * @param _storageMode 
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return MediaName 
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置
                     * @param _mediaName 
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClassId 
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置
                     * @param _classId 
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExpireTime 
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置
                     * @param _expireTime 
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Duration 
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置
                     * @param _duration 
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutputAudioFormat 
                     * 
                     */
                    std::string GetOutputAudioFormat() const;

                    /**
                     * 设置
                     * @param _outputAudioFormat 
                     * 
                     */
                    void SetOutputAudioFormat(const std::string& _outputAudioFormat);

                    /**
                     * 判断参数 OutputAudioFormat 是否已赋值
                     * @return OutputAudioFormat 是否已赋值
                     * 
                     */
                    bool OutputAudioFormatHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_outputAudioFormat;
                    bool m_outputAudioFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOOUTPUTCONFIG_H_
