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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYJUSTINTIMETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/WatermarkConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyJustInTimeTranscodeTemplate request structure.
                */
                class ModifyJustInTimeTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    ModifyJustInTimeTranscodeTemplateRequest();
                    ~ModifyJustInTimeTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name.
                     * @return Name Template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name.
                     * @param _name Template name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * @return SubAppId <b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * @param _subAppId <b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     * 
                     */
                    void SetSubAppId(const int64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Video parameter configuration.
                     * @return VideoConfigure Video parameter configuration.
                     * 
                     */
                    VideoConfigureInfoForUpdate GetVideoConfigure() const;

                    /**
                     * 设置Video parameter configuration.
                     * @param _videoConfigure Video parameter configuration.
                     * 
                     */
                    void SetVideoConfigure(const VideoConfigureInfoForUpdate& _videoConfigure);

                    /**
                     * 判断参数 VideoConfigure 是否已赋值
                     * @return VideoConfigure 是否已赋值
                     * 
                     */
                    bool VideoConfigureHasBeenSet() const;

                    /**
                     * 获取Watermark parameter configuration.
                     * @return WatermarkConfigure Watermark parameter configuration.
                     * 
                     */
                    WatermarkConfigureInfoForUpdate GetWatermarkConfigure() const;

                    /**
                     * 设置Watermark parameter configuration.
                     * @param _watermarkConfigure Watermark parameter configuration.
                     * 
                     */
                    void SetWatermarkConfigure(const WatermarkConfigureInfoForUpdate& _watermarkConfigure);

                    /**
                     * 判断参数 WatermarkConfigure 是否已赋值
                     * @return WatermarkConfigure 是否已赋值
                     * 
                     */
                    bool WatermarkConfigureHasBeenSet() const;

                    /**
                     * 获取Template description, the length is limited to 256 characters.
                     * @return Comment Template description, the length is limited to 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, the length is limited to 256 characters.
                     * @param _comment Template description, the length is limited to 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <b>VOD application ID. If you want to access resources in a sub-application, fill this field with the SubAppID; when empty, it means accessing the resources of the default application.</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Video parameter configuration.
                     */
                    VideoConfigureInfoForUpdate m_videoConfigure;
                    bool m_videoConfigureHasBeenSet;

                    /**
                     * Watermark parameter configuration.
                     */
                    WatermarkConfigureInfoForUpdate m_watermarkConfigure;
                    bool m_watermarkConfigureHasBeenSet;

                    /**
                     * Template description, the length is limited to 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
