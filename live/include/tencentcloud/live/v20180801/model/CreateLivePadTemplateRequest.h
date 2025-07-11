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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPADTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPADTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLivePadTemplate request structure.
                */
                class CreateLivePadTemplateRequest : public AbstractModel
                {
                public:
                    CreateLivePadTemplateRequest();
                    ~CreateLivePadTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name. Maximum length: 255 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * @return TemplateName Template name. Maximum length: 255 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name. Maximum length: 255 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * @param _templateName Template name. Maximum length: 255 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Gasket content.
                     * @return Url Gasket content.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Gasket content.
                     * @param _url Gasket content.
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
                     * 获取Description information. Maximum length: 1024 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * @return Description Description information. Maximum length: 1024 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information. Maximum length: 1024 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * @param _description Description information. Maximum length: 1024 bytes. Only Chinese, English, numbers, _, and - are supported.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The waiting time for disconnection. Value range: 0-30000. Unit: ms.
                     * @return WaitDuration The waiting time for disconnection. Value range: 0-30000. Unit: ms.
                     * 
                     */
                    uint64_t GetWaitDuration() const;

                    /**
                     * 设置The waiting time for disconnection. Value range: 0-30000. Unit: ms.
                     * @param _waitDuration The waiting time for disconnection. Value range: 0-30000. Unit: ms.
                     * 
                     */
                    void SetWaitDuration(const uint64_t& _waitDuration);

                    /**
                     * 判断参数 WaitDuration 是否已赋值
                     * @return WaitDuration 是否已赋值
                     * 
                     */
                    bool WaitDurationHasBeenSet() const;

                    /**
                     * 获取Maximum shim duration. Value range: 0 - positive infinity. Unit: ms.
                     * @return MaxDuration Maximum shim duration. Value range: 0 - positive infinity. Unit: ms.
                     * 
                     */
                    uint64_t GetMaxDuration() const;

                    /**
                     * 设置Maximum shim duration. Value range: 0 - positive infinity. Unit: ms.
                     * @param _maxDuration Maximum shim duration. Value range: 0 - positive infinity. Unit: ms.
                     * 
                     */
                    void SetMaxDuration(const uint64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                    /**
                     * 获取Shim content type: 1: image, 2: video. Default value: 1.
                     * @return Type Shim content type: 1: image, 2: video. Default value: 1.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Shim content type: 1: image, 2: video. Default value: 1.
                     * @param _type Shim content type: 1: image, 2: video. Default value: 1.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Template name. Maximum length: 255 bytes. Only Chinese, English, numbers, _, and - are supported.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Gasket content.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Description information. Maximum length: 1024 bytes. Only Chinese, English, numbers, _, and - are supported.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The waiting time for disconnection. Value range: 0-30000. Unit: ms.
                     */
                    uint64_t m_waitDuration;
                    bool m_waitDurationHasBeenSet;

                    /**
                     * Maximum shim duration. Value range: 0 - positive infinity. Unit: ms.
                     */
                    uint64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * Shim content type: 1: image, 2: video. Default value: 1.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPADTEMPLATEREQUEST_H_
