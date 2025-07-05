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
#include <tencentcloud/teo/v20220901/model/BlockIPActionParameters.h>
#include <tencentcloud/teo/v20220901/model/ReturnCustomPageActionParameters.h>
#include <tencentcloud/teo/v20220901/model/RedirectActionParameters.h>


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
                     * 获取Specific action name for security operation. Values:
<li>`Deny`: block</li> <li>`Monitor`: monitor</li> <li>`ReturnCustomPage`: block with customized page</li> <li>`Redirect`: Redirect to URL</li> <li>`BlockIP`: IP block</li> <li>`JSChallenge`: javaScript challenge</li> <li>`ManagedChallenge`: managed challenge</li> <li>`Disabled`: disabled</li> <li>`Allow`: allow</li>.
                     * @return Name Specific action name for security operation. Values:
<li>`Deny`: block</li> <li>`Monitor`: monitor</li> <li>`ReturnCustomPage`: block with customized page</li> <li>`Redirect`: Redirect to URL</li> <li>`BlockIP`: IP block</li> <li>`JSChallenge`: javaScript challenge</li> <li>`ManagedChallenge`: managed challenge</li> <li>`Disabled`: disabled</li> <li>`Allow`: allow</li>.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specific action name for security operation. Values:
<li>`Deny`: block</li> <li>`Monitor`: monitor</li> <li>`ReturnCustomPage`: block with customized page</li> <li>`Redirect`: Redirect to URL</li> <li>`BlockIP`: IP block</li> <li>`JSChallenge`: javaScript challenge</li> <li>`ManagedChallenge`: managed challenge</li> <li>`Disabled`: disabled</li> <li>`Allow`: allow</li>.
                     * @param _name Specific action name for security operation. Values:
<li>`Deny`: block</li> <li>`Monitor`: monitor</li> <li>`ReturnCustomPage`: block with customized page</li> <li>`Redirect`: Redirect to URL</li> <li>`BlockIP`: IP block</li> <li>`JSChallenge`: javaScript challenge</li> <li>`ManagedChallenge`: managed challenge</li> <li>`Disabled`: disabled</li> <li>`Allow`: allow</li>.
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
                     * 获取Additional parameter when Name is BlockIP.
                     * @return BlockIPActionParameters Additional parameter when Name is BlockIP.
                     * 
                     */
                    BlockIPActionParameters GetBlockIPActionParameters() const;

                    /**
                     * 设置Additional parameter when Name is BlockIP.
                     * @param _blockIPActionParameters Additional parameter when Name is BlockIP.
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
                     * 获取Additional parameter when Name is ReturnCustomPage.
                     * @return ReturnCustomPageActionParameters Additional parameter when Name is ReturnCustomPage.
                     * 
                     */
                    ReturnCustomPageActionParameters GetReturnCustomPageActionParameters() const;

                    /**
                     * 设置Additional parameter when Name is ReturnCustomPage.
                     * @param _returnCustomPageActionParameters Additional parameter when Name is ReturnCustomPage.
                     * 
                     */
                    void SetReturnCustomPageActionParameters(const ReturnCustomPageActionParameters& _returnCustomPageActionParameters);

                    /**
                     * 判断参数 ReturnCustomPageActionParameters 是否已赋值
                     * @return ReturnCustomPageActionParameters 是否已赋值
                     * 
                     */
                    bool ReturnCustomPageActionParametersHasBeenSet() const;

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

                private:

                    /**
                     * Specific action name for security operation. Values:
<li>`Deny`: block</li> <li>`Monitor`: monitor</li> <li>`ReturnCustomPage`: block with customized page</li> <li>`Redirect`: Redirect to URL</li> <li>`BlockIP`: IP block</li> <li>`JSChallenge`: javaScript challenge</li> <li>`ManagedChallenge`: managed challenge</li> <li>`Disabled`: disabled</li> <li>`Allow`: allow</li>.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Additional parameter when Name is BlockIP.
                     */
                    BlockIPActionParameters m_blockIPActionParameters;
                    bool m_blockIPActionParametersHasBeenSet;

                    /**
                     * Additional parameter when Name is ReturnCustomPage.
                     */
                    ReturnCustomPageActionParameters m_returnCustomPageActionParameters;
                    bool m_returnCustomPageActionParametersHasBeenSet;

                    /**
                     * Additional parameter when Name is Redirect.
                     */
                    RedirectActionParameters m_redirectActionParameters;
                    bool m_redirectActionParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYACTION_H_
