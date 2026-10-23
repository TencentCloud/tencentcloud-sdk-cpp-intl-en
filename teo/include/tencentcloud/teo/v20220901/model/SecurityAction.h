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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DenyActionParameters.h>
#include <tencentcloud/teo/v20220901/model/RedirectActionParameters.h>
#include <tencentcloud/teo/v20220901/model/AllowActionParameters.h>
#include <tencentcloud/teo/v20220901/model/ChallengeActionParameters.h>
#include <tencentcloud/teo/v20220901/model/BlockIPActionParameters.h>
#include <tencentcloud/teo/v20220901/model/ReturnCustomPageActionParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Action for security operation.
                */
                class SecurityAction : public AbstractModel
                {
                public:
                    SecurityAction();
                    ~SecurityAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Specific actions for safe execution. Valid values:</p><ul><li>Deny: block, prevent requests from accessing site resources;</li><li>Monitor: observe, only record logs;</li><li>Redirect: redirect to URL;</li><li>Disabled: not enabled, do not enable the specified rule;</li><li>Allow: pass, skip the remaining rules of the current security module. Delay response when the AllowActionParameters parameter is configured;</li><li>Challenge: challenge, respond with challenge content;</li><li>BlockIP: to be deprecated, IP blocking;</li><li>ReturnCustomPage: to be deprecated, use a specified page for interception;</li><li>JSChallenge: to be deprecated, JavaScript challenge;</li><li>ManagedChallenge: to be deprecated, managed challenge.</li></ul>
                     * @return Name <p>Specific actions for safe execution. Valid values:</p><ul><li>Deny: block, prevent requests from accessing site resources;</li><li>Monitor: observe, only record logs;</li><li>Redirect: redirect to URL;</li><li>Disabled: not enabled, do not enable the specified rule;</li><li>Allow: pass, skip the remaining rules of the current security module. Delay response when the AllowActionParameters parameter is configured;</li><li>Challenge: challenge, respond with challenge content;</li><li>BlockIP: to be deprecated, IP blocking;</li><li>ReturnCustomPage: to be deprecated, use a specified page for interception;</li><li>JSChallenge: to be deprecated, JavaScript challenge;</li><li>ManagedChallenge: to be deprecated, managed challenge.</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Specific actions for safe execution. Valid values:</p><ul><li>Deny: block, prevent requests from accessing site resources;</li><li>Monitor: observe, only record logs;</li><li>Redirect: redirect to URL;</li><li>Disabled: not enabled, do not enable the specified rule;</li><li>Allow: pass, skip the remaining rules of the current security module. Delay response when the AllowActionParameters parameter is configured;</li><li>Challenge: challenge, respond with challenge content;</li><li>BlockIP: to be deprecated, IP blocking;</li><li>ReturnCustomPage: to be deprecated, use a specified page for interception;</li><li>JSChallenge: to be deprecated, JavaScript challenge;</li><li>ManagedChallenge: to be deprecated, managed challenge.</li></ul>
                     * @param _name <p>Specific actions for safe execution. Valid values:</p><ul><li>Deny: block, prevent requests from accessing site resources;</li><li>Monitor: observe, only record logs;</li><li>Redirect: redirect to URL;</li><li>Disabled: not enabled, do not enable the specified rule;</li><li>Allow: pass, skip the remaining rules of the current security module. Delay response when the AllowActionParameters parameter is configured;</li><li>Challenge: challenge, respond with challenge content;</li><li>BlockIP: to be deprecated, IP blocking;</li><li>ReturnCustomPage: to be deprecated, use a specified page for interception;</li><li>JSChallenge: to be deprecated, JavaScript challenge;</li><li>ManagedChallenge: to be deprecated, managed challenge.</li></ul>
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
                     * 获取<p>Additional parameter when Name is Deny.</p>
                     * @return DenyActionParameters <p>Additional parameter when Name is Deny.</p>
                     * 
                     */
                    DenyActionParameters GetDenyActionParameters() const;

                    /**
                     * 设置<p>Additional parameter when Name is Deny.</p>
                     * @param _denyActionParameters <p>Additional parameter when Name is Deny.</p>
                     * 
                     */
                    void SetDenyActionParameters(const DenyActionParameters& _denyActionParameters);

                    /**
                     * 判断参数 DenyActionParameters 是否已赋值
                     * @return DenyActionParameters 是否已赋值
                     * 
                     */
                    bool DenyActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>Additional parameter when Name is Redirect.</p>
                     * @return RedirectActionParameters <p>Additional parameter when Name is Redirect.</p>
                     * 
                     */
                    RedirectActionParameters GetRedirectActionParameters() const;

                    /**
                     * 设置<p>Additional parameter when Name is Redirect.</p>
                     * @param _redirectActionParameters <p>Additional parameter when Name is Redirect.</p>
                     * 
                     */
                    void SetRedirectActionParameters(const RedirectActionParameters& _redirectActionParameters);

                    /**
                     * 判断参数 RedirectActionParameters 是否已赋值
                     * @return RedirectActionParameters 是否已赋值
                     * 
                     */
                    bool RedirectActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>Additional parameter when Name is Allow.</p>
                     * @return AllowActionParameters <p>Additional parameter when Name is Allow.</p>
                     * 
                     */
                    AllowActionParameters GetAllowActionParameters() const;

                    /**
                     * 设置<p>Additional parameter when Name is Allow.</p>
                     * @param _allowActionParameters <p>Additional parameter when Name is Allow.</p>
                     * 
                     */
                    void SetAllowActionParameters(const AllowActionParameters& _allowActionParameters);

                    /**
                     * 判断参数 AllowActionParameters 是否已赋值
                     * @return AllowActionParameters 是否已赋值
                     * 
                     */
                    bool AllowActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>Additional parameter when Name is Challenge.</p>
                     * @return ChallengeActionParameters <p>Additional parameter when Name is Challenge.</p>
                     * 
                     */
                    ChallengeActionParameters GetChallengeActionParameters() const;

                    /**
                     * 设置<p>Additional parameter when Name is Challenge.</p>
                     * @param _challengeActionParameters <p>Additional parameter when Name is Challenge.</p>
                     * 
                     */
                    void SetChallengeActionParameters(const ChallengeActionParameters& _challengeActionParameters);

                    /**
                     * 判断参数 ChallengeActionParameters 是否已赋值
                     * @return ChallengeActionParameters 是否已赋值
                     * 
                     */
                    bool ChallengeActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>To be deprecated. Additional parameter when Name is BlockIP.</p>
                     * @return BlockIPActionParameters <p>To be deprecated. Additional parameter when Name is BlockIP.</p>
                     * 
                     */
                    BlockIPActionParameters GetBlockIPActionParameters() const;

                    /**
                     * 设置<p>To be deprecated. Additional parameter when Name is BlockIP.</p>
                     * @param _blockIPActionParameters <p>To be deprecated. Additional parameter when Name is BlockIP.</p>
                     * 
                     */
                    void SetBlockIPActionParameters(const BlockIPActionParameters& _blockIPActionParameters);

                    /**
                     * 判断参数 BlockIPActionParameters 是否已赋值
                     * @return BlockIPActionParameters 是否已赋值
                     * 
                     */
                    bool BlockIPActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>To be deprecated. An additional parameter when Name is ReturnCustomPage.</p>
                     * @return ReturnCustomPageActionParameters <p>To be deprecated. An additional parameter when Name is ReturnCustomPage.</p>
                     * 
                     */
                    ReturnCustomPageActionParameters GetReturnCustomPageActionParameters() const;

                    /**
                     * 设置<p>To be deprecated. An additional parameter when Name is ReturnCustomPage.</p>
                     * @param _returnCustomPageActionParameters <p>To be deprecated. An additional parameter when Name is ReturnCustomPage.</p>
                     * 
                     */
                    void SetReturnCustomPageActionParameters(const ReturnCustomPageActionParameters& _returnCustomPageActionParameters);

                    /**
                     * 判断参数 ReturnCustomPageActionParameters 是否已赋值
                     * @return ReturnCustomPageActionParameters 是否已赋值
                     * 
                     */
                    bool ReturnCustomPageActionParametersHasBeenSet() const;

                private:

                    /**
                     * <p>Specific actions for safe execution. Valid values:</p><ul><li>Deny: block, prevent requests from accessing site resources;</li><li>Monitor: observe, only record logs;</li><li>Redirect: redirect to URL;</li><li>Disabled: not enabled, do not enable the specified rule;</li><li>Allow: pass, skip the remaining rules of the current security module. Delay response when the AllowActionParameters parameter is configured;</li><li>Challenge: challenge, respond with challenge content;</li><li>BlockIP: to be deprecated, IP blocking;</li><li>ReturnCustomPage: to be deprecated, use a specified page for interception;</li><li>JSChallenge: to be deprecated, JavaScript challenge;</li><li>ManagedChallenge: to be deprecated, managed challenge.</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Additional parameter when Name is Deny.</p>
                     */
                    DenyActionParameters m_denyActionParameters;
                    bool m_denyActionParametersHasBeenSet;

                    /**
                     * <p>Additional parameter when Name is Redirect.</p>
                     */
                    RedirectActionParameters m_redirectActionParameters;
                    bool m_redirectActionParametersHasBeenSet;

                    /**
                     * <p>Additional parameter when Name is Allow.</p>
                     */
                    AllowActionParameters m_allowActionParameters;
                    bool m_allowActionParametersHasBeenSet;

                    /**
                     * <p>Additional parameter when Name is Challenge.</p>
                     */
                    ChallengeActionParameters m_challengeActionParameters;
                    bool m_challengeActionParametersHasBeenSet;

                    /**
                     * <p>To be deprecated. Additional parameter when Name is BlockIP.</p>
                     */
                    BlockIPActionParameters m_blockIPActionParameters;
                    bool m_blockIPActionParametersHasBeenSet;

                    /**
                     * <p>To be deprecated. An additional parameter when Name is ReturnCustomPage.</p>
                     */
                    ReturnCustomPageActionParameters m_returnCustomPageActionParameters;
                    bool m_returnCustomPageActionParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_
