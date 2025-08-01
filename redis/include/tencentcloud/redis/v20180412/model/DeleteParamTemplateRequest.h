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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEPARAMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEPARAMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DeleteParamTemplate request structure.
                */
                class DeleteParamTemplateRequest : public AbstractModel
                {
                public:
                    DeleteParamTemplateRequest();
                    ~DeleteParamTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Parameter template ID.
                     * @return TemplateId Parameter template ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Parameter template ID.
                     * @param _templateId Parameter template ID.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * Parameter template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEPARAMTEMPLATEREQUEST_H_
