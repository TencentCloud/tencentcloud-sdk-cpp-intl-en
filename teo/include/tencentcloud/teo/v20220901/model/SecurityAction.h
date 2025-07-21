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
                     * 获取Safe execution actions. valid values:.
<Li>Deny: block request to access site resource;</li>.
<Li>`Monitor`: observe; only record logs</li>.
<li>`Redirect`: Redirect to URL</li>.
<Li>Disabled: disabled; specify rule is not enabled.</li>.
<Li>Allow: allow access but delay processing the request.</li>.
<Li>Challenge: challenge, respond to challenge content;</li>.
<Li>BlockIP: to be deprecated, ip block;</li>.
<Li>`ReturnCustomPage`: to be deprecated, use specified page block;</li>.
<li>JSChallenge: to be deprecated, JavaScript challenge;</li>.
<Li>ManagedChallenge: to be deprecated. managed challenge.</li>.
                     * @return Name Safe execution actions. valid values:.
<Li>Deny: block request to access site resource;</li>.
<Li>`Monitor`: observe; only record logs</li>.
<li>`Redirect`: Redirect to URL</li>.
<Li>Disabled: disabled; specify rule is not enabled.</li>.
<Li>Allow: allow access but delay processing the request.</li>.
<Li>Challenge: challenge, respond to challenge content;</li>.
<Li>BlockIP: to be deprecated, ip block;</li>.
<Li>`ReturnCustomPage`: to be deprecated, use specified page block;</li>.
<li>JSChallenge: to be deprecated, JavaScript challenge;</li>.
<Li>ManagedChallenge: to be deprecated. managed challenge.</li>.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Safe execution actions. valid values:.
<Li>Deny: block request to access site resource;</li>.
<Li>`Monitor`: observe; only record logs</li>.
<li>`Redirect`: Redirect to URL</li>.
<Li>Disabled: disabled; specify rule is not enabled.</li>.
<Li>Allow: allow access but delay processing the request.</li>.
<Li>Challenge: challenge, respond to challenge content;</li>.
<Li>BlockIP: to be deprecated, ip block;</li>.
<Li>`ReturnCustomPage`: to be deprecated, use specified page block;</li>.
<li>JSChallenge: to be deprecated, JavaScript challenge;</li>.
<Li>ManagedChallenge: to be deprecated. managed challenge.</li>.
                     * @param _name Safe execution actions. valid values:.
<Li>Deny: block request to access site resource;</li>.
<Li>`Monitor`: observe; only record logs</li>.
<li>`Redirect`: Redirect to URL</li>.
<Li>Disabled: disabled; specify rule is not enabled.</li>.
<Li>Allow: allow access but delay processing the request.</li>.
<Li>Challenge: challenge, respond to challenge content;</li>.
<Li>BlockIP: to be deprecated, ip block;</li>.
<Li>`ReturnCustomPage`: to be deprecated, use specified page block;</li>.
<li>JSChallenge: to be deprecated, JavaScript challenge;</li>.
<Li>ManagedChallenge: to be deprecated. managed challenge.</li>.
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
                     * 获取Additional parameters when Name is Deny.
                     * @return DenyActionParameters Additional parameters when Name is Deny.
                     * 
                     */
                    DenyActionParameters GetDenyActionParameters() const;

                    /**
                     * 设置Additional parameters when Name is Deny.
                     * @param _denyActionParameters Additional parameters when Name is Deny.
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
                     * 获取Additional parameter when Name is Redirect.
                     * @return RedirectActionParameters Additional parameter when Name is Redirect.
                     * 
                     */
                    RedirectActionParameters GetRedirectActionParameters() const;

                    /**
                     * 设置Additional parameter when Name is Redirect.
                     * @param _redirectActionParameters Additional parameter when Name is Redirect.
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
                     * 获取Additional parameters when Name is Allow.
                     * @return AllowActionParameters Additional parameters when Name is Allow.
                     * 
                     */
                    AllowActionParameters GetAllowActionParameters() const;

                    /**
                     * 设置Additional parameters when Name is Allow.
                     * @param _allowActionParameters Additional parameters when Name is Allow.
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
                     * 获取Additional parameter when Name is Challenge.
                     * @return ChallengeActionParameters Additional parameter when Name is Challenge.
                     * 
                     */
                    ChallengeActionParameters GetChallengeActionParameters() const;

                    /**
                     * 设置Additional parameter when Name is Challenge.
                     * @param _challengeActionParameters Additional parameter when Name is Challenge.
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
                     * 获取To be deprecated, additional parameter when Name is BlockIP.
                     * @return BlockIPActionParameters To be deprecated, additional parameter when Name is BlockIP.
                     * 
                     */
                    BlockIPActionParameters GetBlockIPActionParameters() const;

                    /**
                     * 设置To be deprecated, additional parameter when Name is BlockIP.
                     * @param _blockIPActionParameters To be deprecated, additional parameter when Name is BlockIP.
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
                     * 获取To be deprecated, additional parameter when Name is ReturnCustomPage.
                     * @return ReturnCustomPageActionParameters To be deprecated, additional parameter when Name is ReturnCustomPage.
                     * 
                     */
                    ReturnCustomPageActionParameters GetReturnCustomPageActionParameters() const;

                    /**
                     * 设置To be deprecated, additional parameter when Name is ReturnCustomPage.
                     * @param _returnCustomPageActionParameters To be deprecated, additional parameter when Name is ReturnCustomPage.
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
                     * Safe execution actions. valid values:.
<Li>Deny: block request to access site resource;</li>.
<Li>`Monitor`: observe; only record logs</li>.
<li>`Redirect`: Redirect to URL</li>.
<Li>Disabled: disabled; specify rule is not enabled.</li>.
<Li>Allow: allow access but delay processing the request.</li>.
<Li>Challenge: challenge, respond to challenge content;</li>.
<Li>BlockIP: to be deprecated, ip block;</li>.
<Li>`ReturnCustomPage`: to be deprecated, use specified page block;</li>.
<li>JSChallenge: to be deprecated, JavaScript challenge;</li>.
<Li>ManagedChallenge: to be deprecated. managed challenge.</li>.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Additional parameters when Name is Deny.
                     */
                    DenyActionParameters m_denyActionParameters;
                    bool m_denyActionParametersHasBeenSet;

                    /**
                     * Additional parameter when Name is Redirect.
                     */
                    RedirectActionParameters m_redirectActionParameters;
                    bool m_redirectActionParametersHasBeenSet;

                    /**
                     * Additional parameters when Name is Allow.
                     */
                    AllowActionParameters m_allowActionParameters;
                    bool m_allowActionParametersHasBeenSet;

                    /**
                     * Additional parameter when Name is Challenge.
                     */
                    ChallengeActionParameters m_challengeActionParameters;
                    bool m_challengeActionParametersHasBeenSet;

                    /**
                     * To be deprecated, additional parameter when Name is BlockIP.
                     */
                    BlockIPActionParameters m_blockIPActionParameters;
                    bool m_blockIPActionParametersHasBeenSet;

                    /**
                     * To be deprecated, additional parameter when Name is ReturnCustomPage.
                     */
                    ReturnCustomPageActionParameters m_returnCustomPageActionParameters;
                    bool m_returnCustomPageActionParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_
