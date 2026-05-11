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
                * Image file info for AIGC video task input.
                */
                class AigcVideoTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskInputFileInfo();
                    ~AigcVideoTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     * @return Type Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     * @param _type Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
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
                     * 获取File category. Valid values:
<li>Image: image.</li>
<li>Video: video.</li>
                     * @return Category File category. Valid values:
<li>Image: image.</li>
<li>Video: video.</li>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置File category. Valid values:
<li>Image: image.</li>
<li>Video: video.</li>
                     * @param _category File category. Valid values:
<li>Image: image.</li>
<li>Video: video.</li>
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
                     * 获取The media File ID, which is the globally unique identifier (guid) of the File in vod, is assigned by the vod backend after successful upload. you can retrieve this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File. description:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     * @return FileId The media File ID, which is the globally unique identifier (guid) of the File in vod, is assigned by the vod backend after successful upload. you can retrieve this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File. description:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The media File ID, which is the globally unique identifier (guid) of the File in vod, is assigned by the vod backend after successful upload. you can retrieve this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File. description:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     * @param _fileId The media File ID, which is the globally unique identifier (guid) of the File in vod, is assigned by the vod backend after successful upload. you can retrieve this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File. description:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
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
                     * 获取Accessible file URL. this parameter is valid when Type value is URL.
Note:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     * @return Url Accessible file URL. this parameter is valid when Type value is URL.
Note:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Accessible file URL. this parameter is valid when Type value is URL.
Note:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     * @param _url Accessible file URL. this parameter is valid when Type value is URL.
Note:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
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
                     * 获取Reference Type. The GV Model applies.
Note:
When using the GV model, this can be used as the reference method. Available values: asset means material, style means style.
When using the Kling model and Category as Video, the reference video type is distinguishable: feature indicates feature reference video, and base indicates video for editing.
                     * @return ReferenceType Reference Type. The GV Model applies.
Note:
When using the GV model, this can be used as the reference method. Available values: asset means material, style means style.
When using the Kling model and Category as Video, the reference video type is distinguishable: feature indicates feature reference video, and base indicates video for editing.
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置Reference Type. The GV Model applies.
Note:
When using the GV model, this can be used as the reference method. Available values: asset means material, style means style.
When using the Kling model and Category as Video, the reference video type is distinguishable: feature indicates feature reference video, and base indicates video for editing.
                     * @param _referenceType Reference Type. The GV Model applies.
Note:
When using the GV model, this can be used as the reference method. Available values: asset means material, style means style.
When using the Kling model and Category as Video, the reference video type is distinguishable: feature indicates feature reference video, and base indicates video for editing.
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
                     * 获取Subject Id.
Applicable model: Vidu-q2.
When identifying the subject in an Image, each Image must include a subject Id, which can be used via @subject Id in subsequent generation. Valid when Category is Image.
                     * @return ObjectId Subject Id.
Applicable model: Vidu-q2.
When identifying the subject in an Image, each Image must include a subject Id, which can be used via @subject Id in subsequent generation. Valid when Category is Image.
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置Subject Id.
Applicable model: Vidu-q2.
When identifying the subject in an Image, each Image must include a subject Id, which can be used via @subject Id in subsequent generation. Valid when Category is Image.
                     * @param _objectId Subject Id.
Applicable model: Vidu-q2.
When identifying the subject in an Image, each Image must include a subject Id, which can be used via @subject Id in subsequent generation. Valid when Category is Image.
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
                     * 获取Suitable for the Vidu-q2 model.
When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     * @return VoiceId Suitable for the Vidu-q2 model.
When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置Suitable for the Vidu-q2 model.
When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     * @param _voiceId Suitable for the Vidu-q2 model.
When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
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
                     * 获取Whether to retain the original sound. Valid when Category is Video. Values as follows:
<li>Enabled: Reserved</li>
<li>Disabled: not retain</li>
                     * @return KeepOriginalSound Whether to retain the original sound. Valid when Category is Video. Values as follows:
<li>Enabled: Reserved</li>
<li>Disabled: not retain</li>
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置Whether to retain the original sound. Valid when Category is Video. Values as follows:
<li>Enabled: Reserved</li>
<li>Disabled: not retain</li>
                     * @param _keepOriginalSound Whether to retain the original sound. Valid when Category is Video. Values as follows:
<li>Enabled: Reserved</li>
<li>Disabled: not retain</li>
                     * 
                     */
                    void SetKeepOriginalSound(const std::string& _keepOriginalSound);

                    /**
                     * 判断参数 KeepOriginalSound 是否已赋值
                     * @return KeepOriginalSound 是否已赋值
                     * 
                     */
                    bool KeepOriginalSoundHasBeenSet() const;

                private:

                    /**
                     * Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * File category. Valid values:
<li>Image: image.</li>
<li>Video: video.</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * The media File ID, which is the globally unique identifier (guid) of the File in vod, is assigned by the vod backend after successful upload. you can retrieve this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File. description:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Accessible file URL. this parameter is valid when Type value is URL.
Note:.
1. recommended image size: less than 10 mb.
2. image format value is jpeg, jpg, png.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Reference Type. The GV Model applies.
Note:
When using the GV model, this can be used as the reference method. Available values: asset means material, style means style.
When using the Kling model and Category as Video, the reference video type is distinguishable: feature indicates feature reference video, and base indicates video for editing.
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * Subject Id.
Applicable model: Vidu-q2.
When identifying the subject in an Image, each Image must include a subject Id, which can be used via @subject Id in subsequent generation. Valid when Category is Image.
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * Suitable for the Vidu-q2 model.
When all images carry the subject Id, you can set the timbre Id targeting the subject. Valid when Category is Image. Timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * Whether to retain the original sound. Valid when Category is Video. Values as follows:
<li>Enabled: Reserved</li>
<li>Disabled: not retain</li>
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
