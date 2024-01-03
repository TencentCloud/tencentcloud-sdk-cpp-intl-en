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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/WatermarkConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateJustInTimeTranscodeTemplate request structure.
                */
                class CreateJustInTimeTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateJustInTimeTranscodeTemplateRequest();
                    ~CreateJustInTimeTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name, the length is limited to 64 characters.
                     * @return Name Template name, the length is limited to 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name, the length is limited to 64 characters.
                     * @param _name Template name, the length is limited to 64 characters.
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
                     * 获取Video parameter configuration.
                     * @return VideoConfigure Video parameter configuration.
                     * 
                     */
                    VideoConfigureInfo GetVideoConfigure() const;

                    /**
                     * 设置Video parameter configuration.
                     * @param _videoConfigure Video parameter configuration.
                     * 
                     */
                    void SetVideoConfigure(const VideoConfigureInfo& _videoConfigure);

                    /**
                     * 判断参数 VideoConfigure 是否已赋值
                     * @return VideoConfigure 是否已赋值
                     * 
                     */
                    bool VideoConfigureHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取Watermark parameter configuration.
                     * @return WatermarkConfigure Watermark parameter configuration.
                     * 
                     */
                    WatermarkConfigureInfo GetWatermarkConfigure() const;

                    /**
                     * 设置Watermark parameter configuration.
                     * @param _watermarkConfigure Watermark parameter configuration.
                     * 
                     */
                    void SetWatermarkConfigure(const WatermarkConfigureInfo& _watermarkConfigure);

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
                     * Template name, the length is limited to 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Video parameter configuration.
                     */
                    VideoConfigureInfo m_videoConfigure;
                    bool m_videoConfigureHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Watermark parameter configuration.
                     */
                    WatermarkConfigureInfo m_watermarkConfigure;
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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
