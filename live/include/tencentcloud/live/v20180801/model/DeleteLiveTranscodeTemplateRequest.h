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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETRANSCODETEMPLATEREQUEST_H_

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
                * DeleteLiveTranscodeTemplate request structure.
                */
                class DeleteLiveTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    DeleteLiveTranscodeTemplateRequest();
                    ~DeleteLiveTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template ID.
1. Get the template ID in the returned value of the [CreateLiveTranscodeTemplate](/document/product/267/32646) API call.
2. You can query the list of created templates through the [DescribeLiveTranscodeTemplates](/document/product/267/32641) API.
                     * @return TemplateId Template ID.
1. Get the template ID in the returned value of the [CreateLiveTranscodeTemplate](/document/product/267/32646) API call.
2. You can query the list of created templates through the [DescribeLiveTranscodeTemplates](/document/product/267/32641) API.
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
1. Get the template ID in the returned value of the [CreateLiveTranscodeTemplate](/document/product/267/32646) API call.
2. You can query the list of created templates through the [DescribeLiveTranscodeTemplates](/document/product/267/32641) API.
                     * @param TemplateId Template ID.
1. Get the template ID in the returned value of the [CreateLiveTranscodeTemplate](/document/product/267/32646) API call.
2. You can query the list of created templates through the [DescribeLiveTranscodeTemplates](/document/product/267/32641) API.
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * Template ID.
1. Get the template ID in the returned value of the [CreateLiveTranscodeTemplate](/document/product/267/32646) API call.
2. You can query the list of created templates through the [DescribeLiveTranscodeTemplates](/document/product/267/32641) API.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETRANSCODETEMPLATEREQUEST_H_