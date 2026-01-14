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
                     * 获取Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     * @return Type Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     * @param _type Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
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
                     * 获取Reference type. Used for the GV model.
Note:
When using the GV model, can be used as a reference method, selectable asset (material), style.
                     * @return ReferenceType Reference type. Used for the GV model.
Note:
When using the GV model, can be used as a reference method, selectable asset (material), style.
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置Reference type. Used for the GV model.
Note:
When using the GV model, can be used as a reference method, selectable asset (material), style.
                     * @param _referenceType Reference type. Used for the GV model.
Note:
When using the GV model, can be used as a reference method, selectable asset (material), style.
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
                     * 获取Object id.
Applicable model: Vidu-q2.
When an image identifier is required, each image must have a subject id. the subject id can be used via @subject id in subsequent generation.
                     * @return ObjectId Object id.
Applicable model: Vidu-q2.
When an image identifier is required, each image must have a subject id. the subject id can be used via @subject id in subsequent generation.
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置Object id.
Applicable model: Vidu-q2.
When an image identifier is required, each image must have a subject id. the subject id can be used via @subject id in subsequent generation.
                     * @param _objectId Object id.
Applicable model: Vidu-q2.
When an image identifier is required, each image must have a subject id. the subject id can be used via @subject id in subsequent generation.
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
When all images carry object ids, you can set the timbre id for the object. timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg.
                     * @return VoiceId Suitable for the Vidu-q2 model.
When all images carry object ids, you can set the timbre id for the object. timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg.
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置Suitable for the Vidu-q2 model.
When all images carry object ids, you can set the timbre id for the object. timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg.
                     * @param _voiceId Suitable for the Vidu-q2 model.
When all images carry object ids, you can set the timbre id for the object. timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg.
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                private:

                    /**
                     * Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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
                     * Reference type. Used for the GV model.
Note:
When using the GV model, can be used as a reference method, selectable asset (material), style.
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * Object id.
Applicable model: Vidu-q2.
When an image identifier is required, each image must have a subject id. the subject id can be used via @subject id in subsequent generation.
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * Suitable for the Vidu-q2 model.
When all images carry object ids, you can set the timbre id for the object. timbre list: https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg.
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
