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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_APPLYPARAMSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_APPLYPARAMSTEMPLATEREQUEST_H_

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
                * ApplyParamsTemplate request structure.
                */
                class ApplyParamsTemplateRequest : public AbstractModel
                {
                public:
                    ApplyParamsTemplateRequest();
                    ~ApplyParamsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs
                     * @return InstanceIds List of instance IDs
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of instance IDs
                     * @param _instanceIds List of instance IDs
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取ID of the parameter template to be applied
                     * @return TemplateId ID of the parameter template to be applied
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置ID of the parameter template to be applied
                     * @param _templateId ID of the parameter template to be applied
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
                     * List of instance IDs
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * ID of the parameter template to be applied
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_APPLYPARAMSTEMPLATEREQUEST_H_
