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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYATTRIBUTELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttributeLabel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyAttributeLabel request structure.
                */
                class ModifyAttributeLabelRequest : public AbstractModel
                {
                public:
                    ModifyAttributeLabelRequest();
                    ~ModifyAttributeLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Label ID.
                     * @return AttributeBizId Label ID.
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 设置Label ID.
                     * @param _attributeBizId Label ID.
                     * 
                     */
                    void SetAttributeBizId(const std::string& _attributeBizId);

                    /**
                     * 判断参数 AttributeBizId 是否已赋值
                     * @return AttributeBizId 是否已赋值
                     * 
                     */
                    bool AttributeBizIdHasBeenSet() const;

                    /**
                     * 获取Label name.
                     * @return AttrName Label name.
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置Label name.
                     * @param _attrName Label name.
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取Label identifier (abolished).
                     * @return AttrKey Label identifier (abolished).
                     * 
                     */
                    std::string GetAttrKey() const;

                    /**
                     * 设置Label identifier (abolished).
                     * @param _attrKey Label identifier (abolished).
                     * 
                     */
                    void SetAttrKey(const std::string& _attrKey);

                    /**
                     * 判断参数 AttrKey 是否已赋值
                     * @return AttrKey 是否已赋值
                     * 
                     */
                    bool AttrKeyHasBeenSet() const;

                    /**
                     * 获取Login to user's root account (required in integrator mode).
                     * @return LoginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Login to user's root account (required in integrator mode).
                     * @param _loginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取Deleted label value.
                     * @return DeleteLabelBizIds Deleted label value.
                     * 
                     */
                    std::vector<std::string> GetDeleteLabelBizIds() const;

                    /**
                     * 设置Deleted label value.
                     * @param _deleteLabelBizIds Deleted label value.
                     * 
                     */
                    void SetDeleteLabelBizIds(const std::vector<std::string>& _deleteLabelBizIds);

                    /**
                     * 判断参数 DeleteLabelBizIds 是否已赋值
                     * @return DeleteLabelBizIds 是否已赋值
                     * 
                     */
                    bool DeleteLabelBizIdsHasBeenSet() const;

                    /**
                     * 获取Newly-added or edited label.
                     * @return Labels Newly-added or edited label.
                     * 
                     */
                    std::vector<AttributeLabel> GetLabels() const;

                    /**
                     * 设置Newly-added or edited label.
                     * @param _labels Newly-added or edited label.
                     * 
                     */
                    void SetLabels(const std::vector<AttributeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Label ID.
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * Label name.
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * Label identifier (abolished).
                     */
                    std::string m_attrKey;
                    bool m_attrKeyHasBeenSet;

                    /**
                     * Login to user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * Deleted label value.
                     */
                    std::vector<std::string> m_deleteLabelBizIds;
                    bool m_deleteLabelBizIdsHasBeenSet;

                    /**
                     * Newly-added or edited label.
                     */
                    std::vector<AttributeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYATTRIBUTELABELREQUEST_H_
