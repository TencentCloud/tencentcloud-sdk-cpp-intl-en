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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/UpdateRecordTemplateData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * UpdateRecordTemplate request structure.
                */
                class UpdateRecordTemplateRequest : public AbstractModel
                {
                public:
                    UpdateRecordTemplateRequest();
                    ~UpdateRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param _templateId Template ID.
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
                     * 获取Modify Content
                     * @return Mod Modify Content
                     * 
                     */
                    UpdateRecordTemplateData GetMod() const;

                    /**
                     * 设置Modify Content
                     * @param _mod Modify Content
                     * 
                     */
                    void SetMod(const UpdateRecordTemplateData& _mod);

                    /**
                     * 判断参数 Mod 是否已赋值
                     * @return Mod 是否已赋值
                     * 
                     */
                    bool ModHasBeenSet() const;

                private:

                    /**
                     * Template ID.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Modify Content
                     */
                    UpdateRecordTemplateData m_mod;
                    bool m_modHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDTEMPLATEREQUEST_H_
