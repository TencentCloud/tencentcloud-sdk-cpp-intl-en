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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceParam.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyParamTemplate request structure.
                */
                class ModifyParamTemplateRequest : public AbstractModel
                {
                public:
                    ModifyParamTemplateRequest();
                    ~ModifyParamTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source parameter template ID, which can be obtained through the response parameter **TemplateId** of the API [DescribeParamTemplateInfo](https://intl.cloud.tencent.com/document/product/239/58748?from_cn_redirect=1).
                     * @return TemplateId Source parameter template ID, which can be obtained through the response parameter **TemplateId** of the API [DescribeParamTemplateInfo](https://intl.cloud.tencent.com/document/product/239/58748?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Source parameter template ID, which can be obtained through the response parameter **TemplateId** of the API [DescribeParamTemplateInfo](https://intl.cloud.tencent.com/document/product/239/58748?from_cn_redirect=1).
                     * @param _templateId Source parameter template ID, which can be obtained through the response parameter **TemplateId** of the API [DescribeParamTemplateInfo](https://intl.cloud.tencent.com/document/product/239/58748?from_cn_redirect=1).
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取New name after the parameter template is modified.
                     * @return Name New name after the parameter template is modified.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置New name after the parameter template is modified.
                     * @param _name New name after the parameter template is modified.
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
                     * 获取New description after the parameter template is modified.
                     * @return Description New description after the parameter template is modified.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置New description after the parameter template is modified.
                     * @param _description New description after the parameter template is modified.
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
                     * 获取New parameter list after the parameter template is modified.
                     * @return ParamList New parameter list after the parameter template is modified.
                     * 
                     */
                    std::vector<InstanceParam> GetParamList() const;

                    /**
                     * 设置New parameter list after the parameter template is modified.
                     * @param _paramList New parameter list after the parameter template is modified.
                     * 
                     */
                    void SetParamList(const std::vector<InstanceParam>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * Source parameter template ID, which can be obtained through the response parameter **TemplateId** of the API [DescribeParamTemplateInfo](https://intl.cloud.tencent.com/document/product/239/58748?from_cn_redirect=1).
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * New name after the parameter template is modified.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * New description after the parameter template is modified.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * New parameter list after the parameter template is modified.
                     */
                    std::vector<InstanceParam> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYPARAMTEMPLATEREQUEST_H_
