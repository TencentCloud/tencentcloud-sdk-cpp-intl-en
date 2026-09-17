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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_

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
                class AigcVideoTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskInputFileInfo();
                    ~AigcVideoTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Category 
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置
                     * @param _category 
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileId 
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置
                     * @param _fileId 
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
                     * 获取
                     * @return Url 
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置
                     * @param _url 
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return Base64 
                     * 
                     */
                    std::string GetBase64() const;

                    /**
                     * 设置
                     * @param _base64 
                     * 
                     */
                    void SetBase64(const std::string& _base64);

                    /**
                     * 判断参数 Base64 是否已赋值
                     * @return Base64 是否已赋值
                     * 
                     */
                    bool Base64HasBeenSet() const;

                    /**
                     * 获取
                     * @return ReferenceType 
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置
                     * @param _referenceType 
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ObjectId 
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置
                     * @param _objectId 
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return VoiceId 
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置
                     * @param _voiceId 
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeepOriginalSound 
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置
                     * @param _keepOriginalSound 
                     * 
                     */
                    void SetKeepOriginalSound(const std::string& _keepOriginalSound);

                    /**
                     * 判断参数 KeepOriginalSound 是否已赋值
                     * @return KeepOriginalSound 是否已赋值
                     * 
                     */
                    bool KeepOriginalSoundHasBeenSet() const;

                    /**
                     * 获取
                     * @return Usage 
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置
                     * @param _usage 
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取
                     * @return Text 
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置
                     * @param _text 
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_base64;
                    bool m_base64HasBeenSet;

                    /**
                     * 
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
