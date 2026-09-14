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
                * Input object information for media processing.
                */
                class MediaInputInfo : public AbstractModel
                {
                public:
                    MediaInputInfo();
                    ~MediaInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of the input source object. Supported values:
<li>COS: COS origin</li>
<li> URL: URL source</li>
<li> AWS-S3: AWS source, currently only support transcoding task </li>
<li> VOD: VOD Pro Edition </li>
                     * @return Type Type of the input source object. Supported values:
<li>COS: COS origin</li>
<li> URL: URL source</li>
<li> AWS-S3: AWS source, currently only support transcoding task </li>
<li> VOD: VOD Pro Edition </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the input source object. Supported values:
<li>COS: COS origin</li>
<li> URL: URL source</li>
<li> AWS-S3: AWS source, currently only support transcoding task </li>
<li> VOD: VOD Pro Edition </li>
                     * @param _type Type of the input source object. Supported values:
<li>COS: COS origin</li>
<li> URL: URL source</li>
<li> AWS-S3: AWS source, currently only support transcoding task </li>
<li> VOD: VOD Pro Edition </li>
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
                     * 获取Required when `Type` is `COS`. It represents the COS object information for media processing.
                     * @return CosInputInfo Required when `Type` is `COS`. It represents the COS object information for media processing.
                     * 
                     */
                    CosInputInfo GetCosInputInfo() const;

                    /**
                     * 设置Required when `Type` is `COS`. It represents the COS object information for media processing.
                     * @param _cosInputInfo Required when `Type` is `COS`. It represents the COS object information for media processing.
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
                     * 获取
                     * @return UrlInputInfo 
                     * 
                     */
                    UrlInputInfo GetUrlInputInfo() const;

                    /**
                     * 设置
                     * @param _urlInputInfo 
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
                     * 获取
                     * @return S3InputInfo 
                     * 
                     */
                    S3InputInfo GetS3InputInfo() const;

                    /**
                     * 设置
                     * @param _s3InputInfo 
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
                     * 获取
                     * @return VODInputInfo 
                     * 
                     */
                    VODInputInfo GetVODInputInfo() const;

                    /**
                     * 设置
                     * @param _vODInputInfo 
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
                     * Type of the input source object. Supported values:
<li>COS: COS origin</li>
<li> URL: URL source</li>
<li> AWS-S3: AWS source, currently only support transcoding task </li>
<li> VOD: VOD Pro Edition </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Required when `Type` is `COS`. It represents the COS object information for media processing.
                     */
                    CosInputInfo m_cosInputInfo;
                    bool m_cosInputInfoHasBeenSet;

                    /**
                     * 
                     */
                    UrlInputInfo m_urlInputInfo;
                    bool m_urlInputInfoHasBeenSet;

                    /**
                     * 
                     */
                    S3InputInfo m_s3InputInfo;
                    bool m_s3InputInfoHasBeenSet;

                    /**
                     * 
                     */
                    VODInputInfo m_vODInputInfo;
                    bool m_vODInputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
