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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaVideoStream.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTEHDConfig.h>


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
                class EditMediaOutputConfig : public AbstractModel
                {
                public:
                    EditMediaOutputConfig();
                    ~EditMediaOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * @return VideoStream 
                     * 
                     */
                    EditMediaVideoStream GetVideoStream() const;

                    /**
                     * 设置
                     * @param _videoStream 
                     * 
                     */
                    void SetVideoStream(const EditMediaVideoStream& _videoStream);

                    /**
                     * 判断参数 VideoStream 是否已赋值
                     * @return VideoStream 是否已赋值
                     * 
                     */
                    bool VideoStreamHasBeenSet() const;

                    /**
                     * 获取
                     * @return TEHDConfig 
                     * 
                     */
                    EditMediaTEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置
                     * @param _tEHDConfig 
                     * 
                     */
                    void SetTEHDConfig(const EditMediaTEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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
                    EditMediaVideoStream m_videoStream;
                    bool m_videoStreamHasBeenSet;

                    /**
                     * 
                     */
                    EditMediaTEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_
