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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class RefererAuthPolicy : public AbstractModel
                {
                public:
                    RefererAuthPolicy();
                    ~RefererAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return AuthType 
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置
                     * @param _authType 
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Referers 
                     * 
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置
                     * @param _referers 
                     * 
                     */
                    void SetReferers(const std::vector<std::string>& _referers);

                    /**
                     * 判断参数 Referers 是否已赋值
                     * @return Referers 是否已赋值
                     * 
                     */
                    bool ReferersHasBeenSet() const;

                    /**
                     * 获取
                     * @return BlankRefererAllowed 
                     * 
                     */
                    std::string GetBlankRefererAllowed() const;

                    /**
                     * 设置
                     * @param _blankRefererAllowed 
                     * 
                     */
                    void SetBlankRefererAllowed(const std::string& _blankRefererAllowed);

                    /**
                     * 判断参数 BlankRefererAllowed 是否已赋值
                     * @return BlankRefererAllowed 是否已赋值
                     * 
                     */
                    bool BlankRefererAllowedHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_blankRefererAllowed;
                    bool m_blankRefererAllowedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_
