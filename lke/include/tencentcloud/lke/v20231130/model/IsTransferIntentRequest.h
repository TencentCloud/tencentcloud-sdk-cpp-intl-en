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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ISTRANSFERINTENTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ISTRANSFERINTENTREQUEST_H_

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
                * IsTransferIntent request structure.
                */
                class IsTransferIntentRequest : public AbstractModel
                {
                public:
                    IsTransferIntentRequest();
                    ~IsTransferIntentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Content.
                     * @return Content Content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content.
                     * @param _content Content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Application appkey.
                     * @return BotAppKey Application appkey.
                     * 
                     */
                    std::string GetBotAppKey() const;

                    /**
                     * 设置Application appkey.
                     * @param _botAppKey Application appkey.
                     * 
                     */
                    void SetBotAppKey(const std::string& _botAppKey);

                    /**
                     * 判断参数 BotAppKey 是否已赋值
                     * @return BotAppKey 是否已赋值
                     * 
                     */
                    bool BotAppKeyHasBeenSet() const;

                private:

                    /**
                     * Content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Application appkey.
                     */
                    std::string m_botAppKey;
                    bool m_botAppKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ISTRANSFERINTENTREQUEST_H_
