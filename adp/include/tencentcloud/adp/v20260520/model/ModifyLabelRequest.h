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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYLABELREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYLABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/LabelModifyFields.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyLabel request structure.
                */
                class ModifyLabelRequest : public AbstractModel
                {
                public:
                    ModifyLabelRequest();
                    ~ModifyLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Modify field contents (required, use together with update_mask)</p>
                     * @return Fields <p>Modify field contents (required, use together with update_mask)</p>
                     * 
                     */
                    LabelModifyFields GetFields() const;

                    /**
                     * 设置<p>Modify field contents (required, use together with update_mask)</p>
                     * @param _fields <p>Modify field contents (required, use together with update_mask)</p>
                     * 
                     */
                    void SetFields(const LabelModifyFields& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取<p>Associated knowledge base ID</p>
                     * @return KbId <p>Associated knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Associated knowledge base ID</p>
                     * @param _kbId <p>Associated knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the tag to be modified</p>
                     * @return LabelId <p>ID of the tag to be modified</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>ID of the tag to be modified</p>
                     * @param _labelId <p>ID of the tag to be modified</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>Field mask: specifies the fields to be modified (supported Paths: Name, TermModifyList)</p>
                     * @return UpdateMask <p>Field mask: specifies the fields to be modified (supported Paths: Name, TermModifyList)</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>Field mask: specifies the fields to be modified (supported Paths: Name, TermModifyList)</p>
                     * @param _updateMask <p>Field mask: specifies the fields to be modified (supported Paths: Name, TermModifyList)</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                private:

                    /**
                     * <p>Modify field contents (required, use together with update_mask)</p>
                     */
                    LabelModifyFields m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>Associated knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>ID of the tag to be modified</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>Field mask: specifies the fields to be modified (supported Paths: Name, TermModifyList)</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYLABELREQUEST_H_
