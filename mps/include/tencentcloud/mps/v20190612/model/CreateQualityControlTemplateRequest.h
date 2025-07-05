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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEQUALITYCONTROLTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEQUALITYCONTROLTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlItemConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateQualityControlTemplate request structure.
                */
                class CreateQualityControlTemplateRequest : public AbstractModel
                {
                public:
                    CreateQualityControlTemplateRequest();
                    ~CreateQualityControlTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media quality inspection template name, with a length limit of 64 characters.
                     * @return Name Media quality inspection template name, with a length limit of 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media quality inspection template name, with a length limit of 64 characters.
                     * @param _name Media quality inspection template name, with a length limit of 64 characters.
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
                     * 获取Media quality inspection control parameters.
                     * @return QualityControlItemSet Media quality inspection control parameters.
                     * 
                     */
                    std::vector<QualityControlItemConfig> GetQualityControlItemSet() const;

                    /**
                     * 设置Media quality inspection control parameters.
                     * @param _qualityControlItemSet Media quality inspection control parameters.
                     * 
                     */
                    void SetQualityControlItemSet(const std::vector<QualityControlItemConfig>& _qualityControlItemSet);

                    /**
                     * 判断参数 QualityControlItemSet 是否已赋值
                     * @return QualityControlItemSet 是否已赋值
                     * 
                     */
                    bool QualityControlItemSetHasBeenSet() const;

                    /**
                     * 获取Media quality inspection template description, with a length limit of 256 characters.
                     * @return Comment Media quality inspection template description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Media quality inspection template description, with a length limit of 256 characters.
                     * @param _comment Media quality inspection template description, with a length limit of 256 characters.
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
                     * Media quality inspection template name, with a length limit of 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Media quality inspection control parameters.
                     */
                    std::vector<QualityControlItemConfig> m_qualityControlItemSet;
                    bool m_qualityControlItemSetHasBeenSet;

                    /**
                     * Media quality inspection template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEQUALITYCONTROLTEMPLATEREQUEST_H_
