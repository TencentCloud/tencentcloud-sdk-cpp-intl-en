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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPROCESSIMAGEASYNCTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPROCESSIMAGEASYNCTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateProcessImageAsyncTemplate request structure.
                */
                class CreateProcessImageAsyncTemplateRequest : public AbstractModel
                {
                public:
                    CreateProcessImageAsyncTemplateRequest();
                    ~CreateProcessImageAsyncTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image asynchronous processing task configuration.
                     * @return ProcessImageConfigure Image asynchronous processing task configuration.
                     * 
                     */
                    ProcessImageAsyncTask GetProcessImageConfigure() const;

                    /**
                     * 设置Image asynchronous processing task configuration.
                     * @param _processImageConfigure Image asynchronous processing task configuration.
                     * 
                     */
                    void SetProcessImageConfigure(const ProcessImageAsyncTask& _processImageConfigure);

                    /**
                     * 判断参数 ProcessImageConfigure 是否已赋值
                     * @return ProcessImageConfigure 是否已赋值
                     * 
                     */
                    bool ProcessImageConfigureHasBeenSet() const;

                    /**
                     * 获取<b>ID of the VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>ID of the VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>ID of the VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>ID of the VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Name of the image async processing template. The length cannot exceed 64 characters.
                     * @return Name Name of the image async processing template. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the image async processing template. The length cannot exceed 64 characters.
                     * @param _name Name of the image async processing template. The length cannot exceed 64 characters.
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
                     * 获取Description information of the image asynchronous processing template. The length cannot exceed 256 characters.
                     * @return Comment Description information of the image asynchronous processing template. The length cannot exceed 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description information of the image asynchronous processing template. The length cannot exceed 256 characters.
                     * @param _comment Description information of the image asynchronous processing template. The length cannot exceed 256 characters.
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
                     * Image asynchronous processing task configuration.
                     */
                    ProcessImageAsyncTask m_processImageConfigure;
                    bool m_processImageConfigureHasBeenSet;

                    /**
                     * <b>ID of the VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate VOD after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Name of the image async processing template. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description information of the image asynchronous processing template. The length cannot exceed 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPROCESSIMAGEASYNCTEMPLATEREQUEST_H_
