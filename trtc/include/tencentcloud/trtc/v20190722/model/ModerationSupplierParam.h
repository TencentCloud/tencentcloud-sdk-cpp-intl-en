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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONSUPPLIERPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONSUPPLIERPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Parameters required for submitting content to the third-party moderation supplier.
                */
                class ModerationSupplierParam : public AbstractModel
                {
                public:
                    ModerationSupplierParam();
                    ~ModerationSupplierParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Moderation supplier account ID. For Tencent Tianyu, the value is not null; for NETEASE Yidun, the value is null.
                     * @return AppID Moderation supplier account ID. For Tencent Tianyu, the value is not null; for NETEASE Yidun, the value is null.
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置Moderation supplier account ID. For Tencent Tianyu, the value is not null; for NETEASE Yidun, the value is null.
                     * @param _appID Moderation supplier account ID. For Tencent Tianyu, the value is not null; for NETEASE Yidun, the value is null.
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Moderation supplier key ID.
                     * @return SecretId Moderation supplier key ID.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置Moderation supplier key ID.
                     * @param _secretId Moderation supplier key ID.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取Moderation supplier key.
                     * @return SecretKey Moderation supplier key.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Moderation supplier key.
                     * @param _secretKey Moderation supplier key.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Audio scenario. Policy ID or businessId.
                     * @return AudioBizType Audio scenario. Policy ID or businessId.
                     * 
                     */
                    std::string GetAudioBizType() const;

                    /**
                     * 设置Audio scenario. Policy ID or businessId.
                     * @param _audioBizType Audio scenario. Policy ID or businessId.
                     * 
                     */
                    void SetAudioBizType(const std::string& _audioBizType);

                    /**
                     * 判断参数 AudioBizType 是否已赋值
                     * @return AudioBizType 是否已赋值
                     * 
                     */
                    bool AudioBizTypeHasBeenSet() const;

                    /**
                     * 获取Image scenario. Policy ID or businessId.
                     * @return ImageBizType Image scenario. Policy ID or businessId.
                     * 
                     */
                    std::string GetImageBizType() const;

                    /**
                     * 设置Image scenario. Policy ID or businessId.
                     * @param _imageBizType Image scenario. Policy ID or businessId.
                     * 
                     */
                    void SetImageBizType(const std::string& _imageBizType);

                    /**
                     * 判断参数 ImageBizType 是否已赋值
                     * @return ImageBizType 是否已赋值
                     * 
                     */
                    bool ImageBizTypeHasBeenSet() const;

                private:

                    /**
                     * Moderation supplier account ID. For Tencent Tianyu, the value is not null; for NETEASE Yidun, the value is null.
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Moderation supplier key ID.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * Moderation supplier key.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Audio scenario. Policy ID or businessId.
                     */
                    std::string m_audioBizType;
                    bool m_audioBizTypeHasBeenSet;

                    /**
                     * Image scenario. Policy ID or businessId.
                     */
                    std::string m_imageBizType;
                    bool m_imageBizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONSUPPLIERPARAM_H_
