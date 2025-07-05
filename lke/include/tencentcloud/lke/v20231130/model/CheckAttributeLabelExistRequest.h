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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELEXISTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELEXISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CheckAttributeLabelExist request structure.
                */
                class CheckAttributeLabelExistRequest : public AbstractModel
                {
                public:
                    CheckAttributeLabelExistRequest();
                    ~CheckAttributeLabelExistRequest() = default;
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
                     * 获取Attribute name.
                     * @return LabelName Attribute name.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置Attribute name.
                     * @param _labelName Attribute name.
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取Attribute ID.
                     * @return AttributeBizId Attribute ID.
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 设置Attribute ID.
                     * @param _attributeBizId Attribute ID.
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
                     * 获取Log in to the user's root account (required in integrator mode).
                     * @return LoginUin Log in to the user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Log in to the user's root account (required in integrator mode).
                     * @param _loginUin Log in to the user's root account (required in integrator mode).
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
                     * 获取Log in to the user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Log in to the user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Log in to the user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Log in to the user's sub-account (required in integrator mode).
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
                     * 获取Scroll loading, the last attribute label ID.
                     * @return LastLabelBizId Scroll loading, the last attribute label ID.
                     * 
                     */
                    std::string GetLastLabelBizId() const;

                    /**
                     * 设置Scroll loading, the last attribute label ID.
                     * @param _lastLabelBizId Scroll loading, the last attribute label ID.
                     * 
                     */
                    void SetLastLabelBizId(const std::string& _lastLabelBizId);

                    /**
                     * 判断参数 LastLabelBizId 是否已赋值
                     * @return LastLabelBizId 是否已赋值
                     * 
                     */
                    bool LastLabelBizIdHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Attribute name.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * Attribute ID.
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * Log in to the user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Log in to the user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * Scroll loading, the last attribute label ID.
                     */
                    std::string m_lastLabelBizId;
                    bool m_lastLabelBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELEXISTREQUEST_H_
