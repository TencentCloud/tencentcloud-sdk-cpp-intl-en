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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEBLINDWATERMARKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEBLINDWATERMARKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteBlindWatermarkTemplate request structure.
                */
                class DeleteBlindWatermarkTemplateRequest : public AbstractModel
                {
                public:
                    DeleteBlindWatermarkTemplateRequest();
                    ~DeleteBlindWatermarkTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the digital watermark template.
                     * @return Definition Unique identifier of the digital watermark template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the digital watermark template.
                     * @param _definition Unique identifier of the digital watermark template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取VOD application ID. Starting from December 25, 2023, customers who activate on-demand services must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).
                     * @return SubAppId VOD application ID. Starting from December 25, 2023, customers who activate on-demand services must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD application ID. Starting from December 25, 2023, customers who activate on-demand services must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).
                     * @param _subAppId VOD application ID. Starting from December 25, 2023, customers who activate on-demand services must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the digital watermark template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * VOD application ID. Starting from December 25, 2023, customers who activate on-demand services must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEBLINDWATERMARKTEMPLATEREQUEST_H_
