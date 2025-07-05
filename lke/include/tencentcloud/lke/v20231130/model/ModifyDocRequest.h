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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyDoc request structure.
                */
                class ModifyDocRequest : public AbstractModel
                {
                public:
                    ModifyDocRequest();
                    ~ModifyDocRequest() = default;
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
                     * 获取Document ID.
                     * @return DocBizId Document ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document ID.
                     * @param _docBizId Document ID.
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取Whether to reference a link.
                     * @return IsRefer Whether to reference a link.
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 设置Whether to reference a link.
                     * @param _isRefer Whether to reference a link.
                     * 
                     */
                    void SetIsRefer(const bool& _isRefer);

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取Applicable scope of labels: 1: all; 2: by condition.
                     * @return AttrRange Applicable scope of labels: 1: all; 2: by condition.
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置Applicable scope of labels: 1: all; 2: by condition.
                     * @param _attrRange Applicable scope of labels: 1: all; 2: by condition.
                     * 
                     */
                    void SetAttrRange(const uint64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

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
                     * 获取Associated labels.
                     * @return AttrLabels Associated labels.
                     * 
                     */
                    std::vector<AttrLabelRefer> GetAttrLabels() const;

                    /**
                     * 设置Associated labels.
                     * @param _attrLabels Associated labels.
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabelRefer>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取Web page (or custom link) address.
                     * @return WebUrl Web page (or custom link) address.
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 设置Web page (or custom link) address.
                     * @param _webUrl Web page (or custom link) address.
                     * 
                     */
                    void SetWebUrl(const std::string& _webUrl);

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                    /**
                     * 获取External reference link type: 0: system link 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * @return ReferUrlType External reference link type: 0: system link 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * 
                     */
                    uint64_t GetReferUrlType() const;

                    /**
                     * 设置External reference link type: 0: system link 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * @param _referUrlType External reference link type: 0: system link 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     * 
                     */
                    void SetReferUrlType(const uint64_t& _referUrlType);

                    /**
                     * 判断参数 ReferUrlType 是否已赋值
                     * @return ReferUrlType 是否已赋值
                     * 
                     */
                    bool ReferUrlTypeHasBeenSet() const;

                    /**
                     * 获取Effective start time, unix timestamp.
                     * @return ExpireStart Effective start time, unix timestamp.
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置Effective start time, unix timestamp.
                     * @param _expireStart Effective start time, unix timestamp.
                     * 
                     */
                    void SetExpireStart(const std::string& _expireStart);

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @return ExpireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置Effective end time, unix timestamp. 0 indicates permanent validity.
                     * @param _expireEnd Effective end time, unix timestamp. 0 indicates permanent validity.
                     * 
                     */
                    void SetExpireEnd(const std::string& _expireEnd);

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取Category ID.
                     * @return CateBizId Category ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置Category ID.
                     * @param _cateBizId Category ID.
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Document ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * Whether to reference a link.
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * Applicable scope of labels: 1: all; 2: by condition.
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

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
                     * Associated labels.
                     */
                    std::vector<AttrLabelRefer> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * Web page (or custom link) address.
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                    /**
                     * External reference link type: 0: system link 1: custom link.
When the value is 1, the weburl field cannot be empty; otherwise, it will not take effect.
                     */
                    uint64_t m_referUrlType;
                    bool m_referUrlTypeHasBeenSet;

                    /**
                     * Effective start time, unix timestamp.
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * Effective end time, unix timestamp. 0 indicates permanent validity.
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * Category ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCREQUEST_H_
