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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosInputInfo.h>
#include <tencentcloud/mps/v20190612/model/UrlInputInfo.h>
#include <tencentcloud/mps/v20190612/model/S3InputInfo.h>
#include <tencentcloud/mps/v20190612/model/VODInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The information of the object to process.
                */
                class MediaInputInfo : public AbstractModel
                {
                public:
                    MediaInputInfo();
                    ~MediaInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of input source object. valid values:.
<Li>COS: specifies the cos origin.</li>
<Li>URL: the url source.</li>
<Li>AWS-S3: aws source. currently only supports transcoding tasks.</li>
<Li>VOD: video-on-demand pro edition (VOD Pro). </li>
                     * @return Type Type of input source object. valid values:.
<Li>COS: specifies the cos origin.</li>
<Li>URL: the url source.</li>
<Li>AWS-S3: aws source. currently only supports transcoding tasks.</li>
<Li>VOD: video-on-demand pro edition (VOD Pro). </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of input source object. valid values:.
<Li>COS: specifies the cos origin.</li>
<Li>URL: the url source.</li>
<Li>AWS-S3: aws source. currently only supports transcoding tasks.</li>
<Li>VOD: video-on-demand pro edition (VOD Pro). </li>
                     * @param _type Type of input source object. valid values:.
<Li>COS: specifies the cos origin.</li>
<Li>URL: the url source.</li>
<Li>AWS-S3: aws source. currently only supports transcoding tasks.</li>
<Li>VOD: video-on-demand pro edition (VOD Pro). </li>
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
                     * 获取The information of the COS object to process. This parameter is valid and required when `Type` is `COS`.
                     * @return CosInputInfo The information of the COS object to process. This parameter is valid and required when `Type` is `COS`.
                     * 
                     */
                    CosInputInfo GetCosInputInfo() const;

                    /**
                     * 设置The information of the COS object to process. This parameter is valid and required when `Type` is `COS`.
                     * @param _cosInputInfo The information of the COS object to process. This parameter is valid and required when `Type` is `COS`.
                     * 
                     */
                    void SetCosInputInfo(const CosInputInfo& _cosInputInfo);

                    /**
                     * 判断参数 CosInputInfo 是否已赋值
                     * @return CosInputInfo 是否已赋值
                     * 
                     */
                    bool CosInputInfoHasBeenSet() const;

                    /**
                     * 获取Valid when Type is URL. This item is required and indicates the media processing URL object information.
                     * @return UrlInputInfo Valid when Type is URL. This item is required and indicates the media processing URL object information.
                     * 
                     */
                    UrlInputInfo GetUrlInputInfo() const;

                    /**
                     * 设置Valid when Type is URL. This item is required and indicates the media processing URL object information.
                     * @param _urlInputInfo Valid when Type is URL. This item is required and indicates the media processing URL object information.
                     * 
                     */
                    void SetUrlInputInfo(const UrlInputInfo& _urlInputInfo);

                    /**
                     * 判断参数 UrlInputInfo 是否已赋值
                     * @return UrlInputInfo 是否已赋值
                     * 
                     */
                    bool UrlInputInfoHasBeenSet() const;

                    /**
                     * 获取Valid when Type is AWS-S3. This item is required and represents the AWS S3 object information for media processing.
                     * @return S3InputInfo Valid when Type is AWS-S3. This item is required and represents the AWS S3 object information for media processing.
                     * 
                     */
                    S3InputInfo GetS3InputInfo() const;

                    /**
                     * 设置Valid when Type is AWS-S3. This item is required and represents the AWS S3 object information for media processing.
                     * @param _s3InputInfo Valid when Type is AWS-S3. This item is required and represents the AWS S3 object information for media processing.
                     * 
                     */
                    void SetS3InputInfo(const S3InputInfo& _s3InputInfo);

                    /**
                     * 判断参数 S3InputInfo 是否已赋值
                     * @return S3InputInfo 是否已赋值
                     * 
                     */
                    bool S3InputInfoHasBeenSet() const;

                    /**
                     * 获取Valid at that time when Type is VOD. This item is required and represents the Media Processing Service (MPS) video-on-demand (VOD) pro edition object information.
                     * @return VODInputInfo Valid at that time when Type is VOD. This item is required and represents the Media Processing Service (MPS) video-on-demand (VOD) pro edition object information.
                     * 
                     */
                    VODInputInfo GetVODInputInfo() const;

                    /**
                     * 设置Valid at that time when Type is VOD. This item is required and represents the Media Processing Service (MPS) video-on-demand (VOD) pro edition object information.
                     * @param _vODInputInfo Valid at that time when Type is VOD. This item is required and represents the Media Processing Service (MPS) video-on-demand (VOD) pro edition object information.
                     * 
                     */
                    void SetVODInputInfo(const VODInputInfo& _vODInputInfo);

                    /**
                     * 判断参数 VODInputInfo 是否已赋值
                     * @return VODInputInfo 是否已赋值
                     * 
                     */
                    bool VODInputInfoHasBeenSet() const;

                private:

                    /**
                     * Type of input source object. valid values:.
<Li>COS: specifies the cos origin.</li>
<Li>URL: the url source.</li>
<Li>AWS-S3: aws source. currently only supports transcoding tasks.</li>
<Li>VOD: video-on-demand pro edition (VOD Pro). </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The information of the COS object to process. This parameter is valid and required when `Type` is `COS`.
                     */
                    CosInputInfo m_cosInputInfo;
                    bool m_cosInputInfoHasBeenSet;

                    /**
                     * Valid when Type is URL. This item is required and indicates the media processing URL object information.
                     */
                    UrlInputInfo m_urlInputInfo;
                    bool m_urlInputInfoHasBeenSet;

                    /**
                     * Valid when Type is AWS-S3. This item is required and represents the AWS S3 object information for media processing.
                     */
                    S3InputInfo m_s3InputInfo;
                    bool m_s3InputInfoHasBeenSet;

                    /**
                     * Valid at that time when Type is VOD. This item is required and represents the Media Processing Service (MPS) video-on-demand (VOD) pro edition object information.
                     */
                    VODInputInfo m_vODInputInfo;
                    bool m_vODInputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
