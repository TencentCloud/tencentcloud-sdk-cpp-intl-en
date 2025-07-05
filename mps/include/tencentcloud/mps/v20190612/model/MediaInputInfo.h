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
                     * 获取The input type. Valid values:
<li>`COS`: A COS bucket address.</li>
<li> `URL`: A URL.</li>
<li> `AWS-S3`: An AWS S3 bucket address. Currently, this type is only supported for transcoding tasks.</li>
                     * @return Type The input type. Valid values:
<li>`COS`: A COS bucket address.</li>
<li> `URL`: A URL.</li>
<li> `AWS-S3`: An AWS S3 bucket address. Currently, this type is only supported for transcoding tasks.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The input type. Valid values:
<li>`COS`: A COS bucket address.</li>
<li> `URL`: A URL.</li>
<li> `AWS-S3`: An AWS S3 bucket address. Currently, this type is only supported for transcoding tasks.</li>
                     * @param _type The input type. Valid values:
<li>`COS`: A COS bucket address.</li>
<li> `URL`: A URL.</li>
<li> `AWS-S3`: An AWS S3 bucket address. Currently, this type is only supported for transcoding tasks.</li>
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
                     * 获取The URL of the object to process. This parameter is valid and required when `Type` is `URL`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UrlInputInfo The URL of the object to process. This parameter is valid and required when `Type` is `URL`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    UrlInputInfo GetUrlInputInfo() const;

                    /**
                     * 设置The URL of the object to process. This parameter is valid and required when `Type` is `URL`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _urlInputInfo The URL of the object to process. This parameter is valid and required when `Type` is `URL`.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取The information of the AWS S3 object processed. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return S3InputInfo The information of the AWS S3 object processed. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    S3InputInfo GetS3InputInfo() const;

                    /**
                     * 设置The information of the AWS S3 object processed. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _s3InputInfo The information of the AWS S3 object processed. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetS3InputInfo(const S3InputInfo& _s3InputInfo);

                    /**
                     * 判断参数 S3InputInfo 是否已赋值
                     * @return S3InputInfo 是否已赋值
                     * 
                     */
                    bool S3InputInfoHasBeenSet() const;

                private:

                    /**
                     * The input type. Valid values:
<li>`COS`: A COS bucket address.</li>
<li> `URL`: A URL.</li>
<li> `AWS-S3`: An AWS S3 bucket address. Currently, this type is only supported for transcoding tasks.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The information of the COS object to process. This parameter is valid and required when `Type` is `COS`.
                     */
                    CosInputInfo m_cosInputInfo;
                    bool m_cosInputInfoHasBeenSet;

                    /**
                     * The URL of the object to process. This parameter is valid and required when `Type` is `URL`.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    UrlInputInfo m_urlInputInfo;
                    bool m_urlInputInfoHasBeenSet;

                    /**
                     * The information of the AWS S3 object processed. This parameter is required if `Type` is `AWS-S3`.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    S3InputInfo m_s3InputInfo;
                    bool m_s3InputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
